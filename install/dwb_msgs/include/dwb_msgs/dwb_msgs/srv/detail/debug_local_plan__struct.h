// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dwb_msgs:srv/DebugLocalPlan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dwb_msgs/srv/debug_local_plan.h"


#ifndef DWB_MSGS__SRV__DETAIL__DEBUG_LOCAL_PLAN__STRUCT_H_
#define DWB_MSGS__SRV__DETAIL__DEBUG_LOCAL_PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'velocity'
#include "nav_2d_msgs/msg/detail/twist2_d__struct.h"
// Member 'global_plan'
#include "nav_msgs/msg/detail/path__struct.h"

/// Struct defined in srv/DebugLocalPlan in the package dwb_msgs.
typedef struct dwb_msgs__srv__DebugLocalPlan_Request
{
  geometry_msgs__msg__PoseStamped pose;
  nav_2d_msgs__msg__Twist2D velocity;
  nav_msgs__msg__Path global_plan;
} dwb_msgs__srv__DebugLocalPlan_Request;

// Struct for a sequence of dwb_msgs__srv__DebugLocalPlan_Request.
typedef struct dwb_msgs__srv__DebugLocalPlan_Request__Sequence
{
  dwb_msgs__srv__DebugLocalPlan_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dwb_msgs__srv__DebugLocalPlan_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'results'
#include "dwb_msgs/msg/detail/local_plan_evaluation__struct.h"

/// Struct defined in srv/DebugLocalPlan in the package dwb_msgs.
typedef struct dwb_msgs__srv__DebugLocalPlan_Response
{
  dwb_msgs__msg__LocalPlanEvaluation results;
} dwb_msgs__srv__DebugLocalPlan_Response;

// Struct for a sequence of dwb_msgs__srv__DebugLocalPlan_Response.
typedef struct dwb_msgs__srv__DebugLocalPlan_Response__Sequence
{
  dwb_msgs__srv__DebugLocalPlan_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dwb_msgs__srv__DebugLocalPlan_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  dwb_msgs__srv__DebugLocalPlan_Event__request__MAX_SIZE = 1
};
// response
enum
{
  dwb_msgs__srv__DebugLocalPlan_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/DebugLocalPlan in the package dwb_msgs.
typedef struct dwb_msgs__srv__DebugLocalPlan_Event
{
  service_msgs__msg__ServiceEventInfo info;
  dwb_msgs__srv__DebugLocalPlan_Request__Sequence request;
  dwb_msgs__srv__DebugLocalPlan_Response__Sequence response;
} dwb_msgs__srv__DebugLocalPlan_Event;

// Struct for a sequence of dwb_msgs__srv__DebugLocalPlan_Event.
typedef struct dwb_msgs__srv__DebugLocalPlan_Event__Sequence
{
  dwb_msgs__srv__DebugLocalPlan_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dwb_msgs__srv__DebugLocalPlan_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DWB_MSGS__SRV__DETAIL__DEBUG_LOCAL_PLAN__STRUCT_H_
