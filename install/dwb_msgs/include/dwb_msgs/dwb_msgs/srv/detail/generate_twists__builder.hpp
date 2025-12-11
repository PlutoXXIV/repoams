// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dwb_msgs:srv/GenerateTwists.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dwb_msgs/srv/generate_twists.hpp"


#ifndef DWB_MSGS__SRV__DETAIL__GENERATE_TWISTS__BUILDER_HPP_
#define DWB_MSGS__SRV__DETAIL__GENERATE_TWISTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dwb_msgs/srv/detail/generate_twists__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dwb_msgs
{

namespace srv
{

namespace builder
{

class Init_GenerateTwists_Request_current_vel
{
public:
  Init_GenerateTwists_Request_current_vel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dwb_msgs::srv::GenerateTwists_Request current_vel(::dwb_msgs::srv::GenerateTwists_Request::_current_vel_type arg)
  {
    msg_.current_vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dwb_msgs::srv::GenerateTwists_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dwb_msgs::srv::GenerateTwists_Request>()
{
  return dwb_msgs::srv::builder::Init_GenerateTwists_Request_current_vel();
}

}  // namespace dwb_msgs


namespace dwb_msgs
{

namespace srv
{

namespace builder
{

class Init_GenerateTwists_Response_twists
{
public:
  Init_GenerateTwists_Response_twists()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dwb_msgs::srv::GenerateTwists_Response twists(::dwb_msgs::srv::GenerateTwists_Response::_twists_type arg)
  {
    msg_.twists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dwb_msgs::srv::GenerateTwists_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dwb_msgs::srv::GenerateTwists_Response>()
{
  return dwb_msgs::srv::builder::Init_GenerateTwists_Response_twists();
}

}  // namespace dwb_msgs


namespace dwb_msgs
{

namespace srv
{

namespace builder
{

class Init_GenerateTwists_Event_response
{
public:
  explicit Init_GenerateTwists_Event_response(::dwb_msgs::srv::GenerateTwists_Event & msg)
  : msg_(msg)
  {}
  ::dwb_msgs::srv::GenerateTwists_Event response(::dwb_msgs::srv::GenerateTwists_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dwb_msgs::srv::GenerateTwists_Event msg_;
};

class Init_GenerateTwists_Event_request
{
public:
  explicit Init_GenerateTwists_Event_request(::dwb_msgs::srv::GenerateTwists_Event & msg)
  : msg_(msg)
  {}
  Init_GenerateTwists_Event_response request(::dwb_msgs::srv::GenerateTwists_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GenerateTwists_Event_response(msg_);
  }

private:
  ::dwb_msgs::srv::GenerateTwists_Event msg_;
};

class Init_GenerateTwists_Event_info
{
public:
  Init_GenerateTwists_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenerateTwists_Event_request info(::dwb_msgs::srv::GenerateTwists_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GenerateTwists_Event_request(msg_);
  }

private:
  ::dwb_msgs::srv::GenerateTwists_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dwb_msgs::srv::GenerateTwists_Event>()
{
  return dwb_msgs::srv::builder::Init_GenerateTwists_Event_info();
}

}  // namespace dwb_msgs

#endif  // DWB_MSGS__SRV__DETAIL__GENERATE_TWISTS__BUILDER_HPP_
