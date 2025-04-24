// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from torto_interfaces:msg/TortoCtrlParams.idl
// generated code does not contain a copyright notice
#include "torto_interfaces/msg/detail/torto_ctrl_params__rosidl_typesupport_fastrtps_cpp.hpp"
#include "torto_interfaces/msg/detail/torto_ctrl_params__struct.hpp"

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
  const torto_interfaces::msg::TortoCtrlParams & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: vx
  cdr << ros_message.vx;
  // Member: vy
  cdr << ros_message.vy;
  // Member: vz
  cdr << ros_message.vz;
  // Member: vangular
  cdr << ros_message.vangular;
  // Member: angle_fr
  cdr << ros_message.angle_fr;
  // Member: angle_fl
  cdr << ros_message.angle_fl;
  // Member: angle_br
  cdr << ros_message.angle_br;
  // Member: angle_bl
  cdr << ros_message.angle_bl;
  // Member: step_offset
  cdr << ros_message.step_offset;
  // Member: step_period
  cdr << ros_message.step_period;
  // Member: gait_offset_fr
  cdr << ros_message.gait_offset_fr;
  // Member: gait_offset_fl
  cdr << ros_message.gait_offset_fl;
  // Member: gait_offset_br
  cdr << ros_message.gait_offset_br;
  // Member: gait_offset_bl
  cdr << ros_message.gait_offset_bl;
  // Member: body_position_x
  cdr << ros_message.body_position_x;
  // Member: body_position_y
  cdr << ros_message.body_position_y;
  // Member: body_position_z
  cdr << ros_message.body_position_z;
  // Member: body_orientation_roll
  cdr << ros_message.body_orientation_roll;
  // Member: body_orientation_pitch
  cdr << ros_message.body_orientation_pitch;
  // Member: body_orientation_yawn
  cdr << ros_message.body_orientation_yawn;
  // Member: foot_position_fr_x
  cdr << ros_message.foot_position_fr_x;
  // Member: foot_position_fr_y
  cdr << ros_message.foot_position_fr_y;
  // Member: foot_position_fr_z
  cdr << ros_message.foot_position_fr_z;
  // Member: foot_position_fl_x
  cdr << ros_message.foot_position_fl_x;
  // Member: foot_position_fl_y
  cdr << ros_message.foot_position_fl_y;
  // Member: foot_position_fl_z
  cdr << ros_message.foot_position_fl_z;
  // Member: foot_position_br_x
  cdr << ros_message.foot_position_br_x;
  // Member: foot_position_br_y
  cdr << ros_message.foot_position_br_y;
  // Member: foot_position_br_z
  cdr << ros_message.foot_position_br_z;
  // Member: foot_position_bl_x
  cdr << ros_message.foot_position_bl_x;
  // Member: foot_position_bl_y
  cdr << ros_message.foot_position_bl_y;
  // Member: foot_position_bl_z
  cdr << ros_message.foot_position_bl_z;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_torto_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  torto_interfaces::msg::TortoCtrlParams & ros_message)
{
  // Member: vx
  cdr >> ros_message.vx;

  // Member: vy
  cdr >> ros_message.vy;

  // Member: vz
  cdr >> ros_message.vz;

  // Member: vangular
  cdr >> ros_message.vangular;

  // Member: angle_fr
  cdr >> ros_message.angle_fr;

  // Member: angle_fl
  cdr >> ros_message.angle_fl;

  // Member: angle_br
  cdr >> ros_message.angle_br;

  // Member: angle_bl
  cdr >> ros_message.angle_bl;

  // Member: step_offset
  cdr >> ros_message.step_offset;

  // Member: step_period
  cdr >> ros_message.step_period;

  // Member: gait_offset_fr
  cdr >> ros_message.gait_offset_fr;

  // Member: gait_offset_fl
  cdr >> ros_message.gait_offset_fl;

  // Member: gait_offset_br
  cdr >> ros_message.gait_offset_br;

  // Member: gait_offset_bl
  cdr >> ros_message.gait_offset_bl;

  // Member: body_position_x
  cdr >> ros_message.body_position_x;

  // Member: body_position_y
  cdr >> ros_message.body_position_y;

  // Member: body_position_z
  cdr >> ros_message.body_position_z;

  // Member: body_orientation_roll
  cdr >> ros_message.body_orientation_roll;

  // Member: body_orientation_pitch
  cdr >> ros_message.body_orientation_pitch;

  // Member: body_orientation_yawn
  cdr >> ros_message.body_orientation_yawn;

  // Member: foot_position_fr_x
  cdr >> ros_message.foot_position_fr_x;

  // Member: foot_position_fr_y
  cdr >> ros_message.foot_position_fr_y;

  // Member: foot_position_fr_z
  cdr >> ros_message.foot_position_fr_z;

  // Member: foot_position_fl_x
  cdr >> ros_message.foot_position_fl_x;

  // Member: foot_position_fl_y
  cdr >> ros_message.foot_position_fl_y;

  // Member: foot_position_fl_z
  cdr >> ros_message.foot_position_fl_z;

  // Member: foot_position_br_x
  cdr >> ros_message.foot_position_br_x;

  // Member: foot_position_br_y
  cdr >> ros_message.foot_position_br_y;

  // Member: foot_position_br_z
  cdr >> ros_message.foot_position_br_z;

  // Member: foot_position_bl_x
  cdr >> ros_message.foot_position_bl_x;

  // Member: foot_position_bl_y
  cdr >> ros_message.foot_position_bl_y;

  // Member: foot_position_bl_z
  cdr >> ros_message.foot_position_bl_z;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_torto_interfaces
get_serialized_size(
  const torto_interfaces::msg::TortoCtrlParams & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: vx
  {
    size_t item_size = sizeof(ros_message.vx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vy
  {
    size_t item_size = sizeof(ros_message.vy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vz
  {
    size_t item_size = sizeof(ros_message.vz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vangular
  {
    size_t item_size = sizeof(ros_message.vangular);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_fr
  {
    size_t item_size = sizeof(ros_message.angle_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_fl
  {
    size_t item_size = sizeof(ros_message.angle_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_br
  {
    size_t item_size = sizeof(ros_message.angle_br);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_bl
  {
    size_t item_size = sizeof(ros_message.angle_bl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: step_offset
  {
    size_t item_size = sizeof(ros_message.step_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: step_period
  {
    size_t item_size = sizeof(ros_message.step_period);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gait_offset_fr
  {
    size_t item_size = sizeof(ros_message.gait_offset_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gait_offset_fl
  {
    size_t item_size = sizeof(ros_message.gait_offset_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gait_offset_br
  {
    size_t item_size = sizeof(ros_message.gait_offset_br);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gait_offset_bl
  {
    size_t item_size = sizeof(ros_message.gait_offset_bl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: body_position_x
  {
    size_t item_size = sizeof(ros_message.body_position_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: body_position_y
  {
    size_t item_size = sizeof(ros_message.body_position_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: body_position_z
  {
    size_t item_size = sizeof(ros_message.body_position_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: body_orientation_roll
  {
    size_t item_size = sizeof(ros_message.body_orientation_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: body_orientation_pitch
  {
    size_t item_size = sizeof(ros_message.body_orientation_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: body_orientation_yawn
  {
    size_t item_size = sizeof(ros_message.body_orientation_yawn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: foot_position_fr_x
  {
    size_t item_size = sizeof(ros_message.foot_position_fr_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: foot_position_fr_y
  {
    size_t item_size = sizeof(ros_message.foot_position_fr_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: foot_position_fr_z
  {
    size_t item_size = sizeof(ros_message.foot_position_fr_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: foot_position_fl_x
  {
    size_t item_size = sizeof(ros_message.foot_position_fl_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: foot_position_fl_y
  {
    size_t item_size = sizeof(ros_message.foot_position_fl_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: foot_position_fl_z
  {
    size_t item_size = sizeof(ros_message.foot_position_fl_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: foot_position_br_x
  {
    size_t item_size = sizeof(ros_message.foot_position_br_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: foot_position_br_y
  {
    size_t item_size = sizeof(ros_message.foot_position_br_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: foot_position_br_z
  {
    size_t item_size = sizeof(ros_message.foot_position_br_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: foot_position_bl_x
  {
    size_t item_size = sizeof(ros_message.foot_position_bl_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: foot_position_bl_y
  {
    size_t item_size = sizeof(ros_message.foot_position_bl_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: foot_position_bl_z
  {
    size_t item_size = sizeof(ros_message.foot_position_bl_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_torto_interfaces
max_serialized_size_TortoCtrlParams(
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


  // Member: vx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vangular
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_br
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_bl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: step_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: step_period
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gait_offset_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gait_offset_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gait_offset_br
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gait_offset_bl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: body_position_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: body_position_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: body_position_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: body_orientation_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: body_orientation_pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: body_orientation_yawn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: foot_position_fr_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: foot_position_fr_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: foot_position_fr_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: foot_position_fl_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: foot_position_fl_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: foot_position_fl_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: foot_position_br_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: foot_position_br_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: foot_position_br_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: foot_position_bl_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: foot_position_bl_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: foot_position_bl_z
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
    using DataType = torto_interfaces::msg::TortoCtrlParams;
    is_plain =
      (
      offsetof(DataType, foot_position_bl_z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _TortoCtrlParams__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const torto_interfaces::msg::TortoCtrlParams *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TortoCtrlParams__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<torto_interfaces::msg::TortoCtrlParams *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TortoCtrlParams__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const torto_interfaces::msg::TortoCtrlParams *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TortoCtrlParams__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TortoCtrlParams(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TortoCtrlParams__callbacks = {
  "torto_interfaces::msg",
  "TortoCtrlParams",
  _TortoCtrlParams__cdr_serialize,
  _TortoCtrlParams__cdr_deserialize,
  _TortoCtrlParams__get_serialized_size,
  _TortoCtrlParams__max_serialized_size
};

static rosidl_message_type_support_t _TortoCtrlParams__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TortoCtrlParams__callbacks,
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
get_message_type_support_handle<torto_interfaces::msg::TortoCtrlParams>()
{
  return &torto_interfaces::msg::typesupport_fastrtps_cpp::_TortoCtrlParams__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, torto_interfaces, msg, TortoCtrlParams)() {
  return &torto_interfaces::msg::typesupport_fastrtps_cpp::_TortoCtrlParams__handle;
}

#ifdef __cplusplus
}
#endif
