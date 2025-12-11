// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/trajectory.h"


#ifndef NAV2_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_
#define NAV2_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'points'
#include "nav2_msgs/msg/detail/trajectory_point__struct.h"

/// Struct defined in msg/Trajectory in the package nav2_msgs.
/**
  * An array of trajectory points that represents a trajectory for a robot to follow.
 */
typedef struct nav2_msgs__msg__Trajectory
{
  /// Indicates the frame_id of the trajectory.
  std_msgs__msg__Header header;
  /// Array of trajectory points to follow.
  nav2_msgs__msg__TrajectoryPoint__Sequence points;
} nav2_msgs__msg__Trajectory;

// Struct for a sequence of nav2_msgs__msg__Trajectory.
typedef struct nav2_msgs__msg__Trajectory__Sequence
{
  nav2_msgs__msg__Trajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__msg__Trajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_
