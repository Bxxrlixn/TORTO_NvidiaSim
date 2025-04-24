// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from torto_interfaces:msg/TortoCtrlParams.idl
// generated code does not contain a copyright notice

#ifndef TORTO_INTERFACES__MSG__DETAIL__TORTO_CTRL_PARAMS__TRAITS_HPP_
#define TORTO_INTERFACES__MSG__DETAIL__TORTO_CTRL_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "torto_interfaces/msg/detail/torto_ctrl_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace torto_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TortoCtrlParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: vx
  {
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << ", ";
  }

  // member: vy
  {
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << ", ";
  }

  // member: vz
  {
    out << "vz: ";
    rosidl_generator_traits::value_to_yaml(msg.vz, out);
    out << ", ";
  }

  // member: vangular
  {
    out << "vangular: ";
    rosidl_generator_traits::value_to_yaml(msg.vangular, out);
    out << ", ";
  }

  // member: angle_fr
  {
    out << "angle_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_fr, out);
    out << ", ";
  }

  // member: angle_fl
  {
    out << "angle_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_fl, out);
    out << ", ";
  }

  // member: angle_br
  {
    out << "angle_br: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_br, out);
    out << ", ";
  }

  // member: angle_bl
  {
    out << "angle_bl: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_bl, out);
    out << ", ";
  }

  // member: step_offset
  {
    out << "step_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.step_offset, out);
    out << ", ";
  }

  // member: step_period
  {
    out << "step_period: ";
    rosidl_generator_traits::value_to_yaml(msg.step_period, out);
    out << ", ";
  }

  // member: gait_offset_fr
  {
    out << "gait_offset_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.gait_offset_fr, out);
    out << ", ";
  }

  // member: gait_offset_fl
  {
    out << "gait_offset_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.gait_offset_fl, out);
    out << ", ";
  }

  // member: gait_offset_br
  {
    out << "gait_offset_br: ";
    rosidl_generator_traits::value_to_yaml(msg.gait_offset_br, out);
    out << ", ";
  }

  // member: gait_offset_bl
  {
    out << "gait_offset_bl: ";
    rosidl_generator_traits::value_to_yaml(msg.gait_offset_bl, out);
    out << ", ";
  }

  // member: body_position_x
  {
    out << "body_position_x: ";
    rosidl_generator_traits::value_to_yaml(msg.body_position_x, out);
    out << ", ";
  }

  // member: body_position_y
  {
    out << "body_position_y: ";
    rosidl_generator_traits::value_to_yaml(msg.body_position_y, out);
    out << ", ";
  }

  // member: body_position_z
  {
    out << "body_position_z: ";
    rosidl_generator_traits::value_to_yaml(msg.body_position_z, out);
    out << ", ";
  }

  // member: body_orientation_roll
  {
    out << "body_orientation_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.body_orientation_roll, out);
    out << ", ";
  }

  // member: body_orientation_pitch
  {
    out << "body_orientation_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.body_orientation_pitch, out);
    out << ", ";
  }

  // member: body_orientation_yawn
  {
    out << "body_orientation_yawn: ";
    rosidl_generator_traits::value_to_yaml(msg.body_orientation_yawn, out);
    out << ", ";
  }

  // member: foot_position_fr_x
  {
    out << "foot_position_fr_x: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_fr_x, out);
    out << ", ";
  }

  // member: foot_position_fr_y
  {
    out << "foot_position_fr_y: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_fr_y, out);
    out << ", ";
  }

  // member: foot_position_fr_z
  {
    out << "foot_position_fr_z: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_fr_z, out);
    out << ", ";
  }

  // member: foot_position_fl_x
  {
    out << "foot_position_fl_x: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_fl_x, out);
    out << ", ";
  }

  // member: foot_position_fl_y
  {
    out << "foot_position_fl_y: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_fl_y, out);
    out << ", ";
  }

  // member: foot_position_fl_z
  {
    out << "foot_position_fl_z: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_fl_z, out);
    out << ", ";
  }

  // member: foot_position_br_x
  {
    out << "foot_position_br_x: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_br_x, out);
    out << ", ";
  }

  // member: foot_position_br_y
  {
    out << "foot_position_br_y: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_br_y, out);
    out << ", ";
  }

  // member: foot_position_br_z
  {
    out << "foot_position_br_z: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_br_z, out);
    out << ", ";
  }

  // member: foot_position_bl_x
  {
    out << "foot_position_bl_x: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_bl_x, out);
    out << ", ";
  }

  // member: foot_position_bl_y
  {
    out << "foot_position_bl_y: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_bl_y, out);
    out << ", ";
  }

  // member: foot_position_bl_z
  {
    out << "foot_position_bl_z: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_bl_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TortoCtrlParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << "\n";
  }

  // member: vy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << "\n";
  }

  // member: vz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vz: ";
    rosidl_generator_traits::value_to_yaml(msg.vz, out);
    out << "\n";
  }

  // member: vangular
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vangular: ";
    rosidl_generator_traits::value_to_yaml(msg.vangular, out);
    out << "\n";
  }

  // member: angle_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_fr, out);
    out << "\n";
  }

  // member: angle_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_fl, out);
    out << "\n";
  }

  // member: angle_br
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_br: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_br, out);
    out << "\n";
  }

  // member: angle_bl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_bl: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_bl, out);
    out << "\n";
  }

  // member: step_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.step_offset, out);
    out << "\n";
  }

  // member: step_period
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step_period: ";
    rosidl_generator_traits::value_to_yaml(msg.step_period, out);
    out << "\n";
  }

  // member: gait_offset_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gait_offset_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.gait_offset_fr, out);
    out << "\n";
  }

  // member: gait_offset_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gait_offset_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.gait_offset_fl, out);
    out << "\n";
  }

  // member: gait_offset_br
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gait_offset_br: ";
    rosidl_generator_traits::value_to_yaml(msg.gait_offset_br, out);
    out << "\n";
  }

  // member: gait_offset_bl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gait_offset_bl: ";
    rosidl_generator_traits::value_to_yaml(msg.gait_offset_bl, out);
    out << "\n";
  }

  // member: body_position_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_position_x: ";
    rosidl_generator_traits::value_to_yaml(msg.body_position_x, out);
    out << "\n";
  }

  // member: body_position_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_position_y: ";
    rosidl_generator_traits::value_to_yaml(msg.body_position_y, out);
    out << "\n";
  }

  // member: body_position_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_position_z: ";
    rosidl_generator_traits::value_to_yaml(msg.body_position_z, out);
    out << "\n";
  }

  // member: body_orientation_roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_orientation_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.body_orientation_roll, out);
    out << "\n";
  }

  // member: body_orientation_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_orientation_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.body_orientation_pitch, out);
    out << "\n";
  }

  // member: body_orientation_yawn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_orientation_yawn: ";
    rosidl_generator_traits::value_to_yaml(msg.body_orientation_yawn, out);
    out << "\n";
  }

  // member: foot_position_fr_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot_position_fr_x: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_fr_x, out);
    out << "\n";
  }

  // member: foot_position_fr_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot_position_fr_y: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_fr_y, out);
    out << "\n";
  }

  // member: foot_position_fr_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot_position_fr_z: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_fr_z, out);
    out << "\n";
  }

  // member: foot_position_fl_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot_position_fl_x: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_fl_x, out);
    out << "\n";
  }

  // member: foot_position_fl_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot_position_fl_y: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_fl_y, out);
    out << "\n";
  }

  // member: foot_position_fl_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot_position_fl_z: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_fl_z, out);
    out << "\n";
  }

  // member: foot_position_br_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot_position_br_x: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_br_x, out);
    out << "\n";
  }

  // member: foot_position_br_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot_position_br_y: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_br_y, out);
    out << "\n";
  }

  // member: foot_position_br_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot_position_br_z: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_br_z, out);
    out << "\n";
  }

  // member: foot_position_bl_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot_position_bl_x: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_bl_x, out);
    out << "\n";
  }

  // member: foot_position_bl_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot_position_bl_y: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_bl_y, out);
    out << "\n";
  }

  // member: foot_position_bl_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot_position_bl_z: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_position_bl_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TortoCtrlParams & msg, bool use_flow_style = false)
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
  const torto_interfaces::msg::TortoCtrlParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  torto_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use torto_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const torto_interfaces::msg::TortoCtrlParams & msg)
{
  return torto_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<torto_interfaces::msg::TortoCtrlParams>()
{
  return "torto_interfaces::msg::TortoCtrlParams";
}

template<>
inline const char * name<torto_interfaces::msg::TortoCtrlParams>()
{
  return "torto_interfaces/msg/TortoCtrlParams";
}

template<>
struct has_fixed_size<torto_interfaces::msg::TortoCtrlParams>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<torto_interfaces::msg::TortoCtrlParams>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<torto_interfaces::msg::TortoCtrlParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TORTO_INTERFACES__MSG__DETAIL__TORTO_CTRL_PARAMS__TRAITS_HPP_
