// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:msg/CriticsStats.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/msg/critics_stats.hpp"


#ifndef NAV2_MSGS__MSG__DETAIL__CRITICS_STATS__TRAITS_HPP_
#define NAV2_MSGS__MSG__DETAIL__CRITICS_STATS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nav2_msgs/msg/detail/critics_stats__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace nav2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CriticsStats & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: critics
  {
    if (msg.critics.size() == 0) {
      out << "critics: []";
    } else {
      out << "critics: [";
      size_t pending_items = msg.critics.size();
      for (auto item : msg.critics) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: changed
  {
    if (msg.changed.size() == 0) {
      out << "changed: []";
    } else {
      out << "changed: [";
      size_t pending_items = msg.changed.size();
      for (auto item : msg.changed) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: costs_sum
  {
    if (msg.costs_sum.size() == 0) {
      out << "costs_sum: []";
    } else {
      out << "costs_sum: [";
      size_t pending_items = msg.costs_sum.size();
      for (auto item : msg.costs_sum) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const CriticsStats & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: critics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.critics.size() == 0) {
      out << "critics: []\n";
    } else {
      out << "critics:\n";
      for (auto item : msg.critics) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: changed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.changed.size() == 0) {
      out << "changed: []\n";
    } else {
      out << "changed:\n";
      for (auto item : msg.changed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: costs_sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.costs_sum.size() == 0) {
      out << "costs_sum: []\n";
    } else {
      out << "costs_sum:\n";
      for (auto item : msg.costs_sum) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CriticsStats & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace nav2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use nav2_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nav2_msgs::msg::CriticsStats & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::msg::CriticsStats & msg)
{
  return nav2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::msg::CriticsStats>()
{
  return "nav2_msgs::msg::CriticsStats";
}

template<>
inline const char * name<nav2_msgs::msg::CriticsStats>()
{
  return "nav2_msgs/msg/CriticsStats";
}

template<>
struct has_fixed_size<nav2_msgs::msg::CriticsStats>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav2_msgs::msg::CriticsStats>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nav2_msgs::msg::CriticsStats>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV2_MSGS__MSG__DETAIL__CRITICS_STATS__TRAITS_HPP_
