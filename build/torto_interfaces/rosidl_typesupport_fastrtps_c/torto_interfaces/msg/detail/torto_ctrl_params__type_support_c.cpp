// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from torto_interfaces:msg/TortoCtrlParams.idl
// generated code does not contain a copyright notice
#include "torto_interfaces/msg/detail/torto_ctrl_params__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "torto_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "torto_interfaces/msg/detail/torto_ctrl_params__struct.h"
#include "torto_interfaces/msg/detail/torto_ctrl_params__functions.h"
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


using _TortoCtrlParams__ros_msg_type = torto_interfaces__msg__TortoCtrlParams;

static bool _TortoCtrlParams__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TortoCtrlParams__ros_msg_type * ros_message = static_cast<const _TortoCtrlParams__ros_msg_type *>(untyped_ros_message);
  // Field name: vx
  {
    cdr << ros_message->vx;
  }

  // Field name: vy
  {
    cdr << ros_message->vy;
  }

  // Field name: vz
  {
    cdr << ros_message->vz;
  }

  // Field name: vangular
  {
    cdr << ros_message->vangular;
  }

  // Field name: angle_fr
  {
    cdr << ros_message->angle_fr;
  }

  // Field name: angle_fl
  {
    cdr << ros_message->angle_fl;
  }

  // Field name: angle_br
  {
    cdr << ros_message->angle_br;
  }

  // Field name: angle_bl
  {
    cdr << ros_message->angle_bl;
  }

  // Field name: step_offset
  {
    cdr << ros_message->step_offset;
  }

  // Field name: step_period
  {
    cdr << ros_message->step_period;
  }

  // Field name: gait_offset_fr
  {
    cdr << ros_message->gait_offset_fr;
  }

  // Field name: gait_offset_fl
  {
    cdr << ros_message->gait_offset_fl;
  }

  // Field name: gait_offset_br
  {
    cdr << ros_message->gait_offset_br;
  }

  // Field name: gait_offset_bl
  {
    cdr << ros_message->gait_offset_bl;
  }

  // Field name: body_position_x
  {
    cdr << ros_message->body_position_x;
  }

  // Field name: body_position_y
  {
    cdr << ros_message->body_position_y;
  }

  // Field name: body_position_z
  {
    cdr << ros_message->body_position_z;
  }

  // Field name: body_orientation_roll
  {
    cdr << ros_message->body_orientation_roll;
  }

  // Field name: body_orientation_pitch
  {
    cdr << ros_message->body_orientation_pitch;
  }

  // Field name: body_orientation_yawn
  {
    cdr << ros_message->body_orientation_yawn;
  }

  // Field name: foot_position_fr_x
  {
    cdr << ros_message->foot_position_fr_x;
  }

  // Field name: foot_position_fr_y
  {
    cdr << ros_message->foot_position_fr_y;
  }

  // Field name: foot_position_fr_z
  {
    cdr << ros_message->foot_position_fr_z;
  }

  // Field name: foot_position_fl_x
  {
    cdr << ros_message->foot_position_fl_x;
  }

  // Field name: foot_position_fl_y
  {
    cdr << ros_message->foot_position_fl_y;
  }

  // Field name: foot_position_fl_z
  {
    cdr << ros_message->foot_position_fl_z;
  }

  // Field name: foot_position_br_x
  {
    cdr << ros_message->foot_position_br_x;
  }

  // Field name: foot_position_br_y
  {
    cdr << ros_message->foot_position_br_y;
  }

  // Field name: foot_position_br_z
  {
    cdr << ros_message->foot_position_br_z;
  }

  // Field name: foot_position_bl_x
  {
    cdr << ros_message->foot_position_bl_x;
  }

  // Field name: foot_position_bl_y
  {
    cdr << ros_message->foot_position_bl_y;
  }

  // Field name: foot_position_bl_z
  {
    cdr << ros_message->foot_position_bl_z;
  }

  return true;
}

