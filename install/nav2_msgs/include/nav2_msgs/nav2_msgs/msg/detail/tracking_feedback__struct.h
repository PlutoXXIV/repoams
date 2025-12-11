// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:msg/TrackingFeedback.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/tracking_feedback.h"


#ifndef NAV2_MSGS__MSG__DETAIL__TRACKING_FEEDBACK__STRUCT_H_
#define NAV2_MSGS__MSG__DETAIL__TRACKING_FEEDBACK__STRUCT_H_

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
// Member 'robot_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in msg/TrackingFeedback in the package nav2_msgs.
/**
  * Real-time tracking error for Nav2 controller
 */
typedef struct nav2_msgs__msg__TrackingFeedback
{
  std_msgs__msg__Header header;
  /// The sign of the tracking error indicates which side of the path the robot is on
  /// Positive sign indicates the robot is to the left of the path, negative to the right
  float tracking_error;
  uint32_t current_path_index;
  geometry_msgs__msg__PoseStamped robot_pose;
  float distance_to_goal;
  float speed;
  float remaining_path_length;
} nav2_msgs__msg__TrackingFeedback;

// Struct for a sequence of nav2_msgs__msg__TrackingFeedback.
typedef struct nav2_msgs__msg__TrackingFeedback__Sequence
{
  nav2_msgs__msg__TrackingFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__msg__TrackingFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__MSG__DETAIL__TRACKING_FEEDBACK__STRUCT_H_
