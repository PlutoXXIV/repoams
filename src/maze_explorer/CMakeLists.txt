# CMakeLists.txt - Build Configuration for Maze Explorer Package
#
# This file tells CMake how to compile our C++ code and install all project files.
# CMake is the build system used by ROS2 to manage compilation of packages.
#
# Save this file as: ~/maze_robot_ws/src/maze_explorer/CMakeLists.txt

cmake_minimum_required(VERSION 3.8)
project(maze_explorer)

# Enforce C++17 standard - required for modern ROS2 features
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find all required ROS2 packages
# These correspond to the dependencies listed in package.xml
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)

# Create a list of dependencies for easier management
set(dependencies
  rclcpp
  rclpy
  std_msgs
  sensor_msgs
  geometry_msgs
  nav_msgs
  visualization_msgs
  tf2
  tf2_ros
  tf2_geometry_msgs
)

###############################################################################
# Build C++ Executables
###############################################################################

# Encoder Publisher Node
# This node reads encoder data from the N20 motors and publishes wheel velocities
# Input: GPIO pins connected to encoder channels A and B for each wheel
# Output: sensor_msgs/JointState messages on /joint_states topic
add_executable(encoder_publisher src/encoder_publisher.cpp)
ament_target_dependencies(encoder_publisher ${dependencies})

# Waypoint Detector Node
# Detects start and end points based on LIDAR readings >5-6m
# Input: sensor_msgs/LaserScan from /scan topic
# Output: Custom messages with waypoint positions
add_executable(waypoint_detector src/waypoint_detector.cpp)
ament_target_dependencies(waypoint_detector ${dependencies})

###############################################################################
# Install Targets
###############################################################################

# Install C++ executables to lib directory
# ROS2 will be able to find and run these nodes after installation
install(TARGETS
  encoder_publisher
  waypoint_detector
  DESTINATION lib/${PROJECT_NAME}
)

# Install Python scripts to lib directory
# The PROGRAMS directive makes them executable
install(PROGRAMS
  scripts/start_end_detector.py
  scripts/position_identifier.py
  scripts/astar_navigator.py
  scripts/completion_led.py
  DESTINATION lib/${PROJECT_NAME}
)

# Install launch files
# These orchestrate multiple nodes and load parameters
install(DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)

# Install configuration files (YAML parameter files)
# These configure behavior of navigation, SLAM, and controllers
install(DIRECTORY config/
  DESTINATION share/${PROJECT_NAME}/config
)

# Install URDF files (robot description)
# These define the physical structure and sensors of the robot
install(DIRECTORY urdf/
  DESTINATION share/${PROJECT_NAME}/urdf
)

# Install maps directory (initially empty, will store saved maps)
install(DIRECTORY
  DESTINATION share/${PROJECT_NAME}/maps
)

###############################################################################
# Testing (Optional)
###############################################################################

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # Perform linting to catch common issues
  ament_lint_auto_find_test_dependencies()
endif()

# Register this package with ament
# This makes it discoverable by other ROS2 packages
ament_package()
