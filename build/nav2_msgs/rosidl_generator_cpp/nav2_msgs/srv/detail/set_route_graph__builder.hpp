// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:srv/SetRouteGraph.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/srv/set_route_graph.hpp"


#ifndef NAV2_MSGS__SRV__DETAIL__SET_ROUTE_GRAPH__BUILDER_HPP_
#define NAV2_MSGS__SRV__DETAIL__SET_ROUTE_GRAPH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/srv/detail/set_route_graph__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_SetRouteGraph_Request_graph_filepath
{
public:
  Init_SetRouteGraph_Request_graph_filepath()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::srv::SetRouteGraph_Request graph_filepath(::nav2_msgs::srv::SetRouteGraph_Request::_graph_filepath_type arg)
  {
    msg_.graph_filepath = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::SetRouteGraph_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::SetRouteGraph_Request>()
{
  return nav2_msgs::srv::builder::Init_SetRouteGraph_Request_graph_filepath();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_SetRouteGraph_Response_success
{
public:
  Init_SetRouteGraph_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::srv::SetRouteGraph_Response success(::nav2_msgs::srv::SetRouteGraph_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::SetRouteGraph_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::SetRouteGraph_Response>()
{
  return nav2_msgs::srv::builder::Init_SetRouteGraph_Response_success();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_SetRouteGraph_Event_response
{
public:
  explicit Init_SetRouteGraph_Event_response(::nav2_msgs::srv::SetRouteGraph_Event & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::srv::SetRouteGraph_Event response(::nav2_msgs::srv::SetRouteGraph_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::SetRouteGraph_Event msg_;
};

class Init_SetRouteGraph_Event_request
{
public:
  explicit Init_SetRouteGraph_Event_request(::nav2_msgs::srv::SetRouteGraph_Event & msg)
  : msg_(msg)
  {}
  Init_SetRouteGraph_Event_response request(::nav2_msgs::srv::SetRouteGraph_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetRouteGraph_Event_response(msg_);
  }

private:
  ::nav2_msgs::srv::SetRouteGraph_Event msg_;
};

class Init_SetRouteGraph_Event_info
{
public:
  Init_SetRouteGraph_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetRouteGraph_Event_request info(::nav2_msgs::srv::SetRouteGraph_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetRouteGraph_Event_request(msg_);
  }

private:
  ::nav2_msgs::srv::SetRouteGraph_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::SetRouteGraph_Event>()
{
  return nav2_msgs::srv::builder::Init_SetRouteGraph_Event_info();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__SRV__DETAIL__SET_ROUTE_GRAPH__BUILDER_HPP_
