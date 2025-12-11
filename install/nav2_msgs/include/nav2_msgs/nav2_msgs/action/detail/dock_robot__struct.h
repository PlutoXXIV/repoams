// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:action/DockRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/action/dock_robot.h"


#ifndef NAV2_MSGS__ACTION__DETAIL__DOCK_ROBOT__STRUCT_H_
#define NAV2_MSGS__ACTION__DETAIL__DOCK_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'dock_id'
// Member 'dock_type'
#include "rosidl_runtime_c/string.h"
// Member 'dock_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in action/DockRobot in the package nav2_msgs.
typedef struct nav2_msgs__action__DockRobot_Goal
{
  /// Whether to use the dock_id or dock_pose fields
  bool use_dock_id;
  /// Dock name or ID to dock at, from given dock database
  rosidl_runtime_c__String dock_id;
  /// Dock pose
  geometry_msgs__msg__PoseStamped dock_pose;
  /// If using dock_pose, what type of dock it is. Not necessary if only using one type of dock.
  rosidl_runtime_c__String dock_type;
  /// Maximum time for navigation to get to the dock's staging pose.
  float max_staging_time;
  /// Whether or not to navigate to staging pose or assume robot is already at staging pose within tolerance to execute behavior
  bool navigate_to_staging_pose;
} nav2_msgs__action__DockRobot_Goal;

