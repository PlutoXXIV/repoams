// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:msg/PolygonObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/polygon_object.hpp"


#ifndef NAV2_MSGS__MSG__DETAIL__POLYGON_OBJECT__BUILDER_HPP_
#define NAV2_MSGS__MSG__DETAIL__POLYGON_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/msg/detail/polygon_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace msg
{

namespace builder
{

class Init_PolygonObject_value
{
public:
  explicit Init_PolygonObject_value(::nav2_msgs::msg::PolygonObject & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::msg::PolygonObject value(::nav2_msgs::msg::PolygonObject::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::msg::PolygonObject msg_;
};

class Init_PolygonObject_closed
{
public:
  explicit Init_PolygonObject_closed(::nav2_msgs::msg::PolygonObject & msg)
  : msg_(msg)
  {}
  Init_PolygonObject_value closed(::nav2_msgs::msg::PolygonObject::_closed_type arg)
  {
    msg_.closed = std::move(arg);
    return Init_PolygonObject_value(msg_);
  }

private:
  ::nav2_msgs::msg::PolygonObject msg_;
};

class Init_PolygonObject_points
{
public:
  explicit Init_PolygonObject_points(::nav2_msgs::msg::PolygonObject & msg)
  : msg_(msg)
  {}
  Init_PolygonObject_closed points(::nav2_msgs::msg::PolygonObject::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_PolygonObject_closed(msg_);
  }

private:
  ::nav2_msgs::msg::PolygonObject msg_;
};

class Init_PolygonObject_uuid
{
public:
  explicit Init_PolygonObject_uuid(::nav2_msgs::msg::PolygonObject & msg)
  : msg_(msg)
  {}
  Init_PolygonObject_points uuid(::nav2_msgs::msg::PolygonObject::_uuid_type arg)
  {
    msg_.uuid = std::move(arg);
    return Init_PolygonObject_points(msg_);
  }

private:
  ::nav2_msgs::msg::PolygonObject msg_;
};

class Init_PolygonObject_header
{
public:
  Init_PolygonObject_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PolygonObject_uuid header(::nav2_msgs::msg::PolygonObject::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PolygonObject_uuid(msg_);
  }

private:
  ::nav2_msgs::msg::PolygonObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::msg::PolygonObject>()
{
  return nav2_msgs::msg::builder::Init_PolygonObject_header();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__POLYGON_OBJECT__BUILDER_HPP_
