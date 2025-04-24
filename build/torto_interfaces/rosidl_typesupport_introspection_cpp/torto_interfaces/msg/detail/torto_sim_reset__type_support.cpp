// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from torto_interfaces:msg/TortoSimReset.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "torto_interfaces/msg/detail/torto_sim_reset__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace torto_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TortoSimReset_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) torto_interfaces::msg::TortoSimReset(_init);
}

void TortoSimReset_fini_function(void * message_memory)
{
  auto typed_message = static_cast<torto_interfaces::msg::TortoSimReset *>(message_memory);
  typed_message->~TortoSimReset();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TortoSimReset_message_member_array[3] = {
  {
    "hard_reset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torto_interfaces::msg::TortoSimReset, hard_reset),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "zero_robot",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torto_interfaces::msg::TortoSimReset, zero_robot),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reason",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torto_interfaces::msg::TortoSimReset, reason),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TortoSimReset_message_members = {
  "torto_interfaces::msg",  // message namespace
  "TortoSimReset",  // message name
  3,  // number of fields
  sizeof(torto_interfaces::msg::TortoSimReset),
  TortoSimReset_message_member_array,  // message members
  TortoSimReset_init_function,  // function to initialize message memory (memory has to be allocated)
  TortoSimReset_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TortoSimReset_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TortoSimReset_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace torto_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<torto_interfaces::msg::TortoSimReset>()
{
  return &::torto_interfaces::msg::rosidl_typesupport_introspection_cpp::TortoSimReset_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, torto_interfaces, msg, TortoSimReset)() {
  return &::torto_interfaces::msg::rosidl_typesupport_introspection_cpp::TortoSimReset_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
