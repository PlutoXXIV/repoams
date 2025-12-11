// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from nav2_msgs:action/DockRobot.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "nav2_msgs/action/detail/dock_robot__functions.h"
#include "nav2_msgs/action/detail/dock_robot__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DockRobot_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DockRobot_Goal_type_support_ids_t;

static const _DockRobot_Goal_type_support_ids_t _DockRobot_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DockRobot_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DockRobot_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DockRobot_Goal_type_support_symbol_names_t _DockRobot_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, DockRobot_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, DockRobot_Goal)),
  }
};

typedef struct _DockRobot_Goal_type_support_data_t
{
  void * data[2];
} _DockRobot_Goal_type_support_data_t;

static _DockRobot_Goal_type_support_data_t _DockRobot_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DockRobot_Goal_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_DockRobot_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_DockRobot_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_DockRobot_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DockRobot_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DockRobot_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &nav2_msgs__action__DockRobot_Goal__get_type_hash,
  &nav2_msgs__action__DockRobot_Goal__get_type_description,
  &nav2_msgs__action__DockRobot_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::DockRobot_Goal>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::DockRobot_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, DockRobot_Goal)() {
  return get_message_type_support_handle<nav2_msgs::action::DockRobot_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/dock_robot__functions.h"
// already included above
// #include "nav2_msgs/action/detail/dock_robot__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DockRobot_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DockRobot_Result_type_support_ids_t;

static const _DockRobot_Result_type_support_ids_t _DockRobot_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DockRobot_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DockRobot_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DockRobot_Result_type_support_symbol_names_t _DockRobot_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, DockRobot_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, DockRobot_Result)),
  }
};

typedef struct _DockRobot_Result_type_support_data_t
{
  void * data[2];
} _DockRobot_Result_type_support_data_t;

static _DockRobot_Result_type_support_data_t _DockRobot_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DockRobot_Result_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_DockRobot_Result_message_typesupport_ids.typesupport_identifier[0],
  &_DockRobot_Result_message_typesupport_symbol_names.symbol_name[0],
  &_DockRobot_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DockRobot_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DockRobot_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &nav2_msgs__action__DockRobot_Result__get_type_hash,
  &nav2_msgs__action__DockRobot_Result__get_type_description,
  &nav2_msgs__action__DockRobot_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::DockRobot_Result>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::DockRobot_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, DockRobot_Result)() {
  return get_message_type_support_handle<nav2_msgs::action::DockRobot_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/dock_robot__functions.h"
// already included above
// #include "nav2_msgs/action/detail/dock_robot__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DockRobot_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DockRobot_Feedback_type_support_ids_t;

static const _DockRobot_Feedback_type_support_ids_t _DockRobot_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DockRobot_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DockRobot_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DockRobot_Feedback_type_support_symbol_names_t _DockRobot_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, DockRobot_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, DockRobot_Feedback)),
  }
};

typedef struct _DockRobot_Feedback_type_support_data_t
{
  void * data[2];
} _DockRobot_Feedback_type_support_data_t;

static _DockRobot_Feedback_type_support_data_t _DockRobot_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DockRobot_Feedback_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_DockRobot_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_DockRobot_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_DockRobot_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DockRobot_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DockRobot_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &nav2_msgs__action__DockRobot_Feedback__get_type_hash,
  &nav2_msgs__action__DockRobot_Feedback__get_type_description,
  &nav2_msgs__action__DockRobot_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::DockRobot_Feedback>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::DockRobot_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, DockRobot_Feedback)() {
  return get_message_type_support_handle<nav2_msgs::action::DockRobot_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/dock_robot__functions.h"
// already included above
// #include "nav2_msgs/action/detail/dock_robot__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DockRobot_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DockRobot_SendGoal_Request_type_support_ids_t;

static const _DockRobot_SendGoal_Request_type_support_ids_t _DockRobot_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DockRobot_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DockRobot_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DockRobot_SendGoal_Request_type_support_symbol_names_t _DockRobot_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, DockRobot_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, DockRobot_SendGoal_Request)),
  }
};

