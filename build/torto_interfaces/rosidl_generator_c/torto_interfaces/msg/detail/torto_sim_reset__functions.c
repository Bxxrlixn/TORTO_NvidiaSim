// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from torto_interfaces:msg/TortoSimReset.idl
// generated code does not contain a copyright notice
#include "torto_interfaces/msg/detail/torto_sim_reset__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"

bool
torto_interfaces__msg__TortoSimReset__init(torto_interfaces__msg__TortoSimReset * msg)
{
  if (!msg) {
    return false;
  }
  // hard_reset
  // zero_robot
  // reason
  if (!rosidl_runtime_c__String__init(&msg->reason)) {
    torto_interfaces__msg__TortoSimReset__fini(msg);
    return false;
  }
  return true;
}

void
torto_interfaces__msg__TortoSimReset__fini(torto_interfaces__msg__TortoSimReset * msg)
{
  if (!msg) {
    return;
  }
  // hard_reset
  // zero_robot
  // reason
  rosidl_runtime_c__String__fini(&msg->reason);
}

bool
torto_interfaces__msg__TortoSimReset__are_equal(const torto_interfaces__msg__TortoSimReset * lhs, const torto_interfaces__msg__TortoSimReset * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // hard_reset
  if (lhs->hard_reset != rhs->hard_reset) {
    return false;
  }
  // zero_robot
  if (lhs->zero_robot != rhs->zero_robot) {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reason), &(rhs->reason)))
  {
    return false;
  }
  return true;
}

bool
torto_interfaces__msg__TortoSimReset__copy(
  const torto_interfaces__msg__TortoSimReset * input,
  torto_interfaces__msg__TortoSimReset * output)
{
  if (!input || !output) {
    return false;
  }
  // hard_reset
  output->hard_reset = input->hard_reset;
  // zero_robot
  output->zero_robot = input->zero_robot;
  // reason
  if (!rosidl_runtime_c__String__copy(
      &(input->reason), &(output->reason)))
  {
    return false;
  }
  return true;
}

torto_interfaces__msg__TortoSimReset *
torto_interfaces__msg__TortoSimReset__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  torto_interfaces__msg__TortoSimReset * msg = (torto_interfaces__msg__TortoSimReset *)allocator.allocate(sizeof(torto_interfaces__msg__TortoSimReset), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(torto_interfaces__msg__TortoSimReset));
  bool success = torto_interfaces__msg__TortoSimReset__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
torto_interfaces__msg__TortoSimReset__destroy(torto_interfaces__msg__TortoSimReset * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    torto_interfaces__msg__TortoSimReset__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
torto_interfaces__msg__TortoSimReset__Sequence__init(torto_interfaces__msg__TortoSimReset__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  torto_interfaces__msg__TortoSimReset * data = NULL;

  if (size) {
    data = (torto_interfaces__msg__TortoSimReset *)allocator.zero_allocate(size, sizeof(torto_interfaces__msg__TortoSimReset), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = torto_interfaces__msg__TortoSimReset__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        torto_interfaces__msg__TortoSimReset__fini(&data[i - 1]);
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
torto_interfaces__msg__TortoSimReset__Sequence__fini(torto_interfaces__msg__TortoSimReset__Sequence * array)
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
      torto_interfaces__msg__TortoSimReset__fini(&array->data[i]);
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

torto_interfaces__msg__TortoSimReset__Sequence *
torto_interfaces__msg__TortoSimReset__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  torto_interfaces__msg__TortoSimReset__Sequence * array = (torto_interfaces__msg__TortoSimReset__Sequence *)allocator.allocate(sizeof(torto_interfaces__msg__TortoSimReset__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = torto_interfaces__msg__TortoSimReset__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
torto_interfaces__msg__TortoSimReset__Sequence__destroy(torto_interfaces__msg__TortoSimReset__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    torto_interfaces__msg__TortoSimReset__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
torto_interfaces__msg__TortoSimReset__Sequence__are_equal(const torto_interfaces__msg__TortoSimReset__Sequence * lhs, const torto_interfaces__msg__TortoSimReset__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!torto_interfaces__msg__TortoSimReset__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
torto_interfaces__msg__TortoSimReset__Sequence__copy(
  const torto_interfaces__msg__TortoSimReset__Sequence * input,
  torto_interfaces__msg__TortoSimReset__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(torto_interfaces__msg__TortoSimReset);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    torto_interfaces__msg__TortoSimReset * data =
      (torto_interfaces__msg__TortoSimReset *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!torto_interfaces__msg__TortoSimReset__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          torto_interfaces__msg__TortoSimReset__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!torto_interfaces__msg__TortoSimReset__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
