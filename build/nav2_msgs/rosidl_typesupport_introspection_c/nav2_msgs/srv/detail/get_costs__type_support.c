// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nav2_msgs:srv/GetCosts.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nav2_msgs/srv/detail/get_costs__rosidl_typesupport_introspection_c.h"
#include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nav2_msgs/srv/detail/get_costs__functions.h"
#include "nav2_msgs/srv/detail/get_costs__struct.h"


// Include directives for member types
// Member `poses`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__GetCosts_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__srv__GetCosts_Request__init(message_memory);
}

void nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__GetCosts_Request_fini_function(void * message_memory)
{
  nav2_msgs__srv__GetCosts_Request__fini(message_memory);
}

size_t nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__size_function__GetCosts_Request__poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__get_const_function__GetCosts_Request__poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__get_function__GetCosts_Request__poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__fetch_function__GetCosts_Request__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__PoseStamped * item =
    ((const geometry_msgs__msg__PoseStamped *)
    nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__get_const_function__GetCosts_Request__poses(untyped_member, index));
  geometry_msgs__msg__PoseStamped * value =
    (geometry_msgs__msg__PoseStamped *)(untyped_value);
  *value = *item;
}

void nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__assign_function__GetCosts_Request__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__PoseStamped * item =
    ((geometry_msgs__msg__PoseStamped *)
    nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__get_function__GetCosts_Request__poses(untyped_member, index));
  const geometry_msgs__msg__PoseStamped * value =
    (const geometry_msgs__msg__PoseStamped *)(untyped_value);
  *item = *value;
}

