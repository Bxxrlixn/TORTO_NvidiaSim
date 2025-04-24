// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from torto_interfaces:msg/TortoSimReset.idl
// generated code does not contain a copyright notice

#ifndef TORTO_INTERFACES__MSG__DETAIL__TORTO_SIM_RESET__BUILDER_HPP_
#define TORTO_INTERFACES__MSG__DETAIL__TORTO_SIM_RESET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "torto_interfaces/msg/detail/torto_sim_reset__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace torto_interfaces
{

namespace msg
{

namespace builder
{

class Init_TortoSimReset_reason
{
public:
  explicit Init_TortoSimReset_reason(::torto_interfaces::msg::TortoSimReset & msg)
  : msg_(msg)
  {}
  ::torto_interfaces::msg::TortoSimReset reason(::torto_interfaces::msg::TortoSimReset::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::torto_interfaces::msg::TortoSimReset msg_;
};

class Init_TortoSimReset_zero_robot
{
public:
  explicit Init_TortoSimReset_zero_robot(::torto_interfaces::msg::TortoSimReset & msg)
  : msg_(msg)
  {}
  Init_TortoSimReset_reason zero_robot(::torto_interfaces::msg::TortoSimReset::_zero_robot_type arg)
  {
    msg_.zero_robot = std::move(arg);
    return Init_TortoSimReset_reason(msg_);
  }

private:
  ::torto_interfaces::msg::TortoSimReset msg_;
};

class Init_TortoSimReset_hard_reset
{
public:
  Init_TortoSimReset_hard_reset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TortoSimReset_zero_robot hard_reset(::torto_interfaces::msg::TortoSimReset::_hard_reset_type arg)
  {
    msg_.hard_reset = std::move(arg);
    return Init_TortoSimReset_zero_robot(msg_);
  }

private:
  ::torto_interfaces::msg::TortoSimReset msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::torto_interfaces::msg::TortoSimReset>()
{
  return torto_interfaces::msg::builder::Init_TortoSimReset_hard_reset();
}

}  // namespace torto_interfaces

#endif  // TORTO_INTERFACES__MSG__DETAIL__TORTO_SIM_RESET__BUILDER_HPP_
