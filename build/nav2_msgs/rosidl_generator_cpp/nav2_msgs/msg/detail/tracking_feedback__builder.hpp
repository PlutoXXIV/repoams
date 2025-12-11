// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:msg/TrackingFeedback.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/tracking_feedback.hpp"


#ifndef NAV2_MSGS__MSG__DETAIL__TRACKING_FEEDBACK__BUILDER_HPP_
#define NAV2_MSGS__MSG__DETAIL__TRACKING_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/msg/detail/tracking_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackingFeedback_remaining_path_length
{
public:
  explicit Init_TrackingFeedback_remaining_path_length(::nav2_msgs::msg::TrackingFeedback & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::msg::TrackingFeedback remaining_path_length(::nav2_msgs::msg::TrackingFeedback::_remaining_path_length_type arg)
  {
    msg_.remaining_path_length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::msg::TrackingFeedback msg_;
};

class Init_TrackingFeedback_speed
{
public:
  explicit Init_TrackingFeedback_speed(::nav2_msgs::msg::TrackingFeedback & msg)
  : msg_(msg)
  {}
  Init_TrackingFeedback_remaining_path_length speed(::nav2_msgs::msg::TrackingFeedback::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_TrackingFeedback_remaining_path_length(msg_);
  }

private:
  ::nav2_msgs::msg::TrackingFeedback msg_;
};

class Init_TrackingFeedback_distance_to_goal
{
public:
  explicit Init_TrackingFeedback_distance_to_goal(::nav2_msgs::msg::TrackingFeedback & msg)
  : msg_(msg)
  {}
  Init_TrackingFeedback_speed distance_to_goal(::nav2_msgs::msg::TrackingFeedback::_distance_to_goal_type arg)
  {
    msg_.distance_to_goal = std::move(arg);
    return Init_TrackingFeedback_speed(msg_);
  }

private:
  ::nav2_msgs::msg::TrackingFeedback msg_;
};

class Init_TrackingFeedback_robot_pose
{
public:
  explicit Init_TrackingFeedback_robot_pose(::nav2_msgs::msg::TrackingFeedback & msg)
  : msg_(msg)
  {}
  Init_TrackingFeedback_distance_to_goal robot_pose(::nav2_msgs::msg::TrackingFeedback::_robot_pose_type arg)
  {
    msg_.robot_pose = std::move(arg);
    return Init_TrackingFeedback_distance_to_goal(msg_);
  }

private:
  ::nav2_msgs::msg::TrackingFeedback msg_;
};

class Init_TrackingFeedback_current_path_index
{
public:
  explicit Init_TrackingFeedback_current_path_index(::nav2_msgs::msg::TrackingFeedback & msg)
  : msg_(msg)
  {}
  Init_TrackingFeedback_robot_pose current_path_index(::nav2_msgs::msg::TrackingFeedback::_current_path_index_type arg)
  {
    msg_.current_path_index = std::move(arg);
    return Init_TrackingFeedback_robot_pose(msg_);
  }

private:
  ::nav2_msgs::msg::TrackingFeedback msg_;
};

class Init_TrackingFeedback_tracking_error
{
public:
  explicit Init_TrackingFeedback_tracking_error(::nav2_msgs::msg::TrackingFeedback & msg)
  : msg_(msg)
  {}
  Init_TrackingFeedback_current_path_index tracking_error(::nav2_msgs::msg::TrackingFeedback::_tracking_error_type arg)
  {
    msg_.tracking_error = std::move(arg);
    return Init_TrackingFeedback_current_path_index(msg_);
  }

private:
  ::nav2_msgs::msg::TrackingFeedback msg_;
};

class Init_TrackingFeedback_header
{
public:
  Init_TrackingFeedback_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackingFeedback_tracking_error header(::nav2_msgs::msg::TrackingFeedback::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrackingFeedback_tracking_error(msg_);
  }

private:
  ::nav2_msgs::msg::TrackingFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::msg::TrackingFeedback>()
{
  return nav2_msgs::msg::builder::Init_TrackingFeedback_header();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__TRACKING_FEEDBACK__BUILDER_HPP_
