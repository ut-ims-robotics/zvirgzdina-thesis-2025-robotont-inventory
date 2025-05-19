// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robotont_msgs:msg/LaserScanSplit.idl
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
#include "robotont_msgs/msg/detail/laser_scan_split__struct.h"
#include "robotont_msgs/msg/detail/laser_scan_split__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool robotont_msgs__msg__laser_scan_split__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("robotont_msgs.msg._laser_scan_split.LaserScanSplit", full_classname_dest, 50) == 0);
  }
  robotont_msgs__msg__LaserScanSplit * ros_message = _ros_message;
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // left_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_min = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // center_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->center_min = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_min = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_mean
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_mean");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_mean = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // center_mean
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_mean");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->center_mean = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_mean
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_mean");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_mean = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robotont_msgs__msg__laser_scan_split__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LaserScanSplit */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robotont_msgs.msg._laser_scan_split");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LaserScanSplit");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robotont_msgs__msg__LaserScanSplit * ros_message = (robotont_msgs__msg__LaserScanSplit *)raw_ros_message;
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->center_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_mean
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_mean);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_mean", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center_mean
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->center_mean);
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_mean", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_mean
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_mean);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_mean", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
