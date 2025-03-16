// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from torto_interfaces:msg/TortoJointAngles.idl
// generated code does not contain a copyright notice

#ifndef TORTO_INTERFACES__MSG__DETAIL__TORTO_JOINT_ANGLES__BUILDER_HPP_
#define TORTO_INTERFACES__MSG__DETAIL__TORTO_JOINT_ANGLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "torto_interfaces/msg/detail/torto_joint_angles__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace torto_interfaces
{

namespace msg
{

namespace builder
{

class Init_TortoJointAngles_theta_deg_bl_tibia
{
public:
  explicit Init_TortoJointAngles_theta_deg_bl_tibia(::torto_interfaces::msg::TortoJointAngles & msg)
  : msg_(msg)
  {}
  ::torto_interfaces::msg::TortoJointAngles theta_deg_bl_tibia(::torto_interfaces::msg::TortoJointAngles::_theta_deg_bl_tibia_type arg)
  {
    msg_.theta_deg_bl_tibia = std::move(arg);
    return std::move(msg_);
  }

private:
  ::torto_interfaces::msg::TortoJointAngles msg_;
};

class Init_TortoJointAngles_theta_deg_bl_femur
{
public:
  explicit Init_TortoJointAngles_theta_deg_bl_femur(::torto_interfaces::msg::TortoJointAngles & msg)
  : msg_(msg)
  {}
  Init_TortoJointAngles_theta_deg_bl_tibia theta_deg_bl_femur(::torto_interfaces::msg::TortoJointAngles::_theta_deg_bl_femur_type arg)
  {
    msg_.theta_deg_bl_femur = std::move(arg);
    return Init_TortoJointAngles_theta_deg_bl_tibia(msg_);
  }

private:
  ::torto_interfaces::msg::TortoJointAngles msg_;
};

class Init_TortoJointAngles_theta_deg_bl_detoid
{
public:
  explicit Init_TortoJointAngles_theta_deg_bl_detoid(::torto_interfaces::msg::TortoJointAngles & msg)
  : msg_(msg)
  {}
  Init_TortoJointAngles_theta_deg_bl_femur theta_deg_bl_detoid(::torto_interfaces::msg::TortoJointAngles::_theta_deg_bl_detoid_type arg)
  {
    msg_.theta_deg_bl_detoid = std::move(arg);
    return Init_TortoJointAngles_theta_deg_bl_femur(msg_);
  }

private:
  ::torto_interfaces::msg::TortoJointAngles msg_;
};

class Init_TortoJointAngles_theta_deg_br_tibia
{
public:
  explicit Init_TortoJointAngles_theta_deg_br_tibia(::torto_interfaces::msg::TortoJointAngles & msg)
  : msg_(msg)
  {}
  Init_TortoJointAngles_theta_deg_bl_detoid theta_deg_br_tibia(::torto_interfaces::msg::TortoJointAngles::_theta_deg_br_tibia_type arg)
  {
    msg_.theta_deg_br_tibia = std::move(arg);
    return Init_TortoJointAngles_theta_deg_bl_detoid(msg_);
  }

private:
  ::torto_interfaces::msg::TortoJointAngles msg_;
};

class Init_TortoJointAngles_theta_deg_br_femur
{
public:
  explicit Init_TortoJointAngles_theta_deg_br_femur(::torto_interfaces::msg::TortoJointAngles & msg)
  : msg_(msg)
  {}
  Init_TortoJointAngles_theta_deg_br_tibia theta_deg_br_femur(::torto_interfaces::msg::TortoJointAngles::_theta_deg_br_femur_type arg)
  {
    msg_.theta_deg_br_femur = std::move(arg);
    return Init_TortoJointAngles_theta_deg_br_tibia(msg_);
  }

private:
  ::torto_interfaces::msg::TortoJointAngles msg_;
};

class Init_TortoJointAngles_theta_deg_br_detoid
{
public:
  explicit Init_TortoJointAngles_theta_deg_br_detoid(::torto_interfaces::msg::TortoJointAngles & msg)
  : msg_(msg)
  {}
  Init_TortoJointAngles_theta_deg_br_femur theta_deg_br_detoid(::torto_interfaces::msg::TortoJointAngles::_theta_deg_br_detoid_type arg)
  {
    msg_.theta_deg_br_detoid = std::move(arg);
    return Init_TortoJointAngles_theta_deg_br_femur(msg_);
  }

private:
  ::torto_interfaces::msg::TortoJointAngles msg_;
};

class Init_TortoJointAngles_theta_deg_fl_tibia
{
public:
  explicit Init_TortoJointAngles_theta_deg_fl_tibia(::torto_interfaces::msg::TortoJointAngles & msg)
  : msg_(msg)
  {}
  Init_TortoJointAngles_theta_deg_br_detoid theta_deg_fl_tibia(::torto_interfaces::msg::TortoJointAngles::_theta_deg_fl_tibia_type arg)
  {
    msg_.theta_deg_fl_tibia = std::move(arg);
    return Init_TortoJointAngles_theta_deg_br_detoid(msg_);
  }

private:
  ::torto_interfaces::msg::TortoJointAngles msg_;
};

class Init_TortoJointAngles_theta_deg_fl_femur
{
public:
  explicit Init_TortoJointAngles_theta_deg_fl_femur(::torto_interfaces::msg::TortoJointAngles & msg)
  : msg_(msg)
  {}
  Init_TortoJointAngles_theta_deg_fl_tibia theta_deg_fl_femur(::torto_interfaces::msg::TortoJointAngles::_theta_deg_fl_femur_type arg)
  {
    msg_.theta_deg_fl_femur = std::move(arg);
    return Init_TortoJointAngles_theta_deg_fl_tibia(msg_);
  }

private:
  ::torto_interfaces::msg::TortoJointAngles msg_;
};

class Init_TortoJointAngles_theta_deg_fl_detoid
{
public:
  explicit Init_TortoJointAngles_theta_deg_fl_detoid(::torto_interfaces::msg::TortoJointAngles & msg)
  : msg_(msg)
  {}
  Init_TortoJointAngles_theta_deg_fl_femur theta_deg_fl_detoid(::torto_interfaces::msg::TortoJointAngles::_theta_deg_fl_detoid_type arg)
  {
    msg_.theta_deg_fl_detoid = std::move(arg);
    return Init_TortoJointAngles_theta_deg_fl_femur(msg_);
  }

private:
  ::torto_interfaces::msg::TortoJointAngles msg_;
};

class Init_TortoJointAngles_theta_deg_fr_tibia
{
public:
  explicit Init_TortoJointAngles_theta_deg_fr_tibia(::torto_interfaces::msg::TortoJointAngles & msg)
  : msg_(msg)
  {}
  Init_TortoJointAngles_theta_deg_fl_detoid theta_deg_fr_tibia(::torto_interfaces::msg::TortoJointAngles::_theta_deg_fr_tibia_type arg)
  {
    msg_.theta_deg_fr_tibia = std::move(arg);
    return Init_TortoJointAngles_theta_deg_fl_detoid(msg_);
  }

private:
  ::torto_interfaces::msg::TortoJointAngles msg_;
};

class Init_TortoJointAngles_theta_deg_fr_femur
{
public:
  explicit Init_TortoJointAngles_theta_deg_fr_femur(::torto_interfaces::msg::TortoJointAngles & msg)
  : msg_(msg)
  {}
  Init_TortoJointAngles_theta_deg_fr_tibia theta_deg_fr_femur(::torto_interfaces::msg::TortoJointAngles::_theta_deg_fr_femur_type arg)
  {
    msg_.theta_deg_fr_femur = std::move(arg);
    return Init_TortoJointAngles_theta_deg_fr_tibia(msg_);
  }

private:
  ::torto_interfaces::msg::TortoJointAngles msg_;
};

class Init_TortoJointAngles_theta_deg_fr_detoid
{
public:
  Init_TortoJointAngles_theta_deg_fr_detoid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TortoJointAngles_theta_deg_fr_femur theta_deg_fr_detoid(::torto_interfaces::msg::TortoJointAngles::_theta_deg_fr_detoid_type arg)
  {
    msg_.theta_deg_fr_detoid = std::move(arg);
    return Init_TortoJointAngles_theta_deg_fr_femur(msg_);
  }

private:
  ::torto_interfaces::msg::TortoJointAngles msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::torto_interfaces::msg::TortoJointAngles>()
{
  return torto_interfaces::msg::builder::Init_TortoJointAngles_theta_deg_fr_detoid();
}

}  // namespace torto_interfaces

#endif  // TORTO_INTERFACES__MSG__DETAIL__TORTO_JOINT_ANGLES__BUILDER_HPP_
