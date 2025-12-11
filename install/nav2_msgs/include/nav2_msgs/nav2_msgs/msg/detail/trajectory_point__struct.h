// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/trajectory_point.h"


#ifndef NAV2_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_
#define NAV2_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'time_from_start'
#include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'acceleration'
#include "geometry_msgs/msg/detail/accel__struct.h"
// Member 'effort'
#include "geometry_msgs/msg/detail/wrench__struct.h"

/// Struct defined in msg/TrajectoryPoint in the package nav2_msgs.
/**
  * Trajectory point state
 */
typedef struct nav2_msgs__msg__TrajectoryPoint
{
  /// Desired time from the trajectory start to arrive at this trajectory sample.
  builtin_interfaces__msg__Duration time_from_start;
  /// Pose of the trajectory sample.
  geometry_msgs__msg__Pose pose;
  /// Velocity of the trajectory sample.
  geometry_msgs__msg__Twist velocity;
  /// Acceleration of the trajectory (optional).
  geometry_msgs__msg__Accel acceleration;
  /// Force/Torque to apply at trajectory sample (optional).
  geometry_msgs__msg__Wrench effort;
} nav2_msgs__msg__TrajectoryPoint;

// Struct for a sequence of nav2_msgs__msg__TrajectoryPoint.
typedef struct nav2_msgs__msg__TrajectoryPoint__Sequence
{
  nav2_msgs__msg__TrajectoryPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__msg__TrajectoryPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_
