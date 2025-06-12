# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rviz_cloud_annotation:msg/RectangleSelectionViewport.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'polyline_x'
# Member 'polyline_y'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'projection_matrix'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RectangleSelectionViewport(type):
    """Metaclass of message 'RectangleSelectionViewport'."""

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
            module = import_type_support('rviz_cloud_annotation')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rviz_cloud_annotation.msg.RectangleSelectionViewport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rectangle_selection_viewport
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rectangle_selection_viewport
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rectangle_selection_viewport
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rectangle_selection_viewport
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rectangle_selection_viewport

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RectangleSelectionViewport(metaclass=Metaclass_RectangleSelectionViewport):
    """Message class 'RectangleSelectionViewport'."""

    __slots__ = [
        '_start_x',
        '_start_y',
        '_end_x',
        '_end_y',
        '_viewport_height',
        '_viewport_width',
        '_focal_length',
        '_projection_matrix',
        '_camera_pose',
        '_is_deep_selection',
        '_polyline_x',
        '_polyline_y',
    ]

    _fields_and_field_types = {
        'start_x': 'uint32',
        'start_y': 'uint32',
        'end_x': 'uint32',
        'end_y': 'uint32',
        'viewport_height': 'uint32',
        'viewport_width': 'uint32',
        'focal_length': 'float',
        'projection_matrix': 'float[16]',
        'camera_pose': 'geometry_msgs/Pose',
        'is_deep_selection': 'boolean',
        'polyline_x': 'sequence<int32>',
        'polyline_y': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 16),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.start_x = kwargs.get('start_x', int())
        self.start_y = kwargs.get('start_y', int())
        self.end_x = kwargs.get('end_x', int())
        self.end_y = kwargs.get('end_y', int())
        self.viewport_height = kwargs.get('viewport_height', int())
        self.viewport_width = kwargs.get('viewport_width', int())
        self.focal_length = kwargs.get('focal_length', float())
        if 'projection_matrix' not in kwargs:
            self.projection_matrix = numpy.zeros(16, dtype=numpy.float32)
        else:
            self.projection_matrix = numpy.array(kwargs.get('projection_matrix'), dtype=numpy.float32)
            assert self.projection_matrix.shape == (16, )
        from geometry_msgs.msg import Pose
        self.camera_pose = kwargs.get('camera_pose', Pose())
        self.is_deep_selection = kwargs.get('is_deep_selection', bool())
        self.polyline_x = array.array('i', kwargs.get('polyline_x', []))
        self.polyline_y = array.array('i', kwargs.get('polyline_y', []))

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
        if self.start_x != other.start_x:
            return False
        if self.start_y != other.start_y:
            return False
        if self.end_x != other.end_x:
            return False
        if self.end_y != other.end_y:
            return False
        if self.viewport_height != other.viewport_height:
            return False
        if self.viewport_width != other.viewport_width:
            return False
        if self.focal_length != other.focal_length:
            return False
        if all(self.projection_matrix != other.projection_matrix):
            return False
        if self.camera_pose != other.camera_pose:
            return False
        if self.is_deep_selection != other.is_deep_selection:
            return False
        if self.polyline_x != other.polyline_x:
            return False
        if self.polyline_y != other.polyline_y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def start_x(self):
        """Message field 'start_x'."""
        return self._start_x

    @start_x.setter
    def start_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'start_x' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'start_x' field must be an unsigned integer in [0, 4294967295]"
        self._start_x = value

    @builtins.property
    def start_y(self):
        """Message field 'start_y'."""
        return self._start_y

    @start_y.setter
    def start_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'start_y' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'start_y' field must be an unsigned integer in [0, 4294967295]"
        self._start_y = value

    @builtins.property
    def end_x(self):
        """Message field 'end_x'."""
        return self._end_x

    @end_x.setter
    def end_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'end_x' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'end_x' field must be an unsigned integer in [0, 4294967295]"
        self._end_x = value

    @builtins.property
    def end_y(self):
        """Message field 'end_y'."""
        return self._end_y

    @end_y.setter
    def end_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'end_y' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'end_y' field must be an unsigned integer in [0, 4294967295]"
        self._end_y = value

    @builtins.property
    def viewport_height(self):
        """Message field 'viewport_height'."""
        return self._viewport_height

    @viewport_height.setter
    def viewport_height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'viewport_height' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'viewport_height' field must be an unsigned integer in [0, 4294967295]"
        self._viewport_height = value

    @builtins.property
    def viewport_width(self):
        """Message field 'viewport_width'."""
        return self._viewport_width

    @viewport_width.setter
    def viewport_width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'viewport_width' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'viewport_width' field must be an unsigned integer in [0, 4294967295]"
        self._viewport_width = value

    @builtins.property
    def focal_length(self):
        """Message field 'focal_length'."""
        return self._focal_length

    @focal_length.setter
    def focal_length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'focal_length' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'focal_length' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._focal_length = value

    @builtins.property
    def projection_matrix(self):
        """Message field 'projection_matrix'."""
        return self._projection_matrix

    @projection_matrix.setter
    def projection_matrix(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'projection_matrix' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 16, \
                "The 'projection_matrix' numpy.ndarray() must have a size of 16"
            self._projection_matrix = value
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
                 len(value) == 16 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'projection_matrix' field must be a set or sequence with length 16 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._projection_matrix = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def camera_pose(self):
        """Message field 'camera_pose'."""
        return self._camera_pose

    @camera_pose.setter
    def camera_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'camera_pose' field must be a sub message of type 'Pose'"
        self._camera_pose = value

    @builtins.property
    def is_deep_selection(self):
        """Message field 'is_deep_selection'."""
        return self._is_deep_selection

    @is_deep_selection.setter
    def is_deep_selection(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_deep_selection' field must be of type 'bool'"
        self._is_deep_selection = value

    @builtins.property
    def polyline_x(self):
        """Message field 'polyline_x'."""
        return self._polyline_x

    @polyline_x.setter
    def polyline_x(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'polyline_x' array.array() must have the type code of 'i'"
            self._polyline_x = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'polyline_x' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._polyline_x = array.array('i', value)

    @builtins.property
    def polyline_y(self):
        """Message field 'polyline_y'."""
        return self._polyline_y

    @polyline_y.setter
    def polyline_y(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'polyline_y' array.array() must have the type code of 'i'"
            self._polyline_y = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'polyline_y' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._polyline_y = array.array('i', value)
