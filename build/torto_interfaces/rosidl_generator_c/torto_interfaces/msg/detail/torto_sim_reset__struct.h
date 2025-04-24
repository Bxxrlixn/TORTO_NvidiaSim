// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from torto_interfaces:msg/TortoSimReset.idl
// generated code does not contain a copyright notice

#ifndef TORTO_INTERFACES__MSG__DETAIL__TORTO_SIM_RESET__STRUCT_H_
#define TORTO_INTERFACES__MSG__DETAIL__TORTO_SIM_RESET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'reason'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TortoSimReset in the package torto_interfaces.
typedef struct torto_interfaces__msg__TortoSimReset
{
  /// True if full omni.kit reset needed
  bool hard_reset;
  /// True if robot state should be zeroed
  bool zero_robot;
  /// Optional message like "timeout", "fall", etc.
  rosidl_runtime_c__String reason;
} torto_interfaces__msg__TortoSimReset;

// Struct for a sequence of torto_interfaces__msg__TortoSimReset.
typedef struct torto_interfaces__msg__TortoSimReset__Sequence
{
  torto_interfaces__msg__TortoSimReset * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} torto_interfaces__msg__TortoSimReset__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TORTO_INTERFACES__MSG__DETAIL__TORTO_SIM_RESET__STRUCT_H_
