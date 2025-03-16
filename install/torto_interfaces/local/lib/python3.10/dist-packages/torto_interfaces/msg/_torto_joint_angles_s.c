// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from torto_interfaces:msg/TortoJointAngles.idl
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
#include "torto_interfaces/msg/detail/torto_joint_angles__struct.h"
#include "torto_interfaces/msg/detail/torto_joint_angles__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool torto_interfaces__msg__torto_joint_angles__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("torto_interfaces.msg._torto_joint_angles.TortoJointAngles", full_classname_dest, 57) == 0);
  }
  torto_interfaces__msg__TortoJointAngles * ros_message = _ros_message;
  {  // theta_deg_fr_detoid
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_deg_fr_detoid");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_deg_fr_detoid = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta_deg_fr_femur
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_deg_fr_femur");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_deg_fr_femur = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta_deg_fr_tibia
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_deg_fr_tibia");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_deg_fr_tibia = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta_deg_fl_detoid
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_deg_fl_detoid");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_deg_fl_detoid = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta_deg_fl_femur
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_deg_fl_femur");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_deg_fl_femur = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta_deg_fl_tibia
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_deg_fl_tibia");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_deg_fl_tibia = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta_deg_br_detoid
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_deg_br_detoid");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_deg_br_detoid = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta_deg_br_femur
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_deg_br_femur");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_deg_br_femur = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta_deg_br_tibia
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_deg_br_tibia");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_deg_br_tibia = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta_deg_bl_detoid
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_deg_bl_detoid");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_deg_bl_detoid = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta_deg_bl_femur
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_deg_bl_femur");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_deg_bl_femur = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta_deg_bl_tibia
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_deg_bl_tibia");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_deg_bl_tibia = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * torto_interfaces__msg__torto_joint_angles__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TortoJointAngles */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("torto_interfaces.msg._torto_joint_angles");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TortoJointAngles");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  torto_interfaces__msg__TortoJointAngles * ros_message = (torto_interfaces__msg__TortoJointAngles *)raw_ros_message;
  {  // theta_deg_fr_detoid
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_deg_fr_detoid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_deg_fr_detoid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta_deg_fr_femur
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_deg_fr_femur);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_deg_fr_femur", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta_deg_fr_tibia
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_deg_fr_tibia);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_deg_fr_tibia", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta_deg_fl_detoid
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_deg_fl_detoid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_deg_fl_detoid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta_deg_fl_femur
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_deg_fl_femur);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_deg_fl_femur", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta_deg_fl_tibia
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_deg_fl_tibia);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_deg_fl_tibia", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta_deg_br_detoid
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_deg_br_detoid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_deg_br_detoid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta_deg_br_femur
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_deg_br_femur);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_deg_br_femur", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta_deg_br_tibia
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_deg_br_tibia);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_deg_br_tibia", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta_deg_bl_detoid
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_deg_bl_detoid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_deg_bl_detoid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta_deg_bl_femur
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_deg_bl_femur);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_deg_bl_femur", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta_deg_bl_tibia
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_deg_bl_tibia);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_deg_bl_tibia", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