typedef struct _DockRobot_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _DockRobot_SendGoal_Request_type_support_data_t;

static _DockRobot_SendGoal_Request_type_support_data_t _DockRobot_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DockRobot_SendGoal_Request_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_DockRobot_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DockRobot_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DockRobot_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DockRobot_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DockRobot_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &nav2_msgs__action__DockRobot_SendGoal_Request__get_type_hash,
  &nav2_msgs__action__DockRobot_SendGoal_Request__get_type_description,
  &nav2_msgs__action__DockRobot_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::DockRobot_SendGoal_Request>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::DockRobot_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, DockRobot_SendGoal_Request)() {
  return get_message_type_support_handle<nav2_msgs::action::DockRobot_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/dock_robot__functions.h"
// already included above
// #include "nav2_msgs/action/detail/dock_robot__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DockRobot_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DockRobot_SendGoal_Response_type_support_ids_t;

static const _DockRobot_SendGoal_Response_type_support_ids_t _DockRobot_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DockRobot_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DockRobot_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DockRobot_SendGoal_Response_type_support_symbol_names_t _DockRobot_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, DockRobot_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, DockRobot_SendGoal_Response)),
  }
};

typedef struct _DockRobot_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _DockRobot_SendGoal_Response_type_support_data_t;

static _DockRobot_SendGoal_Response_type_support_data_t _DockRobot_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DockRobot_SendGoal_Response_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_DockRobot_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DockRobot_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DockRobot_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DockRobot_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DockRobot_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &nav2_msgs__action__DockRobot_SendGoal_Response__get_type_hash,
  &nav2_msgs__action__DockRobot_SendGoal_Response__get_type_description,
  &nav2_msgs__action__DockRobot_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::DockRobot_SendGoal_Response>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::DockRobot_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, DockRobot_SendGoal_Response)() {
  return get_message_type_support_handle<nav2_msgs::action::DockRobot_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/dock_robot__functions.h"
// already included above
// #include "nav2_msgs/action/detail/dock_robot__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DockRobot_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DockRobot_SendGoal_Event_type_support_ids_t;

static const _DockRobot_SendGoal_Event_type_support_ids_t _DockRobot_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DockRobot_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DockRobot_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DockRobot_SendGoal_Event_type_support_symbol_names_t _DockRobot_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, DockRobot_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, DockRobot_SendGoal_Event)),
  }
};

typedef struct _DockRobot_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _DockRobot_SendGoal_Event_type_support_data_t;

static _DockRobot_SendGoal_Event_type_support_data_t _DockRobot_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DockRobot_SendGoal_Event_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_DockRobot_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DockRobot_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DockRobot_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DockRobot_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DockRobot_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &nav2_msgs__action__DockRobot_SendGoal_Event__get_type_hash,
  &nav2_msgs__action__DockRobot_SendGoal_Event__get_type_description,
  &nav2_msgs__action__DockRobot_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::DockRobot_SendGoal_Event>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::DockRobot_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, DockRobot_SendGoal_Event)() {
  return get_message_type_support_handle<nav2_msgs::action::DockRobot_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "nav2_msgs/action/detail/dock_robot__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DockRobot_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DockRobot_SendGoal_type_support_ids_t;

static const _DockRobot_SendGoal_type_support_ids_t _DockRobot_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DockRobot_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DockRobot_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DockRobot_SendGoal_type_support_symbol_names_t _DockRobot_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, DockRobot_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, DockRobot_SendGoal)),
  }
};

typedef struct _DockRobot_SendGoal_type_support_data_t
{
  void * data[2];
} _DockRobot_SendGoal_type_support_data_t;

