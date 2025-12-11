// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:msg/WaypointStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/waypoint_status.h"


#ifndef NAV2_MSGS__MSG__DETAIL__WAYPOINT_STATUS__STRUCT_H_
#define NAV2_MSGS__MSG__DETAIL__WAYPOINT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'PENDING'.
/**
  * Waypoint is not processed or processing
 */
enum
{
  nav2_msgs__msg__WaypointStatus__PENDING = 0
};

/// Constant 'COMPLETED'.
/**
  * Waypoint is completed
 */
enum
{
  nav2_msgs__msg__WaypointStatus__COMPLETED = 1
};

/// Constant 'SKIPPED'.
/**
  * Waypoint is skipped
 */
enum
{
  nav2_msgs__msg__WaypointStatus__SKIPPED = 2
};

/// Constant 'FAILED'.
/**
  * Waypoint is failed
 */
enum
{
  nav2_msgs__msg__WaypointStatus__FAILED = 3
};

// Include directives for member types
// Member 'waypoint_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'error_msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/WaypointStatus in the package nav2_msgs.
/**
  * Waypoint state for multi-goal navigation or waypoint following
 */
typedef struct nav2_msgs__msg__WaypointStatus
{
  uint8_t waypoint_status;
  uint32_t waypoint_index;
  geometry_msgs__msg__PoseStamped waypoint_pose;
  uint16_t error_code;
  rosidl_runtime_c__String error_msg;
} nav2_msgs__msg__WaypointStatus;

// Struct for a sequence of nav2_msgs__msg__WaypointStatus.
typedef struct nav2_msgs__msg__WaypointStatus__Sequence
{
  nav2_msgs__msg__WaypointStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__msg__WaypointStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__MSG__DETAIL__WAYPOINT_STATUS__STRUCT_H_
