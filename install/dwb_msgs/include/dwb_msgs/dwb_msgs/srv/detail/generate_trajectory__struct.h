// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dwb_msgs:srv/GenerateTrajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dwb_msgs/srv/generate_trajectory.h"


#ifndef DWB_MSGS__SRV__DETAIL__GENERATE_TRAJECTORY__STRUCT_H_
#define DWB_MSGS__SRV__DETAIL__GENERATE_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'start_vel'
// Member 'cmd_vel'
#include "nav_2d_msgs/msg/detail/twist2_d__struct.h"

/// Struct defined in srv/GenerateTrajectory in the package dwb_msgs.
typedef struct dwb_msgs__srv__GenerateTrajectory_Request
{
  geometry_msgs__msg__Pose start_pose;
  nav_2d_msgs__msg__Twist2D start_vel;
  nav_2d_msgs__msg__Twist2D cmd_vel;
} dwb_msgs__srv__GenerateTrajectory_Request;

// Struct for a sequence of dwb_msgs__srv__GenerateTrajectory_Request.
typedef struct dwb_msgs__srv__GenerateTrajectory_Request__Sequence
{
  dwb_msgs__srv__GenerateTrajectory_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dwb_msgs__srv__GenerateTrajectory_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'traj'
#include "dwb_msgs/msg/detail/trajectory2_d__struct.h"

/// Struct defined in srv/GenerateTrajectory in the package dwb_msgs.
typedef struct dwb_msgs__srv__GenerateTrajectory_Response
{
  dwb_msgs__msg__Trajectory2D traj;
} dwb_msgs__srv__GenerateTrajectory_Response;

// Struct for a sequence of dwb_msgs__srv__GenerateTrajectory_Response.
typedef struct dwb_msgs__srv__GenerateTrajectory_Response__Sequence
{
  dwb_msgs__srv__GenerateTrajectory_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dwb_msgs__srv__GenerateTrajectory_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  dwb_msgs__srv__GenerateTrajectory_Event__request__MAX_SIZE = 1
};
// response
enum
{
  dwb_msgs__srv__GenerateTrajectory_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GenerateTrajectory in the package dwb_msgs.
typedef struct dwb_msgs__srv__GenerateTrajectory_Event
{
  service_msgs__msg__ServiceEventInfo info;
  dwb_msgs__srv__GenerateTrajectory_Request__Sequence request;
  dwb_msgs__srv__GenerateTrajectory_Response__Sequence response;
} dwb_msgs__srv__GenerateTrajectory_Event;

// Struct for a sequence of dwb_msgs__srv__GenerateTrajectory_Event.
typedef struct dwb_msgs__srv__GenerateTrajectory_Event__Sequence
{
  dwb_msgs__srv__GenerateTrajectory_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dwb_msgs__srv__GenerateTrajectory_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DWB_MSGS__SRV__DETAIL__GENERATE_TRAJECTORY__STRUCT_H_
