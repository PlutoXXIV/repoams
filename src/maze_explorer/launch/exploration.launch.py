#!/usr/bin/env python3
"""
Exploration Phase Launch File

This launch file starts only the components needed for autonomous maze exploration.
It's a subset of the complete_system.launch.py, focused on mapping and exploration.

WHAT THIS LAUNCHES:
1. Hardware drivers (LIDAR, IMU, motor control)
2. Robot state publishing (URDF → TF tree)
3. Sensor fusion (EKF)
4. SLAM for real-time mapping
5. Navigation stack (for exploration movement)
6. M-Explore (autonomous exploration)
7. Waypoint detector (finds start/end points)
8. Completion indicator (LED blinks when done)

NOT INCLUDED (Navigation phase only):
- Position identifier (not needed until manual repositioning)
- A* navigator (not needed until goal-directed navigation)

USE CASE:
First phase of operation - robot explores unknown maze, builds map,
detects waypoints, and signals completion.

USAGE:
    ros2 launch maze_explorer exploration.launch.py

AFTER COMPLETION:
1. Save map: ros2 run nav2_map_server map_saver_cli -f maps/maze_map
2. Move robot to waypoint manually
3. Run navigation.launch.py for goal-directed navigation

Save this file as: ~/maze_robot_ws/src/maze_explorer/launch/exploration.launch.py
"""

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, TimerAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    """
    Generate launch description for exploration phase.
    """
    
    # =========================================================================
    # PACKAGE DIRECTORIES
    # =========================================================================
    
    pkg_maze_explorer = get_package_share_directory('maze_explorer')
    
    # =========================================================================
    # LAUNCH ARGUMENTS
    # =========================================================================
    
    use_sim_time_arg = DeclareLaunchArgument(
        'use_sim_time',
        default_value='false',
        description='Use simulation time if true'
    )
    
    # =========================================================================
    # CONFIGURATION FILE PATHS
    # =========================================================================
    
    slam_params_file = os.path.join(pkg_maze_explorer, 'config', 'slam_params.yaml')
    nav2_params_file = os.path.join(pkg_maze_explorer, 'config', 'nav2_params.yaml')
    ekf_params_file = os.path.join(pkg_maze_explorer, 'config', 'ekf_params.yaml')
    controllers_file = os.path.join(pkg_maze_explorer, 'config', 'controllers.yaml')
    explorer_params_file = os.path.join(pkg_maze_explorer, 'config', 'explorer_params.yaml')
    
    urdf_file = os.path.join(pkg_maze_explorer, 'urdf', 'maze_robot.urdf.xacro')
    
    # =========================================================================
    # HARDWARE DRIVERS
    # =========================================================================
    
    # LIDAR Driver
    lidar_node = Node(
        package='sllidar_ros2',
        executable='sllidar_node',
        name='sllidar_node',
        output='screen',
        parameters=[{
            'channel_type': 'serial',
            'serial_port': '/dev/ttyUSB0',
            'serial_baudrate': 115200,
            'frame_id': 'lidar_link',
            'inverted': False,
            'angle_compensate': True,
        }]
    )
    
    # IMU Driver
    imu_node = Node(
        package='bno08x_ros2_driver',
        executable='bno08x_ros2_driver_node',
        name='bno08x_imu',
        output='screen',
        parameters=[{
            'i2c_bus': 1,
            'i2c_address': 0x4A,
            'frame_id': 'imu_link',
            'publish_rate': 50.0,
        }]
    )
    
    # =========================================================================
    # ROBOT DESCRIPTION AND STATE PUBLISHING
    # =========================================================================
    
    # Robot State Publisher
    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[{
            'robot_description': open(urdf_file).read(),
            'use_sim_time': LaunchConfiguration('use_sim_time')
        }]
    )
    
    # =========================================================================
    # ROS2_CONTROL - MOTOR CONTROL
    # =========================================================================
    
    # Controller Manager
    controller_manager = Node(
        package='controller_manager',
        executable='ros2_control_node',
        output='screen',
        parameters=[
            {'robot_description': open(urdf_file).read()},
            controllers_file,
            {'use_sim_time': LaunchConfiguration('use_sim_time')}
        ]
    )
    
    # Joint State Broadcaster (with delay to ensure controller_manager is ready)
    joint_state_broadcaster_spawner = TimerAction(
        period=2.0,
        actions=[
            Node(
                package='controller_manager',
                executable='spawner',
                arguments=['joint_state_broadcaster'],
                output='screen'
            )
        ]
    )
    
    # Mecanum Drive Controller (with delay)
    mecanum_controller_spawner = TimerAction(
        period=3.0,
        actions=[
            Node(
                package='controller_manager',
                executable='spawner',
                arguments=['mecanum_drive_controller'],
                output='screen'
            )
        ]
    )
    
    # =========================================================================
    # SENSOR FUSION
    # =========================================================================
    
    # Extended Kalman Filter
    ekf_node = Node(
        package='robot_localization',
        executable='ekf_node',
        name='ekf_filter_node',
        output='screen',
        parameters=[ekf_params_file, {
            'use_sim_time': LaunchConfiguration('use_sim_time')
        }]
    )
    
    # =========================================================================
    # SLAM - MAPPING
    # =========================================================================
    
    # SLAM Toolbox (Online Async mode for real-time mapping)
    slam_node = Node(
        package='slam_toolbox',
        executable='async_slam_toolbox_node',
        name='slam_toolbox',
        output='screen',
        parameters=[slam_params_file, {
            'use_sim_time': LaunchConfiguration('use_sim_time')
        }]
    )
    
    # =========================================================================
    # NAVIGATION STACK
    # =========================================================================
    
    # NAV2 Navigation Stack
    nav2_bringup_dir = get_package_share_directory('nav2_bringup')
    nav2_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(nav2_bringup_dir, 'launch', 'navigation_launch.py')
        ),
        launch_arguments={
            'use_sim_time': LaunchConfiguration('use_sim_time'),
            'params_file': nav2_params_file,
            'autostart': 'true'
        }.items()
    )
    
    # =========================================================================
    # AUTONOMOUS EXPLORATION
    # =========================================================================
    
    # M-Explore Node
    explore_node = Node(
        package='explore_lite',
        executable='explore',
        name='explore_node',
        output='screen',
        parameters=[explorer_params_file, {
            'use_sim_time': LaunchConfiguration('use_sim_time')
        }]
    )
    
    # =========================================================================
    # CUSTOM APPLICATION NODES - EXPLORATION SPECIFIC
    # =========================================================================
    
    # Waypoint Detector (finds start/end points during exploration)
    waypoint_detector = Node(
        package='maze_explorer',
        executable='start_end_detector.py',
        name='start_end_detector',
        output='screen',
        parameters=[{
            'use_sim_time': LaunchConfiguration('use_sim_time')
        }]
    )
    
    # Completion LED Controller (signals when exploration done)
    led_controller = Node(
        package='maze_explorer',
        executable='completion_led.py',
        name='completion_led',
        output='screen',
        parameters=[{
            'use_sim_time': LaunchConfiguration('use_sim_time')
        }]
    )
    
    # =========================================================================
    # BUILD LAUNCH DESCRIPTION
    # =========================================================================
    
    return LaunchDescription([
        # Launch arguments
        use_sim_time_arg,
        
        # Hardware drivers
        lidar_node,
        imu_node,
        
        # Robot description and state
        robot_state_publisher,
        
        # Motor control (ros2_control)
        controller_manager,
        joint_state_broadcaster_spawner,
        mecanum_controller_spawner,
        
        # Sensor fusion
        ekf_node,
        
        # SLAM
        slam_node,
        
        # Navigation
        nav2_launch,
        
        # Autonomous exploration
        explore_node,
        
        # Custom nodes
        waypoint_detector,
        led_controller,
    ])

