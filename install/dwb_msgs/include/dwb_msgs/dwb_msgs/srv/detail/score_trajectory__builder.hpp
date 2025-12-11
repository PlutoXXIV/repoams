// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dwb_msgs:srv/ScoreTrajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dwb_msgs/srv/score_trajectory.hpp"


#ifndef DWB_MSGS__SRV__DETAIL__SCORE_TRAJECTORY__BUILDER_HPP_
#define DWB_MSGS__SRV__DETAIL__SCORE_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dwb_msgs/srv/detail/score_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dwb_msgs
{

namespace srv
{

namespace builder
{

class Init_ScoreTrajectory_Request_traj
{
public:
  explicit Init_ScoreTrajectory_Request_traj(::dwb_msgs::srv::ScoreTrajectory_Request & msg)
  : msg_(msg)
  {}
  ::dwb_msgs::srv::ScoreTrajectory_Request traj(::dwb_msgs::srv::ScoreTrajectory_Request::_traj_type arg)
  {
    msg_.traj = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dwb_msgs::srv::ScoreTrajectory_Request msg_;
};

class Init_ScoreTrajectory_Request_global_plan
{
public:
  explicit Init_ScoreTrajectory_Request_global_plan(::dwb_msgs::srv::ScoreTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_ScoreTrajectory_Request_traj global_plan(::dwb_msgs::srv::ScoreTrajectory_Request::_global_plan_type arg)
  {
    msg_.global_plan = std::move(arg);
    return Init_ScoreTrajectory_Request_traj(msg_);
  }

private:
  ::dwb_msgs::srv::ScoreTrajectory_Request msg_;
};

class Init_ScoreTrajectory_Request_velocity
{
public:
  explicit Init_ScoreTrajectory_Request_velocity(::dwb_msgs::srv::ScoreTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_ScoreTrajectory_Request_global_plan velocity(::dwb_msgs::srv::ScoreTrajectory_Request::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_ScoreTrajectory_Request_global_plan(msg_);
  }

private:
  ::dwb_msgs::srv::ScoreTrajectory_Request msg_;
};

class Init_ScoreTrajectory_Request_pose
{
public:
  Init_ScoreTrajectory_Request_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScoreTrajectory_Request_velocity pose(::dwb_msgs::srv::ScoreTrajectory_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_ScoreTrajectory_Request_velocity(msg_);
  }

private:
  ::dwb_msgs::srv::ScoreTrajectory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dwb_msgs::srv::ScoreTrajectory_Request>()
{
  return dwb_msgs::srv::builder::Init_ScoreTrajectory_Request_pose();
}

}  // namespace dwb_msgs


namespace dwb_msgs
{

namespace srv
{

namespace builder
{

class Init_ScoreTrajectory_Response_score
{
public:
  Init_ScoreTrajectory_Response_score()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dwb_msgs::srv::ScoreTrajectory_Response score(::dwb_msgs::srv::ScoreTrajectory_Response::_score_type arg)
  {
    msg_.score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dwb_msgs::srv::ScoreTrajectory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dwb_msgs::srv::ScoreTrajectory_Response>()
{
  return dwb_msgs::srv::builder::Init_ScoreTrajectory_Response_score();
}

}  // namespace dwb_msgs


namespace dwb_msgs
{

namespace srv
{

namespace builder
{

class Init_ScoreTrajectory_Event_response
{
public:
  explicit Init_ScoreTrajectory_Event_response(::dwb_msgs::srv::ScoreTrajectory_Event & msg)
  : msg_(msg)
  {}
  ::dwb_msgs::srv::ScoreTrajectory_Event response(::dwb_msgs::srv::ScoreTrajectory_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dwb_msgs::srv::ScoreTrajectory_Event msg_;
};

class Init_ScoreTrajectory_Event_request
{
public:
  explicit Init_ScoreTrajectory_Event_request(::dwb_msgs::srv::ScoreTrajectory_Event & msg)
  : msg_(msg)
  {}
  Init_ScoreTrajectory_Event_response request(::dwb_msgs::srv::ScoreTrajectory_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ScoreTrajectory_Event_response(msg_);
  }

private:
  ::dwb_msgs::srv::ScoreTrajectory_Event msg_;
};

class Init_ScoreTrajectory_Event_info
{
public:
  Init_ScoreTrajectory_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScoreTrajectory_Event_request info(::dwb_msgs::srv::ScoreTrajectory_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ScoreTrajectory_Event_request(msg_);
  }

private:
  ::dwb_msgs::srv::ScoreTrajectory_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dwb_msgs::srv::ScoreTrajectory_Event>()
{
  return dwb_msgs::srv::builder::Init_ScoreTrajectory_Event_info();
}

}  // namespace dwb_msgs

#endif  // DWB_MSGS__SRV__DETAIL__SCORE_TRAJECTORY__BUILDER_HPP_
