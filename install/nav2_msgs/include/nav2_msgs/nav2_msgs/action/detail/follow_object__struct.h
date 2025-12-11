// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:action/FollowObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/action/follow_object.h"


#ifndef NAV2_MSGS__ACTION__DETAIL__FOLLOW_OBJECT__STRUCT_H_
#define NAV2_MSGS__ACTION__DETAIL__FOLLOW_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose_topic'
// Member 'tracked_frame'
#include "rosidl_runtime_c/string.h"
// Member 'max_duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/FollowObject in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowObject_Goal
{
  /// Topic to publish the pose of the object to follow
  rosidl_runtime_c__String pose_topic;
  /// Target frame to follow (Optional, used if pose_topic is not set)
  rosidl_runtime_c__String tracked_frame;
  builtin_interfaces__msg__Duration max_duration;
} nav2_msgs__action__FollowObject_Goal;

// Struct for a sequence of nav2_msgs__action__FollowObject_Goal.
typedef struct nav2_msgs__action__FollowObject_Goal__Sequence
{
  nav2_msgs__action__FollowObject_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowObject_Goal__Sequence;

// Constants defined in the message

/// Constant 'NONE'.
/**
  * Error codes
  * Note: The expected priority order of the errors should match the message order
 */
enum
{
  nav2_msgs__action__FollowObject_Result__NONE = 0
};

/// Constant 'TF_ERROR'.
enum
{
  nav2_msgs__action__FollowObject_Result__TF_ERROR = 901
};

/// Constant 'FAILED_TO_DETECT_OBJECT'.
enum
{
  nav2_msgs__action__FollowObject_Result__FAILED_TO_DETECT_OBJECT = 902
};

/// Constant 'FAILED_TO_CONTROL'.
enum
{
  nav2_msgs__action__FollowObject_Result__FAILED_TO_CONTROL = 903
};

/// Constant 'UNKNOWN'.
enum
{
  nav2_msgs__action__FollowObject_Result__UNKNOWN = 999
};

// Include directives for member types
// Member 'total_elapsed_time'
// already included above
// #include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'error_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/FollowObject in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowObject_Result
{
  builtin_interfaces__msg__Duration total_elapsed_time;
  /// Contextual error code, if any
  uint16_t error_code;
  /// Number of retries attempted
  uint16_t num_retries;
  /// Error message, if any
  rosidl_runtime_c__String error_msg;
} nav2_msgs__action__FollowObject_Result;

// Struct for a sequence of nav2_msgs__action__FollowObject_Result.
typedef struct nav2_msgs__action__FollowObject_Result__Sequence
{
  nav2_msgs__action__FollowObject_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowObject_Result__Sequence;

// Constants defined in the message

/// Constant 'NONE'.
enum
{
  nav2_msgs__action__FollowObject_Feedback__NONE = 0
};

/// Constant 'INITIAL_PERCEPTION'.
enum
{
  nav2_msgs__action__FollowObject_Feedback__INITIAL_PERCEPTION = 1
};

/// Constant 'CONTROLLING'.
enum
{
  nav2_msgs__action__FollowObject_Feedback__CONTROLLING = 2
};

/// Constant 'STOPPING'.
enum
{
  nav2_msgs__action__FollowObject_Feedback__STOPPING = 3
};

/// Constant 'RETRY'.
enum
{
  nav2_msgs__action__FollowObject_Feedback__RETRY = 4
};

// Include directives for member types
// Member 'following_time'
// already included above
// #include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/FollowObject in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowObject_Feedback
{
  /// Current following state
  uint16_t state;
  builtin_interfaces__msg__Duration following_time;
  /// Number of retries attempted
  uint16_t num_retries;
} nav2_msgs__action__FollowObject_Feedback;

// Struct for a sequence of nav2_msgs__action__FollowObject_Feedback.
typedef struct nav2_msgs__action__FollowObject_Feedback__Sequence
{
  nav2_msgs__action__FollowObject_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowObject_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "nav2_msgs/action/detail/follow_object__struct.h"

/// Struct defined in action/FollowObject in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowObject_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__FollowObject_Goal goal;
} nav2_msgs__action__FollowObject_SendGoal_Request;

// Struct for a sequence of nav2_msgs__action__FollowObject_SendGoal_Request.
typedef struct nav2_msgs__action__FollowObject_SendGoal_Request__Sequence
{
  nav2_msgs__action__FollowObject_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowObject_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/FollowObject in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowObject_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} nav2_msgs__action__FollowObject_SendGoal_Response;

// Struct for a sequence of nav2_msgs__action__FollowObject_SendGoal_Response.
typedef struct nav2_msgs__action__FollowObject_SendGoal_Response__Sequence
{
  nav2_msgs__action__FollowObject_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowObject_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav2_msgs__action__FollowObject_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav2_msgs__action__FollowObject_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/FollowObject in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowObject_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav2_msgs__action__FollowObject_SendGoal_Request__Sequence request;
  nav2_msgs__action__FollowObject_SendGoal_Response__Sequence response;
} nav2_msgs__action__FollowObject_SendGoal_Event;

// Struct for a sequence of nav2_msgs__action__FollowObject_SendGoal_Event.
typedef struct nav2_msgs__action__FollowObject_SendGoal_Event__Sequence
{
  nav2_msgs__action__FollowObject_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowObject_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/FollowObject in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowObject_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} nav2_msgs__action__FollowObject_GetResult_Request;

// Struct for a sequence of nav2_msgs__action__FollowObject_GetResult_Request.
typedef struct nav2_msgs__action__FollowObject_GetResult_Request__Sequence
{
  nav2_msgs__action__FollowObject_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowObject_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "nav2_msgs/action/detail/follow_object__struct.h"

/// Struct defined in action/FollowObject in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowObject_GetResult_Response
{
  int8_t status;
  nav2_msgs__action__FollowObject_Result result;
} nav2_msgs__action__FollowObject_GetResult_Response;

// Struct for a sequence of nav2_msgs__action__FollowObject_GetResult_Response.
typedef struct nav2_msgs__action__FollowObject_GetResult_Response__Sequence
{
  nav2_msgs__action__FollowObject_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowObject_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav2_msgs__action__FollowObject_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav2_msgs__action__FollowObject_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/FollowObject in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowObject_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav2_msgs__action__FollowObject_GetResult_Request__Sequence request;
  nav2_msgs__action__FollowObject_GetResult_Response__Sequence response;
} nav2_msgs__action__FollowObject_GetResult_Event;

// Struct for a sequence of nav2_msgs__action__FollowObject_GetResult_Event.
typedef struct nav2_msgs__action__FollowObject_GetResult_Event__Sequence
{
  nav2_msgs__action__FollowObject_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowObject_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "nav2_msgs/action/detail/follow_object__struct.h"

/// Struct defined in action/FollowObject in the package nav2_msgs.
typedef struct nav2_msgs__action__FollowObject_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__FollowObject_Feedback feedback;
} nav2_msgs__action__FollowObject_FeedbackMessage;

// Struct for a sequence of nav2_msgs__action__FollowObject_FeedbackMessage.
typedef struct nav2_msgs__action__FollowObject_FeedbackMessage__Sequence
{
  nav2_msgs__action__FollowObject_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__FollowObject_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__ACTION__DETAIL__FOLLOW_OBJECT__STRUCT_H_
