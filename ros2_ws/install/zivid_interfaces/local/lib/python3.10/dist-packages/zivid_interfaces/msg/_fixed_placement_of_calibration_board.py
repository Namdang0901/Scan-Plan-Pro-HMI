# generated from rosidl_generator_py/resource/_idl.py.em
# with input from zivid_interfaces:msg/FixedPlacementOfCalibrationBoard.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FixedPlacementOfCalibrationBoard(type):
    """Metaclass of message 'FixedPlacementOfCalibrationBoard'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'POSITION': 1,
        'POSE': 2,
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
                'zivid_interfaces.msg.FixedPlacementOfCalibrationBoard')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fixed_placement_of_calibration_board
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fixed_placement_of_calibration_board
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fixed_placement_of_calibration_board
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fixed_placement_of_calibration_board
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fixed_placement_of_calibration_board

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
            'POSITION': cls.__constants['POSITION'],
            'POSE': cls.__constants['POSE'],
        }

    @property
    def POSITION(self):
        """Message constant 'POSITION'."""
        return Metaclass_FixedPlacementOfCalibrationBoard.__constants['POSITION']

    @property
    def POSE(self):
        """Message constant 'POSE'."""
        return Metaclass_FixedPlacementOfCalibrationBoard.__constants['POSE']


class FixedPlacementOfCalibrationBoard(metaclass=Metaclass_FixedPlacementOfCalibrationBoard):
    """
    Message class 'FixedPlacementOfCalibrationBoard'.

    Constants:
      POSITION
      POSE
    """

    __slots__ = [
        '_representation',
        '_position',
        '_pose',
    ]

    _fields_and_field_types = {
        'representation': 'uint8',
        'position': 'geometry_msgs/Point',
        'pose': 'geometry_msgs/Pose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.representation = kwargs.get('representation', int())
        from geometry_msgs.msg import Point
        self.position = kwargs.get('position', Point())
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
        if self.representation != other.representation:
            return False
        if self.position != other.position:
            return False
        if self.pose != other.pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def representation(self):
        """Message field 'representation'."""
        return self._representation

    @representation.setter
    def representation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'representation' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'representation' field must be an unsigned integer in [0, 255]"
        self._representation = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'position' field must be a sub message of type 'Point'"
        self._position = value

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
