// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:msg/CriticsStats.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/critics_stats.hpp"


#ifndef NAV2_MSGS__MSG__DETAIL__CRITICS_STATS__BUILDER_HPP_
#define NAV2_MSGS__MSG__DETAIL__CRITICS_STATS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/msg/detail/critics_stats__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace msg
{

namespace builder
{

class Init_CriticsStats_costs_sum
{
public:
  explicit Init_CriticsStats_costs_sum(::nav2_msgs::msg::CriticsStats & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::msg::CriticsStats costs_sum(::nav2_msgs::msg::CriticsStats::_costs_sum_type arg)
  {
    msg_.costs_sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::msg::CriticsStats msg_;
};

class Init_CriticsStats_changed
{
public:
  explicit Init_CriticsStats_changed(::nav2_msgs::msg::CriticsStats & msg)
  : msg_(msg)
  {}
  Init_CriticsStats_costs_sum changed(::nav2_msgs::msg::CriticsStats::_changed_type arg)
  {
    msg_.changed = std::move(arg);
    return Init_CriticsStats_costs_sum(msg_);
  }

private:
  ::nav2_msgs::msg::CriticsStats msg_;
};

class Init_CriticsStats_critics
{
public:
  explicit Init_CriticsStats_critics(::nav2_msgs::msg::CriticsStats & msg)
  : msg_(msg)
  {}
  Init_CriticsStats_changed critics(::nav2_msgs::msg::CriticsStats::_critics_type arg)
  {
    msg_.critics = std::move(arg);
    return Init_CriticsStats_changed(msg_);
  }

private:
  ::nav2_msgs::msg::CriticsStats msg_;
};

class Init_CriticsStats_stamp
{
public:
  Init_CriticsStats_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CriticsStats_critics stamp(::nav2_msgs::msg::CriticsStats::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_CriticsStats_critics(msg_);
  }

private:
  ::nav2_msgs::msg::CriticsStats msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::msg::CriticsStats>()
{
  return nav2_msgs::msg::builder::Init_CriticsStats_stamp();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__CRITICS_STATS__BUILDER_HPP_
