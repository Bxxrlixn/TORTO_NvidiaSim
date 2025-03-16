// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from torto_interfaces:msg/TortoJointAngles.idl
// generated code does not contain a copyright notice

#ifndef TORTO_INTERFACES__MSG__DETAIL__TORTO_JOINT_ANGLES__FUNCTIONS_H_
#define TORTO_INTERFACES__MSG__DETAIL__TORTO_JOINT_ANGLES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "torto_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "torto_interfaces/msg/detail/torto_joint_angles__struct.h"

/// Initialize msg/TortoJointAngles message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * torto_interfaces__msg__TortoJointAngles
 * )) before or use
 * torto_interfaces__msg__TortoJointAngles__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_torto_interfaces
bool
torto_interfaces__msg__TortoJointAngles__init(torto_interfaces__msg__TortoJointAngles * msg);

/// Finalize msg/TortoJointAngles message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_torto_interfaces
void
torto_interfaces__msg__TortoJointAngles__fini(torto_interfaces__msg__TortoJointAngles * msg);

/// Create msg/TortoJointAngles message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * torto_interfaces__msg__TortoJointAngles__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_torto_interfaces
torto_interfaces__msg__TortoJointAngles *
torto_interfaces__msg__TortoJointAngles__create();

/// Destroy msg/TortoJointAngles message.
/**
 * It calls
 * torto_interfaces__msg__TortoJointAngles__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_torto_interfaces
void
torto_interfaces__msg__TortoJointAngles__destroy(torto_interfaces__msg__TortoJointAngles * msg);

/// Check for msg/TortoJointAngles message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_torto_interfaces
bool
torto_interfaces__msg__TortoJointAngles__are_equal(const torto_interfaces__msg__TortoJointAngles * lhs, const torto_interfaces__msg__TortoJointAngles * rhs);

/// Copy a msg/TortoJointAngles message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_torto_interfaces
bool
torto_interfaces__msg__TortoJointAngles__copy(
  const torto_interfaces__msg__TortoJointAngles * input,
  torto_interfaces__msg__TortoJointAngles * output);

/// Initialize array of msg/TortoJointAngles messages.
/**
 * It allocates the memory for the number of elements and calls
 * torto_interfaces__msg__TortoJointAngles__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_torto_interfaces
bool
torto_interfaces__msg__TortoJointAngles__Sequence__init(torto_interfaces__msg__TortoJointAngles__Sequence * array, size_t size);

/// Finalize array of msg/TortoJointAngles messages.
/**
 * It calls
 * torto_interfaces__msg__TortoJointAngles__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_torto_interfaces
void
torto_interfaces__msg__TortoJointAngles__Sequence__fini(torto_interfaces__msg__TortoJointAngles__Sequence * array);

/// Create array of msg/TortoJointAngles messages.
/**
 * It allocates the memory for the array and calls
 * torto_interfaces__msg__TortoJointAngles__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_torto_interfaces
torto_interfaces__msg__TortoJointAngles__Sequence *
torto_interfaces__msg__TortoJointAngles__Sequence__create(size_t size);

/// Destroy array of msg/TortoJointAngles messages.
/**
 * It calls
 * torto_interfaces__msg__TortoJointAngles__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_torto_interfaces
void
torto_interfaces__msg__TortoJointAngles__Sequence__destroy(torto_interfaces__msg__TortoJointAngles__Sequence * array);

/// Check for msg/TortoJointAngles message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_torto_interfaces
bool
torto_interfaces__msg__TortoJointAngles__Sequence__are_equal(const torto_interfaces__msg__TortoJointAngles__Sequence * lhs, const torto_interfaces__msg__TortoJointAngles__Sequence * rhs);

/// Copy an array of msg/TortoJointAngles messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_torto_interfaces
bool
torto_interfaces__msg__TortoJointAngles__Sequence__copy(
  const torto_interfaces__msg__TortoJointAngles__Sequence * input,
  torto_interfaces__msg__TortoJointAngles__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TORTO_INTERFACES__MSG__DETAIL__TORTO_JOINT_ANGLES__FUNCTIONS_H_
