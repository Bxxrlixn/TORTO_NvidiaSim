// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from torto_interfaces:msg/TortoCtrlParams.idl
// generated code does not contain a copyright notice
#include "torto_interfaces/msg/detail/torto_ctrl_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
torto_interfaces__msg__TortoCtrlParams__init(torto_interfaces__msg__TortoCtrlParams * msg)
{
  if (!msg) {
    return false;
  }
  // vx
  // vy
  // vz
  // vangular
  // angle_fr
  // angle_fl
  // angle_br
  // angle_bl
  // step_offset
  // step_period
  // gait_offset_fr
  // gait_offset_fl
  // gait_offset_br
  // gait_offset_bl
  // body_position_x
  // body_position_y
  // body_position_z
  // body_orientation_roll
  // body_orientation_pitch
  // body_orientation_yawn
  // foot_position_fr_x
  // foot_position_fr_y
  // foot_position_fr_z
  // foot_position_fl_x
  // foot_position_fl_y
  // foot_position_fl_z
  // foot_position_br_x
  // foot_position_br_y
  // foot_position_br_z
  // foot_position_bl_x
  // foot_position_bl_y
  // foot_position_bl_z
  return true;
}

void
torto_interfaces__msg__TortoCtrlParams__fini(torto_interfaces__msg__TortoCtrlParams * msg)
{
  if (!msg) {
    return;
  }
  // vx
  // vy
  // vz
  // vangular
  // angle_fr
  // angle_fl
  // angle_br
  // angle_bl
  // step_offset
  // step_period
  // gait_offset_fr
  // gait_offset_fl
  // gait_offset_br
  // gait_offset_bl
  // body_position_x
  // body_position_y
  // body_position_z
  // body_orientation_roll
  // body_orientation_pitch
  // body_orientation_yawn
  // foot_position_fr_x
  // foot_position_fr_y
  // foot_position_fr_z
  // foot_position_fl_x
  // foot_position_fl_y
  // foot_position_fl_z
  // foot_position_br_x
  // foot_position_br_y
  // foot_position_br_z
  // foot_position_bl_x
  // foot_position_bl_y
  // foot_position_bl_z
}

bool
torto_interfaces__msg__TortoCtrlParams__are_equal(const torto_interfaces__msg__TortoCtrlParams * lhs, const torto_interfaces__msg__TortoCtrlParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vx
  if (lhs->vx != rhs->vx) {
    return false;
  }
  // vy
  if (lhs->vy != rhs->vy) {
    return false;
  }
  // vz
  if (lhs->vz != rhs->vz) {
    return false;
  }
  // vangular
  if (lhs->vangular != rhs->vangular) {
    return false;
  }
  // angle_fr
  if (lhs->angle_fr != rhs->angle_fr) {
    return false;
  }
  // angle_fl
  if (lhs->angle_fl != rhs->angle_fl) {
    return false;
  }
  // angle_br
  if (lhs->angle_br != rhs->angle_br) {
    return false;
  }
  // angle_bl
  if (lhs->angle_bl != rhs->angle_bl) {
    return false;
  }
  // step_offset
  if (lhs->step_offset != rhs->step_offset) {
    return false;
  }
  // step_period
  if (lhs->step_period != rhs->step_period) {
    return false;
  }
  // gait_offset_fr
  if (lhs->gait_offset_fr != rhs->gait_offset_fr) {
    return false;
  }
  // gait_offset_fl
  if (lhs->gait_offset_fl != rhs->gait_offset_fl) {
    return false;
  }
  // gait_offset_br
  if (lhs->gait_offset_br != rhs->gait_offset_br) {
    return false;
  }
  // gait_offset_bl
  if (lhs->gait_offset_bl != rhs->gait_offset_bl) {
    return false;
  }
  // body_position_x
  if (lhs->body_position_x != rhs->body_position_x) {
    return false;
  }
  // body_position_y
  if (lhs->body_position_y != rhs->body_position_y) {
    return false;
  }
  // body_position_z
  if (lhs->body_position_z != rhs->body_position_z) {
    return false;
  }
  // body_orientation_roll
  if (lhs->body_orientation_roll != rhs->body_orientation_roll) {
    return false;
  }
  // body_orientation_pitch
  if (lhs->body_orientation_pitch != rhs->body_orientation_pitch) {
    return false;
  }
  // body_orientation_yawn
  if (lhs->body_orientation_yawn != rhs->body_orientation_yawn) {
    return false;
  }
  // foot_position_fr_x
  if (lhs->foot_position_fr_x != rhs->foot_position_fr_x) {
    return false;
  }
  // foot_position_fr_y
  if (lhs->foot_position_fr_y != rhs->foot_position_fr_y) {
    return false;
  }
  // foot_position_fr_z
  if (lhs->foot_position_fr_z != rhs->foot_position_fr_z) {
    return false;
  }
  // foot_position_fl_x
  if (lhs->foot_position_fl_x != rhs->foot_position_fl_x) {
    return false;
  }
  // foot_position_fl_y
  if (lhs->foot_position_fl_y != rhs->foot_position_fl_y) {
    return false;
  }
  // foot_position_fl_z
  if (lhs->foot_position_fl_z != rhs->foot_position_fl_z) {
    return false;
  }
  // foot_position_br_x
  if (lhs->foot_position_br_x != rhs->foot_position_br_x) {
    return false;
  }
  // foot_position_br_y
  if (lhs->foot_position_br_y != rhs->foot_position_br_y) {
    return false;
  }
  // foot_position_br_z
  if (lhs->foot_position_br_z != rhs->foot_position_br_z) {
    return false;
  }
  // foot_position_bl_x
  if (lhs->foot_position_bl_x != rhs->foot_position_bl_x) {
    return false;
  }
  // foot_position_bl_y
  if (lhs->foot_position_bl_y != rhs->foot_position_bl_y) {
    return false;
  }
  // foot_position_bl_z
  if (lhs->foot_position_bl_z != rhs->foot_position_bl_z) {
    return false;
  }
  return true;
}

