// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:msg/CollisionDetectorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/collision_detector_state.h"


#ifndef NAV2_MSGS__MSG__DETAIL__COLLISION_DETECTOR_STATE__STRUCT_H_
#define NAV2_MSGS__MSG__DETAIL__COLLISION_DETECTOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'polygons'
#include "rosidl_runtime_c/string.h"
// Member 'detections'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/CollisionDetectorState in the package nav2_msgs.
/**
  * Name of configured polygons
 */
typedef struct nav2_msgs__msg__CollisionDetectorState
{
  rosidl_runtime_c__String__Sequence polygons;
  /// List of detections for each polygon
  rosidl_runtime_c__boolean__Sequence detections;
} nav2_msgs__msg__CollisionDetectorState;

// Struct for a sequence of nav2_msgs__msg__CollisionDetectorState.
typedef struct nav2_msgs__msg__CollisionDetectorState__Sequence
{
  nav2_msgs__msg__CollisionDetectorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__msg__CollisionDetectorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__MSG__DETAIL__COLLISION_DETECTOR_STATE__STRUCT_H_
