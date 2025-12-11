// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:srv/GetCostmap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/srv/get_costmap.hpp"


#ifndef NAV2_MSGS__SRV__DETAIL__GET_COSTMAP__BUILDER_HPP_
#define NAV2_MSGS__SRV__DETAIL__GET_COSTMAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/srv/detail/get_costmap__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetCostmap_Request_specs
{
public:
  Init_GetCostmap_Request_specs()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::srv::GetCostmap_Request specs(::nav2_msgs::srv::GetCostmap_Request::_specs_type arg)
  {
    msg_.specs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::GetCostmap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::GetCostmap_Request>()
{
  return nav2_msgs::srv::builder::Init_GetCostmap_Request_specs();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetCostmap_Response_map
{
public:
  Init_GetCostmap_Response_map()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::srv::GetCostmap_Response map(::nav2_msgs::srv::GetCostmap_Response::_map_type arg)
  {
    msg_.map = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::GetCostmap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::GetCostmap_Response>()
{
  return nav2_msgs::srv::builder::Init_GetCostmap_Response_map();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetCostmap_Event_response
{
public:
  explicit Init_GetCostmap_Event_response(::nav2_msgs::srv::GetCostmap_Event & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::srv::GetCostmap_Event response(::nav2_msgs::srv::GetCostmap_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::GetCostmap_Event msg_;
};

class Init_GetCostmap_Event_request
{
public:
  explicit Init_GetCostmap_Event_request(::nav2_msgs::srv::GetCostmap_Event & msg)
  : msg_(msg)
  {}
  Init_GetCostmap_Event_response request(::nav2_msgs::srv::GetCostmap_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetCostmap_Event_response(msg_);
  }

private:
  ::nav2_msgs::srv::GetCostmap_Event msg_;
};

class Init_GetCostmap_Event_info
{
public:
  Init_GetCostmap_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetCostmap_Event_request info(::nav2_msgs::srv::GetCostmap_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetCostmap_Event_request(msg_);
  }

private:
  ::nav2_msgs::srv::GetCostmap_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::GetCostmap_Event>()
{
  return nav2_msgs::srv::builder::Init_GetCostmap_Event_info();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__SRV__DETAIL__GET_COSTMAP__BUILDER_HPP_
