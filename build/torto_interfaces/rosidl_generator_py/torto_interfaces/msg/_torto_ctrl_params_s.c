// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from torto_interfaces:msg/TortoCtrlParams.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "torto_interfaces/msg/detail/torto_ctrl_params__struct.h"
#include "torto_interfaces/msg/detail/torto_ctrl_params__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool torto_interfaces__msg__torto_ctrl_params__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("torto_interfaces.msg._torto_ctrl_params.TortoCtrlParams", full_classname_dest, 55) == 0);
  }
  torto_interfaces__msg__TortoCtrlParams * ros_message = _ros_message;
  {  // vx
    PyObject * field = PyObject_GetAttrString(_pymsg, "vx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vy
    PyObject * field = PyObject_GetAttrString(_pymsg, "vy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vz
    PyObject * field = PyObject_GetAttrString(_pymsg, "vz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vz = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vangular
    PyObject * field = PyObject_GetAttrString(_pymsg, "vangular");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vangular = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_fr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_fr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_fl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_fl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_br
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_br");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_br = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_bl
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_bl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_bl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // step_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "step_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->step_offset = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // step_period
    PyObject * field = PyObject_GetAttrString(_pymsg, "step_period");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->step_period = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gait_offset_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "gait_offset_fr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gait_offset_fr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gait_offset_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "gait_offset_fl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gait_offset_fl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gait_offset_br
    PyObject * field = PyObject_GetAttrString(_pymsg, "gait_offset_br");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gait_offset_br = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gait_offset_bl
    PyObject * field = PyObject_GetAttrString(_pymsg, "gait_offset_bl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gait_offset_bl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // body_position_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "body_position_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->body_position_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // body_position_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "body_position_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->body_position_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // body_position_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "body_position_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->body_position_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // body_orientation_roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "body_orientation_roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->body_orientation_roll = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // body_orientation_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "body_orientation_pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->body_orientation_pitch = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // body_orientation_yawn
    PyObject * field = PyObject_GetAttrString(_pymsg, "body_orientation_yawn");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->body_orientation_yawn = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // foot_position_fr_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot_position_fr_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->foot_position_fr_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // foot_position_fr_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot_position_fr_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->foot_position_fr_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // foot_position_fr_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot_position_fr_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->foot_position_fr_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // foot_position_fl_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot_position_fl_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->foot_position_fl_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // foot_position_fl_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot_position_fl_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->foot_position_fl_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // foot_position_fl_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot_position_fl_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->foot_position_fl_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // foot_position_br_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot_position_br_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->foot_position_br_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // foot_position_br_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot_position_br_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->foot_position_br_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // foot_position_br_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot_position_br_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->foot_position_br_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // foot_position_bl_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot_position_bl_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->foot_position_bl_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // foot_position_bl_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot_position_bl_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->foot_position_bl_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // foot_position_bl_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot_position_bl_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->foot_position_bl_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * torto_interfaces__msg__torto_ctrl_params__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TortoCtrlParams */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("torto_interfaces.msg._torto_ctrl_params");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TortoCtrlParams");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  torto_interfaces__msg__TortoCtrlParams * ros_message = (torto_interfaces__msg__TortoCtrlParams *)raw_ros_message;
  {  // vx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vangular
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vangular);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vangular", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_fr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_fl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_br
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_br);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_br", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_bl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_bl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_bl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // step_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->step_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "step_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // step_period
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->step_period);
    {
      int rc = PyObject_SetAttrString(_pymessage, "step_period", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gait_offset_fr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gait_offset_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gait_offset_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gait_offset_fl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gait_offset_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gait_offset_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gait_offset_br
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gait_offset_br);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gait_offset_br", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gait_offset_bl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gait_offset_bl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gait_offset_bl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // body_position_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->body_position_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "body_position_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // body_position_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->body_position_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "body_position_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // body_position_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->body_position_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "body_position_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // body_orientation_roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->body_orientation_roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "body_orientation_roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // body_orientation_pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->body_orientation_pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "body_orientation_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // body_orientation_yawn
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->body_orientation_yawn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "body_orientation_yawn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot_position_fr_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->foot_position_fr_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot_position_fr_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot_position_fr_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->foot_position_fr_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot_position_fr_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot_position_fr_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->foot_position_fr_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot_position_fr_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot_position_fl_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->foot_position_fl_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot_position_fl_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot_position_fl_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->foot_position_fl_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot_position_fl_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot_position_fl_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->foot_position_fl_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot_position_fl_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot_position_br_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->foot_position_br_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot_position_br_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot_position_br_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->foot_position_br_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot_position_br_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot_position_br_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->foot_position_br_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot_position_br_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot_position_bl_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->foot_position_bl_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot_position_bl_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot_position_bl_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->foot_position_bl_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot_position_bl_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot_position_bl_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->foot_position_bl_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot_position_bl_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
