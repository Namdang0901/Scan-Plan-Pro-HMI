# generated from rosidl_generator_py/resource/_idl.py.em
# with input from zivid_interfaces:srv/InfieldCorrectionRead.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InfieldCorrectionRead_Request(type):
    """Metaclass of message 'InfieldCorrectionRead_Request'."""

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
                'zivid_interfaces.srv.InfieldCorrectionRead_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__infield_correction_read__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__infield_correction_read__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__infield_correction_read__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__infield_correction_read__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__infield_correction_read__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InfieldCorrectionRead_Request(metaclass=Metaclass_InfieldCorrectionRead_Request):
    """Message class 'InfieldCorrectionRead_Request'."""

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

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_InfieldCorrectionRead_Response(type):
    """Metaclass of message 'InfieldCorrectionRead_Response'."""

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
                'zivid_interfaces.srv.InfieldCorrectionRead_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__infield_correction_read__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__infield_correction_read__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__infield_correction_read__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__infield_correction_read__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__infield_correction_read__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InfieldCorrectionRead_Response(metaclass=Metaclass_InfieldCorrectionRead_Response):
    """Message class 'InfieldCorrectionRead_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_has_camera_correction',
        '_camera_correction_timestamp',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'has_camera_correction': 'boolean',
        'camera_correction_timestamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())
        self.has_camera_correction = kwargs.get('has_camera_correction', bool())
        from builtin_interfaces.msg import Time
        self.camera_correction_timestamp = kwargs.get('camera_correction_timestamp', Time())

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
        if self.has_camera_correction != other.has_camera_correction:
            return False
        if self.camera_correction_timestamp != other.camera_correction_timestamp:
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
    def has_camera_correction(self):
        """Message field 'has_camera_correction'."""
        return self._has_camera_correction

    @has_camera_correction.setter
    def has_camera_correction(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_camera_correction' field must be of type 'bool'"
        self._has_camera_correction = value

    @builtins.property
    def camera_correction_timestamp(self):
        """Message field 'camera_correction_timestamp'."""
        return self._camera_correction_timestamp

    @camera_correction_timestamp.setter
    def camera_correction_timestamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'camera_correction_timestamp' field must be a sub message of type 'Time'"
        self._camera_correction_timestamp = value


class Metaclass_InfieldCorrectionRead(type):
    """Metaclass of service 'InfieldCorrectionRead'."""

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
                'zivid_interfaces.srv.InfieldCorrectionRead')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__infield_correction_read

            from zivid_interfaces.srv import _infield_correction_read
            if _infield_correction_read.Metaclass_InfieldCorrectionRead_Request._TYPE_SUPPORT is None:
                _infield_correction_read.Metaclass_InfieldCorrectionRead_Request.__import_type_support__()
            if _infield_correction_read.Metaclass_InfieldCorrectionRead_Response._TYPE_SUPPORT is None:
                _infield_correction_read.Metaclass_InfieldCorrectionRead_Response.__import_type_support__()


class InfieldCorrectionRead(metaclass=Metaclass_InfieldCorrectionRead):
    from zivid_interfaces.srv._infield_correction_read import InfieldCorrectionRead_Request as Request
    from zivid_interfaces.srv._infield_correction_read import InfieldCorrectionRead_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
