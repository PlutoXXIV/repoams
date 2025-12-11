// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:msg/CircleObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/circle_object.hpp"


#ifndef NAV2_MSGS__MSG__DETAIL__CIRCLE_OBJECT__BUILDER_HPP_
#define NAV2_MSGS__MSG__DETAIL__CIRCLE_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/msg/detail/circle_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace msg
{

namespace builder
{

class Init_CircleObject_value
{
public:
  explicit Init_CircleObject_value(::nav2_msgs::msg::CircleObject & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::msg::CircleObject value(::nav2_msgs::msg::CircleObject::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::msg::CircleObject msg_;
};

class Init_CircleObject_fill
{
public:
  explicit Init_CircleObject_fill(::nav2_msgs::msg::CircleObject & msg)
  : msg_(msg)
  {}
  Init_CircleObject_value fill(::nav2_msgs::msg::CircleObject::_fill_type arg)
  {
    msg_.fill = std::move(arg);
    return Init_CircleObject_value(msg_);
  }

private:
  ::nav2_msgs::msg::CircleObject msg_;
};

class Init_CircleObject_radius
{
public:
  explicit Init_CircleObject_radius(::nav2_msgs::msg::CircleObject & msg)
  : msg_(msg)
  {}
  Init_CircleObject_fill radius(::nav2_msgs::msg::CircleObject::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_CircleObject_fill(msg_);
  }

private:
  ::nav2_msgs::msg::CircleObject msg_;
};

class Init_CircleObject_center
{
public:
  explicit Init_CircleObject_center(::nav2_msgs::msg::CircleObject & msg)
  : msg_(msg)
  {}
  Init_CircleObject_radius center(::nav2_msgs::msg::CircleObject::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_CircleObject_radius(msg_);
  }

private:
  ::nav2_msgs::msg::CircleObject msg_;
};

class Init_CircleObject_uuid
{
public:
  explicit Init_CircleObject_uuid(::nav2_msgs::msg::CircleObject & msg)
  : msg_(msg)
  {}
  Init_CircleObject_center uuid(::nav2_msgs::msg::CircleObject::_uuid_type arg)
  {
    msg_.uuid = std::move(arg);
    return Init_CircleObject_center(msg_);
  }

private:
  ::nav2_msgs::msg::CircleObject msg_;
};

class Init_CircleObject_header
{
public:
  Init_CircleObject_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CircleObject_uuid header(::nav2_msgs::msg::CircleObject::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CircleObject_uuid(msg_);
  }

private:
  ::nav2_msgs::msg::CircleObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::msg::CircleObject>()
{
  return nav2_msgs::msg::builder::Init_CircleObject_header();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__CIRCLE_OBJECT__BUILDER_HPP_
