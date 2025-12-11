// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav2_msgs:msg/CollisionDetectorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/collision_detector_state.hpp"


#ifndef NAV2_MSGS__MSG__DETAIL__COLLISION_DETECTOR_STATE__STRUCT_HPP_
#define NAV2_MSGS__MSG__DETAIL__COLLISION_DETECTOR_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__nav2_msgs__msg__CollisionDetectorState __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__msg__CollisionDetectorState __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CollisionDetectorState_
{
  using Type = CollisionDetectorState_<ContainerAllocator>;

  explicit CollisionDetectorState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit CollisionDetectorState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _polygons_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _polygons_type polygons;
  using _detections_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _detections_type detections;

  // setters for named parameter idiom
  Type & set__polygons(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->polygons = _arg;
    return *this;
  }
  Type & set__detections(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->detections = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::msg::CollisionDetectorState_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::msg::CollisionDetectorState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::msg::CollisionDetectorState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::msg::CollisionDetectorState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::CollisionDetectorState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::CollisionDetectorState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::CollisionDetectorState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::CollisionDetectorState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::msg::CollisionDetectorState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::msg::CollisionDetectorState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__msg__CollisionDetectorState
    std::shared_ptr<nav2_msgs::msg::CollisionDetectorState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__msg__CollisionDetectorState
    std::shared_ptr<nav2_msgs::msg::CollisionDetectorState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CollisionDetectorState_ & other) const
  {
    if (this->polygons != other.polygons) {
      return false;
    }
    if (this->detections != other.detections) {
      return false;
    }
    return true;
  }
  bool operator!=(const CollisionDetectorState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CollisionDetectorState_

// alias to use template instance with default allocator
using CollisionDetectorState =
  nav2_msgs::msg::CollisionDetectorState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__COLLISION_DETECTOR_STATE__STRUCT_HPP_
