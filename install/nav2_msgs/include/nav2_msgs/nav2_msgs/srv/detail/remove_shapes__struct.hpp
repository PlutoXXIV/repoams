// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav2_msgs:srv/RemoveShapes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/srv/remove_shapes.hpp"


#ifndef NAV2_MSGS__SRV__DETAIL__REMOVE_SHAPES__STRUCT_HPP_
#define NAV2_MSGS__SRV__DETAIL__REMOVE_SHAPES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'uuids'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__srv__RemoveShapes_Request __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__srv__RemoveShapes_Request __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RemoveShapes_Request_
{
  using Type = RemoveShapes_Request_<ContainerAllocator>;

  explicit RemoveShapes_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->all_objects = false;
    }
  }

  explicit RemoveShapes_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->all_objects = false;
    }
  }

  // field types and members
  using _all_objects_type =
    bool;
  _all_objects_type all_objects;
  using _uuids_type =
    std::vector<unique_identifier_msgs::msg::UUID_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unique_identifier_msgs::msg::UUID_<ContainerAllocator>>>;
  _uuids_type uuids;

  // setters for named parameter idiom
  Type & set__all_objects(
    const bool & _arg)
  {
    this->all_objects = _arg;
    return *this;
  }
  Type & set__uuids(
    const std::vector<unique_identifier_msgs::msg::UUID_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unique_identifier_msgs::msg::UUID_<ContainerAllocator>>> & _arg)
  {
    this->uuids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::srv::RemoveShapes_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::srv::RemoveShapes_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::srv::RemoveShapes_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::srv::RemoveShapes_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::RemoveShapes_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::RemoveShapes_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::RemoveShapes_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::RemoveShapes_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::srv::RemoveShapes_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::srv::RemoveShapes_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__srv__RemoveShapes_Request
    std::shared_ptr<nav2_msgs::srv::RemoveShapes_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__srv__RemoveShapes_Request
    std::shared_ptr<nav2_msgs::srv::RemoveShapes_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RemoveShapes_Request_ & other) const
  {
    if (this->all_objects != other.all_objects) {
      return false;
    }
    if (this->uuids != other.uuids) {
      return false;
    }
    return true;
  }
  bool operator!=(const RemoveShapes_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RemoveShapes_Request_

// alias to use template instance with default allocator
using RemoveShapes_Request =
  nav2_msgs::srv::RemoveShapes_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nav2_msgs


#ifndef _WIN32
# define DEPRECATED__nav2_msgs__srv__RemoveShapes_Response __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__srv__RemoveShapes_Response __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RemoveShapes_Response_
{
  using Type = RemoveShapes_Response_<ContainerAllocator>;

  explicit RemoveShapes_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit RemoveShapes_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::srv::RemoveShapes_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::srv::RemoveShapes_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::srv::RemoveShapes_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::srv::RemoveShapes_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::RemoveShapes_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::RemoveShapes_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::RemoveShapes_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::RemoveShapes_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::srv::RemoveShapes_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::srv::RemoveShapes_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__srv__RemoveShapes_Response
    std::shared_ptr<nav2_msgs::srv::RemoveShapes_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__srv__RemoveShapes_Response
    std::shared_ptr<nav2_msgs::srv::RemoveShapes_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RemoveShapes_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const RemoveShapes_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RemoveShapes_Response_

// alias to use template instance with default allocator
using RemoveShapes_Response =
  nav2_msgs::srv::RemoveShapes_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nav2_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__srv__RemoveShapes_Event __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__srv__RemoveShapes_Event __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RemoveShapes_Event_
{
  using Type = RemoveShapes_Event_<ContainerAllocator>;

  explicit RemoveShapes_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit RemoveShapes_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<nav2_msgs::srv::RemoveShapes_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav2_msgs::srv::RemoveShapes_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<nav2_msgs::srv::RemoveShapes_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav2_msgs::srv::RemoveShapes_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<nav2_msgs::srv::RemoveShapes_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav2_msgs::srv::RemoveShapes_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<nav2_msgs::srv::RemoveShapes_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav2_msgs::srv::RemoveShapes_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::srv::RemoveShapes_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::srv::RemoveShapes_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::srv::RemoveShapes_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::srv::RemoveShapes_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::RemoveShapes_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::RemoveShapes_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::srv::RemoveShapes_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::srv::RemoveShapes_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::srv::RemoveShapes_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::srv::RemoveShapes_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__srv__RemoveShapes_Event
    std::shared_ptr<nav2_msgs::srv::RemoveShapes_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__srv__RemoveShapes_Event
    std::shared_ptr<nav2_msgs::srv::RemoveShapes_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RemoveShapes_Event_ & other) const
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
  bool operator!=(const RemoveShapes_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RemoveShapes_Event_

// alias to use template instance with default allocator
using RemoveShapes_Event =
  nav2_msgs::srv::RemoveShapes_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nav2_msgs

namespace nav2_msgs
{

namespace srv
{

struct RemoveShapes
{
  using Request = nav2_msgs::srv::RemoveShapes_Request;
  using Response = nav2_msgs::srv::RemoveShapes_Response;
  using Event = nav2_msgs::srv::RemoveShapes_Event;
};

}  // namespace srv

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__SRV__DETAIL__REMOVE_SHAPES__STRUCT_HPP_
