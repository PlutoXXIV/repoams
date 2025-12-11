// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:srv/ReloadDockDatabase.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/srv/reload_dock_database.hpp"


#ifndef NAV2_MSGS__SRV__DETAIL__RELOAD_DOCK_DATABASE__BUILDER_HPP_
#define NAV2_MSGS__SRV__DETAIL__RELOAD_DOCK_DATABASE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/srv/detail/reload_dock_database__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_ReloadDockDatabase_Request_filepath
{
public:
  Init_ReloadDockDatabase_Request_filepath()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::srv::ReloadDockDatabase_Request filepath(::nav2_msgs::srv::ReloadDockDatabase_Request::_filepath_type arg)
  {
    msg_.filepath = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::ReloadDockDatabase_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::ReloadDockDatabase_Request>()
{
  return nav2_msgs::srv::builder::Init_ReloadDockDatabase_Request_filepath();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_ReloadDockDatabase_Response_success
{
public:
  Init_ReloadDockDatabase_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::srv::ReloadDockDatabase_Response success(::nav2_msgs::srv::ReloadDockDatabase_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::ReloadDockDatabase_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::ReloadDockDatabase_Response>()
{
  return nav2_msgs::srv::builder::Init_ReloadDockDatabase_Response_success();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_ReloadDockDatabase_Event_response
{
public:
  explicit Init_ReloadDockDatabase_Event_response(::nav2_msgs::srv::ReloadDockDatabase_Event & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::srv::ReloadDockDatabase_Event response(::nav2_msgs::srv::ReloadDockDatabase_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::ReloadDockDatabase_Event msg_;
};

class Init_ReloadDockDatabase_Event_request
{
public:
  explicit Init_ReloadDockDatabase_Event_request(::nav2_msgs::srv::ReloadDockDatabase_Event & msg)
  : msg_(msg)
  {}
  Init_ReloadDockDatabase_Event_response request(::nav2_msgs::srv::ReloadDockDatabase_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ReloadDockDatabase_Event_response(msg_);
  }

private:
  ::nav2_msgs::srv::ReloadDockDatabase_Event msg_;
};

class Init_ReloadDockDatabase_Event_info
{
public:
  Init_ReloadDockDatabase_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReloadDockDatabase_Event_request info(::nav2_msgs::srv::ReloadDockDatabase_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ReloadDockDatabase_Event_request(msg_);
  }

private:
  ::nav2_msgs::srv::ReloadDockDatabase_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::ReloadDockDatabase_Event>()
{
  return nav2_msgs::srv::builder::Init_ReloadDockDatabase_Event_info();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__SRV__DETAIL__RELOAD_DOCK_DATABASE__BUILDER_HPP_
