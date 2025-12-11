// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nav2_msgs:msg/PolygonObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nav2_msgs/msg/detail/polygon_object__rosidl_typesupport_introspection_c.h"
#include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nav2_msgs/msg/detail/polygon_object__functions.h"
#include "nav2_msgs/msg/detail/polygon_object__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `uuid`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `uuid`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "geometry_msgs/msg/point32.h"
// Member `points`
#include "geometry_msgs/msg/detail/point32__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__PolygonObject_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__msg__PolygonObject__init(message_memory);
}

void nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__PolygonObject_fini_function(void * message_memory)
{
  nav2_msgs__msg__PolygonObject__fini(message_memory);
}

size_t nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__size_function__PolygonObject__points(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point32__Sequence * member =
    (const geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  return member->size;
}

const void * nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__get_const_function__PolygonObject__points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point32__Sequence * member =
    (const geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__get_function__PolygonObject__points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point32__Sequence * member =
    (geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__fetch_function__PolygonObject__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point32 * item =
    ((const geometry_msgs__msg__Point32 *)
    nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__get_const_function__PolygonObject__points(untyped_member, index));
  geometry_msgs__msg__Point32 * value =
    (geometry_msgs__msg__Point32 *)(untyped_value);
  *value = *item;
}

void nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__assign_function__PolygonObject__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point32 * item =
    ((geometry_msgs__msg__Point32 *)
    nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__get_function__PolygonObject__points(untyped_member, index));
  const geometry_msgs__msg__Point32 * value =
    (const geometry_msgs__msg__Point32 *)(untyped_value);
  *item = *value;
}

bool nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__resize_function__PolygonObject__points(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point32__Sequence * member =
    (geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  geometry_msgs__msg__Point32__Sequence__fini(member);
  return geometry_msgs__msg__Point32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__PolygonObject_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__PolygonObject, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uuid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__PolygonObject, uuid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__PolygonObject, points),  // bytes offset in struct
    NULL,  // default value
    nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__size_function__PolygonObject__points,  // size() function pointer
    nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__get_const_function__PolygonObject__points,  // get_const(index) function pointer
    nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__get_function__PolygonObject__points,  // get(index) function pointer
    nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__fetch_function__PolygonObject__points,  // fetch(index, &value) function pointer
    nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__assign_function__PolygonObject__points,  // assign(index, value) function pointer
    nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__resize_function__PolygonObject__points  // resize(index) function pointer
  },
  {
    "closed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__PolygonObject, closed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__PolygonObject, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__PolygonObject_message_members = {
  "nav2_msgs__msg",  // message namespace
  "PolygonObject",  // message name
  5,  // number of fields
  sizeof(nav2_msgs__msg__PolygonObject),
  false,  // has_any_key_member_
  nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__PolygonObject_message_member_array,  // message members
  nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__PolygonObject_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__PolygonObject_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__PolygonObject_message_type_support_handle = {
  0,
  &nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__PolygonObject_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__msg__PolygonObject__get_type_hash,
  &nav2_msgs__msg__PolygonObject__get_type_description,
  &nav2_msgs__msg__PolygonObject__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, msg, PolygonObject)() {
  nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__PolygonObject_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__PolygonObject_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__PolygonObject_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point32)();
  if (!nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__PolygonObject_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__PolygonObject_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__msg__PolygonObject__rosidl_typesupport_introspection_c__PolygonObject_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
