// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:srv/RemoveShapes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/srv/remove_shapes.hpp"


#ifndef NAV2_MSGS__SRV__DETAIL__REMOVE_SHAPES__BUILDER_HPP_
#define NAV2_MSGS__SRV__DETAIL__REMOVE_SHAPES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/srv/detail/remove_shapes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_RemoveShapes_Request_uuids
{
public:
  explicit Init_RemoveShapes_Request_uuids(::nav2_msgs::srv::RemoveShapes_Request & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::srv::RemoveShapes_Request uuids(::nav2_msgs::srv::RemoveShapes_Request::_uuids_type arg)
  {
    msg_.uuids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::RemoveShapes_Request msg_;
};

class Init_RemoveShapes_Request_all_objects
{
public:
  Init_RemoveShapes_Request_all_objects()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RemoveShapes_Request_uuids all_objects(::nav2_msgs::srv::RemoveShapes_Request::_all_objects_type arg)
  {
    msg_.all_objects = std::move(arg);
    return Init_RemoveShapes_Request_uuids(msg_);
  }

private:
  ::nav2_msgs::srv::RemoveShapes_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::RemoveShapes_Request>()
{
  return nav2_msgs::srv::builder::Init_RemoveShapes_Request_all_objects();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_RemoveShapes_Response_success
{
public:
  Init_RemoveShapes_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::srv::RemoveShapes_Response success(::nav2_msgs::srv::RemoveShapes_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::RemoveShapes_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::RemoveShapes_Response>()
{
  return nav2_msgs::srv::builder::Init_RemoveShapes_Response_success();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_RemoveShapes_Event_response
{
public:
  explicit Init_RemoveShapes_Event_response(::nav2_msgs::srv::RemoveShapes_Event & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::srv::RemoveShapes_Event response(::nav2_msgs::srv::RemoveShapes_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::RemoveShapes_Event msg_;
};

class Init_RemoveShapes_Event_request
{
public:
  explicit Init_RemoveShapes_Event_request(::nav2_msgs::srv::RemoveShapes_Event & msg)
  : msg_(msg)
  {}
  Init_RemoveShapes_Event_response request(::nav2_msgs::srv::RemoveShapes_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RemoveShapes_Event_response(msg_);
  }

private:
  ::nav2_msgs::srv::RemoveShapes_Event msg_;
};

class Init_RemoveShapes_Event_info
{
public:
  Init_RemoveShapes_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RemoveShapes_Event_request info(::nav2_msgs::srv::RemoveShapes_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RemoveShapes_Event_request(msg_);
  }

private:
  ::nav2_msgs::srv::RemoveShapes_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::RemoveShapes_Event>()
{
  return nav2_msgs::srv::builder::Init_RemoveShapes_Event_info();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__SRV__DETAIL__REMOVE_SHAPES__BUILDER_HPP_
