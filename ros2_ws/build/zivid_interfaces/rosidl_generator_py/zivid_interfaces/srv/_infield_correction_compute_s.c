// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from zivid_interfaces:srv/InfieldCorrectionCompute.idl
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
#include "zivid_interfaces/srv/detail/infield_correction_compute__struct.h"
#include "zivid_interfaces/srv/detail/infield_correction_compute__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool zivid_interfaces__srv__infield_correction_compute__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[82];
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
    assert(strncmp("zivid_interfaces.srv._infield_correction_compute.InfieldCorrectionCompute_Request", full_classname_dest, 81) == 0);
  }
  zivid_interfaces__srv__InfieldCorrectionCompute_Request * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * zivid_interfaces__srv__infield_correction_compute__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InfieldCorrectionCompute_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("zivid_interfaces.srv._infield_correction_compute");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InfieldCorrectionCompute_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "zivid_interfaces/srv/detail/infield_correction_compute__struct.h"
// already included above
// #include "zivid_interfaces/srv/detail/infield_correction_compute__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool zivid_interfaces__srv__infield_correction_compute__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[83];
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
    assert(strncmp("zivid_interfaces.srv._infield_correction_compute.InfieldCorrectionCompute_Response", full_classname_dest, 82) == 0);
  }
  zivid_interfaces__srv__InfieldCorrectionCompute_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // message
    PyObject * field = PyObject_GetAttrString(_pymsg, "message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // infield_correction_started
    PyObject * field = PyObject_GetAttrString(_pymsg, "infield_correction_started");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->infield_correction_started = (Py_True == field);
    Py_DECREF(field);
  }
  {  // number_of_captures
    PyObject * field = PyObject_GetAttrString(_pymsg, "number_of_captures");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->number_of_captures = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // trueness_errors
    PyObject * field = PyObject_GetAttrString(_pymsg, "trueness_errors");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(float);
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->trueness_errors), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->trueness_errors.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'trueness_errors'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->trueness_errors), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->trueness_errors.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        float tmp = (float)PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // average_trueness_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "average_trueness_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->average_trueness_error = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // maximum_trueness_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "maximum_trueness_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->maximum_trueness_error = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dimension_accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "dimension_accuracy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dimension_accuracy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * zivid_interfaces__srv__infield_correction_compute__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InfieldCorrectionCompute_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("zivid_interfaces.srv._infield_correction_compute");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InfieldCorrectionCompute_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  zivid_interfaces__srv__InfieldCorrectionCompute_Response * ros_message = (zivid_interfaces__srv__InfieldCorrectionCompute_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message.data,
      strlen(ros_message->message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // infield_correction_started
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->infield_correction_started ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "infield_correction_started", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // number_of_captures
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->number_of_captures);
    {
      int rc = PyObject_SetAttrString(_pymessage, "number_of_captures", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trueness_errors
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "trueness_errors");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(float)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->trueness_errors.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      float * src = &(ros_message->trueness_errors.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->trueness_errors.size * sizeof(float));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // average_trueness_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->average_trueness_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "average_trueness_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maximum_trueness_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->maximum_trueness_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maximum_trueness_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dimension_accuracy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dimension_accuracy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dimension_accuracy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
