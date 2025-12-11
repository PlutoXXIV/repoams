// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav2_msgs:msg/CostmapUpdate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/costmap_update.hpp"


#ifndef NAV2_MSGS__MSG__DETAIL__COSTMAP_UPDATE__STRUCT_HPP_
#define NAV2_MSGS__MSG__DETAIL__COSTMAP_UPDATE__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__msg__CostmapUpdate __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__msg__CostmapUpdate __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CostmapUpdate_
{
  using Type = CostmapUpdate_<ContainerAllocator>;

  explicit CostmapUpdate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ul;
      this->y = 0ul;
      this->size_x = 0ul;
      this->size_y = 0ul;
    }
  }

  explicit CostmapUpdate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ul;
      this->y = 0ul;
      this->size_x = 0ul;
      this->size_y = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _x_type =
    uint32_t;
  _x_type x;
  using _y_type =
    uint32_t;
  _y_type y;
  using _size_x_type =
    uint32_t;
  _size_x_type size_x;
  using _size_y_type =
    uint32_t;
  _size_y_type size_y;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__x(
    const uint32_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const uint32_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__size_x(
    const uint32_t & _arg)
  {
    this->size_x = _arg;
    return *this;
  }
  Type & set__size_y(
    const uint32_t & _arg)
  {
    this->size_y = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::msg::CostmapUpdate_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::msg::CostmapUpdate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::msg::CostmapUpdate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::msg::CostmapUpdate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::CostmapUpdate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::CostmapUpdate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::CostmapUpdate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::CostmapUpdate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::msg::CostmapUpdate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::msg::CostmapUpdate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__msg__CostmapUpdate
    std::shared_ptr<nav2_msgs::msg::CostmapUpdate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__msg__CostmapUpdate
    std::shared_ptr<nav2_msgs::msg::CostmapUpdate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CostmapUpdate_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->size_x != other.size_x) {
      return false;
    }
    if (this->size_y != other.size_y) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const CostmapUpdate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CostmapUpdate_

// alias to use template instance with default allocator
using CostmapUpdate =
  nav2_msgs::msg::CostmapUpdate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__COSTMAP_UPDATE__STRUCT_HPP_
