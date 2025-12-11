// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:srv/AddShapes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/srv/add_shapes.hpp"


#ifndef NAV2_MSGS__SRV__DETAIL__ADD_SHAPES__BUILDER_HPP_
#define NAV2_MSGS__SRV__DETAIL__ADD_SHAPES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/srv/detail/add_shapes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_AddShapes_Request_polygons
{
public:
  explicit Init_AddShapes_Request_polygons(::nav2_msgs::srv::AddShapes_Request & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::srv::AddShapes_Request polygons(::nav2_msgs::srv::AddShapes_Request::_polygons_type arg)
  {
    msg_.polygons = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::AddShapes_Request msg_;
};

class Init_AddShapes_Request_circles
{
public:
  Init_AddShapes_Request_circles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddShapes_Request_polygons circles(::nav2_msgs::srv::AddShapes_Request::_circles_type arg)
  {
    msg_.circles = std::move(arg);
    return Init_AddShapes_Request_polygons(msg_);
  }

private:
  ::nav2_msgs::srv::AddShapes_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::AddShapes_Request>()
{
  return nav2_msgs::srv::builder::Init_AddShapes_Request_circles();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_AddShapes_Response_success
{
public:
  Init_AddShapes_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::srv::AddShapes_Response success(::nav2_msgs::srv::AddShapes_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::AddShapes_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::AddShapes_Response>()
{
  return nav2_msgs::srv::builder::Init_AddShapes_Response_success();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_AddShapes_Event_response
{
public:
  explicit Init_AddShapes_Event_response(::nav2_msgs::srv::AddShapes_Event & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::srv::AddShapes_Event response(::nav2_msgs::srv::AddShapes_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::AddShapes_Event msg_;
};

class Init_AddShapes_Event_request
{
public:
  explicit Init_AddShapes_Event_request(::nav2_msgs::srv::AddShapes_Event & msg)
  : msg_(msg)
  {}
  Init_AddShapes_Event_response request(::nav2_msgs::srv::AddShapes_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_AddShapes_Event_response(msg_);
  }

private:
  ::nav2_msgs::srv::AddShapes_Event msg_;
};

class Init_AddShapes_Event_info
{
public:
  Init_AddShapes_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddShapes_Event_request info(::nav2_msgs::srv::AddShapes_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_AddShapes_Event_request(msg_);
  }

private:
  ::nav2_msgs::srv::AddShapes_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::AddShapes_Event>()
{
  return nav2_msgs::srv::builder::Init_AddShapes_Event_info();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__SRV__DETAIL__ADD_SHAPES__BUILDER_HPP_
