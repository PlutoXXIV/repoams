#!/usr/bin/env python3
"""
Position Identifier Node

This node identifies whether the robot is currently positioned at a start
or end point (waypoint) in the maze. This is crucial for the navigation phase
when the robot is manually moved to one of these locations.

HOW IT WORKS:
1. Continuously monitors robot's position via /tf (map -> base_footprint)
2. Loads known waypoint locations from file
3. Compares current position against all waypoints
4. Publishes which waypoint (if any) the robot is currently at
5. Uses position tolerance to account for imprecise manual placement

USE CASE:
After exploration is complete and map is saved:
- Human manually moves robot to one of the detected waypoints
- This node identifies: "Robot is at Waypoint 0" or "Robot is at Waypoint 1"
- A* navigator then plans path to the OTHER waypoint

TOLERANCE ZONES:
Each waypoint has a circular "detection zone" around it.
If robot's center is within this zone, it's considered "at" that waypoint.
Default tolerance: 0.5 meters (adjustable based on placement accuracy)

Save this file as: ~/maze_robot_ws/src/maze_explorer/scripts/position_identifier.py
"""

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from geometry_msgs.msg import PoseStamped
from tf2_ros import Buffer, TransformListener
import yaml
import os
import numpy as np
from pathlib import Path

class PositionIdentifier(Node):
    """
    Monitors robot position and identifies if at a known waypoint.
    """
    
    def __init__(self):
        super().__init__('position_identifier')
        
        self.logger = self.get_logger()
        self.logger.info('Initializing Position Identifier')
        
        # =====================================================================
        # CONFIGURATION PARAMETERS
        # =====================================================================
        
        # Position tolerance: maximum distance from waypoint center
        # to still be considered "at" that waypoint (meters)
        # Increase if manual placement is imprecise
        self.position_tolerance = 0.5
        
        # Update rate: how often to check position (Hz)
        # 2 Hz (every 0.5 seconds) is sufficient for this application
        self.update_rate = 2.0
        
        # Debounce threshold: how many consecutive confirmations needed
        # before announcing position change
        # Prevents flickering between positions at boundary
        self.debounce_threshold = 3
        
        # =====================================================================
        # STATE VARIABLES
        # =====================================================================
        
        # List of known waypoints loaded from file
        # Format: [(x, y, id), (x, y, id), ...]
        self.waypoints = []
        
        # Current detected waypoint ID (None if not at any waypoint)
        self.current_waypoint_id = None
        
        # Last detected waypoint ID (for change detection)
        self.last_waypoint_id = None
        
        # Debounce counter for new position
        self.debounce_count = 0
        self.pending_waypoint_id = None
        
        # =====================================================================
        # TF (TRANSFORM) SETUP
        # =====================================================================
        
        # TF buffer to track robot position in map frame
        self.tf_buffer = Buffer(cache_time=rclpy.duration.Duration(seconds=10.0))
        self.tf_listener = TransformListener(self.tf_buffer, self)
        
        # =====================================================================
        # ROS PUBLISHERS
        # =====================================================================
        
        # Publish current waypoint identification
        # Other nodes subscribe to this to know where robot is
        self.waypoint_pub = self.create_publisher(
            String,
            '/current_waypoint',
            10
        )
        
        # Publish current pose for debugging/visualization
        self.pose_pub = self.create_publisher(
            PoseStamped,
            '/current_pose_in_map',
            10
        )
        
        # =====================================================================
        # TIMER FOR PERIODIC UPDATES
        # =====================================================================
        
        # Create timer that calls check_position at specified rate
        timer_period = 1.0 / self.update_rate  # Convert Hz to seconds
        self.timer = self.create_timer(timer_period, self.check_position)
        
        # =====================================================================
        # LOAD WAYPOINTS FROM FILE
        # =====================================================================
        
        self.waypoint_file = os.path.join(
            str(Path.home()), 
            '.ros', 
            'maze_waypoints.yaml'
        )
        
        self.load_waypoints()
        
        self.logger.info(
            f'Position Identifier ready. '
            f'Monitoring {len(self.waypoints)} waypoints with '
            f'{self.position_tolerance}m tolerance'
        )
    
    def load_waypoints(self):
        """
        Load waypoint locations from the saved file.
        
        This file was created by the start_end_detector node during exploration.
        """
        if not os.path.exists(self.waypoint_file):
            self.logger.warn(
                f'Waypoint file not found: {self.waypoint_file}. '
                'Run exploration phase first!'
            )
            return
        
        try:
            with open(self.waypoint_file, 'r') as f:
                data = yaml.safe_load(f)
            
            if data and 'waypoints' in data:
                self.waypoints = [
                    (wp['x'], wp['y'], wp['id'])
                    for wp in data['waypoints']
                ]
                
                self.logger.info(
                    f'Loaded {len(self.waypoints)} waypoints:'
                )
                for x, y, wid in self.waypoints:
                    self.logger.info(f'  Waypoint {wid}: ({x:.2f}, {y:.2f})')
            
            else:
                self.logger.warn('Waypoint file is empty or invalid format')
        
        except Exception as e:
            self.logger.error(f'Failed to load waypoints: {e}')
    
    def check_position(self):
        """
        Timer callback: Check current position against all known waypoints.
        
        This function is called periodically (at update_rate frequency).
        It determines if the robot is currently positioned at any waypoint.
        """
        
        # =====================================================================
        # STEP 1: GET ROBOT'S CURRENT POSITION
        # =====================================================================
        
        try:
            # Look up transform from map to robot base frame
            transform = self.tf_buffer.lookup_transform(
                'map',                     # Target frame (world coordinates)
                'base_footprint',         # Source frame (robot's position)
                rclpy.time.Time(),        # Latest available transform
                timeout=rclpy.duration.Duration(seconds=0.1)
            )
            
            # Extract position
            robot_x = transform.transform.translation.x
            robot_y = transform.transform.translation.y
            
            # Publish current pose for visualization
            pose_msg = PoseStamped()
            pose_msg.header.frame_id = 'map'
            pose_msg.header.stamp = self.get_clock().now().to_msg()
            pose_msg.pose.position.x = robot_x
            pose_msg.pose.position.y = robot_y
            pose_msg.pose.position.z = 0.0
            pose_msg.pose.orientation = transform.transform.rotation
            self.pose_pub.publish(pose_msg)
            
        except Exception as e:
            # Transform not available (common during startup or map transitions)
            self.logger.debug(f'Transform lookup failed: {e}')
            return
        
        # =====================================================================
        # STEP 2: CHECK DISTANCE TO EACH WAYPOINT
        # =====================================================================
        
        closest_waypoint_id = None
        closest_distance = float('inf')
        
        for wx, wy, wid in self.waypoints:
            # Calculate Euclidean distance to this waypoint
            distance = np.sqrt((robot_x - wx)**2 + (robot_y - wy)**2)
            
            # Update closest waypoint
            if distance < closest_distance:
                closest_distance = distance
                closest_waypoint_id = wid
        
        # =====================================================================
        # STEP 3: DETERMINE IF AT A WAYPOINT
        # =====================================================================
        
        # Check if closest waypoint is within tolerance
        if closest_distance <= self.position_tolerance:
            detected_id = closest_waypoint_id
        else:
            detected_id = None  # Not at any waypoint
        
        # =====================================================================
        # STEP 4: DEBOUNCE AND PUBLISH
        # =====================================================================
        
        # Debouncing prevents rapid switching when robot is near boundary
        # We need several consecutive detections before confirming change
        
        if detected_id != self.pending_waypoint_id:
            # New position detected, reset debounce counter
            self.pending_waypoint_id = detected_id
            self.debounce_count = 1
        else:
            # Same position as last check, increment counter
            self.debounce_count += 1
        
        # If we've had enough consecutive confirmations, update current position
        if self.debounce_count >= self.debounce_threshold:
            if detected_id != self.current_waypoint_id:
                # Position has changed
                self.current_waypoint_id = detected_id
                
                # Publish the change
                if self.current_waypoint_id is not None:
                    self.logger.info(
                        f'✓ Robot is now at Waypoint {self.current_waypoint_id} '
                        f'(distance: {closest_distance:.2f}m)'
                    )
                    msg = String()
                    msg.data = f'waypoint_{self.current_waypoint_id}'
                    self.waypoint_pub.publish(msg)
                else:
                    self.logger.info('Robot is not at any waypoint')
                    msg = String()
                    msg.data = 'none'
                    self.waypoint_pub.publish(msg)
    
    def get_other_waypoint(self, current_id):
        """
        Get the OTHER waypoint (not the current one).
        
        For a maze with start and end points, this returns the destination
        waypoint when given the current waypoint.
        
        Args:
            current_id: ID of current waypoint
        
        Returns:
            (x, y, id) tuple of the other waypoint, or None if not found
        """
        for x, y, wid in self.waypoints:
            if wid != current_id:
                return (x, y, wid)
        return None


def main(args=None):
    """
    Main entry point for the node.
    """
    rclpy.init(args=args)
    
    node = PositionIdentifier()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.logger.info('Shutting down Position Identifier')
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
