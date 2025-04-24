// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from torto_interfaces:msg/TortoSimReset.idl
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
#include "torto_interfaces/msg/detail/torto_sim_reset__struct.h"
#include "torto_interfaces/msg/detail/torto_sim_reset__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool torto_interfaces__msg__torto_sim_reset__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("torto_interfaces.msg._torto_sim_reset.TortoSimReset", full_classname_dest, 51) == 0);
  }
  torto_interfaces__msg__TortoSimReset * ros_message = _ros_message;
  {  // hard_reset
    PyObject * field = PyObject_GetAttrString(_pymsg, "hard_reset");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hard_reset = (Py_True == field);
    Py_DECREF(field);
  }
  {  // zero_robot
    PyObject * field = PyObject_GetAttrString(_pymsg, "zero_robot");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->zero_robot = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "reason");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->reason, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * torto_interfaces__msg__torto_sim_reset__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TortoSimReset */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("torto_interfaces.msg._torto_sim_reset");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TortoSimReset");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  torto_interfaces__msg__TortoSimReset * ros_message = (torto_interfaces__msg__TortoSimReset *)raw_ros_message;
  {  // hard_reset
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hard_reset ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hard_reset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // zero_robot
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->zero_robot ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "zero_robot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reason
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->reason.data,
      strlen(ros_message->reason.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "reason", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
