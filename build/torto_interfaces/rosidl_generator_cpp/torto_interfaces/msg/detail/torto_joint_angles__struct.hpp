// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from torto_interfaces:msg/TortoJointAngles.idl
// generated code does not contain a copyright notice

#ifndef TORTO_INTERFACES__MSG__DETAIL__TORTO_JOINT_ANGLES__STRUCT_HPP_
#define TORTO_INTERFACES__MSG__DETAIL__TORTO_JOINT_ANGLES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__torto_interfaces__msg__TortoJointAngles __attribute__((deprecated))
#else
# define DEPRECATED__torto_interfaces__msg__TortoJointAngles __declspec(deprecated)
#endif

namespace torto_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TortoJointAngles_
{
  using Type = TortoJointAngles_<ContainerAllocator>;

  explicit TortoJointAngles_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->theta_deg_fr_detoid = 0.0;
      this->theta_deg_fr_femur = 0.0;
      this->theta_deg_fr_tibia = 0.0;
      this->theta_deg_fl_detoid = 0.0;
      this->theta_deg_fl_femur = 0.0;
      this->theta_deg_fl_tibia = 0.0;
      this->theta_deg_br_detoid = 0.0;
      this->theta_deg_br_femur = 0.0;
      this->theta_deg_br_tibia = 0.0;
      this->theta_deg_bl_detoid = 0.0;
      this->theta_deg_bl_femur = 0.0;
      this->theta_deg_bl_tibia = 0.0;
    }
  }

  explicit TortoJointAngles_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->theta_deg_fr_detoid = 0.0;
      this->theta_deg_fr_femur = 0.0;
      this->theta_deg_fr_tibia = 0.0;
      this->theta_deg_fl_detoid = 0.0;
      this->theta_deg_fl_femur = 0.0;
      this->theta_deg_fl_tibia = 0.0;
      this->theta_deg_br_detoid = 0.0;
      this->theta_deg_br_femur = 0.0;
      this->theta_deg_br_tibia = 0.0;
      this->theta_deg_bl_detoid = 0.0;
      this->theta_deg_bl_femur = 0.0;
      this->theta_deg_bl_tibia = 0.0;
    }
  }

  // field types and members
  using _theta_deg_fr_detoid_type =
    double;
  _theta_deg_fr_detoid_type theta_deg_fr_detoid;
  using _theta_deg_fr_femur_type =
    double;
  _theta_deg_fr_femur_type theta_deg_fr_femur;
  using _theta_deg_fr_tibia_type =
    double;
  _theta_deg_fr_tibia_type theta_deg_fr_tibia;
  using _theta_deg_fl_detoid_type =
    double;
  _theta_deg_fl_detoid_type theta_deg_fl_detoid;
  using _theta_deg_fl_femur_type =
    double;
  _theta_deg_fl_femur_type theta_deg_fl_femur;
  using _theta_deg_fl_tibia_type =
    double;
  _theta_deg_fl_tibia_type theta_deg_fl_tibia;
  using _theta_deg_br_detoid_type =
    double;
  _theta_deg_br_detoid_type theta_deg_br_detoid;
  using _theta_deg_br_femur_type =
    double;
  _theta_deg_br_femur_type theta_deg_br_femur;
  using _theta_deg_br_tibia_type =
    double;
  _theta_deg_br_tibia_type theta_deg_br_tibia;
  using _theta_deg_bl_detoid_type =
    double;
  _theta_deg_bl_detoid_type theta_deg_bl_detoid;
  using _theta_deg_bl_femur_type =
    double;
  _theta_deg_bl_femur_type theta_deg_bl_femur;
  using _theta_deg_bl_tibia_type =
    double;
  _theta_deg_bl_tibia_type theta_deg_bl_tibia;

  // setters for named parameter idiom
  Type & set__theta_deg_fr_detoid(
    const double & _arg)
  {
    this->theta_deg_fr_detoid = _arg;
    return *this;
  }
  Type & set__theta_deg_fr_femur(
    const double & _arg)
  {
    this->theta_deg_fr_femur = _arg;
    return *this;
  }
  Type & set__theta_deg_fr_tibia(
    const double & _arg)
  {
    this->theta_deg_fr_tibia = _arg;
    return *this;
  }
  Type & set__theta_deg_fl_detoid(
    const double & _arg)
  {
    this->theta_deg_fl_detoid = _arg;
    return *this;
  }
  Type & set__theta_deg_fl_femur(
    const double & _arg)
  {
    this->theta_deg_fl_femur = _arg;
    return *this;
  }
  Type & set__theta_deg_fl_tibia(
    const double & _arg)
  {
    this->theta_deg_fl_tibia = _arg;
    return *this;
  }
  Type & set__theta_deg_br_detoid(
    const double & _arg)
  {
    this->theta_deg_br_detoid = _arg;
    return *this;
  }
  Type & set__theta_deg_br_femur(
    const double & _arg)
  {
    this->theta_deg_br_femur = _arg;
    return *this;
  }
  Type & set__theta_deg_br_tibia(
    const double & _arg)
  {
    this->theta_deg_br_tibia = _arg;
    return *this;
  }
  Type & set__theta_deg_bl_detoid(
    const double & _arg)
  {
    this->theta_deg_bl_detoid = _arg;
    return *this;
  }
  Type & set__theta_deg_bl_femur(
    const double & _arg)
  {
    this->theta_deg_bl_femur = _arg;
    return *this;
  }
  Type & set__theta_deg_bl_tibia(
    const double & _arg)
  {
    this->theta_deg_bl_tibia = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    torto_interfaces::msg::TortoJointAngles_<ContainerAllocator> *;
  using ConstRawPtr =
    const torto_interfaces::msg::TortoJointAngles_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<torto_interfaces::msg::TortoJointAngles_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<torto_interfaces::msg::TortoJointAngles_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      torto_interfaces::msg::TortoJointAngles_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<torto_interfaces::msg::TortoJointAngles_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      torto_interfaces::msg::TortoJointAngles_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<torto_interfaces::msg::TortoJointAngles_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<torto_interfaces::msg::TortoJointAngles_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<torto_interfaces::msg::TortoJointAngles_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__torto_interfaces__msg__TortoJointAngles
    std::shared_ptr<torto_interfaces::msg::TortoJointAngles_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__torto_interfaces__msg__TortoJointAngles
    std::shared_ptr<torto_interfaces::msg::TortoJointAngles_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TortoJointAngles_ & other) const
  {
    if (this->theta_deg_fr_detoid != other.theta_deg_fr_detoid) {
      return false;
    }
    if (this->theta_deg_fr_femur != other.theta_deg_fr_femur) {
      return false;
    }
    if (this->theta_deg_fr_tibia != other.theta_deg_fr_tibia) {
      return false;
    }
    if (this->theta_deg_fl_detoid != other.theta_deg_fl_detoid) {
      return false;
    }
    if (this->theta_deg_fl_femur != other.theta_deg_fl_femur) {
      return false;
    }
    if (this->theta_deg_fl_tibia != other.theta_deg_fl_tibia) {
      return false;
    }
    if (this->theta_deg_br_detoid != other.theta_deg_br_detoid) {
      return false;
    }
    if (this->theta_deg_br_femur != other.theta_deg_br_femur) {
      return false;
    }
    if (this->theta_deg_br_tibia != other.theta_deg_br_tibia) {
      return false;
    }
    if (this->theta_deg_bl_detoid != other.theta_deg_bl_detoid) {
      return false;
    }
    if (this->theta_deg_bl_femur != other.theta_deg_bl_femur) {
      return false;
    }
    if (this->theta_deg_bl_tibia != other.theta_deg_bl_tibia) {
      return false;
    }
    return true;
  }
  bool operator!=(const TortoJointAngles_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TortoJointAngles_

// alias to use template instance with default allocator
using TortoJointAngles =
  torto_interfaces::msg::TortoJointAngles_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace torto_interfaces

#endif  // TORTO_INTERFACES__MSG__DETAIL__TORTO_JOINT_ANGLES__STRUCT_HPP_
