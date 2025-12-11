// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav2_msgs:msg/TrackingFeedback.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/tracking_feedback.hpp"


#ifndef NAV2_MSGS__MSG__DETAIL__TRACKING_FEEDBACK__STRUCT_HPP_
#define NAV2_MSGS__MSG__DETAIL__TRACKING_FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'robot_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__msg__TrackingFeedback __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__msg__TrackingFeedback __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackingFeedback_
{
  using Type = TrackingFeedback_<ContainerAllocator>;

  explicit TrackingFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    robot_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tracking_error = 0.0f;
      this->current_path_index = 0ul;
      this->distance_to_goal = 0.0f;
      this->speed = 0.0f;
      this->remaining_path_length = 0.0f;
    }
  }

  explicit TrackingFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    robot_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tracking_error = 0.0f;
      this->current_path_index = 0ul;
      this->distance_to_goal = 0.0f;
      this->speed = 0.0f;
      this->remaining_path_length = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tracking_error_type =
    float;
  _tracking_error_type tracking_error;
  using _current_path_index_type =
    uint32_t;
  _current_path_index_type current_path_index;
  using _robot_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _robot_pose_type robot_pose;
  using _distance_to_goal_type =
    float;
  _distance_to_goal_type distance_to_goal;
  using _speed_type =
    float;
  _speed_type speed;
  using _remaining_path_length_type =
    float;
  _remaining_path_length_type remaining_path_length;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tracking_error(
    const float & _arg)
  {
    this->tracking_error = _arg;
    return *this;
  }
  Type & set__current_path_index(
    const uint32_t & _arg)
  {
    this->current_path_index = _arg;
    return *this;
  }
  Type & set__robot_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->robot_pose = _arg;
    return *this;
  }
  Type & set__distance_to_goal(
    const float & _arg)
  {
    this->distance_to_goal = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__remaining_path_length(
    const float & _arg)
  {
    this->remaining_path_length = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::msg::TrackingFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::msg::TrackingFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::msg::TrackingFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::msg::TrackingFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::TrackingFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::TrackingFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::TrackingFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::TrackingFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::msg::TrackingFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::msg::TrackingFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__msg__TrackingFeedback
    std::shared_ptr<nav2_msgs::msg::TrackingFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__msg__TrackingFeedback
    std::shared_ptr<nav2_msgs::msg::TrackingFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackingFeedback_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tracking_error != other.tracking_error) {
      return false;
    }
    if (this->current_path_index != other.current_path_index) {
      return false;
    }
    if (this->robot_pose != other.robot_pose) {
      return false;
    }
    if (this->distance_to_goal != other.distance_to_goal) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->remaining_path_length != other.remaining_path_length) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackingFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackingFeedback_

// alias to use template instance with default allocator
using TrackingFeedback =
  nav2_msgs::msg::TrackingFeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__TRACKING_FEEDBACK__STRUCT_HPP_