static bool _TortoCtrlParams__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TortoCtrlParams__ros_msg_type * ros_message = static_cast<_TortoCtrlParams__ros_msg_type *>(untyped_ros_message);
  // Field name: vx
  {
    cdr >> ros_message->vx;
  }

  // Field name: vy
  {
    cdr >> ros_message->vy;
  }

  // Field name: vz
  {
    cdr >> ros_message->vz;
  }

  // Field name: vangular
  {
    cdr >> ros_message->vangular;
  }

  // Field name: angle_fr
  {
    cdr >> ros_message->angle_fr;
  }

  // Field name: angle_fl
  {
    cdr >> ros_message->angle_fl;
  }

  // Field name: angle_br
  {
    cdr >> ros_message->angle_br;
  }

  // Field name: angle_bl
  {
    cdr >> ros_message->angle_bl;
  }

  // Field name: step_offset
  {
    cdr >> ros_message->step_offset;
  }

  // Field name: step_period
  {
    cdr >> ros_message->step_period;
  }

  // Field name: gait_offset_fr
  {
    cdr >> ros_message->gait_offset_fr;
  }

  // Field name: gait_offset_fl
  {
    cdr >> ros_message->gait_offset_fl;
  }

  // Field name: gait_offset_br
  {
    cdr >> ros_message->gait_offset_br;
  }

  // Field name: gait_offset_bl
  {
    cdr >> ros_message->gait_offset_bl;
  }

  // Field name: body_position_x
  {
    cdr >> ros_message->body_position_x;
  }

  // Field name: body_position_y
  {
    cdr >> ros_message->body_position_y;
  }

  // Field name: body_position_z
  {
    cdr >> ros_message->body_position_z;
  }

  // Field name: body_orientation_roll
  {
    cdr >> ros_message->body_orientation_roll;
  }

  // Field name: body_orientation_pitch
  {
    cdr >> ros_message->body_orientation_pitch;
  }

  // Field name: body_orientation_yawn
  {
    cdr >> ros_message->body_orientation_yawn;
  }

  // Field name: foot_position_fr_x
  {
    cdr >> ros_message->foot_position_fr_x;
  }

  // Field name: foot_position_fr_y
  {
    cdr >> ros_message->foot_position_fr_y;
  }

  // Field name: foot_position_fr_z
  {
    cdr >> ros_message->foot_position_fr_z;
  }

  // Field name: foot_position_fl_x
  {
    cdr >> ros_message->foot_position_fl_x;
  }

  // Field name: foot_position_fl_y
  {
    cdr >> ros_message->foot_position_fl_y;
  }

  // Field name: foot_position_fl_z
  {
    cdr >> ros_message->foot_position_fl_z;
  }

  // Field name: foot_position_br_x
  {
    cdr >> ros_message->foot_position_br_x;
  }

  // Field name: foot_position_br_y
  {
    cdr >> ros_message->foot_position_br_y;
  }

  // Field name: foot_position_br_z
  {
    cdr >> ros_message->foot_position_br_z;
  }

  // Field name: foot_position_bl_x
  {
    cdr >> ros_message->foot_position_bl_x;
  }

  // Field name: foot_position_bl_y
  {
    cdr >> ros_message->foot_position_bl_y;
  }

  // Field name: foot_position_bl_z
  {
    cdr >> ros_message->foot_position_bl_z;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_torto_interfaces
size_t get_serialized_size_torto_interfaces__msg__TortoCtrlParams(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TortoCtrlParams__ros_msg_type * ros_message = static_cast<const _TortoCtrlParams__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name vx
  {
    size_t item_size = sizeof(ros_message->vx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vy
  {
    size_t item_size = sizeof(ros_message->vy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vz
  {
    size_t item_size = sizeof(ros_message->vz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vangular
  {
    size_t item_size = sizeof(ros_message->vangular);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle_fr
  {
    size_t item_size = sizeof(ros_message->angle_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle_fl
  {
    size_t item_size = sizeof(ros_message->angle_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle_br
  {
    size_t item_size = sizeof(ros_message->angle_br);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle_bl
  {
    size_t item_size = sizeof(ros_message->angle_bl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name step_offset
  {
    size_t item_size = sizeof(ros_message->step_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name step_period
  {
    size_t item_size = sizeof(ros_message->step_period);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gait_offset_fr
  {
    size_t item_size = sizeof(ros_message->gait_offset_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gait_offset_fl
  {
    size_t item_size = sizeof(ros_message->gait_offset_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gait_offset_br
  {
    size_t item_size = sizeof(ros_message->gait_offset_br);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gait_offset_bl
  {
    size_t item_size = sizeof(ros_message->gait_offset_bl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name body_position_x
  {
    size_t item_size = sizeof(ros_message->body_position_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name body_position_y
  {
    size_t item_size = sizeof(ros_message->body_position_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name body_position_z
  {
    size_t item_size = sizeof(ros_message->body_position_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name body_orientation_roll
  {
    size_t item_size = sizeof(ros_message->body_orientation_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name body_orientation_pitch
  {
    size_t item_size = sizeof(ros_message->body_orientation_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name body_orientation_yawn
  {
    size_t item_size = sizeof(ros_message->body_orientation_yawn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name foot_position_fr_x
  {
    size_t item_size = sizeof(ros_message->foot_position_fr_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name foot_position_fr_y
  {
    size_t item_size = sizeof(ros_message->foot_position_fr_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name foot_position_fr_z
  {
    size_t item_size = sizeof(ros_message->foot_position_fr_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name foot_position_fl_x
  {
    size_t item_size = sizeof(ros_message->foot_position_fl_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name foot_position_fl_y
  {
    size_t item_size = sizeof(ros_message->foot_position_fl_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name foot_position_fl_z
  {
    size_t item_size = sizeof(ros_message->foot_position_fl_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name foot_position_br_x
  {
    size_t item_size = sizeof(ros_message->foot_position_br_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name foot_position_br_y
  {
    size_t item_size = sizeof(ros_message->foot_position_br_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name foot_position_br_z
  {
    size_t item_size = sizeof(ros_message->foot_position_br_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name foot_position_bl_x
  {
    size_t item_size = sizeof(ros_message->foot_position_bl_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name foot_position_bl_y
  {
    size_t item_size = sizeof(ros_message->foot_position_bl_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name foot_position_bl_z
  {
    size_t item_size = sizeof(ros_message->foot_position_bl_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TortoCtrlParams__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_torto_interfaces__msg__TortoCtrlParams(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_torto_interfaces
size_t max_serialized_size_torto_interfaces__msg__TortoCtrlParams(
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

  // member: vx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vangular
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: angle_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: angle_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: angle_br
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: angle_bl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: step_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: step_period
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gait_offset_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gait_offset_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gait_offset_br
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gait_offset_bl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: body_position_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: body_position_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: body_position_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: body_orientation_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: body_orientation_pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: body_orientation_yawn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: foot_position_fr_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: foot_position_fr_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: foot_position_fr_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: foot_position_fl_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: foot_position_fl_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: foot_position_fl_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: foot_position_br_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: foot_position_br_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: foot_position_br_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: foot_position_bl_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: foot_position_bl_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: foot_position_bl_z
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
    using DataType = torto_interfaces__msg__TortoCtrlParams;
    is_plain =
      (
      offsetof(DataType, foot_position_bl_z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TortoCtrlParams__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_torto_interfaces__msg__TortoCtrlParams(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TortoCtrlParams = {
  "torto_interfaces::msg",
  "TortoCtrlParams",
  _TortoCtrlParams__cdr_serialize,
  _TortoCtrlParams__cdr_deserialize,
  _TortoCtrlParams__get_serialized_size,
  _TortoCtrlParams__max_serialized_size
};

static rosidl_message_type_support_t _TortoCtrlParams__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TortoCtrlParams,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, torto_interfaces, msg, TortoCtrlParams)() {
  return &_TortoCtrlParams__type_support;
}

#if defined(__cplusplus)
}
#endif