bool nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__resize_function__GetCosts_Request__poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseStamped__Sequence__fini(member);
  return geometry_msgs__msg__PoseStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__GetCosts_Request_message_member_array[2] = {
  {
    "use_footprint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__srv__GetCosts_Request, use_footprint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__srv__GetCosts_Request, poses),  // bytes offset in struct
    NULL,  // default value
    nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__size_function__GetCosts_Request__poses,  // size() function pointer
    nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__get_const_function__GetCosts_Request__poses,  // get_const(index) function pointer
    nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__get_function__GetCosts_Request__poses,  // get(index) function pointer
    nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__fetch_function__GetCosts_Request__poses,  // fetch(index, &value) function pointer
    nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__assign_function__GetCosts_Request__poses,  // assign(index, value) function pointer
    nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__resize_function__GetCosts_Request__poses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__GetCosts_Request_message_members = {
  "nav2_msgs__srv",  // message namespace
  "GetCosts_Request",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__srv__GetCosts_Request),
  false,  // has_any_key_member_
  nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__GetCosts_Request_message_member_array,  // message members
  nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__GetCosts_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__GetCosts_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__GetCosts_Request_message_type_support_handle = {
  0,
  &nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__GetCosts_Request_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__srv__GetCosts_Request__get_type_hash,
  &nav2_msgs__srv__GetCosts_Request__get_type_description,
  &nav2_msgs__srv__GetCosts_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, GetCosts_Request)() {
  nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__GetCosts_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__GetCosts_Request_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__GetCosts_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__GetCosts_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/srv/detail/get_costs__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/srv/detail/get_costs__functions.h"
// already included above
// #include "nav2_msgs/srv/detail/get_costs__struct.h"


// Include directives for member types
// Member `costs`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__GetCosts_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__srv__GetCosts_Response__init(message_memory);
}

void nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__GetCosts_Response_fini_function(void * message_memory)
{
  nav2_msgs__srv__GetCosts_Response__fini(message_memory);
}

size_t nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__size_function__GetCosts_Response__costs(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__get_const_function__GetCosts_Response__costs(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__get_function__GetCosts_Response__costs(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__fetch_function__GetCosts_Response__costs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__get_const_function__GetCosts_Response__costs(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__assign_function__GetCosts_Response__costs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__get_function__GetCosts_Response__costs(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__resize_function__GetCosts_Response__costs(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__GetCosts_Response_message_member_array[2] = {
  {
    "costs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__srv__GetCosts_Response, costs),  // bytes offset in struct
    NULL,  // default value
    nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__size_function__GetCosts_Response__costs,  // size() function pointer
    nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__get_const_function__GetCosts_Response__costs,  // get_const(index) function pointer
    nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__get_function__GetCosts_Response__costs,  // get(index) function pointer
    nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__fetch_function__GetCosts_Response__costs,  // fetch(index, &value) function pointer
    nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__assign_function__GetCosts_Response__costs,  // assign(index, value) function pointer
    nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__resize_function__GetCosts_Response__costs  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__srv__GetCosts_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__GetCosts_Response_message_members = {
  "nav2_msgs__srv",  // message namespace
  "GetCosts_Response",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__srv__GetCosts_Response),
  false,  // has_any_key_member_
  nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__GetCosts_Response_message_member_array,  // message members
  nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__GetCosts_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__GetCosts_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__GetCosts_Response_message_type_support_handle = {
  0,
  &nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__GetCosts_Response_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__srv__GetCosts_Response__get_type_hash,
  &nav2_msgs__srv__GetCosts_Response__get_type_description,
  &nav2_msgs__srv__GetCosts_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, GetCosts_Response)() {
  if (!nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__GetCosts_Response_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__GetCosts_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__GetCosts_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/srv/detail/get_costs__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/srv/detail/get_costs__functions.h"
// already included above
// #include "nav2_msgs/srv/detail/get_costs__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "nav2_msgs/srv/get_costs.h"
// Member `request`
// Member `response`
// already included above
// #include "nav2_msgs/srv/detail/get_costs__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__GetCosts_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__srv__GetCosts_Event__init(message_memory);
}

void nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__GetCosts_Event_fini_function(void * message_memory)
{
  nav2_msgs__srv__GetCosts_Event__fini(message_memory);
}

size_t nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__size_function__GetCosts_Event__request(
  const void * untyped_member)
{
  const nav2_msgs__srv__GetCosts_Request__Sequence * member =
    (const nav2_msgs__srv__GetCosts_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__get_const_function__GetCosts_Event__request(
  const void * untyped_member, size_t index)
{
  const nav2_msgs__srv__GetCosts_Request__Sequence * member =
    (const nav2_msgs__srv__GetCosts_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__get_function__GetCosts_Event__request(
  void * untyped_member, size_t index)
{
  nav2_msgs__srv__GetCosts_Request__Sequence * member =
    (nav2_msgs__srv__GetCosts_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__fetch_function__GetCosts_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const nav2_msgs__srv__GetCosts_Request * item =
    ((const nav2_msgs__srv__GetCosts_Request *)
    nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__get_const_function__GetCosts_Event__request(untyped_member, index));
  nav2_msgs__srv__GetCosts_Request * value =
    (nav2_msgs__srv__GetCosts_Request *)(untyped_value);
  *value = *item;
}

void nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__assign_function__GetCosts_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  nav2_msgs__srv__GetCosts_Request * item =
    ((nav2_msgs__srv__GetCosts_Request *)
    nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__get_function__GetCosts_Event__request(untyped_member, index));
  const nav2_msgs__srv__GetCosts_Request * value =
    (const nav2_msgs__srv__GetCosts_Request *)(untyped_value);
  *item = *value;
}

bool nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__resize_function__GetCosts_Event__request(
  void * untyped_member, size_t size)
{
  nav2_msgs__srv__GetCosts_Request__Sequence * member =
    (nav2_msgs__srv__GetCosts_Request__Sequence *)(untyped_member);
  nav2_msgs__srv__GetCosts_Request__Sequence__fini(member);
  return nav2_msgs__srv__GetCosts_Request__Sequence__init(member, size);
}

size_t nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__size_function__GetCosts_Event__response(
  const void * untyped_member)
{
  const nav2_msgs__srv__GetCosts_Response__Sequence * member =
    (const nav2_msgs__srv__GetCosts_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__get_const_function__GetCosts_Event__response(
  const void * untyped_member, size_t index)
{
  const nav2_msgs__srv__GetCosts_Response__Sequence * member =
    (const nav2_msgs__srv__GetCosts_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__get_function__GetCosts_Event__response(
  void * untyped_member, size_t index)
{
  nav2_msgs__srv__GetCosts_Response__Sequence * member =
    (nav2_msgs__srv__GetCosts_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__fetch_function__GetCosts_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const nav2_msgs__srv__GetCosts_Response * item =
    ((const nav2_msgs__srv__GetCosts_Response *)
    nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__get_const_function__GetCosts_Event__response(untyped_member, index));
  nav2_msgs__srv__GetCosts_Response * value =
    (nav2_msgs__srv__GetCosts_Response *)(untyped_value);
  *value = *item;
}

void nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__assign_function__GetCosts_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  nav2_msgs__srv__GetCosts_Response * item =
    ((nav2_msgs__srv__GetCosts_Response *)
    nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__get_function__GetCosts_Event__response(untyped_member, index));
  const nav2_msgs__srv__GetCosts_Response * value =
    (const nav2_msgs__srv__GetCosts_Response *)(untyped_value);
  *item = *value;
}

bool nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__resize_function__GetCosts_Event__response(
  void * untyped_member, size_t size)
{
  nav2_msgs__srv__GetCosts_Response__Sequence * member =
    (nav2_msgs__srv__GetCosts_Response__Sequence *)(untyped_member);
  nav2_msgs__srv__GetCosts_Response__Sequence__fini(member);
  return nav2_msgs__srv__GetCosts_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__GetCosts_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__srv__GetCosts_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(nav2_msgs__srv__GetCosts_Event, request),  // bytes offset in struct
    NULL,  // default value
    nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__size_function__GetCosts_Event__request,  // size() function pointer
    nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__get_const_function__GetCosts_Event__request,  // get_const(index) function pointer
    nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__get_function__GetCosts_Event__request,  // get(index) function pointer
    nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__fetch_function__GetCosts_Event__request,  // fetch(index, &value) function pointer
    nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__assign_function__GetCosts_Event__request,  // assign(index, value) function pointer
    nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__resize_function__GetCosts_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(nav2_msgs__srv__GetCosts_Event, response),  // bytes offset in struct
    NULL,  // default value
    nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__size_function__GetCosts_Event__response,  // size() function pointer
    nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__get_const_function__GetCosts_Event__response,  // get_const(index) function pointer
    nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__get_function__GetCosts_Event__response,  // get(index) function pointer
    nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__fetch_function__GetCosts_Event__response,  // fetch(index, &value) function pointer
    nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__assign_function__GetCosts_Event__response,  // assign(index, value) function pointer
    nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__resize_function__GetCosts_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__GetCosts_Event_message_members = {
  "nav2_msgs__srv",  // message namespace
  "GetCosts_Event",  // message name
  3,  // number of fields
  sizeof(nav2_msgs__srv__GetCosts_Event),
  false,  // has_any_key_member_
  nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__GetCosts_Event_message_member_array,  // message members
  nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__GetCosts_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__GetCosts_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__GetCosts_Event_message_type_support_handle = {
  0,
  &nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__GetCosts_Event_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__srv__GetCosts_Event__get_type_hash,
  &nav2_msgs__srv__GetCosts_Event__get_type_description,
  &nav2_msgs__srv__GetCosts_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, GetCosts_Event)() {
  nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__GetCosts_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__GetCosts_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, GetCosts_Request)();
  nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__GetCosts_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, GetCosts_Response)();
  if (!nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__GetCosts_Event_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__GetCosts_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__GetCosts_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nav2_msgs/srv/detail/get_costs__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nav2_msgs__srv__detail__get_costs__rosidl_typesupport_introspection_c__GetCosts_service_members = {
  "nav2_msgs__srv",  // service namespace
  "GetCosts",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // nav2_msgs__srv__detail__get_costs__rosidl_typesupport_introspection_c__GetCosts_Request_message_type_support_handle,
  NULL,  // response message
  // nav2_msgs__srv__detail__get_costs__rosidl_typesupport_introspection_c__GetCosts_Response_message_type_support_handle
  NULL  // event_message
  // nav2_msgs__srv__detail__get_costs__rosidl_typesupport_introspection_c__GetCosts_Response_message_type_support_handle
};


static rosidl_service_type_support_t nav2_msgs__srv__detail__get_costs__rosidl_typesupport_introspection_c__GetCosts_service_type_support_handle = {
  0,
  &nav2_msgs__srv__detail__get_costs__rosidl_typesupport_introspection_c__GetCosts_service_members,
  get_service_typesupport_handle_function,
  &nav2_msgs__srv__GetCosts_Request__rosidl_typesupport_introspection_c__GetCosts_Request_message_type_support_handle,
  &nav2_msgs__srv__GetCosts_Response__rosidl_typesupport_introspection_c__GetCosts_Response_message_type_support_handle,
  &nav2_msgs__srv__GetCosts_Event__rosidl_typesupport_introspection_c__GetCosts_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    nav2_msgs,
    srv,
    GetCosts
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    nav2_msgs,
    srv,
    GetCosts
  ),
  &nav2_msgs__srv__GetCosts__get_type_hash,
  &nav2_msgs__srv__GetCosts__get_type_description,
  &nav2_msgs__srv__GetCosts__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, GetCosts_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, GetCosts_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, GetCosts_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, GetCosts)(void) {
  if (!nav2_msgs__srv__detail__get_costs__rosidl_typesupport_introspection_c__GetCosts_service_type_support_handle.typesupport_identifier) {
    nav2_msgs__srv__detail__get_costs__rosidl_typesupport_introspection_c__GetCosts_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nav2_msgs__srv__detail__get_costs__rosidl_typesupport_introspection_c__GetCosts_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, GetCosts_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, GetCosts_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, GetCosts_Event)()->data;
  }

  return &nav2_msgs__srv__detail__get_costs__rosidl_typesupport_introspection_c__GetCosts_service_type_support_handle;
}
