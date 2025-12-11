// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:action/ComputePathThroughPoses.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/action/compute_path_through_poses.h"


#ifndef NAV2_MSGS__ACTION__DETAIL__COMPUTE_PATH_THROUGH_POSES__STRUCT_H_
#define NAV2_MSGS__ACTION__DETAIL__COMPUTE_PATH_THROUGH_POSES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goals'
#include "nav_msgs/msg/detail/goals__struct.h"
// Member 'start'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'planner_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ComputePathThroughPoses in the package nav2_msgs.
typedef struct nav2_msgs__action__ComputePathThroughPoses_Goal
{
  nav_msgs__msg__Goals goals;
  geometry_msgs__msg__PoseStamped start;
  rosidl_runtime_c__String planner_id;
  /// If false, use current robot pose as path start, if true, use start above instead
  bool use_start;
} nav2_msgs__action__ComputePathThroughPoses_Goal;

// Struct for a sequence of nav2_msgs__action__ComputePathThroughPoses_Goal.
typedef struct nav2_msgs__action__ComputePathThroughPoses_Goal__Sequence
{
  nav2_msgs__action__ComputePathThroughPoses_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__ComputePathThroughPoses_Goal__Sequence;

// Constants defined in the message

/// Constant 'ALL_GOALS'.
/**
  * last reached index enum for all goals reached
 */
enum
{
  nav2_msgs__action__ComputePathThroughPoses_Result__ALL_GOALS = -1
};

/// Constant 'NONE'.
/**
  * Error codes
  * Note: The expected priority order of the errors should match the message order
 */
enum
{
  nav2_msgs__action__ComputePathThroughPoses_Result__NONE = 0
};

/// Constant 'UNKNOWN'.
enum
{
  nav2_msgs__action__ComputePathThroughPoses_Result__UNKNOWN = 300
};

/// Constant 'INVALID_PLANNER'.
enum
{
  nav2_msgs__action__ComputePathThroughPoses_Result__INVALID_PLANNER = 301
};

/// Constant 'TF_ERROR'.
enum
{
  nav2_msgs__action__ComputePathThroughPoses_Result__TF_ERROR = 302
};

/// Constant 'START_OUTSIDE_MAP'.
enum
{
  nav2_msgs__action__ComputePathThroughPoses_Result__START_OUTSIDE_MAP = 303
};

/// Constant 'GOAL_OUTSIDE_MAP'.
enum
{
  nav2_msgs__action__ComputePathThroughPoses_Result__GOAL_OUTSIDE_MAP = 304
};

/// Constant 'START_OCCUPIED'.
enum
{
  nav2_msgs__action__ComputePathThroughPoses_Result__START_OCCUPIED = 305
};

/// Constant 'GOAL_OCCUPIED'.
enum
{
  nav2_msgs__action__ComputePathThroughPoses_Result__GOAL_OCCUPIED = 306
};

/// Constant 'TIMEOUT'.
enum
{
  nav2_msgs__action__ComputePathThroughPoses_Result__TIMEOUT = 307
};

/// Constant 'NO_VALID_PATH'.
enum
{
  nav2_msgs__action__ComputePathThroughPoses_Result__NO_VALID_PATH = 308
};

/// Constant 'NO_VIAPOINTS_GIVEN'.
enum
{
  nav2_msgs__action__ComputePathThroughPoses_Result__NO_VIAPOINTS_GIVEN = 309
};

// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__struct.h"
// Member 'planning_time'
#include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'error_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ComputePathThroughPoses in the package nav2_msgs.
typedef struct nav2_msgs__action__ComputePathThroughPoses_Result
{
  nav_msgs__msg__Path path;
  int16_t last_reached_index;
  builtin_interfaces__msg__Duration planning_time;
  uint16_t error_code;
  rosidl_runtime_c__String error_msg;
} nav2_msgs__action__ComputePathThroughPoses_Result;

// Struct for a sequence of nav2_msgs__action__ComputePathThroughPoses_Result.
typedef struct nav2_msgs__action__ComputePathThroughPoses_Result__Sequence
{
  nav2_msgs__action__ComputePathThroughPoses_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__ComputePathThroughPoses_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/ComputePathThroughPoses in the package nav2_msgs.
typedef struct nav2_msgs__action__ComputePathThroughPoses_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} nav2_msgs__action__ComputePathThroughPoses_Feedback;

// Struct for a sequence of nav2_msgs__action__ComputePathThroughPoses_Feedback.
typedef struct nav2_msgs__action__ComputePathThroughPoses_Feedback__Sequence
{
  nav2_msgs__action__ComputePathThroughPoses_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__ComputePathThroughPoses_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "nav2_msgs/action/detail/compute_path_through_poses__struct.h"

/// Struct defined in action/ComputePathThroughPoses in the package nav2_msgs.
typedef struct nav2_msgs__action__ComputePathThroughPoses_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__ComputePathThroughPoses_Goal goal;
} nav2_msgs__action__ComputePathThroughPoses_SendGoal_Request;

// Struct for a sequence of nav2_msgs__action__ComputePathThroughPoses_SendGoal_Request.
typedef struct nav2_msgs__action__ComputePathThroughPoses_SendGoal_Request__Sequence
{
  nav2_msgs__action__ComputePathThroughPoses_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__ComputePathThroughPoses_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ComputePathThroughPoses in the package nav2_msgs.
typedef struct nav2_msgs__action__ComputePathThroughPoses_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} nav2_msgs__action__ComputePathThroughPoses_SendGoal_Response;

// Struct for a sequence of nav2_msgs__action__ComputePathThroughPoses_SendGoal_Response.
typedef struct nav2_msgs__action__ComputePathThroughPoses_SendGoal_Response__Sequence
{
  nav2_msgs__action__ComputePathThroughPoses_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__ComputePathThroughPoses_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav2_msgs__action__ComputePathThroughPoses_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav2_msgs__action__ComputePathThroughPoses_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ComputePathThroughPoses in the package nav2_msgs.
typedef struct nav2_msgs__action__ComputePathThroughPoses_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav2_msgs__action__ComputePathThroughPoses_SendGoal_Request__Sequence request;
  nav2_msgs__action__ComputePathThroughPoses_SendGoal_Response__Sequence response;
} nav2_msgs__action__ComputePathThroughPoses_SendGoal_Event;

// Struct for a sequence of nav2_msgs__action__ComputePathThroughPoses_SendGoal_Event.
typedef struct nav2_msgs__action__ComputePathThroughPoses_SendGoal_Event__Sequence
{
  nav2_msgs__action__ComputePathThroughPoses_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__ComputePathThroughPoses_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ComputePathThroughPoses in the package nav2_msgs.
typedef struct nav2_msgs__action__ComputePathThroughPoses_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} nav2_msgs__action__ComputePathThroughPoses_GetResult_Request;

// Struct for a sequence of nav2_msgs__action__ComputePathThroughPoses_GetResult_Request.
typedef struct nav2_msgs__action__ComputePathThroughPoses_GetResult_Request__Sequence
{
  nav2_msgs__action__ComputePathThroughPoses_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__ComputePathThroughPoses_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "nav2_msgs/action/detail/compute_path_through_poses__struct.h"

/// Struct defined in action/ComputePathThroughPoses in the package nav2_msgs.
typedef struct nav2_msgs__action__ComputePathThroughPoses_GetResult_Response
{
  int8_t status;
  nav2_msgs__action__ComputePathThroughPoses_Result result;
} nav2_msgs__action__ComputePathThroughPoses_GetResult_Response;

// Struct for a sequence of nav2_msgs__action__ComputePathThroughPoses_GetResult_Response.
typedef struct nav2_msgs__action__ComputePathThroughPoses_GetResult_Response__Sequence
{
  nav2_msgs__action__ComputePathThroughPoses_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__ComputePathThroughPoses_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav2_msgs__action__ComputePathThroughPoses_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav2_msgs__action__ComputePathThroughPoses_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ComputePathThroughPoses in the package nav2_msgs.
typedef struct nav2_msgs__action__ComputePathThroughPoses_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav2_msgs__action__ComputePathThroughPoses_GetResult_Request__Sequence request;
  nav2_msgs__action__ComputePathThroughPoses_GetResult_Response__Sequence response;
} nav2_msgs__action__ComputePathThroughPoses_GetResult_Event;

// Struct for a sequence of nav2_msgs__action__ComputePathThroughPoses_GetResult_Event.
typedef struct nav2_msgs__action__ComputePathThroughPoses_GetResult_Event__Sequence
{
  nav2_msgs__action__ComputePathThroughPoses_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__ComputePathThroughPoses_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "nav2_msgs/action/detail/compute_path_through_poses__struct.h"

/// Struct defined in action/ComputePathThroughPoses in the package nav2_msgs.
typedef struct nav2_msgs__action__ComputePathThroughPoses_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__ComputePathThroughPoses_Feedback feedback;
} nav2_msgs__action__ComputePathThroughPoses_FeedbackMessage;

// Struct for a sequence of nav2_msgs__action__ComputePathThroughPoses_FeedbackMessage.
typedef struct nav2_msgs__action__ComputePathThroughPoses_FeedbackMessage__Sequence
{
  nav2_msgs__action__ComputePathThroughPoses_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__ComputePathThroughPoses_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__ACTION__DETAIL__COMPUTE_PATH_THROUGH_POSES__STRUCT_H_
