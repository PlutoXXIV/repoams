// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:msg/CostmapUpdate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/costmap_update.h"


#ifndef NAV2_MSGS__MSG__DETAIL__COSTMAP_UPDATE__STRUCT_H_
#define NAV2_MSGS__MSG__DETAIL__COSTMAP_UPDATE__STRUCT_H_

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
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/CostmapUpdate in the package nav2_msgs.
/**
  * Update msg for Costmap containing the modified part of Costmap
 */
typedef struct nav2_msgs__msg__CostmapUpdate
{
  std_msgs__msg__Header header;
  uint32_t x;
  uint32_t y;
  uint32_t size_x;
  uint32_t size_y;
  /// The cost data, in row-major order, starting with (x,y) from 0-255 in Costmap format rather than OccupancyGrid 0-100.
  rosidl_runtime_c__uint8__Sequence data;
} nav2_msgs__msg__CostmapUpdate;

// Struct for a sequence of nav2_msgs__msg__CostmapUpdate.
typedef struct nav2_msgs__msg__CostmapUpdate__Sequence
{
  nav2_msgs__msg__CostmapUpdate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__msg__CostmapUpdate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__MSG__DETAIL__COSTMAP_UPDATE__STRUCT_H_
