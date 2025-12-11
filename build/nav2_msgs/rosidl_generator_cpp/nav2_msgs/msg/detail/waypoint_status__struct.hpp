// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav2_msgs:msg/WaypointStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/waypoint_status.hpp"


#ifndef NAV2_MSGS__MSG__DETAIL__WAYPOINT_STATUS__STRUCT_HPP_
#define NAV2_MSGS__MSG__DETAIL__WAYPOINT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'waypoint_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__msg__WaypointStatus __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__msg__WaypointStatus __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WaypointStatus_
{
  using Type = WaypointStatus_<ContainerAllocator>;

  explicit WaypointStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoint_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->waypoint_status = 0;
      this->waypoint_index = 0ul;
      this->error_code = 0;
      this->error_msg = "";
    }
  }

  explicit WaypointStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoint_pose(_alloc, _init),
    error_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->waypoint_status = 0;
      this->waypoint_index = 0ul;
      this->error_code = 0;
      this->error_msg = "";
    }
  }

  // field types and members
  using _waypoint_status_type =
    uint8_t;
  _waypoint_status_type waypoint_status;
  using _waypoint_index_type =
    uint32_t;
  _waypoint_index_type waypoint_index;
  using _waypoint_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _waypoint_pose_type waypoint_pose;
  using _error_code_type =
    uint16_t;
  _error_code_type error_code;
  using _error_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_msg_type error_msg;

  // setters for named parameter idiom
  Type & set__waypoint_status(
    const uint8_t & _arg)
  {
    this->waypoint_status = _arg;
    return *this;
  }
  Type & set__waypoint_index(
    const uint32_t & _arg)
  {
    this->waypoint_index = _arg;
    return *this;
  }
  Type & set__waypoint_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->waypoint_pose = _arg;
    return *this;
  }
  Type & set__error_code(
    const uint16_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__error_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_msg = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t PENDING =
    0u;
  static constexpr uint8_t COMPLETED =
    1u;
  static constexpr uint8_t SKIPPED =
    2u;
  static constexpr uint8_t FAILED =
    3u;

  // pointer types
  using RawPtr =
    nav2_msgs::msg::WaypointStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::msg::WaypointStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::msg::WaypointStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::msg::WaypointStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::WaypointStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::WaypointStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::WaypointStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::WaypointStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::msg::WaypointStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::msg::WaypointStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__msg__WaypointStatus
    std::shared_ptr<nav2_msgs::msg::WaypointStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__msg__WaypointStatus
    std::shared_ptr<nav2_msgs::msg::WaypointStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointStatus_ & other) const
  {
    if (this->waypoint_status != other.waypoint_status) {
      return false;
    }
    if (this->waypoint_index != other.waypoint_index) {
      return false;
    }
    if (this->waypoint_pose != other.waypoint_pose) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->error_msg != other.error_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointStatus_

// alias to use template instance with default allocator
using WaypointStatus =
  nav2_msgs::msg::WaypointStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WaypointStatus_<ContainerAllocator>::PENDING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WaypointStatus_<ContainerAllocator>::COMPLETED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WaypointStatus_<ContainerAllocator>::SKIPPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WaypointStatus_<ContainerAllocator>::FAILED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__WAYPOINT_STATUS__STRUCT_HPP_