static _DockRobot_SendGoal_type_support_data_t _DockRobot_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DockRobot_SendGoal_service_typesupport_map = {
  2,
  "nav2_msgs",
  &_DockRobot_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_DockRobot_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_DockRobot_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DockRobot_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DockRobot_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<nav2_msgs::action::DockRobot_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<nav2_msgs::action::DockRobot_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<nav2_msgs::action::DockRobot_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<nav2_msgs::action::DockRobot_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<nav2_msgs::action::DockRobot_SendGoal>,
  &nav2_msgs__action__DockRobot_SendGoal__get_type_hash,
  &nav2_msgs__action__DockRobot_SendGoal__get_type_description,
  &nav2_msgs__action__DockRobot_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<nav2_msgs::action::DockRobot_SendGoal>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::DockRobot_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, DockRobot_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<nav2_msgs::action::DockRobot_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/dock_robot__functions.h"
// already included above
// #include "nav2_msgs/action/detail/dock_robot__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DockRobot_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DockRobot_GetResult_Request_type_support_ids_t;

static const _DockRobot_GetResult_Request_type_support_ids_t _DockRobot_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DockRobot_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DockRobot_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DockRobot_GetResult_Request_type_support_symbol_names_t _DockRobot_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, DockRobot_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, DockRobot_GetResult_Request)),
  }
};

typedef struct _DockRobot_GetResult_Request_type_support_data_t
{
  void * data[2];
} _DockRobot_GetResult_Request_type_support_data_t;

static _DockRobot_GetResult_Request_type_support_data_t _DockRobot_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DockRobot_GetResult_Request_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_DockRobot_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DockRobot_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DockRobot_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DockRobot_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DockRobot_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &nav2_msgs__action__DockRobot_GetResult_Request__get_type_hash,
  &nav2_msgs__action__DockRobot_GetResult_Request__get_type_description,
  &nav2_msgs__action__DockRobot_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::DockRobot_GetResult_Request>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::DockRobot_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, DockRobot_GetResult_Request)() {
  return get_message_type_support_handle<nav2_msgs::action::DockRobot_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/dock_robot__functions.h"
// already included above
// #include "nav2_msgs/action/detail/dock_robot__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DockRobot_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DockRobot_GetResult_Response_type_support_ids_t;

static const _DockRobot_GetResult_Response_type_support_ids_t _DockRobot_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DockRobot_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DockRobot_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DockRobot_GetResult_Response_type_support_symbol_names_t _DockRobot_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, DockRobot_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, DockRobot_GetResult_Response)),
  }
};

typedef struct _DockRobot_GetResult_Response_type_support_data_t
{
  void * data[2];
} _DockRobot_GetResult_Response_type_support_data_t;

static _DockRobot_GetResult_Response_type_support_data_t _DockRobot_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DockRobot_GetResult_Response_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_DockRobot_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DockRobot_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DockRobot_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DockRobot_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DockRobot_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &nav2_msgs__action__DockRobot_GetResult_Response__get_type_hash,
  &nav2_msgs__action__DockRobot_GetResult_Response__get_type_description,
  &nav2_msgs__action__DockRobot_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::DockRobot_GetResult_Response>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::DockRobot_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, DockRobot_GetResult_Response)() {
  return get_message_type_support_handle<nav2_msgs::action::DockRobot_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/dock_robot__functions.h"
// already included above
// #include "nav2_msgs/action/detail/dock_robot__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DockRobot_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DockRobot_GetResult_Event_type_support_ids_t;

static const _DockRobot_GetResult_Event_type_support_ids_t _DockRobot_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DockRobot_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DockRobot_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DockRobot_GetResult_Event_type_support_symbol_names_t _DockRobot_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, DockRobot_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, DockRobot_GetResult_Event)),
  }
};

typedef struct _DockRobot_GetResult_Event_type_support_data_t
{
  void * data[2];
} _DockRobot_GetResult_Event_type_support_data_t;

