// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from torto_interfaces:msg/TortoJointAngles.idl
// generated code does not contain a copyright notice
#include "torto_interfaces/msg/detail/torto_joint_angles__rosidl_typesupport_fastrtps_cpp.hpp"
#include "torto_interfaces/msg/detail/torto_joint_angles__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace torto_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_torto_interfaces
cdr_serialize(
  const torto_interfaces::msg::TortoJointAngles & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: theta_deg_fr_detoid
  cdr << ros_message.theta_deg_fr_detoid;
  // Member: theta_deg_fr_femur
  cdr << ros_message.theta_deg_fr_femur;
  // Member: theta_deg_fr_tibia
  cdr << ros_message.theta_deg_fr_tibia;
  // Member: theta_deg_fl_detoid
  cdr << ros_message.theta_deg_fl_detoid;
  // Member: theta_deg_fl_femur
  cdr << ros_message.theta_deg_fl_femur;
  // Member: theta_deg_fl_tibia
  cdr << ros_message.theta_deg_fl_tibia;
  // Member: theta_deg_br_detoid
  cdr << ros_message.theta_deg_br_detoid;
  // Member: theta_deg_br_femur
  cdr << ros_message.theta_deg_br_femur;
  // Member: theta_deg_br_tibia
  cdr << ros_message.theta_deg_br_tibia;
  // Member: theta_deg_bl_detoid
  cdr << ros_message.theta_deg_bl_detoid;
  // Member: theta_deg_bl_femur
  cdr << ros_message.theta_deg_bl_femur;
  // Member: theta_deg_bl_tibia
  cdr << ros_message.theta_deg_bl_tibia;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_torto_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  torto_interfaces::msg::TortoJointAngles & ros_message)
{
  // Member: theta_deg_fr_detoid
  cdr >> ros_message.theta_deg_fr_detoid;

  // Member: theta_deg_fr_femur
  cdr >> ros_message.theta_deg_fr_femur;

  // Member: theta_deg_fr_tibia
  cdr >> ros_message.theta_deg_fr_tibia;

  // Member: theta_deg_fl_detoid
  cdr >> ros_message.theta_deg_fl_detoid;

  // Member: theta_deg_fl_femur
  cdr >> ros_message.theta_deg_fl_femur;

  // Member: theta_deg_fl_tibia
  cdr >> ros_message.theta_deg_fl_tibia;

  // Member: theta_deg_br_detoid
  cdr >> ros_message.theta_deg_br_detoid;

  // Member: theta_deg_br_femur
  cdr >> ros_message.theta_deg_br_femur;

  // Member: theta_deg_br_tibia
  cdr >> ros_message.theta_deg_br_tibia;

  // Member: theta_deg_bl_detoid
  cdr >> ros_message.theta_deg_bl_detoid;

  // Member: theta_deg_bl_femur
  cdr >> ros_message.theta_deg_bl_femur;

  // Member: theta_deg_bl_tibia
  cdr >> ros_message.theta_deg_bl_tibia;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_torto_interfaces
get_serialized_size(
  const torto_interfaces::msg::TortoJointAngles & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: theta_deg_fr_detoid
  {
    size_t item_size = sizeof(ros_message.theta_deg_fr_detoid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: theta_deg_fr_femur
  {
    size_t item_size = sizeof(ros_message.theta_deg_fr_femur);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: theta_deg_fr_tibia
  {
    size_t item_size = sizeof(ros_message.theta_deg_fr_tibia);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: theta_deg_fl_detoid
  {
    size_t item_size = sizeof(ros_message.theta_deg_fl_detoid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: theta_deg_fl_femur
  {
    size_t item_size = sizeof(ros_message.theta_deg_fl_femur);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: theta_deg_fl_tibia
  {
    size_t item_size = sizeof(ros_message.theta_deg_fl_tibia);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: theta_deg_br_detoid
  {
    size_t item_size = sizeof(ros_message.theta_deg_br_detoid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: theta_deg_br_femur
  {
    size_t item_size = sizeof(ros_message.theta_deg_br_femur);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: theta_deg_br_tibia
  {
    size_t item_size = sizeof(ros_message.theta_deg_br_tibia);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: theta_deg_bl_detoid
  {
    size_t item_size = sizeof(ros_message.theta_deg_bl_detoid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: theta_deg_bl_femur
  {
    size_t item_size = sizeof(ros_message.theta_deg_bl_femur);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: theta_deg_bl_tibia
  {
    size_t item_size = sizeof(ros_message.theta_deg_bl_tibia);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_torto_interfaces
max_serialized_size_TortoJointAngles(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: theta_deg_fr_detoid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: theta_deg_fr_femur
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: theta_deg_fr_tibia
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: theta_deg_fl_detoid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: theta_deg_fl_femur
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: theta_deg_fl_tibia
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: theta_deg_br_detoid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: theta_deg_br_femur
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: theta_deg_br_tibia
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: theta_deg_bl_detoid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: theta_deg_bl_femur
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: theta_deg_bl_tibia
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = torto_interfaces::msg::TortoJointAngles;
    is_plain =
      (
      offsetof(DataType, theta_deg_bl_tibia) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _TortoJointAngles__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const torto_interfaces::msg::TortoJointAngles *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TortoJointAngles__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<torto_interfaces::msg::TortoJointAngles *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TortoJointAngles__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const torto_interfaces::msg::TortoJointAngles *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TortoJointAngles__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TortoJointAngles(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TortoJointAngles__callbacks = {
  "torto_interfaces::msg",
  "TortoJointAngles",
  _TortoJointAngles__cdr_serialize,
  _TortoJointAngles__cdr_deserialize,
  _TortoJointAngles__get_serialized_size,
  _TortoJointAngles__max_serialized_size
};

static rosidl_message_type_support_t _TortoJointAngles__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TortoJointAngles__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace torto_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_torto_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<torto_interfaces::msg::TortoJointAngles>()
{
  return &torto_interfaces::msg::typesupport_fastrtps_cpp::_TortoJointAngles__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, torto_interfaces, msg, TortoJointAngles)() {
  return &torto_interfaces::msg::typesupport_fastrtps_cpp::_TortoJointAngles__handle;
}

#ifdef __cplusplus
}
#endif
