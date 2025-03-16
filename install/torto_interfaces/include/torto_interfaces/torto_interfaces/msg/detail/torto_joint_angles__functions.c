// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from torto_interfaces:msg/TortoJointAngles.idl
// generated code does not contain a copyright notice
#include "torto_interfaces/msg/detail/torto_joint_angles__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
torto_interfaces__msg__TortoJointAngles__init(torto_interfaces__msg__TortoJointAngles * msg)
{
  if (!msg) {
    return false;
  }
  // theta_deg_fr_detoid
  // theta_deg_fr_femur
  // theta_deg_fr_tibia
  // theta_deg_fl_detoid
  // theta_deg_fl_femur
  // theta_deg_fl_tibia
  // theta_deg_br_detoid
  // theta_deg_br_femur
  // theta_deg_br_tibia
  // theta_deg_bl_detoid
  // theta_deg_bl_femur
  // theta_deg_bl_tibia
  return true;
}

void
torto_interfaces__msg__TortoJointAngles__fini(torto_interfaces__msg__TortoJointAngles * msg)
{
  if (!msg) {
    return;
  }
  // theta_deg_fr_detoid
  // theta_deg_fr_femur
  // theta_deg_fr_tibia
  // theta_deg_fl_detoid
  // theta_deg_fl_femur
  // theta_deg_fl_tibia
  // theta_deg_br_detoid
  // theta_deg_br_femur
  // theta_deg_br_tibia
  // theta_deg_bl_detoid
  // theta_deg_bl_femur
  // theta_deg_bl_tibia
}

bool
torto_interfaces__msg__TortoJointAngles__are_equal(const torto_interfaces__msg__TortoJointAngles * lhs, const torto_interfaces__msg__TortoJointAngles * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // theta_deg_fr_detoid
  if (lhs->theta_deg_fr_detoid != rhs->theta_deg_fr_detoid) {
    return false;
  }
  // theta_deg_fr_femur
  if (lhs->theta_deg_fr_femur != rhs->theta_deg_fr_femur) {
    return false;
  }
  // theta_deg_fr_tibia
  if (lhs->theta_deg_fr_tibia != rhs->theta_deg_fr_tibia) {
    return false;
  }
  // theta_deg_fl_detoid
  if (lhs->theta_deg_fl_detoid != rhs->theta_deg_fl_detoid) {
    return false;
  }
  // theta_deg_fl_femur
  if (lhs->theta_deg_fl_femur != rhs->theta_deg_fl_femur) {
    return false;
  }
  // theta_deg_fl_tibia
  if (lhs->theta_deg_fl_tibia != rhs->theta_deg_fl_tibia) {
    return false;
  }
  // theta_deg_br_detoid
  if (lhs->theta_deg_br_detoid != rhs->theta_deg_br_detoid) {
    return false;
  }
  // theta_deg_br_femur
  if (lhs->theta_deg_br_femur != rhs->theta_deg_br_femur) {
    return false;
  }
  // theta_deg_br_tibia
  if (lhs->theta_deg_br_tibia != rhs->theta_deg_br_tibia) {
    return false;
  }
  // theta_deg_bl_detoid
  if (lhs->theta_deg_bl_detoid != rhs->theta_deg_bl_detoid) {
    return false;
  }
  // theta_deg_bl_femur
  if (lhs->theta_deg_bl_femur != rhs->theta_deg_bl_femur) {
    return false;
  }
  // theta_deg_bl_tibia
  if (lhs->theta_deg_bl_tibia != rhs->theta_deg_bl_tibia) {
    return false;
  }
  return true;
}

