// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from torto_interfaces:msg/TortoSimReset.idl
// generated code does not contain a copyright notice

#ifndef TORTO_INTERFACES__MSG__DETAIL__TORTO_SIM_RESET__STRUCT_HPP_
#define TORTO_INTERFACES__MSG__DETAIL__TORTO_SIM_RESET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__torto_interfaces__msg__TortoSimReset __attribute__((deprecated))
#else
# define DEPRECATED__torto_interfaces__msg__TortoSimReset __declspec(deprecated)
#endif

namespace torto_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TortoSimReset_
{
  using Type = TortoSimReset_<ContainerAllocator>;

  explicit TortoSimReset_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hard_reset = false;
      this->zero_robot = false;
      this->reason = "";
    }
  }

  explicit TortoSimReset_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hard_reset = false;
      this->zero_robot = false;
      this->reason = "";
    }
  }

  // field types and members
  using _hard_reset_type =
    bool;
  _hard_reset_type hard_reset;
  using _zero_robot_type =
    bool;
  _zero_robot_type zero_robot;
  using _reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reason_type reason;

  // setters for named parameter idiom
  Type & set__hard_reset(
    const bool & _arg)
  {
    this->hard_reset = _arg;
    return *this;
  }
  Type & set__zero_robot(
    const bool & _arg)
  {
    this->zero_robot = _arg;
    return *this;
  }
  Type & set__reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    torto_interfaces::msg::TortoSimReset_<ContainerAllocator> *;
  using ConstRawPtr =
    const torto_interfaces::msg::TortoSimReset_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<torto_interfaces::msg::TortoSimReset_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<torto_interfaces::msg::TortoSimReset_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      torto_interfaces::msg::TortoSimReset_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<torto_interfaces::msg::TortoSimReset_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      torto_interfaces::msg::TortoSimReset_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<torto_interfaces::msg::TortoSimReset_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<torto_interfaces::msg::TortoSimReset_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<torto_interfaces::msg::TortoSimReset_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__torto_interfaces__msg__TortoSimReset
    std::shared_ptr<torto_interfaces::msg::TortoSimReset_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__torto_interfaces__msg__TortoSimReset
    std::shared_ptr<torto_interfaces::msg::TortoSimReset_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TortoSimReset_ & other) const
  {
    if (this->hard_reset != other.hard_reset) {
      return false;
    }
    if (this->zero_robot != other.zero_robot) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const TortoSimReset_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TortoSimReset_

// alias to use template instance with default allocator
using TortoSimReset =
  torto_interfaces::msg::TortoSimReset_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace torto_interfaces

#endif  // TORTO_INTERFACES__MSG__DETAIL__TORTO_SIM_RESET__STRUCT_HPP_
