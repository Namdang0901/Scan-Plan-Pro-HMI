// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from gui_msgs:msg/SettingParams.idl
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
#include "gui_msgs/msg/detail/setting_params__struct.h"
#include "gui_msgs/msg/detail/setting_params__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool gui_msgs__msg__setting_params__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("gui_msgs.msg._setting_params.SettingParams", full_classname_dest, 42) == 0);
  }
  gui_msgs__msg__SettingParams * ros_message = _ros_message;
  {  // linear
    PyObject * field = PyObject_GetAttrString(_pymsg, "linear");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->linear = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rotation
    PyObject * field = PyObject_GetAttrString(_pymsg, "rotation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rotation = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // grinding_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "grinding_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->grinding_speed = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // grinding_force
    PyObject * field = PyObject_GetAttrString(_pymsg, "grinding_force");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->grinding_force = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // spindle_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "spindle_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->spindle_speed = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * gui_msgs__msg__setting_params__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SettingParams */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("gui_msgs.msg._setting_params");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SettingParams");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  gui_msgs__msg__SettingParams * ros_message = (gui_msgs__msg__SettingParams *)raw_ros_message;
  {  // linear
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->linear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "linear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rotation
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rotation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rotation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // grinding_speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->grinding_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "grinding_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // grinding_force
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->grinding_force);
    {
      int rc = PyObject_SetAttrString(_pymessage, "grinding_force", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // spindle_speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->spindle_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "spindle_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
