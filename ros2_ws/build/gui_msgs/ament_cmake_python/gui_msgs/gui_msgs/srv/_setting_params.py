# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gui_msgs:srv/SettingParams.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SettingParams_Request(type):
    """Metaclass of message 'SettingParams_Request'."""

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
            module = import_type_support('gui_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gui_msgs.srv.SettingParams_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__setting_params__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__setting_params__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__setting_params__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__setting_params__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__setting_params__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SettingParams_Request(metaclass=Metaclass_SettingParams_Request):
    """Message class 'SettingParams_Request'."""

    __slots__ = [
        '_req',
    ]

    _fields_and_field_types = {
        'req': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.req = kwargs.get('req', bool())

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
        if self.req != other.req:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def req(self):
        """Message field 'req'."""
        return self._req

    @req.setter
    def req(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'req' field must be of type 'bool'"
        self._req = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SettingParams_Response(type):
    """Metaclass of message 'SettingParams_Response'."""

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
            module = import_type_support('gui_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gui_msgs.srv.SettingParams_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__setting_params__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__setting_params__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__setting_params__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__setting_params__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__setting_params__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SettingParams_Response(metaclass=Metaclass_SettingParams_Response):
    """Message class 'SettingParams_Response'."""

    __slots__ = [
        '_linear',
        '_rotation',
        '_grinding_speed',
        '_grinding_force',
        '_spindle_speed',
    ]

    _fields_and_field_types = {
        'linear': 'int32',
        'rotation': 'int32',
        'grinding_speed': 'int32',
        'grinding_force': 'int32',
        'spindle_speed': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.linear = kwargs.get('linear', int())
        self.rotation = kwargs.get('rotation', int())
        self.grinding_speed = kwargs.get('grinding_speed', int())
        self.grinding_force = kwargs.get('grinding_force', int())
        self.spindle_speed = kwargs.get('spindle_speed', int())

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
        if self.linear != other.linear:
            return False
        if self.rotation != other.rotation:
            return False
        if self.grinding_speed != other.grinding_speed:
            return False
        if self.grinding_force != other.grinding_force:
            return False
        if self.spindle_speed != other.spindle_speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def linear(self):
        """Message field 'linear'."""
        return self._linear

    @linear.setter
    def linear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'linear' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'linear' field must be an integer in [-2147483648, 2147483647]"
        self._linear = value

    @builtins.property
    def rotation(self):
        """Message field 'rotation'."""
        return self._rotation

    @rotation.setter
    def rotation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rotation' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rotation' field must be an integer in [-2147483648, 2147483647]"
        self._rotation = value

    @builtins.property
    def grinding_speed(self):
        """Message field 'grinding_speed'."""
        return self._grinding_speed

    @grinding_speed.setter
    def grinding_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'grinding_speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'grinding_speed' field must be an integer in [-2147483648, 2147483647]"
        self._grinding_speed = value

    @builtins.property
    def grinding_force(self):
        """Message field 'grinding_force'."""
        return self._grinding_force

    @grinding_force.setter
    def grinding_force(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'grinding_force' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'grinding_force' field must be an integer in [-2147483648, 2147483647]"
        self._grinding_force = value

    @builtins.property
    def spindle_speed(self):
        """Message field 'spindle_speed'."""
        return self._spindle_speed

    @spindle_speed.setter
    def spindle_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'spindle_speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'spindle_speed' field must be an integer in [-2147483648, 2147483647]"
        self._spindle_speed = value


class Metaclass_SettingParams(type):
    """Metaclass of service 'SettingParams'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('gui_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gui_msgs.srv.SettingParams')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__setting_params

            from gui_msgs.srv import _setting_params
            if _setting_params.Metaclass_SettingParams_Request._TYPE_SUPPORT is None:
                _setting_params.Metaclass_SettingParams_Request.__import_type_support__()
            if _setting_params.Metaclass_SettingParams_Response._TYPE_SUPPORT is None:
                _setting_params.Metaclass_SettingParams_Response.__import_type_support__()


class SettingParams(metaclass=Metaclass_SettingParams):
    from gui_msgs.srv._setting_params import SettingParams_Request as Request
    from gui_msgs.srv._setting_params import SettingParams_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
