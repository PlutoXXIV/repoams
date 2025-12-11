// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav2_msgs:msg/CriticsStats.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/critics_stats.hpp"


#ifndef NAV2_MSGS__MSG__DETAIL__CRITICS_STATS__STRUCT_HPP_
#define NAV2_MSGS__MSG__DETAIL__CRITICS_STATS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__msg__CriticsStats __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__msg__CriticsStats __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CriticsStats_
{
  using Type = CriticsStats_<ContainerAllocator>;

  explicit CriticsStats_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    (void)_init;
  }

  explicit CriticsStats_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _critics_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _critics_type critics;
  using _changed_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _changed_type changed;
  using _costs_sum_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _costs_sum_type costs_sum;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__critics(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->critics = _arg;
    return *this;
  }
  Type & set__changed(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->changed = _arg;
    return *this;
  }
  Type & set__costs_sum(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->costs_sum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::msg::CriticsStats_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::msg::CriticsStats_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::msg::CriticsStats_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::msg::CriticsStats_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::CriticsStats_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::CriticsStats_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::CriticsStats_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::CriticsStats_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::msg::CriticsStats_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::msg::CriticsStats_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__msg__CriticsStats
    std::shared_ptr<nav2_msgs::msg::CriticsStats_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__msg__CriticsStats
    std::shared_ptr<nav2_msgs::msg::CriticsStats_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CriticsStats_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->critics != other.critics) {
      return false;
    }
    if (this->changed != other.changed) {
      return false;
    }
    if (this->costs_sum != other.costs_sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const CriticsStats_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CriticsStats_

// alias to use template instance with default allocator
using CriticsStats =
  nav2_msgs::msg::CriticsStats_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__CRITICS_STATS__STRUCT_HPP_
