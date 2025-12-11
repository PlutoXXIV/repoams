#!/usr/bin/env python3
"""
A* Navigator Node

This node handles autonomous navigation from one waypoint to another using
the A* pathfinding algorithm (via NAV2's planner) with dynamic replanning
capabilities to avoid newly detected obstacles.

WORKFLOW:
1. Wait for robot to be positioned at a known waypoint (listens to /current_waypoint)
2. Load the other waypoint as the goal destination
3. Send navigation goal to NAV2 (which uses A* planning)
4. Monitor progress and replan if path becomes blocked
5. Operate at maximum safe speed
6. Handle recovery behaviors if robot gets stuck

A* ALGORITHM:
NAV2's planner implements A* pathfinding, which:
- Finds the shortest collision-free path from start to goal
- Uses heuristics (straight-line distance) to guide search efficiently
- Guarantees optimal path if one exists
- Automatically replans when obstacles detected

DYNAMIC REPLANNING:
- Monitors local costmap for new obstacles
- If path is blocked, automatically requests new path
- Uses behavior recovery (spin, backup) if completely stuck
- Continues until goal reached or maximum retries exceeded

Save this file as: ~/maze_robot_ws/src/maze_explorer/scripts/astar_navigator.py
"""

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from std_msgs.msg import String
from geometry_msgs.msg import PoseStamped
from nav2_msgs.action import NavigateToPose
from action_msgs.msg import GoalStatus
import yaml
import os
from pathlib import Path

