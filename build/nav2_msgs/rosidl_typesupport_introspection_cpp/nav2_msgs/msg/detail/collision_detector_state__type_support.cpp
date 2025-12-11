// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from nav2_msgs:msg/CollisionDetectorState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "nav2_msgs/msg/detail/collision_detector_state__functions.h"
#include "nav2_msgs/msg/detail/collision_detector_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace nav2_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CollisionDetectorState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nav2_msgs::msg::CollisionDetectorState(_init);
}

void CollisionDetectorState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nav2_msgs::msg::CollisionDetectorState *>(message_memory);
  typed_message->~CollisionDetectorState();
}

size_t size_function__CollisionDetectorState__polygons(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CollisionDetectorState__polygons(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__CollisionDetectorState__polygons(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__CollisionDetectorState__polygons(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__CollisionDetectorState__polygons(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__CollisionDetectorState__polygons(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__CollisionDetectorState__polygons(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__CollisionDetectorState__polygons(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CollisionDetectorState__detections(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__CollisionDetectorState__detections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__CollisionDetectorState__detections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__CollisionDetectorState__detections(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CollisionDetectorState_message_member_array[2] = {
  {
    "polygons",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs::msg::CollisionDetectorState, polygons),  // bytes offset in struct
    nullptr,  // default value
    size_function__CollisionDetectorState__polygons,  // size() function pointer
    get_const_function__CollisionDetectorState__polygons,  // get_const(index) function pointer
    get_function__CollisionDetectorState__polygons,  // get(index) function pointer
    fetch_function__CollisionDetectorState__polygons,  // fetch(index, &value) function pointer
    assign_function__CollisionDetectorState__polygons,  // assign(index, value) function pointer
    resize_function__CollisionDetectorState__polygons  // resize(index) function pointer
  },
  {
    "detections",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs::msg::CollisionDetectorState, detections),  // bytes offset in struct
    nullptr,  // default value
    size_function__CollisionDetectorState__detections,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__CollisionDetectorState__detections,  // fetch(index, &value) function pointer
    assign_function__CollisionDetectorState__detections,  // assign(index, value) function pointer
    resize_function__CollisionDetectorState__detections  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CollisionDetectorState_message_members = {
  "nav2_msgs::msg",  // message namespace
  "CollisionDetectorState",  // message name
  2,  // number of fields
  sizeof(nav2_msgs::msg::CollisionDetectorState),
  false,  // has_any_key_member_
  CollisionDetectorState_message_member_array,  // message members
  CollisionDetectorState_init_function,  // function to initialize message memory (memory has to be allocated)
  CollisionDetectorState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CollisionDetectorState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CollisionDetectorState_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__msg__CollisionDetectorState__get_type_hash,
  &nav2_msgs__msg__CollisionDetectorState__get_type_description,
  &nav2_msgs__msg__CollisionDetectorState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace nav2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::msg::CollisionDetectorState>()
{
  return &::nav2_msgs::msg::rosidl_typesupport_introspection_cpp::CollisionDetectorState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, msg, CollisionDetectorState)() {
  return &::nav2_msgs::msg::rosidl_typesupport_introspection_cpp::CollisionDetectorState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
