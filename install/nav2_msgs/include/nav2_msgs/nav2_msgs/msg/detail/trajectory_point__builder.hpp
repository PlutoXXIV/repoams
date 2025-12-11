// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/trajectory_point.hpp"


#ifndef NAV2_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_
#define NAV2_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/msg/detail/trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajectoryPoint_effort
{
public:
  explicit Init_TrajectoryPoint_effort(::nav2_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::msg::TrajectoryPoint effort(::nav2_msgs::msg::TrajectoryPoint::_effort_type arg)
  {
    msg_.effort = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_acceleration
{
public:
  explicit Init_TrajectoryPoint_acceleration(::nav2_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_effort acceleration(::nav2_msgs::msg::TrajectoryPoint::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_TrajectoryPoint_effort(msg_);
  }

private:
  ::nav2_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_velocity
{
public:
  explicit Init_TrajectoryPoint_velocity(::nav2_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_acceleration velocity(::nav2_msgs::msg::TrajectoryPoint::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_TrajectoryPoint_acceleration(msg_);
  }

private:
  ::nav2_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_pose
{
public:
  explicit Init_TrajectoryPoint_pose(::nav2_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_velocity pose(::nav2_msgs::msg::TrajectoryPoint::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_TrajectoryPoint_velocity(msg_);
  }

private:
  ::nav2_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_time_from_start
{
public:
  Init_TrajectoryPoint_time_from_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryPoint_pose time_from_start(::nav2_msgs::msg::TrajectoryPoint::_time_from_start_type arg)
  {
    msg_.time_from_start = std::move(arg);
    return Init_TrajectoryPoint_pose(msg_);
  }

private:
  ::nav2_msgs::msg::TrajectoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::msg::TrajectoryPoint>()
{
  return nav2_msgs::msg::builder::Init_TrajectoryPoint_time_from_start();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_
