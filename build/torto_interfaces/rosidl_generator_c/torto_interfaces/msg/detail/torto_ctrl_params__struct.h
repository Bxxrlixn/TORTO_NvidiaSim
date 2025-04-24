// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from torto_interfaces:msg/TortoCtrlParams.idl
// generated code does not contain a copyright notice

#ifndef TORTO_INTERFACES__MSG__DETAIL__TORTO_CTRL_PARAMS__STRUCT_H_
#define TORTO_INTERFACES__MSG__DETAIL__TORTO_CTRL_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TortoCtrlParams in the package torto_interfaces.
typedef struct torto_interfaces__msg__TortoCtrlParams
{
  double vx;
  double vy;
  double vz;
  double vangular;
  double angle_fr;
  double angle_fl;
  double angle_br;
  double angle_bl;
  double step_offset;
  double step_period;
  double gait_offset_fr;
  double gait_offset_fl;
  double gait_offset_br;
  double gait_offset_bl;
  double body_position_x;
  double body_position_y;
  double body_position_z;
  double body_orientation_roll;
  double body_orientation_pitch;
  double body_orientation_yawn;
  double foot_position_fr_x;
  double foot_position_fr_y;
  double foot_position_fr_z;
  double foot_position_fl_x;
  double foot_position_fl_y;
  double foot_position_fl_z;
  double foot_position_br_x;
  double foot_position_br_y;
  double foot_position_br_z;
  double foot_position_bl_x;
  double foot_position_bl_y;
  double foot_position_bl_z;
} torto_interfaces__msg__TortoCtrlParams;

// Struct for a sequence of torto_interfaces__msg__TortoCtrlParams.
typedef struct torto_interfaces__msg__TortoCtrlParams__Sequence
{
  torto_interfaces__msg__TortoCtrlParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} torto_interfaces__msg__TortoCtrlParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TORTO_INTERFACES__MSG__DETAIL__TORTO_CTRL_PARAMS__STRUCT_H_
