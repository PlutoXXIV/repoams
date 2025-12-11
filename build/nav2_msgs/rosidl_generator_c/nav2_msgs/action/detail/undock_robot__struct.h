// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:action/UndockRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/action/undock_robot.h"


#ifndef NAV2_MSGS__ACTION__DETAIL__UNDOCK_ROBOT__STRUCT_H_
#define NAV2_MSGS__ACTION__DETAIL__UNDOCK_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'dock_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/UndockRobot in the package nav2_msgs.
typedef struct nav2_msgs__action__UndockRobot_Goal
{
  /// If initialized on a dock so the server doesn't know what type of dock its on,
  /// you must specify what dock it is to know where to stage for undocking.
  /// If only one type of dock plugin is present, it is not necessary to set.
  /// If not set & server instance was used to dock, server will use current dock information from last docking request.
  rosidl_runtime_c__String dock_type;
  /// Maximum time to undock
  float max_undocking_time;
} nav2_msgs__action__UndockRobot_Goal;

// Struct for a sequence of nav2_msgs__action__UndockRobot_Goal.
typedef struct nav2_msgs__action__UndockRobot_Goal__Sequence
{
  nav2_msgs__action__UndockRobot_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__UndockRobot_Goal__Sequence;

// Constants defined in the message

/// Constant 'NONE'.
/**
  * Error codes
  * Note: The expected priority order of the errors should match the message order
 */
enum
{
  nav2_msgs__action__UndockRobot_Result__NONE = 0
};

/// Constant 'DOCK_NOT_VALID'.
enum
{
  nav2_msgs__action__UndockRobot_Result__DOCK_NOT_VALID = 902
};

/// Constant 'FAILED_TO_CONTROL'.
enum
{
  nav2_msgs__action__UndockRobot_Result__FAILED_TO_CONTROL = 905
};

/// Constant 'TIMEOUT'.
enum
{
  nav2_msgs__action__UndockRobot_Result__TIMEOUT = 907
};

/// Constant 'UNKNOWN'.
enum
{
  nav2_msgs__action__UndockRobot_Result__UNKNOWN = 999
};

// Include directives for member types
// Member 'error_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/UndockRobot in the package nav2_msgs.
typedef struct nav2_msgs__action__UndockRobot_Result
{
  /// docking success status
  bool success;
  /// Contextual error code, if any
  uint16_t error_code;
  rosidl_runtime_c__String error_msg;
} nav2_msgs__action__UndockRobot_Result;

// Struct for a sequence of nav2_msgs__action__UndockRobot_Result.
typedef struct nav2_msgs__action__UndockRobot_Result__Sequence
{
  nav2_msgs__action__UndockRobot_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__UndockRobot_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/UndockRobot in the package nav2_msgs.
typedef struct nav2_msgs__action__UndockRobot_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} nav2_msgs__action__UndockRobot_Feedback;

// Struct for a sequence of nav2_msgs__action__UndockRobot_Feedback.
typedef struct nav2_msgs__action__UndockRobot_Feedback__Sequence
{
  nav2_msgs__action__UndockRobot_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__UndockRobot_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "nav2_msgs/action/detail/undock_robot__struct.h"

/// Struct defined in action/UndockRobot in the package nav2_msgs.
typedef struct nav2_msgs__action__UndockRobot_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__UndockRobot_Goal goal;
} nav2_msgs__action__UndockRobot_SendGoal_Request;

// Struct for a sequence of nav2_msgs__action__UndockRobot_SendGoal_Request.
typedef struct nav2_msgs__action__UndockRobot_SendGoal_Request__Sequence
{
  nav2_msgs__action__UndockRobot_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__UndockRobot_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/UndockRobot in the package nav2_msgs.
typedef struct nav2_msgs__action__UndockRobot_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} nav2_msgs__action__UndockRobot_SendGoal_Response;

// Struct for a sequence of nav2_msgs__action__UndockRobot_SendGoal_Response.
typedef struct nav2_msgs__action__UndockRobot_SendGoal_Response__Sequence
{
  nav2_msgs__action__UndockRobot_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__UndockRobot_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav2_msgs__action__UndockRobot_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav2_msgs__action__UndockRobot_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/UndockRobot in the package nav2_msgs.
typedef struct nav2_msgs__action__UndockRobot_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav2_msgs__action__UndockRobot_SendGoal_Request__Sequence request;
  nav2_msgs__action__UndockRobot_SendGoal_Response__Sequence response;
} nav2_msgs__action__UndockRobot_SendGoal_Event;

// Struct for a sequence of nav2_msgs__action__UndockRobot_SendGoal_Event.
typedef struct nav2_msgs__action__UndockRobot_SendGoal_Event__Sequence
{
  nav2_msgs__action__UndockRobot_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__UndockRobot_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/UndockRobot in the package nav2_msgs.
typedef struct nav2_msgs__action__UndockRobot_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} nav2_msgs__action__UndockRobot_GetResult_Request;

// Struct for a sequence of nav2_msgs__action__UndockRobot_GetResult_Request.
typedef struct nav2_msgs__action__UndockRobot_GetResult_Request__Sequence
{
  nav2_msgs__action__UndockRobot_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__UndockRobot_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "nav2_msgs/action/detail/undock_robot__struct.h"

/// Struct defined in action/UndockRobot in the package nav2_msgs.
typedef struct nav2_msgs__action__UndockRobot_GetResult_Response
{
  int8_t status;
  nav2_msgs__action__UndockRobot_Result result;
} nav2_msgs__action__UndockRobot_GetResult_Response;

// Struct for a sequence of nav2_msgs__action__UndockRobot_GetResult_Response.
typedef struct nav2_msgs__action__UndockRobot_GetResult_Response__Sequence
{
  nav2_msgs__action__UndockRobot_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__UndockRobot_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav2_msgs__action__UndockRobot_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav2_msgs__action__UndockRobot_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/UndockRobot in the package nav2_msgs.
typedef struct nav2_msgs__action__UndockRobot_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav2_msgs__action__UndockRobot_GetResult_Request__Sequence request;
  nav2_msgs__action__UndockRobot_GetResult_Response__Sequence response;
} nav2_msgs__action__UndockRobot_GetResult_Event;

// Struct for a sequence of nav2_msgs__action__UndockRobot_GetResult_Event.
typedef struct nav2_msgs__action__UndockRobot_GetResult_Event__Sequence
{
  nav2_msgs__action__UndockRobot_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__UndockRobot_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "nav2_msgs/action/detail/undock_robot__struct.h"

/// Struct defined in action/UndockRobot in the package nav2_msgs.
typedef struct nav2_msgs__action__UndockRobot_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__UndockRobot_Feedback feedback;
} nav2_msgs__action__UndockRobot_FeedbackMessage;

// Struct for a sequence of nav2_msgs__action__UndockRobot_FeedbackMessage.
typedef struct nav2_msgs__action__UndockRobot_FeedbackMessage__Sequence
{
  nav2_msgs__action__UndockRobot_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__UndockRobot_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__ACTION__DETAIL__UNDOCK_ROBOT__STRUCT_H_
