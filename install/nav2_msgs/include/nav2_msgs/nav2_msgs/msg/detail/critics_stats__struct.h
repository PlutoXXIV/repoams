// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:msg/CriticsStats.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/critics_stats.h"


#ifndef NAV2_MSGS__MSG__DETAIL__CRITICS_STATS__STRUCT_H_
#define NAV2_MSGS__MSG__DETAIL__CRITICS_STATS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'critics'
#include "rosidl_runtime_c/string.h"
// Member 'changed'
// Member 'costs_sum'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/CriticsStats in the package nav2_msgs.
/**
  * Critics statistics message
 */
typedef struct nav2_msgs__msg__CriticsStats
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String__Sequence critics;
  rosidl_runtime_c__boolean__Sequence changed;
  rosidl_runtime_c__float__Sequence costs_sum;
} nav2_msgs__msg__CriticsStats;

// Struct for a sequence of nav2_msgs__msg__CriticsStats.
typedef struct nav2_msgs__msg__CriticsStats__Sequence
{
  nav2_msgs__msg__CriticsStats * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__msg__CriticsStats__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__MSG__DETAIL__CRITICS_STATS__STRUCT_H_
