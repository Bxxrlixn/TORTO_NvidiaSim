// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from torto_interfaces:msg/TortoJointAngles.idl
// generated code does not contain a copyright notice

#ifndef TORTO_INTERFACES__MSG__DETAIL__TORTO_JOINT_ANGLES__TRAITS_HPP_
#define TORTO_INTERFACES__MSG__DETAIL__TORTO_JOINT_ANGLES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "torto_interfaces/msg/detail/torto_joint_angles__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace torto_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TortoJointAngles & msg,
  std::ostream & out)
{
  out << "{";
  // member: theta_deg_fr_detoid
  {
    out << "theta_deg_fr_detoid: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg_fr_detoid, out);
    out << ", ";
  }

  // member: theta_deg_fr_femur
  {
    out << "theta_deg_fr_femur: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg_fr_femur, out);
    out << ", ";
  }

  // member: theta_deg_fr_tibia
  {
    out << "theta_deg_fr_tibia: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg_fr_tibia, out);
    out << ", ";
  }

  // member: theta_deg_fl_detoid
  {
    out << "theta_deg_fl_detoid: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg_fl_detoid, out);
    out << ", ";
  }

  // member: theta_deg_fl_femur
  {
    out << "theta_deg_fl_femur: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg_fl_femur, out);
    out << ", ";
  }

  // member: theta_deg_fl_tibia
  {
    out << "theta_deg_fl_tibia: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg_fl_tibia, out);
    out << ", ";
  }

  // member: theta_deg_br_detoid
  {
    out << "theta_deg_br_detoid: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg_br_detoid, out);
    out << ", ";
  }

  // member: theta_deg_br_femur
  {
    out << "theta_deg_br_femur: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg_br_femur, out);
    out << ", ";
  }

  // member: theta_deg_br_tibia
  {
    out << "theta_deg_br_tibia: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg_br_tibia, out);
    out << ", ";
  }

  // member: theta_deg_bl_detoid
  {
    out << "theta_deg_bl_detoid: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg_bl_detoid, out);
    out << ", ";
  }

  // member: theta_deg_bl_femur
  {
    out << "theta_deg_bl_femur: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg_bl_femur, out);
    out << ", ";
  }

  // member: theta_deg_bl_tibia
  {
    out << "theta_deg_bl_tibia: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg_bl_tibia, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TortoJointAngles & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: theta_deg_fr_detoid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_deg_fr_detoid: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg_fr_detoid, out);
    out << "\n";
  }

  // member: theta_deg_fr_femur
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_deg_fr_femur: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg_fr_femur, out);
    out << "\n";
  }

  // member: theta_deg_fr_tibia
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_deg_fr_tibia: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg_fr_tibia, out);
    out << "\n";
  }

  // member: theta_deg_fl_detoid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_deg_fl_detoid: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg_fl_detoid, out);
    out << "\n";
  }

  // member: theta_deg_fl_femur
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_deg_fl_femur: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg_fl_femur, out);
    out << "\n";
  }

  // member: theta_deg_fl_tibia
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_deg_fl_tibia: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg_fl_tibia, out);
    out << "\n";
  }

  // member: theta_deg_br_detoid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_deg_br_detoid: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg_br_detoid, out);
    out << "\n";
  }

  // member: theta_deg_br_femur
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_deg_br_femur: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg_br_femur, out);
    out << "\n";
  }

  // member: theta_deg_br_tibia
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_deg_br_tibia: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg_br_tibia, out);
    out << "\n";
  }

  // member: theta_deg_bl_detoid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_deg_bl_detoid: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg_bl_detoid, out);
    out << "\n";
  }

  // member: theta_deg_bl_femur
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_deg_bl_femur: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg_bl_femur, out);
    out << "\n";
  }

  // member: theta_deg_bl_tibia
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_deg_bl_tibia: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg_bl_tibia, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TortoJointAngles & msg, bool use_flow_style = false)
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
  const torto_interfaces::msg::TortoJointAngles & msg,
  std::ostream & out, size_t indentation = 0)
{
  torto_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use torto_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const torto_interfaces::msg::TortoJointAngles & msg)
{
  return torto_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<torto_interfaces::msg::TortoJointAngles>()
{
  return "torto_interfaces::msg::TortoJointAngles";
}

template<>
inline const char * name<torto_interfaces::msg::TortoJointAngles>()
{
  return "torto_interfaces/msg/TortoJointAngles";
}

template<>
struct has_fixed_size<torto_interfaces::msg::TortoJointAngles>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<torto_interfaces::msg::TortoJointAngles>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<torto_interfaces::msg::TortoJointAngles>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TORTO_INTERFACES__MSG__DETAIL__TORTO_JOINT_ANGLES__TRAITS_HPP_
