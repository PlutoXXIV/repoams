#!/usr/bin/env python3
"""
Start and End Point Detector Node

This node identifies start and end points in the maze during exploration.
Start and end points are characterized by long, open spaces (>5-6 meters)
as detected by the LIDAR scanner.

HOW IT WORKS:
1. Subscribe to LIDAR scans (/scan topic)
2. Subscribe to robot's position in map (/tf topic for map->base_footprint)
3. Analyze each scan for long-range readings (>5m threshold)
4. When found, record the robot's position as a potential waypoint
5. Filter out duplicate detections (same location visited multiple times)
6. Publish waypoints as markers for visualization in RViz
7. Save waypoints to a file for later navigation

DETECTION CRITERIA:
- Multiple consecutive LIDAR rays showing >5m range
- Minimum angular spread (to avoid false positives from single beams)
- Waypoints must be separated by at least 1.5m (avoid duplicates)

OUTPUTS:
- Publishes visualization_msgs/MarkerArray on /waypoints topic
- Saves waypoint positions to ~/.ros/maze_waypoints.yaml

Save this file as: ~/maze_robot_ws/src/maze_explorer/scripts/start_end_detector.py
"""

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import PointStamped
from visualization_msgs.msg import Marker, MarkerArray
from tf2_ros import Buffer, TransformListener
import tf2_geometry_msgs
import numpy as np
import yaml
import os
from pathlib import Path

