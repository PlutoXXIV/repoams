// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav2_msgs:srv/IsPathValid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/srv/is_path_valid.hpp"


#ifndef NAV2_MSGS__SRV__DETAIL__IS_PATH_VALID__STRUCT_HPP_
#define NAV2_MSGS__SRV__DETAIL__IS_PATH_VALID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__srv__IsPathValid_Request __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__srv__IsPathValid_Request __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IsPathValid_Request_
{
  using Type = IsPathValid_Request_<ContainerAllocator>;

  explicit IsPathValid_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->max_cost = 254;
      this->consider_unknown_as_obstacle = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->max_cost = 0;
      this->consider_unknown_as_obstacle = false;
    }
  }

  explicit IsPathValid_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->max_cost = 254;
      this->consider_unknown_as_obstacle = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->max_cost = 0;
      this->consider_unknown_as_obstacle = false;
    }
  }

  // field types and members
  using _path_type =
    nav_msgs::msg::Path_<ContainerAllocator>;
  _path_type path;
  using _max_cost_type =
    uint8_t;
  _max_cost_type max_cost;
  using _consider_unknown_as_obstacle_type =
    bool;
  _consider_unknown_as_obstacle_type consider_unknown_as_obstacle;

  // setters for named parameter idiom
  Type & set__path(
    const nav_msgs::msg::Path_<ContainerAllocator> & _arg)
  {
    this->path = _arg;
    return *this;
  }
  Type & set__max_cost(
    const uint8_t & _arg)
  {
    this->max_cost = _arg;
    return *this;
  }
  Type & set__consider_unknown_as_obstacle(
    const bool & _arg)
  {
    this->consider_unknown_as_obstacle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__srv__IsPathValid_Request
    std::shared_ptr<nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__srv__IsPathValid_Request
    std::shared_ptr<nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IsPathValid_Request_ & other) const
  {
    if (this->path != other.path) {
      return false;
    }
    if (this->max_cost != other.max_cost) {
      return false;
    }
    if (this->consider_unknown_as_obstacle != other.consider_unknown_as_obstacle) {
      return false;
    }
    return true;
  }
  bool operator!=(const IsPathValid_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IsPathValid_Request_

// alias to use template instance with default allocator
using IsPathValid_Request =
  nav2_msgs::srv::IsPathValid_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nav2_msgs


#ifndef _WIN32
# define DEPRECATED__nav2_msgs__srv__IsPathValid_Response __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__srv__IsPathValid_Response __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IsPathValid_Response_
{
  using Type = IsPathValid_Response_<ContainerAllocator>;

  explicit IsPathValid_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_valid = false;
    }
  }

  explicit IsPathValid_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_valid = false;
    }
  }

  // field types and members
  using _is_valid_type =
    bool;
  _is_valid_type is_valid;
  using _invalid_pose_indices_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _invalid_pose_indices_type invalid_pose_indices;

  // setters for named parameter idiom
  Type & set__is_valid(
    const bool & _arg)
  {
    this->is_valid = _arg;
    return *this;
  }
  Type & set__invalid_pose_indices(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->invalid_pose_indices = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__srv__IsPathValid_Response
    std::shared_ptr<nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__srv__IsPathValid_Response
    std::shared_ptr<nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IsPathValid_Response_ & other) const
  {
    if (this->is_valid != other.is_valid) {
      return false;
    }
    if (this->invalid_pose_indices != other.invalid_pose_indices) {
      return false;
    }
    return true;
  }
  bool operator!=(const IsPathValid_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IsPathValid_Response_

// alias to use template instance with default allocator
using IsPathValid_Response =
  nav2_msgs::srv::IsPathValid_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nav2_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__srv__IsPathValid_Event __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__srv__IsPathValid_Event __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IsPathValid_Event_
{
  using Type = IsPathValid_Event_<ContainerAllocator>;

  explicit IsPathValid_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit IsPathValid_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav2_msgs::srv::IsPathValid_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav2_msgs::srv::IsPathValid_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::srv::IsPathValid_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::srv::IsPathValid_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::srv::IsPathValid_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::srv::IsPathValid_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::IsPathValid_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::IsPathValid_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::IsPathValid_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::IsPathValid_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::srv::IsPathValid_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::srv::IsPathValid_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__srv__IsPathValid_Event
    std::shared_ptr<nav2_msgs::srv::IsPathValid_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__srv__IsPathValid_Event
    std::shared_ptr<nav2_msgs::srv::IsPathValid_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IsPathValid_Event_ & other) const
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
  bool operator!=(const IsPathValid_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IsPathValid_Event_

// alias to use template instance with default allocator
using IsPathValid_Event =
  nav2_msgs::srv::IsPathValid_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nav2_msgs

namespace nav2_msgs
{

namespace srv
{

struct IsPathValid
{
  using Request = nav2_msgs::srv::IsPathValid_Request;
  using Response = nav2_msgs::srv::IsPathValid_Response;
  using Event = nav2_msgs::srv::IsPathValid_Event;
};

}  // namespace srv

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__SRV__DETAIL__IS_PATH_VALID__STRUCT_HPP_
