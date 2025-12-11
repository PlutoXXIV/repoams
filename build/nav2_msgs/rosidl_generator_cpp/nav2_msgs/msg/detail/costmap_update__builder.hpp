// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:msg/CostmapUpdate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/costmap_update.hpp"


#ifndef NAV2_MSGS__MSG__DETAIL__COSTMAP_UPDATE__BUILDER_HPP_
#define NAV2_MSGS__MSG__DETAIL__COSTMAP_UPDATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/msg/detail/costmap_update__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace msg
{

namespace builder
{

class Init_CostmapUpdate_data
{
public:
  explicit Init_CostmapUpdate_data(::nav2_msgs::msg::CostmapUpdate & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::msg::CostmapUpdate data(::nav2_msgs::msg::CostmapUpdate::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::msg::CostmapUpdate msg_;
};

class Init_CostmapUpdate_size_y
{
public:
  explicit Init_CostmapUpdate_size_y(::nav2_msgs::msg::CostmapUpdate & msg)
  : msg_(msg)
  {}
  Init_CostmapUpdate_data size_y(::nav2_msgs::msg::CostmapUpdate::_size_y_type arg)
  {
    msg_.size_y = std::move(arg);
    return Init_CostmapUpdate_data(msg_);
  }

private:
  ::nav2_msgs::msg::CostmapUpdate msg_;
};

class Init_CostmapUpdate_size_x
{
public:
  explicit Init_CostmapUpdate_size_x(::nav2_msgs::msg::CostmapUpdate & msg)
  : msg_(msg)
  {}
  Init_CostmapUpdate_size_y size_x(::nav2_msgs::msg::CostmapUpdate::_size_x_type arg)
  {
    msg_.size_x = std::move(arg);
    return Init_CostmapUpdate_size_y(msg_);
  }

private:
  ::nav2_msgs::msg::CostmapUpdate msg_;
};

class Init_CostmapUpdate_y
{
public:
  explicit Init_CostmapUpdate_y(::nav2_msgs::msg::CostmapUpdate & msg)
  : msg_(msg)
  {}
  Init_CostmapUpdate_size_x y(::nav2_msgs::msg::CostmapUpdate::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_CostmapUpdate_size_x(msg_);
  }

private:
  ::nav2_msgs::msg::CostmapUpdate msg_;
};

class Init_CostmapUpdate_x
{
public:
  explicit Init_CostmapUpdate_x(::nav2_msgs::msg::CostmapUpdate & msg)
  : msg_(msg)
  {}
  Init_CostmapUpdate_y x(::nav2_msgs::msg::CostmapUpdate::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_CostmapUpdate_y(msg_);
  }

private:
  ::nav2_msgs::msg::CostmapUpdate msg_;
};

class Init_CostmapUpdate_header
{
public:
  Init_CostmapUpdate_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CostmapUpdate_x header(::nav2_msgs::msg::CostmapUpdate::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CostmapUpdate_x(msg_);
  }

private:
  ::nav2_msgs::msg::CostmapUpdate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::msg::CostmapUpdate>()
{
  return nav2_msgs::msg::builder::Init_CostmapUpdate_header();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__COSTMAP_UPDATE__BUILDER_HPP_
