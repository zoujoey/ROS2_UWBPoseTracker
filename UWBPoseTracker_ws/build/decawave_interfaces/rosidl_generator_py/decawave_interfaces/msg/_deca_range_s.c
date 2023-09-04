// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from decawave_interfaces:msg/DecaRange.idl
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
#include "decawave_interfaces/msg/detail/deca_range__struct.h"
#include "decawave_interfaces/msg/detail/deca_range__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool decawave_interfaces__msg__deca_range__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("decawave_interfaces.msg._deca_range.DecaRange", full_classname_dest, 45) == 0);
  }
  decawave_interfaces__msg__DecaRange * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // tag_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "tag_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->tag_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // anch_id1
    PyObject * field = PyObject_GetAttrString(_pymsg, "anch_id1");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->anch_id1, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // range1
    PyObject * field = PyObject_GetAttrString(_pymsg, "range1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // anch_id2
    PyObject * field = PyObject_GetAttrString(_pymsg, "anch_id2");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->anch_id2, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // range2
    PyObject * field = PyObject_GetAttrString(_pymsg, "range2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // anch_id3
    PyObject * field = PyObject_GetAttrString(_pymsg, "anch_id3");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->anch_id3, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // range3
    PyObject * field = PyObject_GetAttrString(_pymsg, "range3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // anch_id4
    PyObject * field = PyObject_GetAttrString(_pymsg, "anch_id4");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->anch_id4, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // range4
    PyObject * field = PyObject_GetAttrString(_pymsg, "range4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * decawave_interfaces__msg__deca_range__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DecaRange */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("decawave_interfaces.msg._deca_range");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DecaRange");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  decawave_interfaces__msg__DecaRange * ros_message = (decawave_interfaces__msg__DecaRange *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tag_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->tag_id.data,
      strlen(ros_message->tag_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tag_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // anch_id1
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->anch_id1.data,
      strlen(ros_message->anch_id1.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "anch_id1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->range1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // anch_id2
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->anch_id2.data,
      strlen(ros_message->anch_id2.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "anch_id2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->range2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // anch_id3
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->anch_id3.data,
      strlen(ros_message->anch_id3.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "anch_id3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->range3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // anch_id4
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->anch_id4.data,
      strlen(ros_message->anch_id4.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "anch_id4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->range4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
