# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gui_msgs:msg/SettingTool.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SettingTool(type):
    """Metaclass of message 'SettingTool'."""

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
                'gui_msgs.msg.SettingTool')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__setting_tool
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__setting_tool
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__setting_tool
            cls._TYPE_SUPPORT = module.type_support_msg__msg__setting_tool
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__setting_tool

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SettingTool(metaclass=Metaclass_SettingTool):
    """Message class 'SettingTool'."""

    __slots__ = [
        '_tool_rpm',
        '_feed_rate',
        '_tool_diameter',
        '_tool_length',
        '_tool_pressure',
        '_sanding',
        '_dir',
        '_tooltype',
        '_toolgeometry',
    ]

    _fields_and_field_types = {
        'tool_rpm': 'int32',
        'feed_rate': 'int32',
        'tool_diameter': 'int32',
        'tool_length': 'int32',
        'tool_pressure': 'int32',
        'sanding': 'int32',
        'dir': 'int32',
        'tooltype': 'int32',
        'toolgeometry': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
        self.tool_rpm = kwargs.get('tool_rpm', int())
        self.feed_rate = kwargs.get('feed_rate', int())
        self.tool_diameter = kwargs.get('tool_diameter', int())
        self.tool_length = kwargs.get('tool_length', int())
        self.tool_pressure = kwargs.get('tool_pressure', int())
        self.sanding = kwargs.get('sanding', int())
        self.dir = kwargs.get('dir', int())
        self.tooltype = kwargs.get('tooltype', int())
        self.toolgeometry = kwargs.get('toolgeometry', int())

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
        if self.tool_rpm != other.tool_rpm:
            return False
        if self.feed_rate != other.feed_rate:
            return False
        if self.tool_diameter != other.tool_diameter:
            return False
        if self.tool_length != other.tool_length:
            return False
        if self.tool_pressure != other.tool_pressure:
            return False
        if self.sanding != other.sanding:
            return False
        if self.dir != other.dir:
            return False
        if self.tooltype != other.tooltype:
            return False
        if self.toolgeometry != other.toolgeometry:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def tool_rpm(self):
        """Message field 'tool_rpm'."""
        return self._tool_rpm

    @tool_rpm.setter
    def tool_rpm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tool_rpm' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'tool_rpm' field must be an integer in [-2147483648, 2147483647]"
        self._tool_rpm = value

    @builtins.property
    def feed_rate(self):
        """Message field 'feed_rate'."""
        return self._feed_rate

    @feed_rate.setter
    def feed_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'feed_rate' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'feed_rate' field must be an integer in [-2147483648, 2147483647]"
        self._feed_rate = value

    @builtins.property
    def tool_diameter(self):
        """Message field 'tool_diameter'."""
        return self._tool_diameter

    @tool_diameter.setter
    def tool_diameter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tool_diameter' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'tool_diameter' field must be an integer in [-2147483648, 2147483647]"
        self._tool_diameter = value

    @builtins.property
    def tool_length(self):
        """Message field 'tool_length'."""
        return self._tool_length

    @tool_length.setter
    def tool_length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tool_length' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'tool_length' field must be an integer in [-2147483648, 2147483647]"
        self._tool_length = value

    @builtins.property
    def tool_pressure(self):
        """Message field 'tool_pressure'."""
        return self._tool_pressure

    @tool_pressure.setter
    def tool_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tool_pressure' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'tool_pressure' field must be an integer in [-2147483648, 2147483647]"
        self._tool_pressure = value

    @builtins.property
    def sanding(self):
        """Message field 'sanding'."""
        return self._sanding

    @sanding.setter
    def sanding(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sanding' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sanding' field must be an integer in [-2147483648, 2147483647]"
        self._sanding = value

    @builtins.property  # noqa: A003
    def dir(self):  # noqa: A003
        """Message field 'dir'."""
        return self._dir

    @dir.setter  # noqa: A003
    def dir(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dir' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'dir' field must be an integer in [-2147483648, 2147483647]"
        self._dir = value

    @builtins.property
    def tooltype(self):
        """Message field 'tooltype'."""
        return self._tooltype

    @tooltype.setter
    def tooltype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tooltype' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'tooltype' field must be an integer in [-2147483648, 2147483647]"
        self._tooltype = value

    @builtins.property
    def toolgeometry(self):
        """Message field 'toolgeometry'."""
        return self._toolgeometry

    @toolgeometry.setter
    def toolgeometry(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'toolgeometry' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'toolgeometry' field must be an integer in [-2147483648, 2147483647]"
        self._toolgeometry = value
