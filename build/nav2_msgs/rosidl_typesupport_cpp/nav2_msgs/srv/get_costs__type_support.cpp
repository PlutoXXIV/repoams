// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from nav2_msgs:srv/GetCosts.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "nav2_msgs/srv/detail/get_costs__functions.h"
#include "nav2_msgs/srv/detail/get_costs__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetCosts_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetCosts_Request_type_support_ids_t;

static const _GetCosts_Request_type_support_ids_t _GetCosts_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetCosts_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetCosts_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetCosts_Request_type_support_symbol_names_t _GetCosts_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, srv, GetCosts_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, srv, GetCosts_Request)),
  }
};

typedef struct _GetCosts_Request_type_support_data_t
{
  void * data[2];
} _GetCosts_Request_type_support_data_t;

static _GetCosts_Request_type_support_data_t _GetCosts_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetCosts_Request_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_GetCosts_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetCosts_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetCosts_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetCosts_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetCosts_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &nav2_msgs__srv__GetCosts_Request__get_type_hash,
  &nav2_msgs__srv__GetCosts_Request__get_type_description,
  &nav2_msgs__srv__GetCosts_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::srv::GetCosts_Request>()
{
  return &::nav2_msgs::srv::rosidl_typesupport_cpp::GetCosts_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, srv, GetCosts_Request)() {
  return get_message_type_support_handle<nav2_msgs::srv::GetCosts_Request>();
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
// #include "nav2_msgs/srv/detail/get_costs__functions.h"
// already included above
// #include "nav2_msgs/srv/detail/get_costs__struct.hpp"
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

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetCosts_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetCosts_Response_type_support_ids_t;

static const _GetCosts_Response_type_support_ids_t _GetCosts_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetCosts_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetCosts_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetCosts_Response_type_support_symbol_names_t _GetCosts_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, srv, GetCosts_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, srv, GetCosts_Response)),
  }
};

typedef struct _GetCosts_Response_type_support_data_t
{
  void * data[2];
} _GetCosts_Response_type_support_data_t;

static _GetCosts_Response_type_support_data_t _GetCosts_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetCosts_Response_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_GetCosts_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetCosts_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetCosts_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetCosts_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetCosts_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &nav2_msgs__srv__GetCosts_Response__get_type_hash,
  &nav2_msgs__srv__GetCosts_Response__get_type_description,
  &nav2_msgs__srv__GetCosts_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::srv::GetCosts_Response>()
{
  return &::nav2_msgs::srv::rosidl_typesupport_cpp::GetCosts_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, srv, GetCosts_Response)() {
  return get_message_type_support_handle<nav2_msgs::srv::GetCosts_Response>();
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
// #include "nav2_msgs/srv/detail/get_costs__functions.h"
// already included above
// #include "nav2_msgs/srv/detail/get_costs__struct.hpp"
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

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetCosts_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetCosts_Event_type_support_ids_t;

static const _GetCosts_Event_type_support_ids_t _GetCosts_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetCosts_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetCosts_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetCosts_Event_type_support_symbol_names_t _GetCosts_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, srv, GetCosts_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, srv, GetCosts_Event)),
  }
};

typedef struct _GetCosts_Event_type_support_data_t
{
  void * data[2];
} _GetCosts_Event_type_support_data_t;

static _GetCosts_Event_type_support_data_t _GetCosts_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetCosts_Event_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_GetCosts_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetCosts_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetCosts_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetCosts_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetCosts_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &nav2_msgs__srv__GetCosts_Event__get_type_hash,
  &nav2_msgs__srv__GetCosts_Event__get_type_description,
  &nav2_msgs__srv__GetCosts_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::srv::GetCosts_Event>()
{
  return &::nav2_msgs::srv::rosidl_typesupport_cpp::GetCosts_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, srv, GetCosts_Event)() {
  return get_message_type_support_handle<nav2_msgs::srv::GetCosts_Event>();
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
// #include "nav2_msgs/srv/detail/get_costs__struct.hpp"
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

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetCosts_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetCosts_type_support_ids_t;

static const _GetCosts_type_support_ids_t _GetCosts_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetCosts_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetCosts_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetCosts_type_support_symbol_names_t _GetCosts_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, srv, GetCosts)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, srv, GetCosts)),
  }
};

typedef struct _GetCosts_type_support_data_t
{
  void * data[2];
} _GetCosts_type_support_data_t;

static _GetCosts_type_support_data_t _GetCosts_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetCosts_service_typesupport_map = {
  2,
  "nav2_msgs",
  &_GetCosts_service_typesupport_ids.typesupport_identifier[0],
  &_GetCosts_service_typesupport_symbol_names.symbol_name[0],
  &_GetCosts_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetCosts_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetCosts_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<nav2_msgs::srv::GetCosts_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<nav2_msgs::srv::GetCosts_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<nav2_msgs::srv::GetCosts_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<nav2_msgs::srv::GetCosts>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<nav2_msgs::srv::GetCosts>,
  &nav2_msgs__srv__GetCosts__get_type_hash,
  &nav2_msgs__srv__GetCosts__get_type_description,
  &nav2_msgs__srv__GetCosts__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<nav2_msgs::srv::GetCosts>()
{
  return &::nav2_msgs::srv::rosidl_typesupport_cpp::GetCosts_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, srv, GetCosts)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<nav2_msgs::srv::GetCosts>();
}

#ifdef __cplusplus
}
#endif
