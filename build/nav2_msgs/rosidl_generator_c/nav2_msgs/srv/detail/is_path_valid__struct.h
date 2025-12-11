// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:srv/IsPathValid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/srv/is_path_valid.h"


#ifndef NAV2_MSGS__SRV__DETAIL__IS_PATH_VALID__STRUCT_H_
#define NAV2_MSGS__SRV__DETAIL__IS_PATH_VALID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__struct.h"

/// Struct defined in srv/IsPathValid in the package nav2_msgs.
typedef struct nav2_msgs__srv__IsPathValid_Request
{
  nav_msgs__msg__Path path;
  uint8_t max_cost;
  bool consider_unknown_as_obstacle;
} nav2_msgs__srv__IsPathValid_Request;

// Struct for a sequence of nav2_msgs__srv__IsPathValid_Request.
typedef struct nav2_msgs__srv__IsPathValid_Request__Sequence
{
  nav2_msgs__srv__IsPathValid_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__IsPathValid_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'invalid_pose_indices'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/IsPathValid in the package nav2_msgs.
typedef struct nav2_msgs__srv__IsPathValid_Response
{
  bool is_valid;
  rosidl_runtime_c__int32__Sequence invalid_pose_indices;
} nav2_msgs__srv__IsPathValid_Response;

// Struct for a sequence of nav2_msgs__srv__IsPathValid_Response.
typedef struct nav2_msgs__srv__IsPathValid_Response__Sequence
{
  nav2_msgs__srv__IsPathValid_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__IsPathValid_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav2_msgs__srv__IsPathValid_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav2_msgs__srv__IsPathValid_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/IsPathValid in the package nav2_msgs.
typedef struct nav2_msgs__srv__IsPathValid_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav2_msgs__srv__IsPathValid_Request__Sequence request;
  nav2_msgs__srv__IsPathValid_Response__Sequence response;
} nav2_msgs__srv__IsPathValid_Event;

// Struct for a sequence of nav2_msgs__srv__IsPathValid_Event.
typedef struct nav2_msgs__srv__IsPathValid_Event__Sequence
{
  nav2_msgs__srv__IsPathValid_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__IsPathValid_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__SRV__DETAIL__IS_PATH_VALID__STRUCT_H_
