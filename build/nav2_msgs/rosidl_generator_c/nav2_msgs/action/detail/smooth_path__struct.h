// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:action/SmoothPath.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/action/smooth_path.h"


#ifndef NAV2_MSGS__ACTION__DETAIL__SMOOTH_PATH__STRUCT_H_
#define NAV2_MSGS__ACTION__DETAIL__SMOOTH_PATH__STRUCT_H_

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
// Member 'smoother_id'
#include "rosidl_runtime_c/string.h"
// Member 'max_smoothing_duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/SmoothPath in the package nav2_msgs.
typedef struct nav2_msgs__action__SmoothPath_Goal
{
  nav_msgs__msg__Path path;
  rosidl_runtime_c__String smoother_id;
  builtin_interfaces__msg__Duration max_smoothing_duration;
  bool check_for_collisions;
} nav2_msgs__action__SmoothPath_Goal;

// Struct for a sequence of nav2_msgs__action__SmoothPath_Goal.
typedef struct nav2_msgs__action__SmoothPath_Goal__Sequence
{
  nav2_msgs__action__SmoothPath_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__SmoothPath_Goal__Sequence;

// Constants defined in the message

/// Constant 'NONE'.
/**
  * Error codes
  * Note: The expected priority order of the errors should match the message order
 */
enum
{
  nav2_msgs__action__SmoothPath_Result__NONE = 0
};

/// Constant 'UNKNOWN'.
enum
{
  nav2_msgs__action__SmoothPath_Result__UNKNOWN = 500
};

/// Constant 'INVALID_SMOOTHER'.
enum
{
  nav2_msgs__action__SmoothPath_Result__INVALID_SMOOTHER = 501
};

/// Constant 'TIMEOUT'.
enum
{
  nav2_msgs__action__SmoothPath_Result__TIMEOUT = 502
};

/// Constant 'SMOOTHED_PATH_IN_COLLISION'.
enum
{
  nav2_msgs__action__SmoothPath_Result__SMOOTHED_PATH_IN_COLLISION = 503
};

/// Constant 'FAILED_TO_SMOOTH_PATH'.
enum
{
  nav2_msgs__action__SmoothPath_Result__FAILED_TO_SMOOTH_PATH = 504
};

/// Constant 'INVALID_PATH'.
enum
{
  nav2_msgs__action__SmoothPath_Result__INVALID_PATH = 505
};

// Include directives for member types
// Member 'path'
// already included above
// #include "nav_msgs/msg/detail/path__struct.h"
// Member 'smoothing_duration'
// already included above
// #include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'error_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/SmoothPath in the package nav2_msgs.
typedef struct nav2_msgs__action__SmoothPath_Result
{
  nav_msgs__msg__Path path;
  builtin_interfaces__msg__Duration smoothing_duration;
  bool was_completed;
  uint16_t error_code;
  rosidl_runtime_c__String error_msg;
} nav2_msgs__action__SmoothPath_Result;

// Struct for a sequence of nav2_msgs__action__SmoothPath_Result.
typedef struct nav2_msgs__action__SmoothPath_Result__Sequence
{
  nav2_msgs__action__SmoothPath_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__SmoothPath_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/SmoothPath in the package nav2_msgs.
typedef struct nav2_msgs__action__SmoothPath_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} nav2_msgs__action__SmoothPath_Feedback;

// Struct for a sequence of nav2_msgs__action__SmoothPath_Feedback.
typedef struct nav2_msgs__action__SmoothPath_Feedback__Sequence
{
  nav2_msgs__action__SmoothPath_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__SmoothPath_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "nav2_msgs/action/detail/smooth_path__struct.h"

/// Struct defined in action/SmoothPath in the package nav2_msgs.
typedef struct nav2_msgs__action__SmoothPath_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__SmoothPath_Goal goal;
} nav2_msgs__action__SmoothPath_SendGoal_Request;

// Struct for a sequence of nav2_msgs__action__SmoothPath_SendGoal_Request.
typedef struct nav2_msgs__action__SmoothPath_SendGoal_Request__Sequence
{
  nav2_msgs__action__SmoothPath_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__SmoothPath_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SmoothPath in the package nav2_msgs.
typedef struct nav2_msgs__action__SmoothPath_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} nav2_msgs__action__SmoothPath_SendGoal_Response;

// Struct for a sequence of nav2_msgs__action__SmoothPath_SendGoal_Response.
typedef struct nav2_msgs__action__SmoothPath_SendGoal_Response__Sequence
{
  nav2_msgs__action__SmoothPath_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__SmoothPath_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav2_msgs__action__SmoothPath_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav2_msgs__action__SmoothPath_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/SmoothPath in the package nav2_msgs.
typedef struct nav2_msgs__action__SmoothPath_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav2_msgs__action__SmoothPath_SendGoal_Request__Sequence request;
  nav2_msgs__action__SmoothPath_SendGoal_Response__Sequence response;
} nav2_msgs__action__SmoothPath_SendGoal_Event;

// Struct for a sequence of nav2_msgs__action__SmoothPath_SendGoal_Event.
typedef struct nav2_msgs__action__SmoothPath_SendGoal_Event__Sequence
{
  nav2_msgs__action__SmoothPath_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__SmoothPath_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SmoothPath in the package nav2_msgs.
typedef struct nav2_msgs__action__SmoothPath_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} nav2_msgs__action__SmoothPath_GetResult_Request;

// Struct for a sequence of nav2_msgs__action__SmoothPath_GetResult_Request.
typedef struct nav2_msgs__action__SmoothPath_GetResult_Request__Sequence
{
  nav2_msgs__action__SmoothPath_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__SmoothPath_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "nav2_msgs/action/detail/smooth_path__struct.h"

/// Struct defined in action/SmoothPath in the package nav2_msgs.
typedef struct nav2_msgs__action__SmoothPath_GetResult_Response
{
  int8_t status;
  nav2_msgs__action__SmoothPath_Result result;
} nav2_msgs__action__SmoothPath_GetResult_Response;

// Struct for a sequence of nav2_msgs__action__SmoothPath_GetResult_Response.
typedef struct nav2_msgs__action__SmoothPath_GetResult_Response__Sequence
{
  nav2_msgs__action__SmoothPath_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__SmoothPath_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav2_msgs__action__SmoothPath_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav2_msgs__action__SmoothPath_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/SmoothPath in the package nav2_msgs.
typedef struct nav2_msgs__action__SmoothPath_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav2_msgs__action__SmoothPath_GetResult_Request__Sequence request;
  nav2_msgs__action__SmoothPath_GetResult_Response__Sequence response;
} nav2_msgs__action__SmoothPath_GetResult_Event;

// Struct for a sequence of nav2_msgs__action__SmoothPath_GetResult_Event.
typedef struct nav2_msgs__action__SmoothPath_GetResult_Event__Sequence
{
  nav2_msgs__action__SmoothPath_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__SmoothPath_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "nav2_msgs/action/detail/smooth_path__struct.h"

/// Struct defined in action/SmoothPath in the package nav2_msgs.
typedef struct nav2_msgs__action__SmoothPath_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__SmoothPath_Feedback feedback;
} nav2_msgs__action__SmoothPath_FeedbackMessage;

// Struct for a sequence of nav2_msgs__action__SmoothPath_FeedbackMessage.
typedef struct nav2_msgs__action__SmoothPath_FeedbackMessage__Sequence
{
  nav2_msgs__action__SmoothPath_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__SmoothPath_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__ACTION__DETAIL__SMOOTH_PATH__STRUCT_H_
