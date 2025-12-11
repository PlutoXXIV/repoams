// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:msg/CollisionDetectorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/collision_detector_state.hpp"


#ifndef NAV2_MSGS__MSG__DETAIL__COLLISION_DETECTOR_STATE__BUILDER_HPP_
#define NAV2_MSGS__MSG__DETAIL__COLLISION_DETECTOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/msg/detail/collision_detector_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace msg
{

namespace builder
{

class Init_CollisionDetectorState_detections
{
public:
  explicit Init_CollisionDetectorState_detections(::nav2_msgs::msg::CollisionDetectorState & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::msg::CollisionDetectorState detections(::nav2_msgs::msg::CollisionDetectorState::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::msg::CollisionDetectorState msg_;
};

class Init_CollisionDetectorState_polygons
{
public:
  Init_CollisionDetectorState_polygons()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CollisionDetectorState_detections polygons(::nav2_msgs::msg::CollisionDetectorState::_polygons_type arg)
  {
    msg_.polygons = std::move(arg);
    return Init_CollisionDetectorState_detections(msg_);
  }

private:
  ::nav2_msgs::msg::CollisionDetectorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::msg::CollisionDetectorState>()
{
  return nav2_msgs::msg::builder::Init_CollisionDetectorState_polygons();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__COLLISION_DETECTOR_STATE__BUILDER_HPP_
