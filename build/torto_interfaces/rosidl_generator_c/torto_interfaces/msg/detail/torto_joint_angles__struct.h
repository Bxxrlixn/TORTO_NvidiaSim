// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from torto_interfaces:msg/TortoJointAngles.idl
// generated code does not contain a copyright notice

#ifndef TORTO_INTERFACES__MSG__DETAIL__TORTO_JOINT_ANGLES__STRUCT_H_
#define TORTO_INTERFACES__MSG__DETAIL__TORTO_JOINT_ANGLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TortoJointAngles in the package torto_interfaces.
typedef struct torto_interfaces__msg__TortoJointAngles
{
  double theta_deg_fr_detoid;
  double theta_deg_fr_femur;
  double theta_deg_fr_tibia;
  double theta_deg_fl_detoid;
  double theta_deg_fl_femur;
  double theta_deg_fl_tibia;
  double theta_deg_br_detoid;
  double theta_deg_br_femur;
  double theta_deg_br_tibia;
  double theta_deg_bl_detoid;
  double theta_deg_bl_femur;
  double theta_deg_bl_tibia;
} torto_interfaces__msg__TortoJointAngles;

// Struct for a sequence of torto_interfaces__msg__TortoJointAngles.
typedef struct torto_interfaces__msg__TortoJointAngles__Sequence
{
  torto_interfaces__msg__TortoJointAngles * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} torto_interfaces__msg__TortoJointAngles__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TORTO_INTERFACES__MSG__DETAIL__TORTO_JOINT_ANGLES__STRUCT_H_
