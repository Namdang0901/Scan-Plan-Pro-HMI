# generated from rosidl_generator_py/resource/_idl.py.em
# with input from zivid_interfaces:srv/InfieldCorrectionCompute.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InfieldCorrectionCompute_Request(type):
    """Metaclass of message 'InfieldCorrectionCompute_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('zivid_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'zivid_interfaces.srv.InfieldCorrectionCompute_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__infield_correction_compute__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__infield_correction_compute__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__infield_correction_compute__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__infield_correction_compute__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__infield_correction_compute__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InfieldCorrectionCompute_Request(metaclass=Metaclass_InfieldCorrectionCompute_Request):
    """Message class 'InfieldCorrectionCompute_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# Member 'trueness_errors'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_InfieldCorrectionCompute_Response(type):
    """Metaclass of message 'InfieldCorrectionCompute_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('zivid_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'zivid_interfaces.srv.InfieldCorrectionCompute_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__infield_correction_compute__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__infield_correction_compute__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__infield_correction_compute__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__infield_correction_compute__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__infield_correction_compute__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InfieldCorrectionCompute_Response(metaclass=Metaclass_InfieldCorrectionCompute_Response):
    """Message class 'InfieldCorrectionCompute_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_infield_correction_started',
        '_number_of_captures',
        '_trueness_errors',
        '_average_trueness_error',
        '_maximum_trueness_error',
        '_dimension_accuracy',
        '_z_min',
        '_z_max',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'infield_correction_started': 'boolean',
        'number_of_captures': 'int32',
        'trueness_errors': 'sequence<float>',
        'average_trueness_error': 'float',
        'maximum_trueness_error': 'float',
        'dimension_accuracy': 'float',
        'z_min': 'float',
        'z_max': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())
        self.infield_correction_started = kwargs.get('infield_correction_started', bool())
        self.number_of_captures = kwargs.get('number_of_captures', int())
        self.trueness_errors = array.array('f', kwargs.get('trueness_errors', []))
        self.average_trueness_error = kwargs.get('average_trueness_error', float())
        self.maximum_trueness_error = kwargs.get('maximum_trueness_error', float())
        self.dimension_accuracy = kwargs.get('dimension_accuracy', float())
        self.z_min = kwargs.get('z_min', float())
        self.z_max = kwargs.get('z_max', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        if self.infield_correction_started != other.infield_correction_started:
            return False
        if self.number_of_captures != other.number_of_captures:
            return False
        if self.trueness_errors != other.trueness_errors:
            return False
        if self.average_trueness_error != other.average_trueness_error:
            return False
        if self.maximum_trueness_error != other.maximum_trueness_error:
            return False
        if self.dimension_accuracy != other.dimension_accuracy:
            return False
        if self.z_min != other.z_min:
            return False
        if self.z_max != other.z_max:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def infield_correction_started(self):
        """Message field 'infield_correction_started'."""
        return self._infield_correction_started

    @infield_correction_started.setter
    def infield_correction_started(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'infield_correction_started' field must be of type 'bool'"
        self._infield_correction_started = value

    @builtins.property
    def number_of_captures(self):
        """Message field 'number_of_captures'."""
        return self._number_of_captures

    @number_of_captures.setter
    def number_of_captures(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_captures' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'number_of_captures' field must be an integer in [-2147483648, 2147483647]"
        self._number_of_captures = value

    @builtins.property
    def trueness_errors(self):
        """Message field 'trueness_errors'."""
        return self._trueness_errors

    @trueness_errors.setter
    def trueness_errors(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'trueness_errors' array.array() must have the type code of 'f'"
            self._trueness_errors = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'trueness_errors' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._trueness_errors = array.array('f', value)

    @builtins.property
    def average_trueness_error(self):
        """Message field 'average_trueness_error'."""
        return self._average_trueness_error

    @average_trueness_error.setter
    def average_trueness_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'average_trueness_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'average_trueness_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._average_trueness_error = value

    @builtins.property
    def maximum_trueness_error(self):
        """Message field 'maximum_trueness_error'."""
        return self._maximum_trueness_error

    @maximum_trueness_error.setter
    def maximum_trueness_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'maximum_trueness_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'maximum_trueness_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._maximum_trueness_error = value

    @builtins.property
    def dimension_accuracy(self):
        """Message field 'dimension_accuracy'."""
        return self._dimension_accuracy

    @dimension_accuracy.setter
    def dimension_accuracy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dimension_accuracy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dimension_accuracy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dimension_accuracy = value

    @builtins.property
    def z_min(self):
        """Message field 'z_min'."""
        return self._z_min

    @z_min.setter
    def z_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z_min = value

    @builtins.property
    def z_max(self):
        """Message field 'z_max'."""
        return self._z_max

    @z_max.setter
    def z_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z_max = value


class Metaclass_InfieldCorrectionCompute(type):
    """Metaclass of service 'InfieldCorrectionCompute'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('zivid_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'zivid_interfaces.srv.InfieldCorrectionCompute')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__infield_correction_compute

            from zivid_interfaces.srv import _infield_correction_compute
            if _infield_correction_compute.Metaclass_InfieldCorrectionCompute_Request._TYPE_SUPPORT is None:
                _infield_correction_compute.Metaclass_InfieldCorrectionCompute_Request.__import_type_support__()
            if _infield_correction_compute.Metaclass_InfieldCorrectionCompute_Response._TYPE_SUPPORT is None:
                _infield_correction_compute.Metaclass_InfieldCorrectionCompute_Response.__import_type_support__()


class InfieldCorrectionCompute(metaclass=Metaclass_InfieldCorrectionCompute):
    from zivid_interfaces.srv._infield_correction_compute import InfieldCorrectionCompute_Request as Request
    from zivid_interfaces.srv._infield_correction_compute import InfieldCorrectionCompute_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
