// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav2_msgs:msg/PolygonObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/polygon_object.hpp"


#ifndef NAV2_MSGS__MSG__DETAIL__POLYGON_OBJECT__STRUCT_HPP_
#define NAV2_MSGS__MSG__DETAIL__POLYGON_OBJECT__STRUCT_HPP_

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
// Member 'uuid'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'points'
#include "geometry_msgs/msg/detail/point32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__msg__PolygonObject __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__msg__PolygonObject __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PolygonObject_
{
  using Type = PolygonObject_<ContainerAllocator>;

  explicit PolygonObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    uuid(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->closed = false;
      this->value = 0;
    }
  }

  explicit PolygonObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    uuid(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->closed = false;
      this->value = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _uuid_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _uuid_type uuid;
  using _points_type =
    std::vector<geometry_msgs::msg::Point32_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point32_<ContainerAllocator>>>;
  _points_type points;
  using _closed_type =
    bool;
  _closed_type closed;
  using _value_type =
    int8_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__uuid(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->uuid = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<geometry_msgs::msg::Point32_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point32_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__closed(
    const bool & _arg)
  {
    this->closed = _arg;
    return *this;
  }
  Type & set__value(
    const int8_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::msg::PolygonObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::msg::PolygonObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::msg::PolygonObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::msg::PolygonObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::PolygonObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::PolygonObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::PolygonObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::PolygonObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::msg::PolygonObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::msg::PolygonObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__msg__PolygonObject
    std::shared_ptr<nav2_msgs::msg::PolygonObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__msg__PolygonObject
    std::shared_ptr<nav2_msgs::msg::PolygonObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PolygonObject_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->uuid != other.uuid) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    if (this->closed != other.closed) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const PolygonObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PolygonObject_

// alias to use template instance with default allocator
using PolygonObject =
  nav2_msgs::msg::PolygonObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__POLYGON_OBJECT__STRUCT_HPP_
