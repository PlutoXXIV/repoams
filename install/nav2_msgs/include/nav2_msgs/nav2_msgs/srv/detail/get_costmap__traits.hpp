// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:srv/GetCostmap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/srv/get_costmap.hpp"


#ifndef NAV2_MSGS__SRV__DETAIL__GET_COSTMAP__TRAITS_HPP_
#define NAV2_MSGS__SRV__DETAIL__GET_COSTMAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nav2_msgs/srv/detail/get_costmap__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'specs'
#include "nav2_msgs/msg/detail/costmap_meta_data__traits.hpp"

namespace nav2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetCostmap_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: specs
  {
    out << "specs: ";
    to_flow_style_yaml(msg.specs, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetCostmap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: specs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "specs:\n";
    to_block_style_yaml(msg.specs, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetCostmap_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace nav2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use nav2_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nav2_msgs::srv::GetCostmap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::srv::GetCostmap_Request & msg)
{
  return nav2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::srv::GetCostmap_Request>()
{
  return "nav2_msgs::srv::GetCostmap_Request";
}

template<>
inline const char * name<nav2_msgs::srv::GetCostmap_Request>()
{
  return "nav2_msgs/srv/GetCostmap_Request";
}

template<>
struct has_fixed_size<nav2_msgs::srv::GetCostmap_Request>
  : std::integral_constant<bool, has_fixed_size<nav2_msgs::msg::CostmapMetaData>::value> {};

template<>
struct has_bounded_size<nav2_msgs::srv::GetCostmap_Request>
  : std::integral_constant<bool, has_bounded_size<nav2_msgs::msg::CostmapMetaData>::value> {};

template<>
struct is_message<nav2_msgs::srv::GetCostmap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'map'
#include "nav2_msgs/msg/detail/costmap__traits.hpp"

namespace nav2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetCostmap_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: map
  {
    out << "map: ";
    to_flow_style_yaml(msg.map, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetCostmap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map:\n";
    to_block_style_yaml(msg.map, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetCostmap_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace nav2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use nav2_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nav2_msgs::srv::GetCostmap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::srv::GetCostmap_Response & msg)
{
  return nav2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::srv::GetCostmap_Response>()
{
  return "nav2_msgs::srv::GetCostmap_Response";
}

template<>
inline const char * name<nav2_msgs::srv::GetCostmap_Response>()
{
  return "nav2_msgs/srv/GetCostmap_Response";
}

template<>
struct has_fixed_size<nav2_msgs::srv::GetCostmap_Response>
  : std::integral_constant<bool, has_fixed_size<nav2_msgs::msg::Costmap>::value> {};

template<>
struct has_bounded_size<nav2_msgs::srv::GetCostmap_Response>
  : std::integral_constant<bool, has_bounded_size<nav2_msgs::msg::Costmap>::value> {};

template<>
struct is_message<nav2_msgs::srv::GetCostmap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace nav2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetCostmap_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetCostmap_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetCostmap_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace nav2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use nav2_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nav2_msgs::srv::GetCostmap_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::srv::GetCostmap_Event & msg)
{
  return nav2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::srv::GetCostmap_Event>()
{
  return "nav2_msgs::srv::GetCostmap_Event";
}

template<>
inline const char * name<nav2_msgs::srv::GetCostmap_Event>()
{
  return "nav2_msgs/srv/GetCostmap_Event";
}

template<>
struct has_fixed_size<nav2_msgs::srv::GetCostmap_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav2_msgs::srv::GetCostmap_Event>
  : std::integral_constant<bool, has_bounded_size<nav2_msgs::srv::GetCostmap_Request>::value && has_bounded_size<nav2_msgs::srv::GetCostmap_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<nav2_msgs::srv::GetCostmap_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::srv::GetCostmap>()
{
  return "nav2_msgs::srv::GetCostmap";
}

template<>
inline const char * name<nav2_msgs::srv::GetCostmap>()
{
  return "nav2_msgs/srv/GetCostmap";
}

template<>
struct has_fixed_size<nav2_msgs::srv::GetCostmap>
  : std::integral_constant<
    bool,
    has_fixed_size<nav2_msgs::srv::GetCostmap_Request>::value &&
    has_fixed_size<nav2_msgs::srv::GetCostmap_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav2_msgs::srv::GetCostmap>
  : std::integral_constant<
    bool,
    has_bounded_size<nav2_msgs::srv::GetCostmap_Request>::value &&
    has_bounded_size<nav2_msgs::srv::GetCostmap_Response>::value
  >
{
};

template<>
struct is_service<nav2_msgs::srv::GetCostmap>
  : std::true_type
{
};

template<>
struct is_service_request<nav2_msgs::srv::GetCostmap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nav2_msgs::srv::GetCostmap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NAV2_MSGS__SRV__DETAIL__GET_COSTMAP__TRAITS_HPP_
