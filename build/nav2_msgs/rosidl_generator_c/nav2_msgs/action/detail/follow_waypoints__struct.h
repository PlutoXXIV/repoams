// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:action/FollowWaypoints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/action/follow_waypoints.h"


#ifndef NAV2_MSGS__ACTION__DETAIL__FOLLOW_WAYPOINTS__STRUCT_H_
#define NAV2_MSGS__ACTION__DETAIL__FOLLOW_WAYPOINTS__STRUCT_H_

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

/// Struct defined in action/FollowWaypoints in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowWaypoints_Goal
{
  uint32_t number_of_loops;
  uint32_t goal_index;
  geometry_msgs__msg__PoseStamped__Sequence poses;
} nav2_msgs__action__FollowWaypoints_Goal;

// Struct for a sequence of nav2_msgs__action__FollowWaypoints_Goal.
typedef struct nav2_msgs__action__FollowWaypoints_Goal__Sequence
{
  nav2_msgs__action__FollowWaypoints_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowWaypoints_Goal__Sequence;

// Constants defined in the message

/// Constant 'NONE'.
/**
  * Error codes
  * Note: The expected priority order of the errors should match the message order
 */
enum
{
  nav2_msgs__action__FollowWaypoints_Result__NONE = 0
};

/// Constant 'UNKNOWN'.
enum
{
  nav2_msgs__action__FollowWaypoints_Result__UNKNOWN = 600
};

/// Constant 'TASK_EXECUTOR_FAILED'.
enum
{
  nav2_msgs__action__FollowWaypoints_Result__TASK_EXECUTOR_FAILED = 601
};

/// Constant 'NO_VALID_WAYPOINTS'.
enum
{
  nav2_msgs__action__FollowWaypoints_Result__NO_VALID_WAYPOINTS = 602
};

/// Constant 'STOP_ON_MISSED_WAYPOINT'.
enum
{
  nav2_msgs__action__FollowWaypoints_Result__STOP_ON_MISSED_WAYPOINT = 603
};

// Include directives for member types
// Member 'missed_waypoints'
#include "nav2_msgs/msg/detail/waypoint_status__struct.h"
// Member 'error_msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/FollowWaypoints in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowWaypoints_Result
{
  nav2_msgs__msg__WaypointStatus__Sequence missed_waypoints;
  uint16_t error_code;
  rosidl_runtime_c__String error_msg;
} nav2_msgs__action__FollowWaypoints_Result;

// Struct for a sequence of nav2_msgs__action__FollowWaypoints_Result.
typedef struct nav2_msgs__action__FollowWaypoints_Result__Sequence
{
  nav2_msgs__action__FollowWaypoints_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowWaypoints_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/FollowWaypoints in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowWaypoints_Feedback
{
  uint32_t current_waypoint;
} nav2_msgs__action__FollowWaypoints_Feedback;

// Struct for a sequence of nav2_msgs__action__FollowWaypoints_Feedback.
typedef struct nav2_msgs__action__FollowWaypoints_Feedback__Sequence
{
  nav2_msgs__action__FollowWaypoints_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowWaypoints_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "nav2_msgs/action/detail/follow_waypoints__struct.h"

/// Struct defined in action/FollowWaypoints in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowWaypoints_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__FollowWaypoints_Goal goal;
} nav2_msgs__action__FollowWaypoints_SendGoal_Request;

// Struct for a sequence of nav2_msgs__action__FollowWaypoints_SendGoal_Request.
typedef struct nav2_msgs__action__FollowWaypoints_SendGoal_Request__Sequence
{
  nav2_msgs__action__FollowWaypoints_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowWaypoints_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/FollowWaypoints in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowWaypoints_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} nav2_msgs__action__FollowWaypoints_SendGoal_Response;

// Struct for a sequence of nav2_msgs__action__FollowWaypoints_SendGoal_Response.
typedef struct nav2_msgs__action__FollowWaypoints_SendGoal_Response__Sequence
{
  nav2_msgs__action__FollowWaypoints_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowWaypoints_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav2_msgs__action__FollowWaypoints_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav2_msgs__action__FollowWaypoints_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/FollowWaypoints in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowWaypoints_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav2_msgs__action__FollowWaypoints_SendGoal_Request__Sequence request;
  nav2_msgs__action__FollowWaypoints_SendGoal_Response__Sequence response;
} nav2_msgs__action__FollowWaypoints_SendGoal_Event;

// Struct for a sequence of nav2_msgs__action__FollowWaypoints_SendGoal_Event.
typedef struct nav2_msgs__action__FollowWaypoints_SendGoal_Event__Sequence
{
  nav2_msgs__action__FollowWaypoints_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowWaypoints_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/FollowWaypoints in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowWaypoints_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} nav2_msgs__action__FollowWaypoints_GetResult_Request;

// Struct for a sequence of nav2_msgs__action__FollowWaypoints_GetResult_Request.
typedef struct nav2_msgs__action__FollowWaypoints_GetResult_Request__Sequence
{
  nav2_msgs__action__FollowWaypoints_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowWaypoints_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.h"

/// Struct defined in action/FollowWaypoints in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowWaypoints_GetResult_Response
{
  int8_t status;
  nav2_msgs__action__FollowWaypoints_Result result;
} nav2_msgs__action__FollowWaypoints_GetResult_Response;

// Struct for a sequence of nav2_msgs__action__FollowWaypoints_GetResult_Response.
typedef struct nav2_msgs__action__FollowWaypoints_GetResult_Response__Sequence
{
  nav2_msgs__action__FollowWaypoints_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowWaypoints_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav2_msgs__action__FollowWaypoints_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav2_msgs__action__FollowWaypoints_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/FollowWaypoints in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowWaypoints_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav2_msgs__action__FollowWaypoints_GetResult_Request__Sequence request;
  nav2_msgs__action__FollowWaypoints_GetResult_Response__Sequence response;
} nav2_msgs__action__FollowWaypoints_GetResult_Event;

// Struct for a sequence of nav2_msgs__action__FollowWaypoints_GetResult_Event.
typedef struct nav2_msgs__action__FollowWaypoints_GetResult_Event__Sequence
{
  nav2_msgs__action__FollowWaypoints_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowWaypoints_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.h"

/// Struct defined in action/FollowWaypoints in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowWaypoints_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__FollowWaypoints_Feedback feedback;
} nav2_msgs__action__FollowWaypoints_FeedbackMessage;

// Struct for a sequence of nav2_msgs__action__FollowWaypoints_FeedbackMessage.
typedef struct nav2_msgs__action__FollowWaypoints_FeedbackMessage__Sequence
{
  nav2_msgs__action__FollowWaypoints_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowWaypoints_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__ACTION__DETAIL__FOLLOW_WAYPOINTS__STRUCT_H_