bool
torto_interfaces__msg__TortoCtrlParams__copy(
  const torto_interfaces__msg__TortoCtrlParams * input,
  torto_interfaces__msg__TortoCtrlParams * output)
{
  if (!input || !output) {
    return false;
  }
  // vx
  output->vx = input->vx;
  // vy
  output->vy = input->vy;
  // vz
  output->vz = input->vz;
  // vangular
  output->vangular = input->vangular;
  // angle_fr
  output->angle_fr = input->angle_fr;
  // angle_fl
  output->angle_fl = input->angle_fl;
  // angle_br
  output->angle_br = input->angle_br;
  // angle_bl
  output->angle_bl = input->angle_bl;
  // step_offset
  output->step_offset = input->step_offset;
  // step_period
  output->step_period = input->step_period;
  // gait_offset_fr
  output->gait_offset_fr = input->gait_offset_fr;
  // gait_offset_fl
  output->gait_offset_fl = input->gait_offset_fl;
  // gait_offset_br
  output->gait_offset_br = input->gait_offset_br;
  // gait_offset_bl
  output->gait_offset_bl = input->gait_offset_bl;
  // body_position_x
  output->body_position_x = input->body_position_x;
  // body_position_y
  output->body_position_y = input->body_position_y;
  // body_position_z
  output->body_position_z = input->body_position_z;
  // body_orientation_roll
  output->body_orientation_roll = input->body_orientation_roll;
  // body_orientation_pitch
  output->body_orientation_pitch = input->body_orientation_pitch;
  // body_orientation_yawn
  output->body_orientation_yawn = input->body_orientation_yawn;
  // foot_position_fr_x
  output->foot_position_fr_x = input->foot_position_fr_x;
  // foot_position_fr_y
  output->foot_position_fr_y = input->foot_position_fr_y;
  // foot_position_fr_z
  output->foot_position_fr_z = input->foot_position_fr_z;
  // foot_position_fl_x
  output->foot_position_fl_x = input->foot_position_fl_x;
  // foot_position_fl_y
  output->foot_position_fl_y = input->foot_position_fl_y;
  // foot_position_fl_z
  output->foot_position_fl_z = input->foot_position_fl_z;
  // foot_position_br_x
  output->foot_position_br_x = input->foot_position_br_x;
  // foot_position_br_y
  output->foot_position_br_y = input->foot_position_br_y;
  // foot_position_br_z
  output->foot_position_br_z = input->foot_position_br_z;
  // foot_position_bl_x
  output->foot_position_bl_x = input->foot_position_bl_x;
  // foot_position_bl_y
  output->foot_position_bl_y = input->foot_position_bl_y;
  // foot_position_bl_z
  output->foot_position_bl_z = input->foot_position_bl_z;
  return true;
}

torto_interfaces__msg__TortoCtrlParams *
torto_interfaces__msg__TortoCtrlParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  torto_interfaces__msg__TortoCtrlParams * msg = (torto_interfaces__msg__TortoCtrlParams *)allocator.allocate(sizeof(torto_interfaces__msg__TortoCtrlParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(torto_interfaces__msg__TortoCtrlParams));
  bool success = torto_interfaces__msg__TortoCtrlParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
torto_interfaces__msg__TortoCtrlParams__destroy(torto_interfaces__msg__TortoCtrlParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    torto_interfaces__msg__TortoCtrlParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
torto_interfaces__msg__TortoCtrlParams__Sequence__init(torto_interfaces__msg__TortoCtrlParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  torto_interfaces__msg__TortoCtrlParams * data = NULL;

  if (size) {
    data = (torto_interfaces__msg__TortoCtrlParams *)allocator.zero_allocate(size, sizeof(torto_interfaces__msg__TortoCtrlParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = torto_interfaces__msg__TortoCtrlParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        torto_interfaces__msg__TortoCtrlParams__fini(&data[i - 1]);
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
torto_interfaces__msg__TortoCtrlParams__Sequence__fini(torto_interfaces__msg__TortoCtrlParams__Sequence * array)
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
      torto_interfaces__msg__TortoCtrlParams__fini(&array->data[i]);
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

torto_interfaces__msg__TortoCtrlParams__Sequence *
torto_interfaces__msg__TortoCtrlParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  torto_interfaces__msg__TortoCtrlParams__Sequence * array = (torto_interfaces__msg__TortoCtrlParams__Sequence *)allocator.allocate(sizeof(torto_interfaces__msg__TortoCtrlParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = torto_interfaces__msg__TortoCtrlParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
torto_interfaces__msg__TortoCtrlParams__Sequence__destroy(torto_interfaces__msg__TortoCtrlParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    torto_interfaces__msg__TortoCtrlParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
torto_interfaces__msg__TortoCtrlParams__Sequence__are_equal(const torto_interfaces__msg__TortoCtrlParams__Sequence * lhs, const torto_interfaces__msg__TortoCtrlParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!torto_interfaces__msg__TortoCtrlParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
torto_interfaces__msg__TortoCtrlParams__Sequence__copy(
  const torto_interfaces__msg__TortoCtrlParams__Sequence * input,
  torto_interfaces__msg__TortoCtrlParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(torto_interfaces__msg__TortoCtrlParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    torto_interfaces__msg__TortoCtrlParams * data =
      (torto_interfaces__msg__TortoCtrlParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!torto_interfaces__msg__TortoCtrlParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          torto_interfaces__msg__TortoCtrlParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!torto_interfaces__msg__TortoCtrlParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
