// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:srv/ManageLifecycleNodes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/srv/manage_lifecycle_nodes.h"


#ifndef NAV2_MSGS__SRV__DETAIL__MANAGE_LIFECYCLE_NODES__STRUCT_H_
#define NAV2_MSGS__SRV__DETAIL__MANAGE_LIFECYCLE_NODES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STARTUP'.
enum
{
  nav2_msgs__srv__ManageLifecycleNodes_Request__STARTUP = 0
};

/// Constant 'PAUSE'.
enum
{
  nav2_msgs__srv__ManageLifecycleNodes_Request__PAUSE = 1
};

/// Constant 'RESUME'.
enum
{
  nav2_msgs__srv__ManageLifecycleNodes_Request__RESUME = 2
};

/// Constant 'RESET'.
enum
{
  nav2_msgs__srv__ManageLifecycleNodes_Request__RESET = 3
};

/// Constant 'SHUTDOWN'.
enum
{
  nav2_msgs__srv__ManageLifecycleNodes_Request__SHUTDOWN = 4
};

/// Constant 'CONFIGURE'.
enum
{
  nav2_msgs__srv__ManageLifecycleNodes_Request__CONFIGURE = 5
};

/// Constant 'CLEANUP'.
enum
{
  nav2_msgs__srv__ManageLifecycleNodes_Request__CLEANUP = 6
};

/// Struct defined in srv/ManageLifecycleNodes in the package nav2_msgs.
typedef struct nav2_msgs__srv__ManageLifecycleNodes_Request
{
  uint8_t command;
} nav2_msgs__srv__ManageLifecycleNodes_Request;

// Struct for a sequence of nav2_msgs__srv__ManageLifecycleNodes_Request.
typedef struct nav2_msgs__srv__ManageLifecycleNodes_Request__Sequence
{
  nav2_msgs__srv__ManageLifecycleNodes_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__ManageLifecycleNodes_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/ManageLifecycleNodes in the package nav2_msgs.
typedef struct nav2_msgs__srv__ManageLifecycleNodes_Response
{
  bool success;
} nav2_msgs__srv__ManageLifecycleNodes_Response;

// Struct for a sequence of nav2_msgs__srv__ManageLifecycleNodes_Response.
typedef struct nav2_msgs__srv__ManageLifecycleNodes_Response__Sequence
{
  nav2_msgs__srv__ManageLifecycleNodes_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__ManageLifecycleNodes_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav2_msgs__srv__ManageLifecycleNodes_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav2_msgs__srv__ManageLifecycleNodes_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ManageLifecycleNodes in the package nav2_msgs.
typedef struct nav2_msgs__srv__ManageLifecycleNodes_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav2_msgs__srv__ManageLifecycleNodes_Request__Sequence request;
  nav2_msgs__srv__ManageLifecycleNodes_Response__Sequence response;
} nav2_msgs__srv__ManageLifecycleNodes_Event;

// Struct for a sequence of nav2_msgs__srv__ManageLifecycleNodes_Event.
typedef struct nav2_msgs__srv__ManageLifecycleNodes_Event__Sequence
{
  nav2_msgs__srv__ManageLifecycleNodes_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__ManageLifecycleNodes_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__SRV__DETAIL__MANAGE_LIFECYCLE_NODES__STRUCT_H_
