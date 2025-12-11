// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:action/NavigateToPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/action/navigate_to_pose.h"


#ifndef NAV2_MSGS__ACTION__DETAIL__NAVIGATE_TO_POSE__STRUCT_H_
#define NAV2_MSGS__ACTION__DETAIL__NAVIGATE_TO_POSE__STRUCT_H_

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
// Member 'behavior_tree'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/NavigateToPose in the package nav2_msgs.
typedef struct nav2_msgs__action__NavigateToPose_Goal
{
  geometry_msgs__msg__PoseStamped pose;
  rosidl_runtime_c__String behavior_tree;
} nav2_msgs__action__NavigateToPose_Goal;

// Struct for a sequence of nav2_msgs__action__NavigateToPose_Goal.
typedef struct nav2_msgs__action__NavigateToPose_Goal__Sequence
{
  nav2_msgs__action__NavigateToPose_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__NavigateToPose_Goal__Sequence;

// Constants defined in the message

/// Constant 'NONE'.
/**
  * Error codes
  * Note: The expected priority order of the errors should match the message order
 */
enum
{
  nav2_msgs__action__NavigateToPose_Result__NONE = 0
};

/// Constant 'UNKNOWN'.
enum
{
  nav2_msgs__action__NavigateToPose_Result__UNKNOWN = 9000
};

/// Constant 'FAILED_TO_LOAD_BEHAVIOR_TREE'.
enum
{
  nav2_msgs__action__NavigateToPose_Result__FAILED_TO_LOAD_BEHAVIOR_TREE = 9001
};

/// Constant 'TF_ERROR'.
enum
{
  nav2_msgs__action__NavigateToPose_Result__TF_ERROR = 9002
};

/// Constant 'TIMEOUT'.
enum
{
  nav2_msgs__action__NavigateToPose_Result__TIMEOUT = 9003
};

// Include directives for member types
// Member 'error_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/NavigateToPose in the package nav2_msgs.
typedef struct nav2_msgs__action__NavigateToPose_Result
{
  uint16_t error_code;
  rosidl_runtime_c__String error_msg;
} nav2_msgs__action__NavigateToPose_Result;

// Struct for a sequence of nav2_msgs__action__NavigateToPose_Result.
typedef struct nav2_msgs__action__NavigateToPose_Result__Sequence
{
  nav2_msgs__action__NavigateToPose_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__NavigateToPose_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'current_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'navigation_time'
// Member 'estimated_time_remaining'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/NavigateToPose in the package nav2_msgs.
typedef struct nav2_msgs__action__NavigateToPose_Feedback
{
  geometry_msgs__msg__PoseStamped current_pose;
  builtin_interfaces__msg__Duration navigation_time;
  builtin_interfaces__msg__Duration estimated_time_remaining;
  int16_t number_of_recoveries;
  float distance_remaining;
} nav2_msgs__action__NavigateToPose_Feedback;

// Struct for a sequence of nav2_msgs__action__NavigateToPose_Feedback.
typedef struct nav2_msgs__action__NavigateToPose_Feedback__Sequence
{
  nav2_msgs__action__NavigateToPose_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__NavigateToPose_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "nav2_msgs/action/detail/navigate_to_pose__struct.h"

/// Struct defined in action/NavigateToPose in the package nav2_msgs.
typedef struct nav2_msgs__action__NavigateToPose_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__NavigateToPose_Goal goal;
} nav2_msgs__action__NavigateToPose_SendGoal_Request;

// Struct for a sequence of nav2_msgs__action__NavigateToPose_SendGoal_Request.
typedef struct nav2_msgs__action__NavigateToPose_SendGoal_Request__Sequence
{
  nav2_msgs__action__NavigateToPose_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__NavigateToPose_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/NavigateToPose in the package nav2_msgs.
typedef struct nav2_msgs__action__NavigateToPose_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} nav2_msgs__action__NavigateToPose_SendGoal_Response;

// Struct for a sequence of nav2_msgs__action__NavigateToPose_SendGoal_Response.
typedef struct nav2_msgs__action__NavigateToPose_SendGoal_Response__Sequence
{
  nav2_msgs__action__NavigateToPose_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__NavigateToPose_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav2_msgs__action__NavigateToPose_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav2_msgs__action__NavigateToPose_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/NavigateToPose in the package nav2_msgs.
typedef struct nav2_msgs__action__NavigateToPose_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav2_msgs__action__NavigateToPose_SendGoal_Request__Sequence request;
  nav2_msgs__action__NavigateToPose_SendGoal_Response__Sequence response;
} nav2_msgs__action__NavigateToPose_SendGoal_Event;

// Struct for a sequence of nav2_msgs__action__NavigateToPose_SendGoal_Event.
typedef struct nav2_msgs__action__NavigateToPose_SendGoal_Event__Sequence
{
  nav2_msgs__action__NavigateToPose_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__NavigateToPose_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/NavigateToPose in the package nav2_msgs.
typedef struct nav2_msgs__action__NavigateToPose_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} nav2_msgs__action__NavigateToPose_GetResult_Request;

// Struct for a sequence of nav2_msgs__action__NavigateToPose_GetResult_Request.
typedef struct nav2_msgs__action__NavigateToPose_GetResult_Request__Sequence
{
  nav2_msgs__action__NavigateToPose_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__NavigateToPose_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "nav2_msgs/action/detail/navigate_to_pose__struct.h"

/// Struct defined in action/NavigateToPose in the package nav2_msgs.
typedef struct nav2_msgs__action__NavigateToPose_GetResult_Response
{
  int8_t status;
  nav2_msgs__action__NavigateToPose_Result result;
} nav2_msgs__action__NavigateToPose_GetResult_Response;

// Struct for a sequence of nav2_msgs__action__NavigateToPose_GetResult_Response.
typedef struct nav2_msgs__action__NavigateToPose_GetResult_Response__Sequence
{
  nav2_msgs__action__NavigateToPose_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__NavigateToPose_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav2_msgs__action__NavigateToPose_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav2_msgs__action__NavigateToPose_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/NavigateToPose in the package nav2_msgs.
typedef struct nav2_msgs__action__NavigateToPose_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav2_msgs__action__NavigateToPose_GetResult_Request__Sequence request;
  nav2_msgs__action__NavigateToPose_GetResult_Response__Sequence response;
} nav2_msgs__action__NavigateToPose_GetResult_Event;

// Struct for a sequence of nav2_msgs__action__NavigateToPose_GetResult_Event.
typedef struct nav2_msgs__action__NavigateToPose_GetResult_Event__Sequence
{
  nav2_msgs__action__NavigateToPose_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__NavigateToPose_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "nav2_msgs/action/detail/navigate_to_pose__struct.h"

/// Struct defined in action/NavigateToPose in the package nav2_msgs.
typedef struct nav2_msgs__action__NavigateToPose_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__NavigateToPose_Feedback feedback;
} nav2_msgs__action__NavigateToPose_FeedbackMessage;

// Struct for a sequence of nav2_msgs__action__NavigateToPose_FeedbackMessage.
typedef struct nav2_msgs__action__NavigateToPose_FeedbackMessage__Sequence
{
  nav2_msgs__action__NavigateToPose_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__NavigateToPose_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__ACTION__DETAIL__NAVIGATE_TO_POSE__STRUCT_H_
