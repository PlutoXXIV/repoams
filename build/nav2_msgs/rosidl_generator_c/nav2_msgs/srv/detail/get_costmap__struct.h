// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:srv/GetCostmap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/srv/get_costmap.h"


#ifndef NAV2_MSGS__SRV__DETAIL__GET_COSTMAP__STRUCT_H_
#define NAV2_MSGS__SRV__DETAIL__GET_COSTMAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'specs'
#include "nav2_msgs/msg/detail/costmap_meta_data__struct.h"

/// Struct defined in srv/GetCostmap in the package nav2_msgs.
typedef struct nav2_msgs__srv__GetCostmap_Request
{
  /// Specifications for the requested costmap
  nav2_msgs__msg__CostmapMetaData specs;
} nav2_msgs__srv__GetCostmap_Request;

// Struct for a sequence of nav2_msgs__srv__GetCostmap_Request.
typedef struct nav2_msgs__srv__GetCostmap_Request__Sequence
{
  nav2_msgs__srv__GetCostmap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__GetCostmap_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'map'
#include "nav2_msgs/msg/detail/costmap__struct.h"

/// Struct defined in srv/GetCostmap in the package nav2_msgs.
typedef struct nav2_msgs__srv__GetCostmap_Response
{
  nav2_msgs__msg__Costmap map;
} nav2_msgs__srv__GetCostmap_Response;

// Struct for a sequence of nav2_msgs__srv__GetCostmap_Response.
typedef struct nav2_msgs__srv__GetCostmap_Response__Sequence
{
  nav2_msgs__srv__GetCostmap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__GetCostmap_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav2_msgs__srv__GetCostmap_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav2_msgs__srv__GetCostmap_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetCostmap in the package nav2_msgs.
typedef struct nav2_msgs__srv__GetCostmap_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav2_msgs__srv__GetCostmap_Request__Sequence request;
  nav2_msgs__srv__GetCostmap_Response__Sequence response;
} nav2_msgs__srv__GetCostmap_Event;

// Struct for a sequence of nav2_msgs__srv__GetCostmap_Event.
typedef struct nav2_msgs__srv__GetCostmap_Event__Sequence
{
  nav2_msgs__srv__GetCostmap_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__GetCostmap_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__SRV__DETAIL__GET_COSTMAP__STRUCT_H_
