// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:action/DummyBehavior.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/action/dummy_behavior.h"


#ifndef NAV2_MSGS__ACTION__DETAIL__DUMMY_BEHAVIOR__STRUCT_H_
#define NAV2_MSGS__ACTION__DETAIL__DUMMY_BEHAVIOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in action/DummyBehavior in the package nav2_msgs.
typedef struct nav2_msgs__action__DummyBehavior_Goal
{
  std_msgs__msg__String command;
} nav2_msgs__action__DummyBehavior_Goal;

// Struct for a sequence of nav2_msgs__action__DummyBehavior_Goal.
typedef struct nav2_msgs__action__DummyBehavior_Goal__Sequence
{
  nav2_msgs__action__DummyBehavior_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DummyBehavior_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'total_elapsed_time'
#include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'error_msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/DummyBehavior in the package nav2_msgs.
typedef struct nav2_msgs__action__DummyBehavior_Result
{
  builtin_interfaces__msg__Duration total_elapsed_time;
  uint16_t error_code;
  rosidl_runtime_c__String error_msg;
} nav2_msgs__action__DummyBehavior_Result;

// Struct for a sequence of nav2_msgs__action__DummyBehavior_Result.
typedef struct nav2_msgs__action__DummyBehavior_Result__Sequence
{
  nav2_msgs__action__DummyBehavior_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DummyBehavior_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/DummyBehavior in the package nav2_msgs.
typedef struct nav2_msgs__action__DummyBehavior_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} nav2_msgs__action__DummyBehavior_Feedback;

// Struct for a sequence of nav2_msgs__action__DummyBehavior_Feedback.
typedef struct nav2_msgs__action__DummyBehavior_Feedback__Sequence
{
  nav2_msgs__action__DummyBehavior_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DummyBehavior_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "nav2_msgs/action/detail/dummy_behavior__struct.h"

/// Struct defined in action/DummyBehavior in the package nav2_msgs.
typedef struct nav2_msgs__action__DummyBehavior_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__DummyBehavior_Goal goal;
} nav2_msgs__action__DummyBehavior_SendGoal_Request;

// Struct for a sequence of nav2_msgs__action__DummyBehavior_SendGoal_Request.
typedef struct nav2_msgs__action__DummyBehavior_SendGoal_Request__Sequence
{
  nav2_msgs__action__DummyBehavior_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DummyBehavior_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/DummyBehavior in the package nav2_msgs.
typedef struct nav2_msgs__action__DummyBehavior_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} nav2_msgs__action__DummyBehavior_SendGoal_Response;

// Struct for a sequence of nav2_msgs__action__DummyBehavior_SendGoal_Response.
typedef struct nav2_msgs__action__DummyBehavior_SendGoal_Response__Sequence
{
  nav2_msgs__action__DummyBehavior_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DummyBehavior_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav2_msgs__action__DummyBehavior_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav2_msgs__action__DummyBehavior_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/DummyBehavior in the package nav2_msgs.
typedef struct nav2_msgs__action__DummyBehavior_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav2_msgs__action__DummyBehavior_SendGoal_Request__Sequence request;
  nav2_msgs__action__DummyBehavior_SendGoal_Response__Sequence response;
} nav2_msgs__action__DummyBehavior_SendGoal_Event;

// Struct for a sequence of nav2_msgs__action__DummyBehavior_SendGoal_Event.
typedef struct nav2_msgs__action__DummyBehavior_SendGoal_Event__Sequence
{
  nav2_msgs__action__DummyBehavior_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DummyBehavior_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/DummyBehavior in the package nav2_msgs.
typedef struct nav2_msgs__action__DummyBehavior_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} nav2_msgs__action__DummyBehavior_GetResult_Request;

// Struct for a sequence of nav2_msgs__action__DummyBehavior_GetResult_Request.
typedef struct nav2_msgs__action__DummyBehavior_GetResult_Request__Sequence
{
  nav2_msgs__action__DummyBehavior_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DummyBehavior_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__struct.h"

/// Struct defined in action/DummyBehavior in the package nav2_msgs.
typedef struct nav2_msgs__action__DummyBehavior_GetResult_Response
{
  int8_t status;
  nav2_msgs__action__DummyBehavior_Result result;
} nav2_msgs__action__DummyBehavior_GetResult_Response;

// Struct for a sequence of nav2_msgs__action__DummyBehavior_GetResult_Response.
typedef struct nav2_msgs__action__DummyBehavior_GetResult_Response__Sequence
{
  nav2_msgs__action__DummyBehavior_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DummyBehavior_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav2_msgs__action__DummyBehavior_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav2_msgs__action__DummyBehavior_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/DummyBehavior in the package nav2_msgs.
typedef struct nav2_msgs__action__DummyBehavior_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav2_msgs__action__DummyBehavior_GetResult_Request__Sequence request;
  nav2_msgs__action__DummyBehavior_GetResult_Response__Sequence response;
} nav2_msgs__action__DummyBehavior_GetResult_Event;

// Struct for a sequence of nav2_msgs__action__DummyBehavior_GetResult_Event.
typedef struct nav2_msgs__action__DummyBehavior_GetResult_Event__Sequence
{
  nav2_msgs__action__DummyBehavior_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DummyBehavior_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__struct.h"

/// Struct defined in action/DummyBehavior in the package nav2_msgs.
typedef struct nav2_msgs__action__DummyBehavior_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__DummyBehavior_Feedback feedback;
} nav2_msgs__action__DummyBehavior_FeedbackMessage;

// Struct for a sequence of nav2_msgs__action__DummyBehavior_FeedbackMessage.
typedef struct nav2_msgs__action__DummyBehavior_FeedbackMessage__Sequence
{
  nav2_msgs__action__DummyBehavior_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DummyBehavior_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__ACTION__DETAIL__DUMMY_BEHAVIOR__STRUCT_H_
