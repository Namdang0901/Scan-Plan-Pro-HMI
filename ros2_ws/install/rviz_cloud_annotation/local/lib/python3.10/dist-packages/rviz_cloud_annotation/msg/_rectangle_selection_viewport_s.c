// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rviz_cloud_annotation:msg/RectangleSelectionViewport.idl
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
#include "rviz_cloud_annotation/msg/detail/rectangle_selection_viewport__struct.h"
#include "rviz_cloud_annotation/msg/detail/rectangle_selection_viewport__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rviz_cloud_annotation__msg__rectangle_selection_viewport__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("rviz_cloud_annotation.msg._rectangle_selection_viewport.RectangleSelectionViewport", full_classname_dest, 82) == 0);
  }
  rviz_cloud_annotation__msg__RectangleSelectionViewport * ros_message = _ros_message;
  {  // start_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->start_x = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // start_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->start_y = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // end_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->end_x = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // end_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->end_y = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // viewport_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "viewport_height");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->viewport_height = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // viewport_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "viewport_width");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->viewport_width = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // focal_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "focal_length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->focal_length = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // projection_matrix
    PyObject * field = PyObject_GetAttrString(_pymsg, "projection_matrix");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 16;
      float * dest = ros_message->projection_matrix;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // camera_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "camera_pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->camera_pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // is_deep_selection
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_deep_selection");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_deep_selection = (Py_True == field);
    Py_DECREF(field);
  }
  {  // polyline_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "polyline_x");
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
      Py_ssize_t size = view.len / sizeof(int32_t);
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->polyline_x), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->polyline_x.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'polyline_x'");
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
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->polyline_x), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->polyline_x.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        int32_t tmp = (int32_t)PyLong_AsLong(item);
        memcpy(&dest[i], &tmp, sizeof(int32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // polyline_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "polyline_y");
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
      Py_ssize_t size = view.len / sizeof(int32_t);
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->polyline_y), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->polyline_y.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'polyline_y'");
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
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->polyline_y), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->polyline_y.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        int32_t tmp = (int32_t)PyLong_AsLong(item);
        memcpy(&dest[i], &tmp, sizeof(int32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rviz_cloud_annotation__msg__rectangle_selection_viewport__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RectangleSelectionViewport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rviz_cloud_annotation.msg._rectangle_selection_viewport");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RectangleSelectionViewport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rviz_cloud_annotation__msg__RectangleSelectionViewport * ros_message = (rviz_cloud_annotation__msg__RectangleSelectionViewport *)raw_ros_message;
  {  // start_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->start_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->start_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->end_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->end_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // viewport_height
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->viewport_height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "viewport_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // viewport_width
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->viewport_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "viewport_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // focal_length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->focal_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "focal_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // projection_matrix
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "projection_matrix");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->projection_matrix[0]);
    memcpy(dst, src, 16 * sizeof(float));
    Py_DECREF(field);
  }
  {  // camera_pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->camera_pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "camera_pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_deep_selection
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_deep_selection ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_deep_selection", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // polyline_x
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "polyline_x");
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
    if (itemsize != sizeof(int32_t)) {
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
    if (ros_message->polyline_x.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int32_t * src = &(ros_message->polyline_x.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->polyline_x.size * sizeof(int32_t));
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
  {  // polyline_y
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "polyline_y");
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
    if (itemsize != sizeof(int32_t)) {
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
    if (ros_message->polyline_y.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int32_t * src = &(ros_message->polyline_y.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->polyline_y.size * sizeof(int32_t));
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
