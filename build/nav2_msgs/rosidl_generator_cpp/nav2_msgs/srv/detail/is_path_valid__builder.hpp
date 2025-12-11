// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:srv/IsPathValid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/srv/is_path_valid.hpp"


#ifndef NAV2_MSGS__SRV__DETAIL__IS_PATH_VALID__BUILDER_HPP_
#define NAV2_MSGS__SRV__DETAIL__IS_PATH_VALID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/srv/detail/is_path_valid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_IsPathValid_Request_consider_unknown_as_obstacle
{
public:
  explicit Init_IsPathValid_Request_consider_unknown_as_obstacle(::nav2_msgs::srv::IsPathValid_Request & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::srv::IsPathValid_Request consider_unknown_as_obstacle(::nav2_msgs::srv::IsPathValid_Request::_consider_unknown_as_obstacle_type arg)
  {
    msg_.consider_unknown_as_obstacle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::IsPathValid_Request msg_;
};

class Init_IsPathValid_Request_max_cost
{
public:
  explicit Init_IsPathValid_Request_max_cost(::nav2_msgs::srv::IsPathValid_Request & msg)
  : msg_(msg)
  {}
  Init_IsPathValid_Request_consider_unknown_as_obstacle max_cost(::nav2_msgs::srv::IsPathValid_Request::_max_cost_type arg)
  {
    msg_.max_cost = std::move(arg);
    return Init_IsPathValid_Request_consider_unknown_as_obstacle(msg_);
  }

private:
  ::nav2_msgs::srv::IsPathValid_Request msg_;
};

class Init_IsPathValid_Request_path
{
public:
  Init_IsPathValid_Request_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IsPathValid_Request_max_cost path(::nav2_msgs::srv::IsPathValid_Request::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_IsPathValid_Request_max_cost(msg_);
  }

private:
  ::nav2_msgs::srv::IsPathValid_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::IsPathValid_Request>()
{
  return nav2_msgs::srv::builder::Init_IsPathValid_Request_path();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_IsPathValid_Response_invalid_pose_indices
{
public:
  explicit Init_IsPathValid_Response_invalid_pose_indices(::nav2_msgs::srv::IsPathValid_Response & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::srv::IsPathValid_Response invalid_pose_indices(::nav2_msgs::srv::IsPathValid_Response::_invalid_pose_indices_type arg)
  {
    msg_.invalid_pose_indices = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::IsPathValid_Response msg_;
};

class Init_IsPathValid_Response_is_valid
{
public:
  Init_IsPathValid_Response_is_valid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IsPathValid_Response_invalid_pose_indices is_valid(::nav2_msgs::srv::IsPathValid_Response::_is_valid_type arg)
  {
    msg_.is_valid = std::move(arg);
    return Init_IsPathValid_Response_invalid_pose_indices(msg_);
  }

private:
  ::nav2_msgs::srv::IsPathValid_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::IsPathValid_Response>()
{
  return nav2_msgs::srv::builder::Init_IsPathValid_Response_is_valid();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_IsPathValid_Event_response
{
public:
  explicit Init_IsPathValid_Event_response(::nav2_msgs::srv::IsPathValid_Event & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::srv::IsPathValid_Event response(::nav2_msgs::srv::IsPathValid_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::IsPathValid_Event msg_;
};

class Init_IsPathValid_Event_request
{
public:
  explicit Init_IsPathValid_Event_request(::nav2_msgs::srv::IsPathValid_Event & msg)
  : msg_(msg)
  {}
  Init_IsPathValid_Event_response request(::nav2_msgs::srv::IsPathValid_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_IsPathValid_Event_response(msg_);
  }

private:
  ::nav2_msgs::srv::IsPathValid_Event msg_;
};

class Init_IsPathValid_Event_info
{
public:
  Init_IsPathValid_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IsPathValid_Event_request info(::nav2_msgs::srv::IsPathValid_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_IsPathValid_Event_request(msg_);
  }

private:
  ::nav2_msgs::srv::IsPathValid_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::IsPathValid_Event>()
{
  return nav2_msgs::srv::builder::Init_IsPathValid_Event_info();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__SRV__DETAIL__IS_PATH_VALID__BUILDER_HPP_
