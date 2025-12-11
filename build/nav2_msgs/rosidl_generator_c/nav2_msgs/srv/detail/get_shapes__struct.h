// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:srv/GetShapes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/srv/get_shapes.h"


#ifndef NAV2_MSGS__SRV__DETAIL__GET_SHAPES__STRUCT_H_
#define NAV2_MSGS__SRV__DETAIL__GET_SHAPES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetShapes in the package nav2_msgs.
typedef struct nav2_msgs__srv__GetShapes_Request
{
  uint8_t structure_needs_at_least_one_member;
} nav2_msgs__srv__GetShapes_Request;

// Struct for a sequence of nav2_msgs__srv__GetShapes_Request.
typedef struct nav2_msgs__srv__GetShapes_Request__Sequence
{
  nav2_msgs__srv__GetShapes_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__GetShapes_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'circles'
#include "nav2_msgs/msg/detail/circle_object__struct.h"
// Member 'polygons'
#include "nav2_msgs/msg/detail/polygon_object__struct.h"

/// Struct defined in srv/GetShapes in the package nav2_msgs.
typedef struct nav2_msgs__srv__GetShapes_Response
{
  nav2_msgs__msg__CircleObject__Sequence circles;
  nav2_msgs__msg__PolygonObject__Sequence polygons;
} nav2_msgs__srv__GetShapes_Response;

// Struct for a sequence of nav2_msgs__srv__GetShapes_Response.
typedef struct nav2_msgs__srv__GetShapes_Response__Sequence
{
  nav2_msgs__srv__GetShapes_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__GetShapes_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav2_msgs__srv__GetShapes_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav2_msgs__srv__GetShapes_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetShapes in the package nav2_msgs.
typedef struct nav2_msgs__srv__GetShapes_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav2_msgs__srv__GetShapes_Request__Sequence request;
  nav2_msgs__srv__GetShapes_Response__Sequence response;
} nav2_msgs__srv__GetShapes_Event;

// Struct for a sequence of nav2_msgs__srv__GetShapes_Event.
typedef struct nav2_msgs__srv__GetShapes_Event__Sequence
{
  nav2_msgs__srv__GetShapes_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__GetShapes_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__SRV__DETAIL__GET_SHAPES__STRUCT_H_
