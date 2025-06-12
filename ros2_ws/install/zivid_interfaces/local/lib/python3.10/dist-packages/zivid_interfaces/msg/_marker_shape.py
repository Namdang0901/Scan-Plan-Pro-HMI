# generated from rosidl_generator_py/resource/_idl.py.em
# with input from zivid_interfaces:msg/MarkerShape.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MarkerShape(type):
    """Metaclass of message 'MarkerShape'."""

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
                'zivid_interfaces.msg.MarkerShape')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__marker_shape
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__marker_shape
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__marker_shape
            cls._TYPE_SUPPORT = module.type_support_msg__msg__marker_shape
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__marker_shape

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

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


class MarkerShape(metaclass=Metaclass_MarkerShape):
    """Message class 'MarkerShape'."""

    __slots__ = [
        '_corners_in_pixel_coordinates',
        '_corners_in_camera_coordinates',
        '_id',
        '_pose',
    ]

    _fields_and_field_types = {
        'corners_in_pixel_coordinates': 'geometry_msgs/Point[4]',
        'corners_in_camera_coordinates': 'geometry_msgs/Point[4]',
        'id': 'int32',
        'pose': 'geometry_msgs/Pose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Point
        self.corners_in_pixel_coordinates = kwargs.get(
            'corners_in_pixel_coordinates',
            [Point() for x in range(4)]
        )
        from geometry_msgs.msg import Point
        self.corners_in_camera_coordinates = kwargs.get(
            'corners_in_camera_coordinates',
            [Point() for x in range(4)]
        )
        self.id = kwargs.get('id', int())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())

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
        if self.corners_in_pixel_coordinates != other.corners_in_pixel_coordinates:
            return False
        if self.corners_in_camera_coordinates != other.corners_in_camera_coordinates:
            return False
        if self.id != other.id:
            return False
        if self.pose != other.pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def corners_in_pixel_coordinates(self):
        """Message field 'corners_in_pixel_coordinates'."""
        return self._corners_in_pixel_coordinates

    @corners_in_pixel_coordinates.setter
    def corners_in_pixel_coordinates(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
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
                 len(value) == 4 and
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'corners_in_pixel_coordinates' field must be a set or sequence with length 4 and each value of type 'Point'"
        self._corners_in_pixel_coordinates = value

    @builtins.property
    def corners_in_camera_coordinates(self):
        """Message field 'corners_in_camera_coordinates'."""
        return self._corners_in_camera_coordinates

    @corners_in_camera_coordinates.setter
    def corners_in_camera_coordinates(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
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
                 len(value) == 4 and
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'corners_in_camera_coordinates' field must be a set or sequence with length 4 and each value of type 'Point'"
        self._corners_in_camera_coordinates = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value
