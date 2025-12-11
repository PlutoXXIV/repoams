// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:srv/GetCosts.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/srv/get_costs.h"


#ifndef NAV2_MSGS__SRV__DETAIL__GET_COSTS__STRUCT_H_
#define NAV2_MSGS__SRV__DETAIL__GET_COSTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in srv/GetCosts in the package nav2_msgs.
typedef struct nav2_msgs__srv__GetCosts_Request
{
  bool use_footprint;
  geometry_msgs__msg__PoseStamped__Sequence poses;
} nav2_msgs__srv__GetCosts_Request;

// Struct for a sequence of nav2_msgs__srv__GetCosts_Request.
typedef struct nav2_msgs__srv__GetCosts_Request__Sequence
{
  nav2_msgs__srv__GetCosts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__GetCosts_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'costs'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/GetCosts in the package nav2_msgs.
typedef struct nav2_msgs__srv__GetCosts_Response
{
  rosidl_runtime_c__float__Sequence costs;
  bool success;
} nav2_msgs__srv__GetCosts_Response;

// Struct for a sequence of nav2_msgs__srv__GetCosts_Response.
typedef struct nav2_msgs__srv__GetCosts_Response__Sequence
{
  nav2_msgs__srv__GetCosts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__GetCosts_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav2_msgs__srv__GetCosts_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav2_msgs__srv__GetCosts_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetCosts in the package nav2_msgs.
typedef struct nav2_msgs__srv__GetCosts_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav2_msgs__srv__GetCosts_Request__Sequence request;
  nav2_msgs__srv__GetCosts_Response__Sequence response;
} nav2_msgs__srv__GetCosts_Event;

// Struct for a sequence of nav2_msgs__srv__GetCosts_Event.
typedef struct nav2_msgs__srv__GetCosts_Event__Sequence
{
  nav2_msgs__srv__GetCosts_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__GetCosts_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__SRV__DETAIL__GET_COSTS__STRUCT_H_
