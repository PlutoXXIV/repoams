// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav2_msgs:srv/GetShapes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/srv/get_shapes.hpp"


#ifndef NAV2_MSGS__SRV__DETAIL__GET_SHAPES__STRUCT_HPP_
#define NAV2_MSGS__SRV__DETAIL__GET_SHAPES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__nav2_msgs__srv__GetShapes_Request __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__srv__GetShapes_Request __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetShapes_Request_
{
  using Type = GetShapes_Request_<ContainerAllocator>;

  explicit GetShapes_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetShapes_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::srv::GetShapes_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::srv::GetShapes_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::srv::GetShapes_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::srv::GetShapes_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::GetShapes_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::GetShapes_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::GetShapes_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::GetShapes_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::srv::GetShapes_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::srv::GetShapes_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__srv__GetShapes_Request
    std::shared_ptr<nav2_msgs::srv::GetShapes_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__srv__GetShapes_Request
    std::shared_ptr<nav2_msgs::srv::GetShapes_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetShapes_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetShapes_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetShapes_Request_

// alias to use template instance with default allocator
using GetShapes_Request =
  nav2_msgs::srv::GetShapes_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nav2_msgs


// Include directives for member types
// Member 'circles'
#include "nav2_msgs/msg/detail/circle_object__struct.hpp"
// Member 'polygons'
#include "nav2_msgs/msg/detail/polygon_object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__srv__GetShapes_Response __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__srv__GetShapes_Response __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetShapes_Response_
{
  using Type = GetShapes_Response_<ContainerAllocator>;

  explicit GetShapes_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetShapes_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _circles_type =
    std::vector<nav2_msgs::msg::CircleObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav2_msgs::msg::CircleObject_<ContainerAllocator>>>;
  _circles_type circles;
  using _polygons_type =
    std::vector<nav2_msgs::msg::PolygonObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav2_msgs::msg::PolygonObject_<ContainerAllocator>>>;
  _polygons_type polygons;

  // setters for named parameter idiom
  Type & set__circles(
    const std::vector<nav2_msgs::msg::CircleObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav2_msgs::msg::CircleObject_<ContainerAllocator>>> & _arg)
  {
    this->circles = _arg;
    return *this;
  }
  Type & set__polygons(
    const std::vector<nav2_msgs::msg::PolygonObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav2_msgs::msg::PolygonObject_<ContainerAllocator>>> & _arg)
  {
    this->polygons = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::srv::GetShapes_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::srv::GetShapes_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::srv::GetShapes_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::srv::GetShapes_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::GetShapes_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::GetShapes_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::GetShapes_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::GetShapes_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::srv::GetShapes_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::srv::GetShapes_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__srv__GetShapes_Response
    std::shared_ptr<nav2_msgs::srv::GetShapes_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__srv__GetShapes_Response
    std::shared_ptr<nav2_msgs::srv::GetShapes_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetShapes_Response_ & other) const
  {
    if (this->circles != other.circles) {
      return false;
    }
    if (this->polygons != other.polygons) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetShapes_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetShapes_Response_

// alias to use template instance with default allocator
using GetShapes_Response =
  nav2_msgs::srv::GetShapes_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nav2_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__srv__GetShapes_Event __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__srv__GetShapes_Event __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetShapes_Event_
{
  using Type = GetShapes_Event_<ContainerAllocator>;

  explicit GetShapes_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetShapes_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<nav2_msgs::srv::GetShapes_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav2_msgs::srv::GetShapes_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<nav2_msgs::srv::GetShapes_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav2_msgs::srv::GetShapes_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<nav2_msgs::srv::GetShapes_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav2_msgs::srv::GetShapes_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<nav2_msgs::srv::GetShapes_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav2_msgs::srv::GetShapes_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::srv::GetShapes_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::srv::GetShapes_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::srv::GetShapes_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::srv::GetShapes_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::GetShapes_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::GetShapes_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::GetShapes_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::GetShapes_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::srv::GetShapes_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::srv::GetShapes_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__srv__GetShapes_Event
    std::shared_ptr<nav2_msgs::srv::GetShapes_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__srv__GetShapes_Event
    std::shared_ptr<nav2_msgs::srv::GetShapes_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetShapes_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetShapes_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetShapes_Event_

// alias to use template instance with default allocator
using GetShapes_Event =
  nav2_msgs::srv::GetShapes_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nav2_msgs

namespace nav2_msgs
{

namespace srv
{

struct GetShapes
{
  using Request = nav2_msgs::srv::GetShapes_Request;
  using Response = nav2_msgs::srv::GetShapes_Response;
  using Event = nav2_msgs::srv::GetShapes_Event;
};

}  // namespace srv

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__SRV__DETAIL__GET_SHAPES__STRUCT_HPP_