static _DockRobot_GetResult_Event_type_support_data_t _DockRobot_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DockRobot_GetResult_Event_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_DockRobot_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DockRobot_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DockRobot_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DockRobot_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DockRobot_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &nav2_msgs__action__DockRobot_GetResult_Event__get_type_hash,
  &nav2_msgs__action__DockRobot_GetResult_Event__get_type_description,
  &nav2_msgs__action__DockRobot_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::DockRobot_GetResult_Event>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::DockRobot_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, DockRobot_GetResult_Event)() {
  return get_message_type_support_handle<nav2_msgs::action::DockRobot_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "nav2_msgs/action/detail/dock_robot__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DockRobot_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DockRobot_GetResult_type_support_ids_t;

static const _DockRobot_GetResult_type_support_ids_t _DockRobot_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DockRobot_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DockRobot_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DockRobot_GetResult_type_support_symbol_names_t _DockRobot_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, DockRobot_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, DockRobot_GetResult)),
  }
};

typedef struct _DockRobot_GetResult_type_support_data_t
{
  void * data[2];
} _DockRobot_GetResult_type_support_data_t;

static _DockRobot_GetResult_type_support_data_t _DockRobot_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DockRobot_GetResult_service_typesupport_map = {
  2,
  "nav2_msgs",
  &_DockRobot_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_DockRobot_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_DockRobot_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DockRobot_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DockRobot_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<nav2_msgs::action::DockRobot_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<nav2_msgs::action::DockRobot_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<nav2_msgs::action::DockRobot_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<nav2_msgs::action::DockRobot_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<nav2_msgs::action::DockRobot_GetResult>,
  &nav2_msgs__action__DockRobot_GetResult__get_type_hash,
  &nav2_msgs__action__DockRobot_GetResult__get_type_description,
  &nav2_msgs__action__DockRobot_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<nav2_msgs::action::DockRobot_GetResult>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::DockRobot_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, DockRobot_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<nav2_msgs::action::DockRobot_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/dock_robot__functions.h"
// already included above
// #include "nav2_msgs/action/detail/dock_robot__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DockRobot_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DockRobot_FeedbackMessage_type_support_ids_t;

static const _DockRobot_FeedbackMessage_type_support_ids_t _DockRobot_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DockRobot_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DockRobot_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DockRobot_FeedbackMessage_type_support_symbol_names_t _DockRobot_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, DockRobot_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, DockRobot_FeedbackMessage)),
  }
};

typedef struct _DockRobot_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _DockRobot_FeedbackMessage_type_support_data_t;

static _DockRobot_FeedbackMessage_type_support_data_t _DockRobot_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DockRobot_FeedbackMessage_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_DockRobot_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_DockRobot_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_DockRobot_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DockRobot_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DockRobot_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &nav2_msgs__action__DockRobot_FeedbackMessage__get_type_hash,
  &nav2_msgs__action__DockRobot_FeedbackMessage__get_type_description,
  &nav2_msgs__action__DockRobot_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::DockRobot_FeedbackMessage>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::DockRobot_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, DockRobot_FeedbackMessage)() {
  return get_message_type_support_handle<nav2_msgs::action::DockRobot_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "nav2_msgs/action/detail/dock_robot__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t DockRobot_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &nav2_msgs__action__DockRobot__get_type_hash,
  &nav2_msgs__action__DockRobot__get_type_description,
  &nav2_msgs__action__DockRobot__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<nav2_msgs::action::DockRobot>()
{
  using ::nav2_msgs::action::rosidl_typesupport_cpp::DockRobot_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  DockRobot_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::nav2_msgs::action::DockRobot::Impl::SendGoalService>();
  DockRobot_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::nav2_msgs::action::DockRobot::Impl::GetResultService>();
  DockRobot_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::nav2_msgs::action::DockRobot::Impl::CancelGoalService>();
  DockRobot_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::nav2_msgs::action::DockRobot::Impl::FeedbackMessage>();
  DockRobot_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::nav2_msgs::action::DockRobot::Impl::GoalStatusMessage>();
  return &DockRobot_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, DockRobot)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<nav2_msgs::action::DockRobot>();
}

#ifdef __cplusplus
}
#endif
