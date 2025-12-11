// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:msg/CircleObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/circle_object.h"


#ifndef NAV2_MSGS__MSG__DETAIL__CIRCLE_OBJECT__STRUCT_H_
#define NAV2_MSGS__MSG__DETAIL__CIRCLE_OBJECT__STRUCT_H_

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
// Member 'uuid'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'center'
#include "geometry_msgs/msg/detail/point32__struct.h"

/// Struct defined in msg/CircleObject in the package nav2_msgs.
typedef struct nav2_msgs__msg__CircleObject
{
  std_msgs__msg__Header header;
  unique_identifier_msgs__msg__UUID uuid;
  geometry_msgs__msg__Point32 center;
  float radius;
  bool fill;
  int8_t value;
} nav2_msgs__msg__CircleObject;

// Struct for a sequence of nav2_msgs__msg__CircleObject.
typedef struct nav2_msgs__msg__CircleObject__Sequence
{
  nav2_msgs__msg__CircleObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__msg__CircleObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__MSG__DETAIL__CIRCLE_OBJECT__STRUCT_H_