class StartEndDetector(Node):
    """
    Detects and records start and end points in the maze based on LIDAR data.
    """
    
    def __init__(self):
        super().__init__('start_end_detector')
        
        # Get logger for informational messages
        self.logger = self.get_logger()
        self.logger.info('Initializing Start/End Point Detector')
        
        # =====================================================================
        # DETECTION PARAMETERS
        # =====================================================================
        
        # Minimum range to consider as "open space" (meters)
        # Adjust based on maze size - 5.0m works for typical 3x3m mazes
        self.min_waypoint_range = 5.0
        
        # Minimum number of consecutive rays above threshold
        # This prevents false positives from single reflections
        self.min_consecutive_rays = 10
        
        # Minimum separation between waypoints (meters)
        # Prevents duplicate detections when robot passes same location multiple times
        self.min_waypoint_separation = 1.5
        
        # Confidence threshold: how many detections before confirming waypoint
        # Higher = more certain, but slower detection
        self.confidence_threshold = 3
        
        # =====================================================================
        # STATE TRACKING
        # =====================================================================
        
        # List of confirmed waypoints: [(x, y, id), (x, y, id), ...]
        self.waypoints = []
        
        # Dictionary tracking detection confidence: {(x, y): count}
        self.candidate_waypoints = {}
        
        # Next waypoint ID to assign
        self.next_waypoint_id = 0
        
        # =====================================================================
        # TF (TRANSFORM) SETUP
        # =====================================================================
        
        # TF buffer stores transform tree (how coordinate frames relate)
        # buffer_size: how many seconds of history to keep
        self.tf_buffer = Buffer(cache_time=rclpy.duration.Duration(seconds=10.0))
        
        # TF listener receives and stores transform updates
        self.tf_listener = TransformListener(self.tf_buffer, self)
        
        # =====================================================================
        # ROS SUBSCRIBERS
        # =====================================================================
        
        # Subscribe to LIDAR scan data
        # QoS profile: 10 message queue depth
        self.scan_subscription = self.create_subscription(
            LaserScan,
            '/scan',
            self.scan_callback,
            10
        )
        
        # =====================================================================
        # ROS PUBLISHERS
        # =====================================================================
        
        # Publish waypoint markers for visualization in RViz
        self.marker_publisher = self.create_publisher(
            MarkerArray,
            '/waypoints',
            10
        )
        
        # =====================================================================
        # FILE MANAGEMENT
        # =====================================================================
        
        # Path to save waypoints
        # ~/.ros directory is standard for ROS runtime files
        self.waypoint_file = os.path.join(
            str(Path.home()), 
            '.ros', 
            'maze_waypoints.yaml'
        )
        
        # Create directory if it doesn't exist
        os.makedirs(os.path.dirname(self.waypoint_file), exist_ok=True)
        
        # Try to load previously saved waypoints
        self.load_waypoints()
        
        self.logger.info('Start/End Detector ready. Monitoring for waypoints...')
        self.logger.info(f'Detection threshold: >{self.min_waypoint_range}m')
    
    def scan_callback(self, scan_msg):
        """
        Callback function triggered each time a new LIDAR scan arrives.
        
        This function:
        1. Analyzes the scan for long-range readings
        2. Gets robot's current position
        3. Records potential waypoints
        4. Updates visualizations
        
        Args:
            scan_msg: LaserScan message containing range data
        """
        
        # Skip if no range data
        if len(scan_msg.ranges) == 0:
            return
        
        # =====================================================================
        # STEP 1: ANALYZE LIDAR SCAN FOR LONG RANGES
        # =====================================================================
        
        # Convert ranges to numpy array for easier processing
        # Replace 'inf' and 'nan' values with 0 (invalid readings)
        ranges = np.array(scan_msg.ranges)
        ranges[np.isinf(ranges)] = 0.0
        ranges[np.isnan(ranges)] = 0.0
        
        # Find rays exceeding the minimum waypoint range
        long_range_mask = ranges > self.min_waypoint_range
        
        # Check for consecutive sequences of long-range readings
        # We need at least min_consecutive_rays in a row to be confident
        consecutive_count = 0
        max_consecutive = 0
        
        for is_long_range in long_range_mask:
            if is_long_range:
                consecutive_count += 1
                max_consecutive = max(max_consecutive, consecutive_count)
            else:
                consecutive_count = 0
        
        # If we don't have enough consecutive long-range readings, skip
        if max_consecutive < self.min_consecutive_rays:
            return
        
        # =====================================================================
        # STEP 2: GET ROBOT'S CURRENT POSITION
        # =====================================================================
        
        try:
            # Look up transform from map frame to robot base frame
            # This tells us where the robot is in the map
            # Time(0) means "get the latest available transform"
            transform = self.tf_buffer.lookup_transform(
                'map',                      # Target frame
                'base_footprint',          # Source frame
                rclpy.time.Time(),         # Time (latest)
                timeout=rclpy.duration.Duration(seconds=0.5)
            )
            
            # Extract x, y position from transform
            robot_x = transform.transform.translation.x
            robot_y = transform.transform.translation.y
            
        except Exception as e:
            # Transform not available yet (common during startup)
            self.logger.debug(f'Transform lookup failed: {e}')
            return
        
        # =====================================================================
        # STEP 3: RECORD WAYPOINT CANDIDATE
        # =====================================================================
        
        # Round position to 0.5m grid to group nearby detections
        # This prevents creating separate waypoints for slight position variations
        rounded_pos = (round(robot_x * 2) / 2, round(robot_y * 2) / 2)
        
        # Check if this position is already a confirmed waypoint
        if self.is_near_existing_waypoint(robot_x, robot_y):
            return
        
        # Increment detection count for this candidate position
        if rounded_pos in self.candidate_waypoints:
            self.candidate_waypoints[rounded_pos] += 1
        else:
            self.candidate_waypoints[rounded_pos] = 1
            self.logger.info(
                f'New waypoint candidate detected at ({robot_x:.2f}, {robot_y:.2f})'
            )
        
        # =====================================================================
        # STEP 4: CONFIRM WAYPOINT IF THRESHOLD REACHED
        # =====================================================================
        
        if self.candidate_waypoints[rounded_pos] >= self.confidence_threshold:
            # Confirm this as a real waypoint
            waypoint_id = self.next_waypoint_id
            self.next_waypoint_id += 1
            
            # Add to confirmed waypoints list
            self.waypoints.append((robot_x, robot_y, waypoint_id))
            
            # Remove from candidates
            del self.candidate_waypoints[rounded_pos]
            
            # Log the detection
            self.logger.info(
                f'✓ Waypoint {waypoint_id} CONFIRMED at '
                f'({robot_x:.2f}, {robot_y:.2f})'
            )
            
            # Save waypoints to file
            self.save_waypoints()
            
            # Update visualization
            self.publish_markers()
    
    def is_near_existing_waypoint(self, x, y):
        """
        Check if a position is near any existing waypoint.
        
        This prevents duplicate waypoints in the same area.
        
        Args:
            x: X coordinate to check
            y: Y coordinate to check
        
        Returns:
            True if within min_waypoint_separation of any existing waypoint
        """
        for wx, wy, _ in self.waypoints:
            # Calculate Euclidean distance
            distance = np.sqrt((x - wx)**2 + (y - wy)**2)
            if distance < self.min_waypoint_separation:
                return True
        return False
    
    def publish_markers(self):
        """
        Publish visualization markers for all waypoints.
        
        These appear as colored spheres in RViz, making it easy to see
        detected start and end points during exploration.
        """
        marker_array = MarkerArray()
        
        for i, (x, y, waypoint_id) in enumerate(self.waypoints):
            marker = Marker()
            
            # Header information
            marker.header.frame_id = 'map'
            marker.header.stamp = self.get_clock().now().to_msg()
            
            # Marker identification
            marker.ns = 'waypoints'
            marker.id = waypoint_id
            marker.type = Marker.SPHERE
            marker.action = Marker.ADD
            
            # Position
            marker.pose.position.x = x
            marker.pose.position.y = y
            marker.pose.position.z = 0.2  # Elevate for visibility
            
            # Orientation (not used for spheres, but required)
            marker.pose.orientation.w = 1.0
            
            # Size (diameter in meters)
            marker.scale.x = 0.3
            marker.scale.y = 0.3
            marker.scale.z = 0.3
            
            # Color (green with transparency)
            marker.color.r = 0.0
            marker.color.g = 1.0
            marker.color.b = 0.0
            marker.color.a = 0.8
            
            # Lifetime (0 = forever)
            marker.lifetime = rclpy.duration.Duration(seconds=0).to_msg()
            
            marker_array.markers.append(marker)
        
        # Publish all markers
        self.marker_publisher.publish(marker_array)
    
    def save_waypoints(self):
        """
        Save waypoints to a YAML file for later use.
        
        Format:
        waypoints:
          - id: 0
            x: 1.5
            y: 2.3
          - id: 1
            x: 4.2
            y: 1.8
        """
        data = {
            'waypoints': [
                {'id': wid, 'x': float(x), 'y': float(y)}
                for x, y, wid in self.waypoints
            ]
        }
        
        try:
            with open(self.waypoint_file, 'w') as f:
                yaml.dump(data, f, default_flow_style=False)
            self.logger.info(f'Waypoints saved to {self.waypoint_file}')
        except Exception as e:
            self.logger.error(f'Failed to save waypoints: {e}')
    
    def load_waypoints(self):
        """
        Load previously saved waypoints from file.
        
        This allows resuming after node restart.
        """
        if not os.path.exists(self.waypoint_file):
            self.logger.info('No existing waypoint file found. Starting fresh.')
            return
        
        try:
            with open(self.waypoint_file, 'r') as f:
                data = yaml.safe_load(f)
            
            if data and 'waypoints' in data:
                self.waypoints = [
                    (wp['x'], wp['y'], wp['id'])
                    for wp in data['waypoints']
                ]
                
                # Update next_waypoint_id to avoid conflicts
                if self.waypoints:
                    self.next_waypoint_id = max(wid for _, _, wid in self.waypoints) + 1
                
                self.logger.info(f'Loaded {len(self.waypoints)} waypoints from file')
                self.publish_markers()
        
        except Exception as e:
            self.logger.error(f'Failed to load waypoints: {e}')


def main(args=None):
    """
    Main entry point for the node.
    """
    # Initialize ROS2 Python client library
    rclpy.init(args=args)
    
    # Create node instance
    node = StartEndDetector()
    
    try:
        # Keep node running and processing callbacks
        rclpy.spin(node)
    except KeyboardInterrupt:
        # Graceful shutdown on Ctrl+C
        node.logger.info('Shutting down Start/End Detector')
    finally:
        # Clean up
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
