// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from gui_msgs:msg/SettingTool.idl
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
#include "gui_msgs/msg/detail/setting_tool__struct.h"
#include "gui_msgs/msg/detail/setting_tool__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool gui_msgs__msg__setting_tool__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("gui_msgs.msg._setting_tool.SettingTool", full_classname_dest, 38) == 0);
  }
  gui_msgs__msg__SettingTool * ros_message = _ros_message;
  {  // tool_rpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "tool_rpm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tool_rpm = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // feed_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "feed_rate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->feed_rate = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // tool_diameter
    PyObject * field = PyObject_GetAttrString(_pymsg, "tool_diameter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tool_diameter = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // tool_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "tool_length");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tool_length = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // tool_pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "tool_pressure");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tool_pressure = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // sanding
    PyObject * field = PyObject_GetAttrString(_pymsg, "sanding");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sanding = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // dir
    PyObject * field = PyObject_GetAttrString(_pymsg, "dir");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dir = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // tooltype
    PyObject * field = PyObject_GetAttrString(_pymsg, "tooltype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tooltype = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // toolgeometry
    PyObject * field = PyObject_GetAttrString(_pymsg, "toolgeometry");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->toolgeometry = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * gui_msgs__msg__setting_tool__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SettingTool */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("gui_msgs.msg._setting_tool");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SettingTool");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  gui_msgs__msg__SettingTool * ros_message = (gui_msgs__msg__SettingTool *)raw_ros_message;
  {  // tool_rpm
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->tool_rpm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tool_rpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // feed_rate
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->feed_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "feed_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tool_diameter
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->tool_diameter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tool_diameter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tool_length
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->tool_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tool_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tool_pressure
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->tool_pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tool_pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sanding
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sanding);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sanding", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dir
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->dir);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dir", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tooltype
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->tooltype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tooltype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // toolgeometry
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->toolgeometry);
    {
      int rc = PyObject_SetAttrString(_pymessage, "toolgeometry", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
