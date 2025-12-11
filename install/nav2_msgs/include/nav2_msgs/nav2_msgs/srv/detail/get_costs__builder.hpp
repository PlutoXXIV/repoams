// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:srv/GetCosts.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/srv/get_costs.hpp"


#ifndef NAV2_MSGS__SRV__DETAIL__GET_COSTS__BUILDER_HPP_
#define NAV2_MSGS__SRV__DETAIL__GET_COSTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/srv/detail/get_costs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetCosts_Request_poses
{
public:
  explicit Init_GetCosts_Request_poses(::nav2_msgs::srv::GetCosts_Request & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::srv::GetCosts_Request poses(::nav2_msgs::srv::GetCosts_Request::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::GetCosts_Request msg_;
};

class Init_GetCosts_Request_use_footprint
{
public:
  Init_GetCosts_Request_use_footprint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetCosts_Request_poses use_footprint(::nav2_msgs::srv::GetCosts_Request::_use_footprint_type arg)
  {
    msg_.use_footprint = std::move(arg);
    return Init_GetCosts_Request_poses(msg_);
  }

private:
  ::nav2_msgs::srv::GetCosts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::GetCosts_Request>()
{
  return nav2_msgs::srv::builder::Init_GetCosts_Request_use_footprint();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetCosts_Response_success
{
public:
  explicit Init_GetCosts_Response_success(::nav2_msgs::srv::GetCosts_Response & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::srv::GetCosts_Response success(::nav2_msgs::srv::GetCosts_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::GetCosts_Response msg_;
};

class Init_GetCosts_Response_costs
{
public:
  Init_GetCosts_Response_costs()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetCosts_Response_success costs(::nav2_msgs::srv::GetCosts_Response::_costs_type arg)
  {
    msg_.costs = std::move(arg);
    return Init_GetCosts_Response_success(msg_);
  }

private:
  ::nav2_msgs::srv::GetCosts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::GetCosts_Response>()
{
  return nav2_msgs::srv::builder::Init_GetCosts_Response_costs();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetCosts_Event_response
{
public:
  explicit Init_GetCosts_Event_response(::nav2_msgs::srv::GetCosts_Event & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::srv::GetCosts_Event response(::nav2_msgs::srv::GetCosts_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::GetCosts_Event msg_;
};

class Init_GetCosts_Event_request
{
public:
  explicit Init_GetCosts_Event_request(::nav2_msgs::srv::GetCosts_Event & msg)
  : msg_(msg)
  {}
  Init_GetCosts_Event_response request(::nav2_msgs::srv::GetCosts_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetCosts_Event_response(msg_);
  }

private:
  ::nav2_msgs::srv::GetCosts_Event msg_;
};

class Init_GetCosts_Event_info
{
public:
  Init_GetCosts_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetCosts_Event_request info(::nav2_msgs::srv::GetCosts_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetCosts_Event_request(msg_);
  }

private:
  ::nav2_msgs::srv::GetCosts_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::GetCosts_Event>()
{
  return nav2_msgs::srv::builder::Init_GetCosts_Event_info();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__SRV__DETAIL__GET_COSTS__BUILDER_HPP_
