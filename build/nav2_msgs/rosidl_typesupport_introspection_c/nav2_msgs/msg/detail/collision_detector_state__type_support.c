// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nav2_msgs:msg/CollisionDetectorState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nav2_msgs/msg/detail/collision_detector_state__rosidl_typesupport_introspection_c.h"
#include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nav2_msgs/msg/detail/collision_detector_state__functions.h"
#include "nav2_msgs/msg/detail/collision_detector_state__struct.h"


// Include directives for member types
// Member `polygons`
#include "rosidl_runtime_c/string_functions.h"
// Member `detections`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__CollisionDetectorState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__msg__CollisionDetectorState__init(message_memory);
}

void nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__CollisionDetectorState_fini_function(void * message_memory)
{
  nav2_msgs__msg__CollisionDetectorState__fini(message_memory);
}

size_t nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__size_function__CollisionDetectorState__polygons(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__get_const_function__CollisionDetectorState__polygons(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__get_function__CollisionDetectorState__polygons(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__fetch_function__CollisionDetectorState__polygons(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__get_const_function__CollisionDetectorState__polygons(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__assign_function__CollisionDetectorState__polygons(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__get_function__CollisionDetectorState__polygons(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__resize_function__CollisionDetectorState__polygons(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__size_function__CollisionDetectorState__detections(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__get_const_function__CollisionDetectorState__detections(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__get_function__CollisionDetectorState__detections(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__fetch_function__CollisionDetectorState__detections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__get_const_function__CollisionDetectorState__detections(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__assign_function__CollisionDetectorState__detections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__get_function__CollisionDetectorState__detections(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__resize_function__CollisionDetectorState__detections(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__CollisionDetectorState_message_member_array[2] = {
  {
    "polygons",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__CollisionDetectorState, polygons),  // bytes offset in struct
    NULL,  // default value
    nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__size_function__CollisionDetectorState__polygons,  // size() function pointer
    nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__get_const_function__CollisionDetectorState__polygons,  // get_const(index) function pointer
    nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__get_function__CollisionDetectorState__polygons,  // get(index) function pointer
    nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__fetch_function__CollisionDetectorState__polygons,  // fetch(index, &value) function pointer
    nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__assign_function__CollisionDetectorState__polygons,  // assign(index, value) function pointer
    nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__resize_function__CollisionDetectorState__polygons  // resize(index) function pointer
  },
  {
    "detections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__CollisionDetectorState, detections),  // bytes offset in struct
    NULL,  // default value
    nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__size_function__CollisionDetectorState__detections,  // size() function pointer
    nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__get_const_function__CollisionDetectorState__detections,  // get_const(index) function pointer
    nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__get_function__CollisionDetectorState__detections,  // get(index) function pointer
    nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__fetch_function__CollisionDetectorState__detections,  // fetch(index, &value) function pointer
    nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__assign_function__CollisionDetectorState__detections,  // assign(index, value) function pointer
    nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__resize_function__CollisionDetectorState__detections  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__CollisionDetectorState_message_members = {
  "nav2_msgs__msg",  // message namespace
  "CollisionDetectorState",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__msg__CollisionDetectorState),
  false,  // has_any_key_member_
  nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__CollisionDetectorState_message_member_array,  // message members
  nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__CollisionDetectorState_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__CollisionDetectorState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__CollisionDetectorState_message_type_support_handle = {
  0,
  &nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__CollisionDetectorState_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__msg__CollisionDetectorState__get_type_hash,
  &nav2_msgs__msg__CollisionDetectorState__get_type_description,
  &nav2_msgs__msg__CollisionDetectorState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, msg, CollisionDetectorState)() {
  if (!nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__CollisionDetectorState_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__CollisionDetectorState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__msg__CollisionDetectorState__rosidl_typesupport_introspection_c__CollisionDetectorState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
