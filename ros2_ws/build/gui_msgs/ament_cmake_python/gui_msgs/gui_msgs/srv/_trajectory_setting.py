# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gui_msgs:srv/TrajectorySetting.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrajectorySetting_Request(type):
    """Metaclass of message 'TrajectorySetting_Request'."""

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
                'gui_msgs.srv.TrajectorySetting_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__trajectory_setting__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__trajectory_setting__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__trajectory_setting__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__trajectory_setting__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__trajectory_setting__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectorySetting_Request(metaclass=Metaclass_TrajectorySetting_Request):
    """Message class 'TrajectorySetting_Request'."""

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


class Metaclass_TrajectorySetting_Response(type):
    """Metaclass of message 'TrajectorySetting_Response'."""

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
                'gui_msgs.srv.TrajectorySetting_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__trajectory_setting__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__trajectory_setting__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__trajectory_setting__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__trajectory_setting__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__trajectory_setting__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectorySetting_Response(metaclass=Metaclass_TrajectorySetting_Response):
    """Message class 'TrajectorySetting_Response'."""

    __slots__ = [
        '_tool',
        '_parameters',
    ]

    _fields_and_field_types = {
        'tool': 'int32',
        'parameters': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.tool = kwargs.get('tool', int())
        self.parameters = kwargs.get('parameters', int())

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
        if self.tool != other.tool:
            return False
        if self.parameters != other.parameters:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def tool(self):
        """Message field 'tool'."""
        return self._tool

    @tool.setter
    def tool(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tool' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'tool' field must be an integer in [-2147483648, 2147483647]"
        self._tool = value

    @builtins.property
    def parameters(self):
        """Message field 'parameters'."""
        return self._parameters

    @parameters.setter
    def parameters(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'parameters' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'parameters' field must be an integer in [-2147483648, 2147483647]"
        self._parameters = value


class Metaclass_TrajectorySetting(type):
    """Metaclass of service 'TrajectorySetting'."""

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
                'gui_msgs.srv.TrajectorySetting')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__trajectory_setting

            from gui_msgs.srv import _trajectory_setting
            if _trajectory_setting.Metaclass_TrajectorySetting_Request._TYPE_SUPPORT is None:
                _trajectory_setting.Metaclass_TrajectorySetting_Request.__import_type_support__()
            if _trajectory_setting.Metaclass_TrajectorySetting_Response._TYPE_SUPPORT is None:
                _trajectory_setting.Metaclass_TrajectorySetting_Response.__import_type_support__()


class TrajectorySetting(metaclass=Metaclass_TrajectorySetting):
    from gui_msgs.srv._trajectory_setting import TrajectorySetting_Request as Request
    from gui_msgs.srv._trajectory_setting import TrajectorySetting_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
