#!/usr/bin/env python3
"""
Complete Maze Explorer System Launch File

This launch file starts ALL components needed for the maze exploration
and navigation system. It's the single entry point for running the entire project.

WHAT THIS LAUNCHES:
1. Hardware drivers (LIDAR, IMU, encoders)
2. Robot description and transforms
3. Sensor fusion (EKF)
4. SLAM for mapping
5. Navigation stack (NAV2)
6. Exploration controller
7. Custom waypoint detection and navigation nodes
8. Completion indicator

LAUNCH SEQUENCE:
The order matters! We start low-level components first, then build up:
- Hardware → State publishing → Sensor fusion → SLAM → Navigation → Application logic

USAGE:
    ros2 launch maze_explorer complete_system.launch.py

PARAMETERS:
    use_sim_time:=false  (default: real hardware)
    slam_params_file:=/path/to/slam_params.yaml  (optional: custom params)

Save this file as: ~/maze_robot_ws/src/maze_explorer/launch/complete_system.launch.py
"""

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    """
    Generate the complete launch description for the maze explorer system.
    
    Returns:
        LaunchDescription: Complete launch configuration
    """
    
    # =========================================================================
    # GET PACKAGE DIRECTORIES
    # =========================================================================
    
    # Get the directory where our package is installed
    pkg_maze_explorer = get_package_share_directory('maze_explorer')
    
    # =========================================================================
    # DECLARE LAUNCH ARGUMENTS
    # =========================================================================
    
    # These can be overridden from command line
    # Example: ros2 launch maze_explorer complete_system.launch.py use_sim_time:=true
    
    use_sim_time_arg = DeclareLaunchArgument(
        'use_sim_time',
        default_value='false',
        description='Use simulation time if true'
    )
    
    # =========================================================================
    # CONFIGURATION FILE PATHS
    # =========================================================================
    
    # Build paths to all configuration files
    slam_params_file = os.path.join(pkg_maze_explorer, 'config', 'slam_params.yaml')
    nav2_params_file = os.path.join(pkg_maze_explorer, 'config', 'nav2_params.yaml')
    ekf_params_file = os.path.join(pkg_maze_explorer, 'config', 'ekf_params.yaml')
    controllers_file = os.path.join(pkg_maze_explorer, 'config', 'controllers.yaml')
    
    # Robot description (URDF)
    urdf_file = os.path.join(pkg_maze_explorer, 'urdf', 'maze_robot.urdf.xacro')
    
    # =========================================================================
    # LAYER 1: HARDWARE DRIVERS
    # =========================================================================
    
    # LIDAR Driver (Slamtec RP LIDAR C1M1)
    # Publishes: /scan (sensor_msgs/LaserScan)
    lidar_node = Node(
        package='sllidar_ros2',
        executable='sllidar_node',
        name='sllidar_node',
        output='screen',
        parameters=[{
            'channel_type': 'serial',
            'serial_port': '/dev/ttyUSB0',  # Default USB serial port
            'serial_baudrate': 115200,
            'frame_id': 'lidar_link',
            'inverted': False,
            'angle_compensate': True,
        }]
    )
    
    # IMU Driver (BNO085)
    # Publishes: /bno08x/imu (sensor_msgs/Imu)
    imu_node = Node(
        package='bno08x_ros2_driver',
        executable='bno08x_ros2_driver_node',
        name='bno08x_imu',
        output='screen',
        parameters=[{
            'i2c_bus': 1,  # Raspberry Pi I2C bus (usually 1)
            'i2c_address': 0x4A,  # Default BNO085 I2C address
            'frame_id': 'imu_link',
            'publish_rate': 50.0,  # 50 Hz publishing rate
        }]
    )
    
    # Wheel Encoder Publisher (N20 motors)
    # Publishes: /joint_states (sensor_msgs/JointState)
    encoder_node = Node(
        package='maze_explorer',
        executable='encoder_publisher',
        name='encoder_publisher',
        output='screen'
    )
    
    # =========================================================================
    # LAYER 2: ROBOT STATE PUBLISHING
    # =========================================================================
    
    # Robot State Publisher
    # Publishes TF transforms from URDF
    # Converts joint_states into transform tree
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
    # LAYER 3: SENSOR FUSION
    # =========================================================================
    
    # Extended Kalman Filter (EKF)
    # Fuses IMU + wheel encoders → /odometry/filtered
    # This is critical for accurate localization
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
    # LAYER 4: SLAM (MAPPING)
    # =========================================================================
    
    # SLAM Toolbox (Online Async mode)
    # Creates map while exploring
    # Publishes: /map (nav_msgs/OccupancyGrid)
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
    # LAYER 5: NAVIGATION STACK (NAV2)
    # =========================================================================
    
    # Navigation2 Launch
    # Includes: controller, planner, behavior server, bt_navigator
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
    # LAYER 6: EXPLORATION
    # =========================================================================
    
    # M-Explore (Autonomous Exploration)
    # Explores unknown areas automatically
    explore_node = Node(
        package='explore_lite',
        executable='explore',
        name='explore',
        output='screen',
        parameters=[{
            'use_sim_time': LaunchConfiguration('use_sim_time'),
            'robot_base_frame': 'base_footprint',
            'costmap_topic': '/local_costmap/costmap',
            'costmap_updates_topic': '/local_costmap/costmap_updates',
            'visualize': True,
            'planner_frequency': 0.33,
            'progress_timeout': 30.0,
            'potential_scale': 3.0,
            'orientation_scale': 0.0,
            'gain_scale': 1.0,
            'transform_tolerance': 0.3,
            'min_frontier_size': 0.75,
        }]
    )
    
    # =========================================================================
    # LAYER 7: CUSTOM APPLICATION NODES
    # =========================================================================
    
    # Start/End Point Detector
    # Finds waypoints based on long LIDAR ranges (>5m)
    waypoint_detector = Node(
        package='maze_explorer',
        executable='start_end_detector.py',
        name='start_end_detector',
        output='screen'
    )
    
    # Position Identifier
    # Determines which waypoint robot is currently at
    position_identifier = Node(
        package='maze_explorer',
        executable='position_identifier.py',
        name='position_identifier',
        output='screen'
    )
    
    # A* Navigator
    # Handles navigation between waypoints using A* algorithm
    astar_navigator = Node(
        package='maze_explorer',
        executable='astar_navigator.py',
        name='astar_navigator',
        output='screen'
    )
    
    # Completion LED Controller
    # Blinks LED when exploration is 100% complete
    led_controller = Node(
        package='maze_explorer',
        executable='completion_led.py',
        name='completion_led',
        output='screen'
    )
    
    # =========================================================================
    # LAYER 8: VISUALIZATION (OPTIONAL)
    # =========================================================================
    
    # RViz for visualization (optional, can be started separately)
    # Uncomment to auto-launch RViz with system
    # rviz_config = os.path.join(pkg_maze_explorer, 'rviz', 'maze_explorer.rviz')
    # rviz_node = Node(
    #     package='rviz2',
    #     executable='rviz2',
    #     name='rviz2',
    #     arguments=['-d', rviz_config],
    #     output='screen'
    # )
    
    # =========================================================================
    # BUILD LAUNCH DESCRIPTION
    # =========================================================================
    
    return LaunchDescription([
        # Launch arguments
        use_sim_time_arg,
        
        # Hardware drivers
        lidar_node,
        imu_node,
        encoder_node,
        
        # State publishing
        robot_state_publisher,
        
        # Sensor fusion
        ekf_node,
        
        # SLAM
        slam_node,
        
        # Navigation
        nav2_launch,
        
        # Exploration
        explore_node,
        
        # Custom application nodes
        waypoint_detector,
        position_identifier,
        astar_navigator,
        led_controller,
        
        # Visualization (if uncommented)
        # rviz_node,
    ])
