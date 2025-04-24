// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from torto_interfaces:msg/TortoCtrlParams.idl
// generated code does not contain a copyright notice

#ifndef TORTO_INTERFACES__MSG__DETAIL__TORTO_CTRL_PARAMS__STRUCT_HPP_
#define TORTO_INTERFACES__MSG__DETAIL__TORTO_CTRL_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__torto_interfaces__msg__TortoCtrlParams __attribute__((deprecated))
#else
# define DEPRECATED__torto_interfaces__msg__TortoCtrlParams __declspec(deprecated)
#endif

namespace torto_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TortoCtrlParams_
{
  using Type = TortoCtrlParams_<ContainerAllocator>;

  explicit TortoCtrlParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vx = 0.0;
      this->vy = 0.0;
      this->vz = 0.0;
      this->vangular = 0.0;
      this->angle_fr = 0.0;
      this->angle_fl = 0.0;
      this->angle_br = 0.0;
      this->angle_bl = 0.0;
      this->step_offset = 0.0;
      this->step_period = 0.0;
      this->gait_offset_fr = 0.0;
      this->gait_offset_fl = 0.0;
      this->gait_offset_br = 0.0;
      this->gait_offset_bl = 0.0;
      this->body_position_x = 0.0;
      this->body_position_y = 0.0;
      this->body_position_z = 0.0;
      this->body_orientation_roll = 0.0;
      this->body_orientation_pitch = 0.0;
      this->body_orientation_yawn = 0.0;
      this->foot_position_fr_x = 0.0;
      this->foot_position_fr_y = 0.0;
      this->foot_position_fr_z = 0.0;
      this->foot_position_fl_x = 0.0;
      this->foot_position_fl_y = 0.0;
      this->foot_position_fl_z = 0.0;
      this->foot_position_br_x = 0.0;
      this->foot_position_br_y = 0.0;
      this->foot_position_br_z = 0.0;
      this->foot_position_bl_x = 0.0;
      this->foot_position_bl_y = 0.0;
      this->foot_position_bl_z = 0.0;
    }
  }

  explicit TortoCtrlParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vx = 0.0;
      this->vy = 0.0;
      this->vz = 0.0;
      this->vangular = 0.0;
      this->angle_fr = 0.0;
      this->angle_fl = 0.0;
      this->angle_br = 0.0;
      this->angle_bl = 0.0;
      this->step_offset = 0.0;
      this->step_period = 0.0;
      this->gait_offset_fr = 0.0;
      this->gait_offset_fl = 0.0;
      this->gait_offset_br = 0.0;
      this->gait_offset_bl = 0.0;
      this->body_position_x = 0.0;
      this->body_position_y = 0.0;
      this->body_position_z = 0.0;
      this->body_orientation_roll = 0.0;
      this->body_orientation_pitch = 0.0;
      this->body_orientation_yawn = 0.0;
      this->foot_position_fr_x = 0.0;
      this->foot_position_fr_y = 0.0;
      this->foot_position_fr_z = 0.0;
      this->foot_position_fl_x = 0.0;
      this->foot_position_fl_y = 0.0;
      this->foot_position_fl_z = 0.0;
      this->foot_position_br_x = 0.0;
      this->foot_position_br_y = 0.0;
      this->foot_position_br_z = 0.0;
      this->foot_position_bl_x = 0.0;
      this->foot_position_bl_y = 0.0;
      this->foot_position_bl_z = 0.0;
    }
  }

  // field types and members
  using _vx_type =
    double;
  _vx_type vx;
  using _vy_type =
    double;
  _vy_type vy;
  using _vz_type =
    double;
  _vz_type vz;
  using _vangular_type =
    double;
  _vangular_type vangular;
  using _angle_fr_type =
    double;
  _angle_fr_type angle_fr;
  using _angle_fl_type =
    double;
  _angle_fl_type angle_fl;
  using _angle_br_type =
    double;
  _angle_br_type angle_br;
  using _angle_bl_type =
    double;
  _angle_bl_type angle_bl;
  using _step_offset_type =
    double;
  _step_offset_type step_offset;
  using _step_period_type =
    double;
  _step_period_type step_period;
  using _gait_offset_fr_type =
    double;
  _gait_offset_fr_type gait_offset_fr;
  using _gait_offset_fl_type =
    double;
  _gait_offset_fl_type gait_offset_fl;
  using _gait_offset_br_type =
    double;
  _gait_offset_br_type gait_offset_br;
  using _gait_offset_bl_type =
    double;
  _gait_offset_bl_type gait_offset_bl;
  using _body_position_x_type =
    double;
  _body_position_x_type body_position_x;
  using _body_position_y_type =
    double;
  _body_position_y_type body_position_y;
  using _body_position_z_type =
    double;
  _body_position_z_type body_position_z;
  using _body_orientation_roll_type =
    double;
  _body_orientation_roll_type body_orientation_roll;
  using _body_orientation_pitch_type =
    double;
  _body_orientation_pitch_type body_orientation_pitch;
  using _body_orientation_yawn_type =
    double;
  _body_orientation_yawn_type body_orientation_yawn;
  using _foot_position_fr_x_type =
    double;
  _foot_position_fr_x_type foot_position_fr_x;
  using _foot_position_fr_y_type =
    double;
  _foot_position_fr_y_type foot_position_fr_y;
  using _foot_position_fr_z_type =
    double;
  _foot_position_fr_z_type foot_position_fr_z;
  using _foot_position_fl_x_type =
    double;
  _foot_position_fl_x_type foot_position_fl_x;
  using _foot_position_fl_y_type =
    double;
  _foot_position_fl_y_type foot_position_fl_y;
  using _foot_position_fl_z_type =
    double;
  _foot_position_fl_z_type foot_position_fl_z;
  using _foot_position_br_x_type =
    double;
  _foot_position_br_x_type foot_position_br_x;
  using _foot_position_br_y_type =
    double;
  _foot_position_br_y_type foot_position_br_y;
  using _foot_position_br_z_type =
    double;
  _foot_position_br_z_type foot_position_br_z;
  using _foot_position_bl_x_type =
    double;
  _foot_position_bl_x_type foot_position_bl_x;
  using _foot_position_bl_y_type =
    double;
  _foot_position_bl_y_type foot_position_bl_y;
  using _foot_position_bl_z_type =
    double;
  _foot_position_bl_z_type foot_position_bl_z;

  // setters for named parameter idiom
  Type & set__vx(
    const double & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__vy(
    const double & _arg)
  {
    this->vy = _arg;
    return *this;
  }
  Type & set__vz(
    const double & _arg)
  {
    this->vz = _arg;
    return *this;
  }
  Type & set__vangular(
    const double & _arg)
  {
    this->vangular = _arg;
    return *this;
  }
  Type & set__angle_fr(
    const double & _arg)
  {
    this->angle_fr = _arg;
    return *this;
  }
  Type & set__angle_fl(
    const double & _arg)
  {
    this->angle_fl = _arg;
    return *this;
  }
  Type & set__angle_br(
    const double & _arg)
  {
    this->angle_br = _arg;
    return *this;
  }
  Type & set__angle_bl(
    const double & _arg)
  {
    this->angle_bl = _arg;
    return *this;
  }
  Type & set__step_offset(
    const double & _arg)
  {
    this->step_offset = _arg;
    return *this;
  }
  Type & set__step_period(
    const double & _arg)
  {
    this->step_period = _arg;
    return *this;
  }
  Type & set__gait_offset_fr(
    const double & _arg)
  {
    this->gait_offset_fr = _arg;
    return *this;
  }
  Type & set__gait_offset_fl(
    const double & _arg)
  {
    this->gait_offset_fl = _arg;
    return *this;
  }
  Type & set__gait_offset_br(
    const double & _arg)
  {
    this->gait_offset_br = _arg;
    return *this;
  }
  Type & set__gait_offset_bl(
    const double & _arg)
  {
    this->gait_offset_bl = _arg;
    return *this;
  }
  Type & set__body_position_x(
    const double & _arg)
  {
    this->body_position_x = _arg;
    return *this;
  }
  Type & set__body_position_y(
    const double & _arg)
  {
    this->body_position_y = _arg;
    return *this;
  }
  Type & set__body_position_z(
    const double & _arg)
  {
    this->body_position_z = _arg;
    return *this;
  }
  Type & set__body_orientation_roll(
    const double & _arg)
  {
    this->body_orientation_roll = _arg;
    return *this;
  }
  Type & set__body_orientation_pitch(
    const double & _arg)
  {
    this->body_orientation_pitch = _arg;
    return *this;
  }
  Type & set__body_orientation_yawn(
    const double & _arg)
  {
    this->body_orientation_yawn = _arg;
    return *this;
  }
  Type & set__foot_position_fr_x(
    const double & _arg)
  {
    this->foot_position_fr_x = _arg;
    return *this;
  }
  Type & set__foot_position_fr_y(
    const double & _arg)
  {
    this->foot_position_fr_y = _arg;
    return *this;
  }
  Type & set__foot_position_fr_z(
    const double & _arg)
  {
    this->foot_position_fr_z = _arg;
    return *this;
  }
  Type & set__foot_position_fl_x(
    const double & _arg)
  {
    this->foot_position_fl_x = _arg;
    return *this;
  }
  Type & set__foot_position_fl_y(
    const double & _arg)
  {
    this->foot_position_fl_y = _arg;
    return *this;
  }
  Type & set__foot_position_fl_z(
    const double & _arg)
  {
    this->foot_position_fl_z = _arg;
    return *this;
  }
  Type & set__foot_position_br_x(
    const double & _arg)
  {
    this->foot_position_br_x = _arg;
    return *this;
  }
  Type & set__foot_position_br_y(
    const double & _arg)
  {
    this->foot_position_br_y = _arg;
    return *this;
  }
  Type & set__foot_position_br_z(
    const double & _arg)
  {
    this->foot_position_br_z = _arg;
    return *this;
  }
  Type & set__foot_position_bl_x(
    const double & _arg)
  {
    this->foot_position_bl_x = _arg;
    return *this;
  }
  Type & set__foot_position_bl_y(
    const double & _arg)
  {
    this->foot_position_bl_y = _arg;
    return *this;
  }
  Type & set__foot_position_bl_z(
    const double & _arg)
  {
    this->foot_position_bl_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    torto_interfaces::msg::TortoCtrlParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const torto_interfaces::msg::TortoCtrlParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<torto_interfaces::msg::TortoCtrlParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<torto_interfaces::msg::TortoCtrlParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      torto_interfaces::msg::TortoCtrlParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<torto_interfaces::msg::TortoCtrlParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      torto_interfaces::msg::TortoCtrlParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<torto_interfaces::msg::TortoCtrlParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<torto_interfaces::msg::TortoCtrlParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<torto_interfaces::msg::TortoCtrlParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__torto_interfaces__msg__TortoCtrlParams
    std::shared_ptr<torto_interfaces::msg::TortoCtrlParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__torto_interfaces__msg__TortoCtrlParams
    std::shared_ptr<torto_interfaces::msg::TortoCtrlParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TortoCtrlParams_ & other) const
  {
    if (this->vx != other.vx) {
      return false;
    }
    if (this->vy != other.vy) {
      return false;
    }
    if (this->vz != other.vz) {
      return false;
    }
    if (this->vangular != other.vangular) {
      return false;
    }
    if (this->angle_fr != other.angle_fr) {
      return false;
    }
    if (this->angle_fl != other.angle_fl) {
      return false;
    }
    if (this->angle_br != other.angle_br) {
      return false;
    }
    if (this->angle_bl != other.angle_bl) {
      return false;
    }
    if (this->step_offset != other.step_offset) {
      return false;
    }
    if (this->step_period != other.step_period) {
      return false;
    }
    if (this->gait_offset_fr != other.gait_offset_fr) {
      return false;
    }
    if (this->gait_offset_fl != other.gait_offset_fl) {
      return false;
    }
    if (this->gait_offset_br != other.gait_offset_br) {
      return false;
    }
    if (this->gait_offset_bl != other.gait_offset_bl) {
      return false;
    }
    if (this->body_position_x != other.body_position_x) {
      return false;
    }
    if (this->body_position_y != other.body_position_y) {
      return false;
    }
    if (this->body_position_z != other.body_position_z) {
      return false;
    }
    if (this->body_orientation_roll != other.body_orientation_roll) {
      return false;
    }
    if (this->body_orientation_pitch != other.body_orientation_pitch) {
      return false;
    }
    if (this->body_orientation_yawn != other.body_orientation_yawn) {
      return false;
    }
    if (this->foot_position_fr_x != other.foot_position_fr_x) {
      return false;
    }
    if (this->foot_position_fr_y != other.foot_position_fr_y) {
      return false;
    }
    if (this->foot_position_fr_z != other.foot_position_fr_z) {
      return false;
    }
    if (this->foot_position_fl_x != other.foot_position_fl_x) {
      return false;
    }
    if (this->foot_position_fl_y != other.foot_position_fl_y) {
      return false;
    }
    if (this->foot_position_fl_z != other.foot_position_fl_z) {
      return false;
    }
    if (this->foot_position_br_x != other.foot_position_br_x) {
      return false;
    }
    if (this->foot_position_br_y != other.foot_position_br_y) {
      return false;
    }
    if (this->foot_position_br_z != other.foot_position_br_z) {
      return false;
    }
    if (this->foot_position_bl_x != other.foot_position_bl_x) {
      return false;
    }
    if (this->foot_position_bl_y != other.foot_position_bl_y) {
      return false;
    }
    if (this->foot_position_bl_z != other.foot_position_bl_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const TortoCtrlParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TortoCtrlParams_

// alias to use template instance with default allocator
using TortoCtrlParams =
  torto_interfaces::msg::TortoCtrlParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace torto_interfaces

#endif  // TORTO_INTERFACES__MSG__DETAIL__TORTO_CTRL_PARAMS__STRUCT_HPP_