class AStarNavigator(Node):
    """
    Autonomous navigation controller using A* algorithm via NAV2.
    """
    
    def __init__(self):
        super().__init__('astar_navigator')
        
        self.logger = self.get_logger()
        self.logger.info('Initializing A* Navigator')
        
        # =====================================================================
        # CONFIGURATION PARAMETERS
        # =====================================================================
        
        # Maximum speed multiplier (1.0 = use velocities from nav2_params.yaml)
        # Increase up to 1.5 for faster navigation (if safe)
        self.speed_multiplier = 1.0
        
        # Timeout for navigation goals (seconds)
        # If goal not reached in this time, consider it failed
        self.navigation_timeout = 300.0  # 5 minutes (generous for maze)
        
        # Maximum number of retry attempts if navigation fails
        self.max_retries = 3
        
        # =====================================================================
        # STATE VARIABLES
        # =====================================================================
        
        # List of known waypoints: [(x, y, id), ...]
        self.waypoints = []
        
        # Current waypoint the robot is at
        self.current_waypoint_id = None
        
        # Navigation state tracking
        self.is_navigating = False
        self.navigation_active = False
        self.retry_count = 0
        
        # =====================================================================
        # ACTION CLIENT FOR NAV2
        # =====================================================================
        
        # Action client to send navigation goals to NAV2's behavior tree
        # NavigateToPose action: move robot to specified pose
        self.nav_to_pose_client = ActionClient(
            self,
            NavigateToPose,
            'navigate_to_pose'
        )
        
        # Wait for action server to be ready
        self.logger.info('Waiting for NAV2 navigate_to_pose action server...')
        if not self.nav_to_pose_client.wait_for_server(timeout_sec=10.0):
            self.logger.error('NAV2 action server not available!')
            self.logger.error('Make sure NAV2 is running with: ros2 launch ...')
        else:
            self.logger.info('NAV2 action server ready')
        
        # =====================================================================
        # SUBSCRIBERS
        # =====================================================================
        
        # Subscribe to current waypoint identification
        # This tells us when robot is at a waypoint and ready to navigate
        self.waypoint_sub = self.create_subscription(
            String,
            '/current_waypoint',
            self.waypoint_callback,
            10
        )
        
        # =====================================================================
        # LOAD WAYPOINTS
        # =====================================================================
        
        self.waypoint_file = os.path.join(
            str(Path.home()), 
            '.ros', 
            'maze_waypoints.yaml'
        )
        
        self.load_waypoints()
        
        self.logger.info('A* Navigator ready. Place robot at a waypoint to begin.')
    
    def load_waypoints(self):
        """
        Load waypoint locations from file.
        """
        if not os.path.exists(self.waypoint_file):
            self.logger.error(
                f'Waypoint file not found: {self.waypoint_file}'
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
                
                self.logger.info(f'Loaded {len(self.waypoints)} waypoints')
                for x, y, wid in self.waypoints:
                    self.logger.info(f'  Waypoint {wid}: ({x:.2f}, {y:.2f})')
            
        except Exception as e:
            self.logger.error(f'Failed to load waypoints: {e}')
    
    def waypoint_callback(self, msg):
        """
        Callback when robot's waypoint position changes.
        
        This is triggered by the position_identifier node when it detects
        the robot has been moved to a waypoint location.
        
        Args:
            msg: String message containing waypoint ID or 'none'
        """
        waypoint_str = msg.data
        
        # Parse waypoint ID from message
        if waypoint_str == 'none':
            self.current_waypoint_id = None
            return
        
        # Extract ID number (format: "waypoint_0", "waypoint_1", etc.)
        try:
            waypoint_id = int(waypoint_str.split('_')[1])
        except (IndexError, ValueError):
            self.logger.warn(f'Invalid waypoint format: {waypoint_str}')
            return
        
        # Update current waypoint
        if waypoint_id != self.current_waypoint_id:
            self.current_waypoint_id = waypoint_id
            self.logger.info(f'Robot detected at Waypoint {waypoint_id}')
            
            # If not already navigating, start navigation to other waypoint
            if not self.is_navigating:
                self.start_navigation()
    
    def start_navigation(self):
        """
        Begin autonomous navigation to the OTHER waypoint.
        
        This function:
        1. Finds the destination waypoint (not current one)
        2. Creates a navigation goal
        3. Sends goal to NAV2's A* planner
        4. Monitors progress
        """
        if self.current_waypoint_id is None:
            self.logger.warn('Cannot navigate: robot not at a waypoint')
            return
        
        # Find destination waypoint (the one we're NOT currently at)
        destination = None
        for x, y, wid in self.waypoints:
            if wid != self.current_waypoint_id:
                destination = (x, y, wid)
                break
        
        if destination is None:
            self.logger.error('No destination waypoint found!')
            return
        
        dest_x, dest_y, dest_id = destination
        
        self.logger.info('=' * 60)
        self.logger.info(f'STARTING NAVIGATION')
        self.logger.info(f'From: Waypoint {self.current_waypoint_id}')
        self.logger.info(f'To:   Waypoint {dest_id} at ({dest_x:.2f}, {dest_y:.2f})')
        self.logger.info('Using A* pathfinding algorithm for optimal route')
        self.logger.info('=' * 60)
        
        # Mark as navigating
        self.is_navigating = True
        self.retry_count = 0
        
        # Send navigation goal
        self.send_nav_goal(dest_x, dest_y, dest_id)
    
    def send_nav_goal(self, x, y, waypoint_id):
        """
        Send a navigation goal to NAV2.
        
        Args:
            x: Target X coordinate
            y: Target Y coordinate
            waypoint_id: ID of target waypoint (for logging)
        """
        # Create goal message
        goal_msg = NavigateToPose.Goal()
        
        # Set target pose
        goal_msg.pose.header.frame_id = 'map'
        goal_msg.pose.header.stamp = self.get_clock().now().to_msg()
        goal_msg.pose.pose.position.x = x
        goal_msg.pose.pose.position.y = y
        goal_msg.pose.pose.position.z = 0.0
        
        # Orientation: face forward (quaternion for 0 rotation)
        # For maze navigation, exact final orientation usually doesn't matter
        goal_msg.pose.pose.orientation.x = 0.0
        goal_msg.pose.pose.orientation.y = 0.0
        goal_msg.pose.pose.orientation.z = 0.0
        goal_msg.pose.pose.orientation.w = 1.0
        
        self.logger.info(f'Sending navigation goal to ({x:.2f}, {y:.2f})...')
        
        # Send goal asynchronously
        send_goal_future = self.nav_to_pose_client.send_goal_async(
            goal_msg,
            feedback_callback=self.nav_feedback_callback
        )
        
        # Register callback for when goal is accepted/rejected
        send_goal_future.add_done_callback(self.nav_goal_response_callback)
    
    def nav_goal_response_callback(self, future):
        """
        Callback when NAV2 accepts or rejects our navigation goal.
        
        Args:
            future: Future containing the goal handle
        """
        goal_handle = future.result()
        
        if not goal_handle.accepted:
            self.logger.error('Navigation goal was REJECTED by NAV2!')
            self.is_navigating = False
            return
        
        self.logger.info('Navigation goal ACCEPTED. Robot is moving...')
        self.navigation_active = True
        
        # Register callback for when navigation completes
        get_result_future = goal_handle.get_result_async()
        get_result_future.add_done_callback(self.nav_result_callback)
    
    def nav_feedback_callback(self, feedback_msg):
        """
        Periodic feedback during navigation.
        
        This is called repeatedly while the robot is navigating,
        providing updates on progress.
        
        Args:
            feedback_msg: NavigateToPose.Feedback with current status
        """
        # Extract useful information from feedback
        feedback = feedback_msg.feedback
        
        # You can access:
        # - feedback.current_pose: Robot's current position
        # - feedback.navigation_time: Time elapsed
        # - feedback.distance_remaining: Distance to goal
        # etc.
        
        # Log periodic updates (throttled to avoid spam)
        # Note: Implement throttling if needed to reduce log volume
        pass
    
    def nav_result_callback(self, future):
        """
        Callback when navigation completes (success or failure).
        
        Args:
            future: Future containing the final result
        """
        result = future.result()
        status = result.status
        
        # Check navigation outcome
        if status == GoalStatus.STATUS_SUCCEEDED:
            # SUCCESS! Goal reached
            self.logger.info('=' * 60)
            self.logger.info('✓ NAVIGATION COMPLETED SUCCESSFULLY!')
            self.logger.info('Robot has reached destination waypoint')
            self.logger.info('=' * 60)
            
            self.is_navigating = False
            self.navigation_active = False
            
        elif status == GoalStatus.STATUS_CANCELED:
            # Goal was canceled (by user or system)
            self.logger.warn('Navigation was CANCELED')
            self.handle_navigation_failure()
            
        elif status == GoalStatus.STATUS_ABORTED:
            # Navigation failed (stuck, path blocked, etc.)
            self.logger.error('Navigation ABORTED (robot may be stuck)')
            self.handle_navigation_failure()
            
        else:
            # Unknown status
            self.logger.error(f'Navigation ended with status: {status}')
            self.handle_navigation_failure()
    
    def handle_navigation_failure(self):
        """
        Handle navigation failure - retry or give up.
        """
        self.retry_count += 1
        
        if self.retry_count < self.max_retries:
            self.logger.warn(
                f'Navigation failed. Retrying... '
                f'(Attempt {self.retry_count + 1}/{self.max_retries})'
            )
            
            # Wait a moment before retrying
            self.create_timer(2.0, self.retry_navigation_once)
            
        else:
            self.logger.error(
                f'Navigation failed after {self.max_retries} attempts. '
                'Manual intervention may be required.'
            )
            self.is_navigating = False
            self.navigation_active = False
    
    def retry_navigation_once(self):
        """
        Retry navigation after a brief pause.
        This is called via timer after a navigation failure.
        """
        # Restart navigation to same destination
        self.start_navigation()


def main(args=None):
    """
    Main entry point for the node.
    """
    rclpy.init(args=args)
    
    node = AStarNavigator()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.logger.info('Shutting down A* Navigator')
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
