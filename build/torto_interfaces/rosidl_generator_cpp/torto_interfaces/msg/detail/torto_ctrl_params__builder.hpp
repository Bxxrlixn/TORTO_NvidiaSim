// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from torto_interfaces:msg/TortoCtrlParams.idl
// generated code does not contain a copyright notice

#ifndef TORTO_INTERFACES__MSG__DETAIL__TORTO_CTRL_PARAMS__BUILDER_HPP_
#define TORTO_INTERFACES__MSG__DETAIL__TORTO_CTRL_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "torto_interfaces/msg/detail/torto_ctrl_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace torto_interfaces
{

namespace msg
{

namespace builder
{

class Init_TortoCtrlParams_foot_position_bl_z
{
public:
  explicit Init_TortoCtrlParams_foot_position_bl_z(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  ::torto_interfaces::msg::TortoCtrlParams foot_position_bl_z(::torto_interfaces::msg::TortoCtrlParams::_foot_position_bl_z_type arg)
  {
    msg_.foot_position_bl_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_foot_position_bl_y
{
public:
  explicit Init_TortoCtrlParams_foot_position_bl_y(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_foot_position_bl_z foot_position_bl_y(::torto_interfaces::msg::TortoCtrlParams::_foot_position_bl_y_type arg)
  {
    msg_.foot_position_bl_y = std::move(arg);
    return Init_TortoCtrlParams_foot_position_bl_z(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_foot_position_bl_x
{
public:
  explicit Init_TortoCtrlParams_foot_position_bl_x(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_foot_position_bl_y foot_position_bl_x(::torto_interfaces::msg::TortoCtrlParams::_foot_position_bl_x_type arg)
  {
    msg_.foot_position_bl_x = std::move(arg);
    return Init_TortoCtrlParams_foot_position_bl_y(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_foot_position_br_z
{
public:
  explicit Init_TortoCtrlParams_foot_position_br_z(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_foot_position_bl_x foot_position_br_z(::torto_interfaces::msg::TortoCtrlParams::_foot_position_br_z_type arg)
  {
    msg_.foot_position_br_z = std::move(arg);
    return Init_TortoCtrlParams_foot_position_bl_x(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_foot_position_br_y
{
public:
  explicit Init_TortoCtrlParams_foot_position_br_y(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_foot_position_br_z foot_position_br_y(::torto_interfaces::msg::TortoCtrlParams::_foot_position_br_y_type arg)
  {
    msg_.foot_position_br_y = std::move(arg);
    return Init_TortoCtrlParams_foot_position_br_z(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_foot_position_br_x
{
public:
  explicit Init_TortoCtrlParams_foot_position_br_x(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_foot_position_br_y foot_position_br_x(::torto_interfaces::msg::TortoCtrlParams::_foot_position_br_x_type arg)
  {
    msg_.foot_position_br_x = std::move(arg);
    return Init_TortoCtrlParams_foot_position_br_y(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_foot_position_fl_z
{
public:
  explicit Init_TortoCtrlParams_foot_position_fl_z(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_foot_position_br_x foot_position_fl_z(::torto_interfaces::msg::TortoCtrlParams::_foot_position_fl_z_type arg)
  {
    msg_.foot_position_fl_z = std::move(arg);
    return Init_TortoCtrlParams_foot_position_br_x(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_foot_position_fl_y
{
public:
  explicit Init_TortoCtrlParams_foot_position_fl_y(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_foot_position_fl_z foot_position_fl_y(::torto_interfaces::msg::TortoCtrlParams::_foot_position_fl_y_type arg)
  {
    msg_.foot_position_fl_y = std::move(arg);
    return Init_TortoCtrlParams_foot_position_fl_z(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_foot_position_fl_x
{
public:
  explicit Init_TortoCtrlParams_foot_position_fl_x(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_foot_position_fl_y foot_position_fl_x(::torto_interfaces::msg::TortoCtrlParams::_foot_position_fl_x_type arg)
  {
    msg_.foot_position_fl_x = std::move(arg);
    return Init_TortoCtrlParams_foot_position_fl_y(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_foot_position_fr_z
{
public:
  explicit Init_TortoCtrlParams_foot_position_fr_z(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_foot_position_fl_x foot_position_fr_z(::torto_interfaces::msg::TortoCtrlParams::_foot_position_fr_z_type arg)
  {
    msg_.foot_position_fr_z = std::move(arg);
    return Init_TortoCtrlParams_foot_position_fl_x(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_foot_position_fr_y
{
public:
  explicit Init_TortoCtrlParams_foot_position_fr_y(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_foot_position_fr_z foot_position_fr_y(::torto_interfaces::msg::TortoCtrlParams::_foot_position_fr_y_type arg)
  {
    msg_.foot_position_fr_y = std::move(arg);
    return Init_TortoCtrlParams_foot_position_fr_z(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_foot_position_fr_x
{
public:
  explicit Init_TortoCtrlParams_foot_position_fr_x(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_foot_position_fr_y foot_position_fr_x(::torto_interfaces::msg::TortoCtrlParams::_foot_position_fr_x_type arg)
  {
    msg_.foot_position_fr_x = std::move(arg);
    return Init_TortoCtrlParams_foot_position_fr_y(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_body_orientation_yawn
{
public:
  explicit Init_TortoCtrlParams_body_orientation_yawn(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_foot_position_fr_x body_orientation_yawn(::torto_interfaces::msg::TortoCtrlParams::_body_orientation_yawn_type arg)
  {
    msg_.body_orientation_yawn = std::move(arg);
    return Init_TortoCtrlParams_foot_position_fr_x(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_body_orientation_pitch
{
public:
  explicit Init_TortoCtrlParams_body_orientation_pitch(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_body_orientation_yawn body_orientation_pitch(::torto_interfaces::msg::TortoCtrlParams::_body_orientation_pitch_type arg)
  {
    msg_.body_orientation_pitch = std::move(arg);
    return Init_TortoCtrlParams_body_orientation_yawn(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_body_orientation_roll
{
public:
  explicit Init_TortoCtrlParams_body_orientation_roll(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_body_orientation_pitch body_orientation_roll(::torto_interfaces::msg::TortoCtrlParams::_body_orientation_roll_type arg)
  {
    msg_.body_orientation_roll = std::move(arg);
    return Init_TortoCtrlParams_body_orientation_pitch(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_body_position_z
{
public:
  explicit Init_TortoCtrlParams_body_position_z(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_body_orientation_roll body_position_z(::torto_interfaces::msg::TortoCtrlParams::_body_position_z_type arg)
  {
    msg_.body_position_z = std::move(arg);
    return Init_TortoCtrlParams_body_orientation_roll(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_body_position_y
{
public:
  explicit Init_TortoCtrlParams_body_position_y(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_body_position_z body_position_y(::torto_interfaces::msg::TortoCtrlParams::_body_position_y_type arg)
  {
    msg_.body_position_y = std::move(arg);
    return Init_TortoCtrlParams_body_position_z(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_body_position_x
{
public:
  explicit Init_TortoCtrlParams_body_position_x(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_body_position_y body_position_x(::torto_interfaces::msg::TortoCtrlParams::_body_position_x_type arg)
  {
    msg_.body_position_x = std::move(arg);
    return Init_TortoCtrlParams_body_position_y(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_gait_offset_bl
{
public:
  explicit Init_TortoCtrlParams_gait_offset_bl(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_body_position_x gait_offset_bl(::torto_interfaces::msg::TortoCtrlParams::_gait_offset_bl_type arg)
  {
    msg_.gait_offset_bl = std::move(arg);
    return Init_TortoCtrlParams_body_position_x(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_gait_offset_br
{
public:
  explicit Init_TortoCtrlParams_gait_offset_br(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_gait_offset_bl gait_offset_br(::torto_interfaces::msg::TortoCtrlParams::_gait_offset_br_type arg)
  {
    msg_.gait_offset_br = std::move(arg);
    return Init_TortoCtrlParams_gait_offset_bl(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_gait_offset_fl
{
public:
  explicit Init_TortoCtrlParams_gait_offset_fl(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_gait_offset_br gait_offset_fl(::torto_interfaces::msg::TortoCtrlParams::_gait_offset_fl_type arg)
  {
    msg_.gait_offset_fl = std::move(arg);
    return Init_TortoCtrlParams_gait_offset_br(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_gait_offset_fr
{
public:
  explicit Init_TortoCtrlParams_gait_offset_fr(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_gait_offset_fl gait_offset_fr(::torto_interfaces::msg::TortoCtrlParams::_gait_offset_fr_type arg)
  {
    msg_.gait_offset_fr = std::move(arg);
    return Init_TortoCtrlParams_gait_offset_fl(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_step_period
{
public:
  explicit Init_TortoCtrlParams_step_period(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_gait_offset_fr step_period(::torto_interfaces::msg::TortoCtrlParams::_step_period_type arg)
  {
    msg_.step_period = std::move(arg);
    return Init_TortoCtrlParams_gait_offset_fr(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_step_offset
{
public:
  explicit Init_TortoCtrlParams_step_offset(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_step_period step_offset(::torto_interfaces::msg::TortoCtrlParams::_step_offset_type arg)
  {
    msg_.step_offset = std::move(arg);
    return Init_TortoCtrlParams_step_period(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_angle_bl
{
public:
  explicit Init_TortoCtrlParams_angle_bl(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_step_offset angle_bl(::torto_interfaces::msg::TortoCtrlParams::_angle_bl_type arg)
  {
    msg_.angle_bl = std::move(arg);
    return Init_TortoCtrlParams_step_offset(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_angle_br
{
public:
  explicit Init_TortoCtrlParams_angle_br(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_angle_bl angle_br(::torto_interfaces::msg::TortoCtrlParams::_angle_br_type arg)
  {
    msg_.angle_br = std::move(arg);
    return Init_TortoCtrlParams_angle_bl(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_angle_fl
{
public:
  explicit Init_TortoCtrlParams_angle_fl(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_angle_br angle_fl(::torto_interfaces::msg::TortoCtrlParams::_angle_fl_type arg)
  {
    msg_.angle_fl = std::move(arg);
    return Init_TortoCtrlParams_angle_br(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_angle_fr
{
public:
  explicit Init_TortoCtrlParams_angle_fr(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_angle_fl angle_fr(::torto_interfaces::msg::TortoCtrlParams::_angle_fr_type arg)
  {
    msg_.angle_fr = std::move(arg);
    return Init_TortoCtrlParams_angle_fl(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_vangular
{
public:
  explicit Init_TortoCtrlParams_vangular(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_angle_fr vangular(::torto_interfaces::msg::TortoCtrlParams::_vangular_type arg)
  {
    msg_.vangular = std::move(arg);
    return Init_TortoCtrlParams_angle_fr(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_vz
{
public:
  explicit Init_TortoCtrlParams_vz(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_vangular vz(::torto_interfaces::msg::TortoCtrlParams::_vz_type arg)
  {
    msg_.vz = std::move(arg);
    return Init_TortoCtrlParams_vangular(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_vy
{
public:
  explicit Init_TortoCtrlParams_vy(::torto_interfaces::msg::TortoCtrlParams & msg)
  : msg_(msg)
  {}
  Init_TortoCtrlParams_vz vy(::torto_interfaces::msg::TortoCtrlParams::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_TortoCtrlParams_vz(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

class Init_TortoCtrlParams_vx
{
public:
  Init_TortoCtrlParams_vx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TortoCtrlParams_vy vx(::torto_interfaces::msg::TortoCtrlParams::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_TortoCtrlParams_vy(msg_);
  }

private:
  ::torto_interfaces::msg::TortoCtrlParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::torto_interfaces::msg::TortoCtrlParams>()
{
  return torto_interfaces::msg::builder::Init_TortoCtrlParams_vx();
}

}  // namespace torto_interfaces

#endif  // TORTO_INTERFACES__MSG__DETAIL__TORTO_CTRL_PARAMS__BUILDER_HPP_
