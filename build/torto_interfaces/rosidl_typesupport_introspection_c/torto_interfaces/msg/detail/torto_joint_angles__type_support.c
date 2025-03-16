// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from torto_interfaces:msg/TortoJointAngles.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "torto_interfaces/msg/detail/torto_joint_angles__rosidl_typesupport_introspection_c.h"
#include "torto_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "torto_interfaces/msg/detail/torto_joint_angles__functions.h"
#include "torto_interfaces/msg/detail/torto_joint_angles__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void torto_interfaces__msg__TortoJointAngles__rosidl_typesupport_introspection_c__TortoJointAngles_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  torto_interfaces__msg__TortoJointAngles__init(message_memory);
}

void torto_interfaces__msg__TortoJointAngles__rosidl_typesupport_introspection_c__TortoJointAngles_fini_function(void * message_memory)
{
  torto_interfaces__msg__TortoJointAngles__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember torto_interfaces__msg__TortoJointAngles__rosidl_typesupport_introspection_c__TortoJointAngles_message_member_array[12] = {
  {
    "theta_deg_fr_detoid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torto_interfaces__msg__TortoJointAngles, theta_deg_fr_detoid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta_deg_fr_femur",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torto_interfaces__msg__TortoJointAngles, theta_deg_fr_femur),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta_deg_fr_tibia",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torto_interfaces__msg__TortoJointAngles, theta_deg_fr_tibia),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta_deg_fl_detoid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torto_interfaces__msg__TortoJointAngles, theta_deg_fl_detoid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta_deg_fl_femur",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torto_interfaces__msg__TortoJointAngles, theta_deg_fl_femur),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta_deg_fl_tibia",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torto_interfaces__msg__TortoJointAngles, theta_deg_fl_tibia),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta_deg_br_detoid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torto_interfaces__msg__TortoJointAngles, theta_deg_br_detoid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta_deg_br_femur",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torto_interfaces__msg__TortoJointAngles, theta_deg_br_femur),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta_deg_br_tibia",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torto_interfaces__msg__TortoJointAngles, theta_deg_br_tibia),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta_deg_bl_detoid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torto_interfaces__msg__TortoJointAngles, theta_deg_bl_detoid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta_deg_bl_femur",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torto_interfaces__msg__TortoJointAngles, theta_deg_bl_femur),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta_deg_bl_tibia",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torto_interfaces__msg__TortoJointAngles, theta_deg_bl_tibia),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers torto_interfaces__msg__TortoJointAngles__rosidl_typesupport_introspection_c__TortoJointAngles_message_members = {
  "torto_interfaces__msg",  // message namespace
  "TortoJointAngles",  // message name
  12,  // number of fields
  sizeof(torto_interfaces__msg__TortoJointAngles),
  torto_interfaces__msg__TortoJointAngles__rosidl_typesupport_introspection_c__TortoJointAngles_message_member_array,  // message members
  torto_interfaces__msg__TortoJointAngles__rosidl_typesupport_introspection_c__TortoJointAngles_init_function,  // function to initialize message memory (memory has to be allocated)
  torto_interfaces__msg__TortoJointAngles__rosidl_typesupport_introspection_c__TortoJointAngles_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t torto_interfaces__msg__TortoJointAngles__rosidl_typesupport_introspection_c__TortoJointAngles_message_type_support_handle = {
  0,
  &torto_interfaces__msg__TortoJointAngles__rosidl_typesupport_introspection_c__TortoJointAngles_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_torto_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, torto_interfaces, msg, TortoJointAngles)() {
  if (!torto_interfaces__msg__TortoJointAngles__rosidl_typesupport_introspection_c__TortoJointAngles_message_type_support_handle.typesupport_identifier) {
    torto_interfaces__msg__TortoJointAngles__rosidl_typesupport_introspection_c__TortoJointAngles_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &torto_interfaces__msg__TortoJointAngles__rosidl_typesupport_introspection_c__TortoJointAngles_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
