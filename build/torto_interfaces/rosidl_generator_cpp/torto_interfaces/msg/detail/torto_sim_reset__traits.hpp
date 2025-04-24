// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from torto_interfaces:msg/TortoSimReset.idl
// generated code does not contain a copyright notice

#ifndef TORTO_INTERFACES__MSG__DETAIL__TORTO_SIM_RESET__TRAITS_HPP_
#define TORTO_INTERFACES__MSG__DETAIL__TORTO_SIM_RESET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "torto_interfaces/msg/detail/torto_sim_reset__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace torto_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TortoSimReset & msg,
  std::ostream & out)
{
  out << "{";
  // member: hard_reset
  {
    out << "hard_reset: ";
    rosidl_generator_traits::value_to_yaml(msg.hard_reset, out);
    out << ", ";
  }

  // member: zero_robot
  {
    out << "zero_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.zero_robot, out);
    out << ", ";
  }

  // member: reason
  {
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TortoSimReset & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: hard_reset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hard_reset: ";
    rosidl_generator_traits::value_to_yaml(msg.hard_reset, out);
    out << "\n";
  }

  // member: zero_robot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "zero_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.zero_robot, out);
    out << "\n";
  }

  // member: reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TortoSimReset & msg, bool use_flow_style = false)
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

}  // namespace torto_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use torto_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const torto_interfaces::msg::TortoSimReset & msg,
  std::ostream & out, size_t indentation = 0)
{
  torto_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use torto_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const torto_interfaces::msg::TortoSimReset & msg)
{
  return torto_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<torto_interfaces::msg::TortoSimReset>()
{
  return "torto_interfaces::msg::TortoSimReset";
}

template<>
inline const char * name<torto_interfaces::msg::TortoSimReset>()
{
  return "torto_interfaces/msg/TortoSimReset";
}

template<>
struct has_fixed_size<torto_interfaces::msg::TortoSimReset>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<torto_interfaces::msg::TortoSimReset>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<torto_interfaces::msg::TortoSimReset>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TORTO_INTERFACES__MSG__DETAIL__TORTO_SIM_RESET__TRAITS_HPP_
