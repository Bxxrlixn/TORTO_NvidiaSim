// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from torto_interfaces:msg/TortoJointAngles.idl
// generated code does not contain a copyright notice
#include "torto_interfaces/msg/detail/torto_joint_angles__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "torto_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "torto_interfaces/msg/detail/torto_joint_angles__struct.h"
#include "torto_interfaces/msg/detail/torto_joint_angles__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _TortoJointAngles__ros_msg_type = torto_interfaces__msg__TortoJointAngles;

static bool _TortoJointAngles__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TortoJointAngles__ros_msg_type * ros_message = static_cast<const _TortoJointAngles__ros_msg_type *>(untyped_ros_message);
  // Field name: theta_deg_fr_detoid
  {
    cdr << ros_message->theta_deg_fr_detoid;
  }

  // Field name: theta_deg_fr_femur
  {
    cdr << ros_message->theta_deg_fr_femur;
  }

  // Field name: theta_deg_fr_tibia
  {
    cdr << ros_message->theta_deg_fr_tibia;
  }

  // Field name: theta_deg_fl_detoid
  {
    cdr << ros_message->theta_deg_fl_detoid;
  }

  // Field name: theta_deg_fl_femur
  {
    cdr << ros_message->theta_deg_fl_femur;
  }

  // Field name: theta_deg_fl_tibia
  {
    cdr << ros_message->theta_deg_fl_tibia;
  }

  // Field name: theta_deg_br_detoid
  {
    cdr << ros_message->theta_deg_br_detoid;
  }

  // Field name: theta_deg_br_femur
  {
    cdr << ros_message->theta_deg_br_femur;
  }

  // Field name: theta_deg_br_tibia
  {
    cdr << ros_message->theta_deg_br_tibia;
  }

  // Field name: theta_deg_bl_detoid
  {
    cdr << ros_message->theta_deg_bl_detoid;
  }

  // Field name: theta_deg_bl_femur
  {
    cdr << ros_message->theta_deg_bl_femur;
  }

  // Field name: theta_deg_bl_tibia
  {
    cdr << ros_message->theta_deg_bl_tibia;
  }

  return true;
}

static bool _TortoJointAngles__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TortoJointAngles__ros_msg_type * ros_message = static_cast<_TortoJointAngles__ros_msg_type *>(untyped_ros_message);
  // Field name: theta_deg_fr_detoid
  {
    cdr >> ros_message->theta_deg_fr_detoid;
  }

  // Field name: theta_deg_fr_femur
  {
    cdr >> ros_message->theta_deg_fr_femur;
  }

  // Field name: theta_deg_fr_tibia
  {
    cdr >> ros_message->theta_deg_fr_tibia;
  }

  // Field name: theta_deg_fl_detoid
  {
    cdr >> ros_message->theta_deg_fl_detoid;
  }

  // Field name: theta_deg_fl_femur
  {
    cdr >> ros_message->theta_deg_fl_femur;
  }

  // Field name: theta_deg_fl_tibia
  {
    cdr >> ros_message->theta_deg_fl_tibia;
  }

  // Field name: theta_deg_br_detoid
  {
    cdr >> ros_message->theta_deg_br_detoid;
  }

  // Field name: theta_deg_br_femur
  {
    cdr >> ros_message->theta_deg_br_femur;
  }

  // Field name: theta_deg_br_tibia
  {
    cdr >> ros_message->theta_deg_br_tibia;
  }

  // Field name: theta_deg_bl_detoid
  {
    cdr >> ros_message->theta_deg_bl_detoid;
  }

  // Field name: theta_deg_bl_femur
  {
    cdr >> ros_message->theta_deg_bl_femur;
  }

  // Field name: theta_deg_bl_tibia
  {
    cdr >> ros_message->theta_deg_bl_tibia;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_torto_interfaces
size_t get_serialized_size_torto_interfaces__msg__TortoJointAngles(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TortoJointAngles__ros_msg_type * ros_message = static_cast<const _TortoJointAngles__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name theta_deg_fr_detoid
  {
    size_t item_size = sizeof(ros_message->theta_deg_fr_detoid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name theta_deg_fr_femur
  {
    size_t item_size = sizeof(ros_message->theta_deg_fr_femur);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name theta_deg_fr_tibia
  {
    size_t item_size = sizeof(ros_message->theta_deg_fr_tibia);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name theta_deg_fl_detoid
  {
    size_t item_size = sizeof(ros_message->theta_deg_fl_detoid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name theta_deg_fl_femur
  {
    size_t item_size = sizeof(ros_message->theta_deg_fl_femur);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name theta_deg_fl_tibia
  {
    size_t item_size = sizeof(ros_message->theta_deg_fl_tibia);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name theta_deg_br_detoid
  {
    size_t item_size = sizeof(ros_message->theta_deg_br_detoid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name theta_deg_br_femur
  {
    size_t item_size = sizeof(ros_message->theta_deg_br_femur);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name theta_deg_br_tibia
  {
    size_t item_size = sizeof(ros_message->theta_deg_br_tibia);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name theta_deg_bl_detoid
  {
    size_t item_size = sizeof(ros_message->theta_deg_bl_detoid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name theta_deg_bl_femur
  {
    size_t item_size = sizeof(ros_message->theta_deg_bl_femur);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name theta_deg_bl_tibia
  {
    size_t item_size = sizeof(ros_message->theta_deg_bl_tibia);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TortoJointAngles__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_torto_interfaces__msg__TortoJointAngles(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_torto_interfaces
size_t max_serialized_size_torto_interfaces__msg__TortoJointAngles(
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

  // member: theta_deg_fr_detoid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: theta_deg_fr_femur
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: theta_deg_fr_tibia
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: theta_deg_fl_detoid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: theta_deg_fl_femur
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: theta_deg_fl_tibia
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: theta_deg_br_detoid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: theta_deg_br_femur
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: theta_deg_br_tibia
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: theta_deg_bl_detoid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: theta_deg_bl_femur
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: theta_deg_bl_tibia
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
    using DataType = torto_interfaces__msg__TortoJointAngles;
    is_plain =
      (
      offsetof(DataType, theta_deg_bl_tibia) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TortoJointAngles__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_torto_interfaces__msg__TortoJointAngles(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TortoJointAngles = {
  "torto_interfaces::msg",
  "TortoJointAngles",
  _TortoJointAngles__cdr_serialize,
  _TortoJointAngles__cdr_deserialize,
  _TortoJointAngles__get_serialized_size,
  _TortoJointAngles__max_serialized_size
};

static rosidl_message_type_support_t _TortoJointAngles__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TortoJointAngles,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, torto_interfaces, msg, TortoJointAngles)() {
  return &_TortoJointAngles__type_support;
}

#if defined(__cplusplus)
}
#endif