// Struct for a sequence of nav2_msgs__action__DockRobot_Goal.
typedef struct nav2_msgs__action__DockRobot_Goal__Sequence
{
  nav2_msgs__action__DockRobot_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DockRobot_Goal__Sequence;

// Constants defined in the message

/// Constant 'NONE'.
/**
  * Error codes
  * Note: The expected priority order of the errors should match the message order
 */
enum
{
  nav2_msgs__action__DockRobot_Result__NONE = 0
};

/// Constant 'DOCK_NOT_IN_DB'.
enum
{
  nav2_msgs__action__DockRobot_Result__DOCK_NOT_IN_DB = 901
};

/// Constant 'DOCK_NOT_VALID'.
enum
{
  nav2_msgs__action__DockRobot_Result__DOCK_NOT_VALID = 902
};

/// Constant 'FAILED_TO_STAGE'.
enum
{
  nav2_msgs__action__DockRobot_Result__FAILED_TO_STAGE = 903
};

/// Constant 'FAILED_TO_DETECT_DOCK'.
enum
{
  nav2_msgs__action__DockRobot_Result__FAILED_TO_DETECT_DOCK = 904
};

/// Constant 'FAILED_TO_CONTROL'.
enum
{
  nav2_msgs__action__DockRobot_Result__FAILED_TO_CONTROL = 905
};

/// Constant 'FAILED_TO_CHARGE'.
enum
{
  nav2_msgs__action__DockRobot_Result__FAILED_TO_CHARGE = 906
};

/// Constant 'TIMEOUT'.
enum
{
  nav2_msgs__action__DockRobot_Result__TIMEOUT = 907
};

/// Constant 'UNKNOWN'.
enum
{
  nav2_msgs__action__DockRobot_Result__UNKNOWN = 999
};

// Include directives for member types
// Member 'error_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/DockRobot in the package nav2_msgs.
typedef struct nav2_msgs__action__DockRobot_Result
{
  /// docking success status
  bool success;
  /// Contextual error code, if any
  uint16_t error_code;
  /// Number of retries attempted
  uint16_t num_retries;
  rosidl_runtime_c__String error_msg;
} nav2_msgs__action__DockRobot_Result;

// Struct for a sequence of nav2_msgs__action__DockRobot_Result.
typedef struct nav2_msgs__action__DockRobot_Result__Sequence
{
  nav2_msgs__action__DockRobot_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DockRobot_Result__Sequence;

// Constants defined in the message

/// Constant 'NONE'.
enum
{
  nav2_msgs__action__DockRobot_Feedback__NONE = 0
};

/// Constant 'NAV_TO_STAGING_POSE'.
enum
{
  nav2_msgs__action__DockRobot_Feedback__NAV_TO_STAGING_POSE = 1
};

/// Constant 'INITIAL_PERCEPTION'.
enum
{
  nav2_msgs__action__DockRobot_Feedback__INITIAL_PERCEPTION = 2
};

/// Constant 'CONTROLLING'.
enum
{
  nav2_msgs__action__DockRobot_Feedback__CONTROLLING = 3
};

/// Constant 'WAIT_FOR_CHARGE'.
enum
{
  nav2_msgs__action__DockRobot_Feedback__WAIT_FOR_CHARGE = 4
};

/// Constant 'RETRY'.
enum
{
  nav2_msgs__action__DockRobot_Feedback__RETRY = 5
};

// Include directives for member types
// Member 'docking_time'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/DockRobot in the package nav2_msgs.
typedef struct nav2_msgs__action__DockRobot_Feedback
{
  /// Current docking state
  uint16_t state;
  /// Docking time elapsed
  builtin_interfaces__msg__Duration docking_time;
  /// Number of retries attempted
  uint16_t num_retries;
} nav2_msgs__action__DockRobot_Feedback;

// Struct for a sequence of nav2_msgs__action__DockRobot_Feedback.
typedef struct nav2_msgs__action__DockRobot_Feedback__Sequence
{
  nav2_msgs__action__DockRobot_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DockRobot_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "nav2_msgs/action/detail/dock_robot__struct.h"

/// Struct defined in action/DockRobot in the package nav2_msgs.
typedef struct nav2_msgs__action__DockRobot_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__DockRobot_Goal goal;
} nav2_msgs__action__DockRobot_SendGoal_Request;

// Struct for a sequence of nav2_msgs__action__DockRobot_SendGoal_Request.
typedef struct nav2_msgs__action__DockRobot_SendGoal_Request__Sequence
{
  nav2_msgs__action__DockRobot_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DockRobot_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/DockRobot in the package nav2_msgs.
typedef struct nav2_msgs__action__DockRobot_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} nav2_msgs__action__DockRobot_SendGoal_Response;

// Struct for a sequence of nav2_msgs__action__DockRobot_SendGoal_Response.
typedef struct nav2_msgs__action__DockRobot_SendGoal_Response__Sequence
{
  nav2_msgs__action__DockRobot_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DockRobot_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav2_msgs__action__DockRobot_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav2_msgs__action__DockRobot_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/DockRobot in the package nav2_msgs.
typedef struct nav2_msgs__action__DockRobot_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav2_msgs__action__DockRobot_SendGoal_Request__Sequence request;
  nav2_msgs__action__DockRobot_SendGoal_Response__Sequence response;
} nav2_msgs__action__DockRobot_SendGoal_Event;

// Struct for a sequence of nav2_msgs__action__DockRobot_SendGoal_Event.
typedef struct nav2_msgs__action__DockRobot_SendGoal_Event__Sequence
{
  nav2_msgs__action__DockRobot_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DockRobot_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/DockRobot in the package nav2_msgs.
typedef struct nav2_msgs__action__DockRobot_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} nav2_msgs__action__DockRobot_GetResult_Request;

// Struct for a sequence of nav2_msgs__action__DockRobot_GetResult_Request.
typedef struct nav2_msgs__action__DockRobot_GetResult_Request__Sequence
{
  nav2_msgs__action__DockRobot_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DockRobot_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "nav2_msgs/action/detail/dock_robot__struct.h"

/// Struct defined in action/DockRobot in the package nav2_msgs.
typedef struct nav2_msgs__action__DockRobot_GetResult_Response
{
  int8_t status;
  nav2_msgs__action__DockRobot_Result result;
} nav2_msgs__action__DockRobot_GetResult_Response;

// Struct for a sequence of nav2_msgs__action__DockRobot_GetResult_Response.
typedef struct nav2_msgs__action__DockRobot_GetResult_Response__Sequence
{
  nav2_msgs__action__DockRobot_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DockRobot_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav2_msgs__action__DockRobot_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav2_msgs__action__DockRobot_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/DockRobot in the package nav2_msgs.
typedef struct nav2_msgs__action__DockRobot_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav2_msgs__action__DockRobot_GetResult_Request__Sequence request;
  nav2_msgs__action__DockRobot_GetResult_Response__Sequence response;
} nav2_msgs__action__DockRobot_GetResult_Event;

// Struct for a sequence of nav2_msgs__action__DockRobot_GetResult_Event.
typedef struct nav2_msgs__action__DockRobot_GetResult_Event__Sequence
{
  nav2_msgs__action__DockRobot_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DockRobot_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "nav2_msgs/action/detail/dock_robot__struct.h"

/// Struct defined in action/DockRobot in the package nav2_msgs.
typedef struct nav2_msgs__action__DockRobot_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__DockRobot_Feedback feedback;
} nav2_msgs__action__DockRobot_FeedbackMessage;

// Struct for a sequence of nav2_msgs__action__DockRobot_FeedbackMessage.
typedef struct nav2_msgs__action__DockRobot_FeedbackMessage__Sequence
{
  nav2_msgs__action__DockRobot_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DockRobot_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__ACTION__DETAIL__DOCK_ROBOT__STRUCT_H_