bool
torto_interfaces__msg__TortoJointAngles__copy(
  const torto_interfaces__msg__TortoJointAngles * input,
  torto_interfaces__msg__TortoJointAngles * output)
{
  if (!input || !output) {
    return false;
  }
  // theta_deg_fr_detoid
  output->theta_deg_fr_detoid = input->theta_deg_fr_detoid;
  // theta_deg_fr_femur
  output->theta_deg_fr_femur = input->theta_deg_fr_femur;
  // theta_deg_fr_tibia
  output->theta_deg_fr_tibia = input->theta_deg_fr_tibia;
  // theta_deg_fl_detoid
  output->theta_deg_fl_detoid = input->theta_deg_fl_detoid;
  // theta_deg_fl_femur
  output->theta_deg_fl_femur = input->theta_deg_fl_femur;
  // theta_deg_fl_tibia
  output->theta_deg_fl_tibia = input->theta_deg_fl_tibia;
  // theta_deg_br_detoid
  output->theta_deg_br_detoid = input->theta_deg_br_detoid;
  // theta_deg_br_femur
  output->theta_deg_br_femur = input->theta_deg_br_femur;
  // theta_deg_br_tibia
  output->theta_deg_br_tibia = input->theta_deg_br_tibia;
  // theta_deg_bl_detoid
  output->theta_deg_bl_detoid = input->theta_deg_bl_detoid;
  // theta_deg_bl_femur
  output->theta_deg_bl_femur = input->theta_deg_bl_femur;
  // theta_deg_bl_tibia
  output->theta_deg_bl_tibia = input->theta_deg_bl_tibia;
  return true;
}

torto_interfaces__msg__TortoJointAngles *
torto_interfaces__msg__TortoJointAngles__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  torto_interfaces__msg__TortoJointAngles * msg = (torto_interfaces__msg__TortoJointAngles *)allocator.allocate(sizeof(torto_interfaces__msg__TortoJointAngles), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(torto_interfaces__msg__TortoJointAngles));
  bool success = torto_interfaces__msg__TortoJointAngles__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
torto_interfaces__msg__TortoJointAngles__destroy(torto_interfaces__msg__TortoJointAngles * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    torto_interfaces__msg__TortoJointAngles__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
torto_interfaces__msg__TortoJointAngles__Sequence__init(torto_interfaces__msg__TortoJointAngles__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  torto_interfaces__msg__TortoJointAngles * data = NULL;

  if (size) {
    data = (torto_interfaces__msg__TortoJointAngles *)allocator.zero_allocate(size, sizeof(torto_interfaces__msg__TortoJointAngles), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = torto_interfaces__msg__TortoJointAngles__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        torto_interfaces__msg__TortoJointAngles__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
torto_interfaces__msg__TortoJointAngles__Sequence__fini(torto_interfaces__msg__TortoJointAngles__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      torto_interfaces__msg__TortoJointAngles__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

torto_interfaces__msg__TortoJointAngles__Sequence *
torto_interfaces__msg__TortoJointAngles__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  torto_interfaces__msg__TortoJointAngles__Sequence * array = (torto_interfaces__msg__TortoJointAngles__Sequence *)allocator.allocate(sizeof(torto_interfaces__msg__TortoJointAngles__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = torto_interfaces__msg__TortoJointAngles__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
torto_interfaces__msg__TortoJointAngles__Sequence__destroy(torto_interfaces__msg__TortoJointAngles__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    torto_interfaces__msg__TortoJointAngles__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
torto_interfaces__msg__TortoJointAngles__Sequence__are_equal(const torto_interfaces__msg__TortoJointAngles__Sequence * lhs, const torto_interfaces__msg__TortoJointAngles__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!torto_interfaces__msg__TortoJointAngles__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
torto_interfaces__msg__TortoJointAngles__Sequence__copy(
  const torto_interfaces__msg__TortoJointAngles__Sequence * input,
  torto_interfaces__msg__TortoJointAngles__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(torto_interfaces__msg__TortoJointAngles);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    torto_interfaces__msg__TortoJointAngles * data =
      (torto_interfaces__msg__TortoJointAngles *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!torto_interfaces__msg__TortoJointAngles__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          torto_interfaces__msg__TortoJointAngles__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!torto_interfaces__msg__TortoJointAngles__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
