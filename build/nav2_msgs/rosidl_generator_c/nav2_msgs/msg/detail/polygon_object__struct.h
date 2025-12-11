// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:msg/PolygonObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/polygon_object.h"


#ifndef NAV2_MSGS__MSG__DETAIL__POLYGON_OBJECT__STRUCT_H_
#define NAV2_MSGS__MSG__DETAIL__POLYGON_OBJECT__STRUCT_H_

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
// Member 'points'
#include "geometry_msgs/msg/detail/point32__struct.h"

/// Struct defined in msg/PolygonObject in the package nav2_msgs.
typedef struct nav2_msgs__msg__PolygonObject
{
  std_msgs__msg__Header header;
  unique_identifier_msgs__msg__UUID uuid;
  geometry_msgs__msg__Point32__Sequence points;
  bool closed;
  int8_t value;
} nav2_msgs__msg__PolygonObject;

// Struct for a sequence of nav2_msgs__msg__PolygonObject.
typedef struct nav2_msgs__msg__PolygonObject__Sequence
{
  nav2_msgs__msg__PolygonObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__msg__PolygonObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__MSG__DETAIL__POLYGON_OBJECT__STRUCT_H_
