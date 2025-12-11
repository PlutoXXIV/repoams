// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:msg/WaypointStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/waypoint_status.hpp"


#ifndef NAV2_MSGS__MSG__DETAIL__WAYPOINT_STATUS__BUILDER_HPP_
#define NAV2_MSGS__MSG__DETAIL__WAYPOINT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/msg/detail/waypoint_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace msg
{

namespace builder
{

class Init_WaypointStatus_error_msg
{
public:
  explicit Init_WaypointStatus_error_msg(::nav2_msgs::msg::WaypointStatus & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::msg::WaypointStatus error_msg(::nav2_msgs::msg::WaypointStatus::_error_msg_type arg)
  {
    msg_.error_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::msg::WaypointStatus msg_;
};

class Init_WaypointStatus_error_code
{
public:
  explicit Init_WaypointStatus_error_code(::nav2_msgs::msg::WaypointStatus & msg)
  : msg_(msg)
  {}
  Init_WaypointStatus_error_msg error_code(::nav2_msgs::msg::WaypointStatus::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_WaypointStatus_error_msg(msg_);
  }

private:
  ::nav2_msgs::msg::WaypointStatus msg_;
};

class Init_WaypointStatus_waypoint_pose
{
public:
  explicit Init_WaypointStatus_waypoint_pose(::nav2_msgs::msg::WaypointStatus & msg)
  : msg_(msg)
  {}
  Init_WaypointStatus_error_code waypoint_pose(::nav2_msgs::msg::WaypointStatus::_waypoint_pose_type arg)
  {
    msg_.waypoint_pose = std::move(arg);
    return Init_WaypointStatus_error_code(msg_);
  }

private:
  ::nav2_msgs::msg::WaypointStatus msg_;
};

class Init_WaypointStatus_waypoint_index
{
public:
  explicit Init_WaypointStatus_waypoint_index(::nav2_msgs::msg::WaypointStatus & msg)
  : msg_(msg)
  {}
  Init_WaypointStatus_waypoint_pose waypoint_index(::nav2_msgs::msg::WaypointStatus::_waypoint_index_type arg)
  {
    msg_.waypoint_index = std::move(arg);
    return Init_WaypointStatus_waypoint_pose(msg_);
  }

private:
  ::nav2_msgs::msg::WaypointStatus msg_;
};

class Init_WaypointStatus_waypoint_status
{
public:
  Init_WaypointStatus_waypoint_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaypointStatus_waypoint_index waypoint_status(::nav2_msgs::msg::WaypointStatus::_waypoint_status_type arg)
  {
    msg_.waypoint_status = std::move(arg);
    return Init_WaypointStatus_waypoint_index(msg_);
  }

private:
  ::nav2_msgs::msg::WaypointStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::msg::WaypointStatus>()
{
  return nav2_msgs::msg::builder::Init_WaypointStatus_waypoint_status();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__WAYPOINT_STATUS__BUILDER_HPP_
