// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from nav2_msgs:srv/Toggle.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "nav2_msgs/srv/detail/toggle__struct.h"
#include "nav2_msgs/srv/detail/toggle__type_support.h"
#include "nav2_msgs/srv/detail/toggle__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Toggle_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Toggle_Request_type_support_ids_t;

static const _Toggle_Request_type_support_ids_t _Toggle_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Toggle_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Toggle_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Toggle_Request_type_support_symbol_names_t _Toggle_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, srv, Toggle_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, Toggle_Request)),
  }
};

typedef struct _Toggle_Request_type_support_data_t
{
  void * data[2];
} _Toggle_Request_type_support_data_t;

static _Toggle_Request_type_support_data_t _Toggle_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Toggle_Request_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_Toggle_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Toggle_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Toggle_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Toggle_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Toggle_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &nav2_msgs__srv__Toggle_Request__get_type_hash,
  &nav2_msgs__srv__Toggle_Request__get_type_description,
  &nav2_msgs__srv__Toggle_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace nav2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, nav2_msgs, srv, Toggle_Request)() {
  return &::nav2_msgs::srv::rosidl_typesupport_c::Toggle_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav2_msgs/srv/detail/toggle__struct.h"
// already included above
// #include "nav2_msgs/srv/detail/toggle__type_support.h"
// already included above
// #include "nav2_msgs/srv/detail/toggle__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Toggle_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Toggle_Response_type_support_ids_t;

static const _Toggle_Response_type_support_ids_t _Toggle_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Toggle_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Toggle_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Toggle_Response_type_support_symbol_names_t _Toggle_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, srv, Toggle_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, Toggle_Response)),
  }
};

typedef struct _Toggle_Response_type_support_data_t
{
  void * data[2];
} _Toggle_Response_type_support_data_t;

static _Toggle_Response_type_support_data_t _Toggle_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Toggle_Response_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_Toggle_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Toggle_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Toggle_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Toggle_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Toggle_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &nav2_msgs__srv__Toggle_Response__get_type_hash,
  &nav2_msgs__srv__Toggle_Response__get_type_description,
  &nav2_msgs__srv__Toggle_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace nav2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, nav2_msgs, srv, Toggle_Response)() {
  return &::nav2_msgs::srv::rosidl_typesupport_c::Toggle_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav2_msgs/srv/detail/toggle__struct.h"
// already included above
// #include "nav2_msgs/srv/detail/toggle__type_support.h"
// already included above
// #include "nav2_msgs/srv/detail/toggle__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Toggle_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Toggle_Event_type_support_ids_t;

static const _Toggle_Event_type_support_ids_t _Toggle_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Toggle_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Toggle_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Toggle_Event_type_support_symbol_names_t _Toggle_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, srv, Toggle_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, Toggle_Event)),
  }
};

typedef struct _Toggle_Event_type_support_data_t
{
  void * data[2];
} _Toggle_Event_type_support_data_t;

static _Toggle_Event_type_support_data_t _Toggle_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Toggle_Event_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_Toggle_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Toggle_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Toggle_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Toggle_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Toggle_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &nav2_msgs__srv__Toggle_Event__get_type_hash,
  &nav2_msgs__srv__Toggle_Event__get_type_description,
  &nav2_msgs__srv__Toggle_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace nav2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, nav2_msgs, srv, Toggle_Event)() {
  return &::nav2_msgs::srv::rosidl_typesupport_c::Toggle_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nav2_msgs/srv/detail/toggle__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace nav2_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _Toggle_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Toggle_type_support_ids_t;

static const _Toggle_type_support_ids_t _Toggle_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Toggle_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Toggle_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Toggle_type_support_symbol_names_t _Toggle_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, srv, Toggle)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, Toggle)),
  }
};

typedef struct _Toggle_type_support_data_t
{
  void * data[2];
} _Toggle_type_support_data_t;

static _Toggle_type_support_data_t _Toggle_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Toggle_service_typesupport_map = {
  2,
  "nav2_msgs",
  &_Toggle_service_typesupport_ids.typesupport_identifier[0],
  &_Toggle_service_typesupport_symbol_names.symbol_name[0],
  &_Toggle_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Toggle_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Toggle_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &Toggle_Request_message_type_support_handle,
  &Toggle_Response_message_type_support_handle,
  &Toggle_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    nav2_msgs,
    srv,
    Toggle
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    nav2_msgs,
    srv,
    Toggle
  ),
  &nav2_msgs__srv__Toggle__get_type_hash,
  &nav2_msgs__srv__Toggle__get_type_description,
  &nav2_msgs__srv__Toggle__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace nav2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, nav2_msgs, srv, Toggle)() {
  return &::nav2_msgs::srv::rosidl_typesupport_c::Toggle_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
