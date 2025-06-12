# generated from rosidl_generator_py/resource/_idl.py.em
# with input from zivid_interfaces:msg/FixedPlacementOfCalibrationObjects.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FixedPlacementOfCalibrationObjects(type):
    """Metaclass of message 'FixedPlacementOfCalibrationObjects'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'CALIBRATION_BOARD': 1,
        'FIDUCIAL_MARKERS': 2,
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
                'zivid_interfaces.msg.FixedPlacementOfCalibrationObjects')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fixed_placement_of_calibration_objects
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fixed_placement_of_calibration_objects
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fixed_placement_of_calibration_objects
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fixed_placement_of_calibration_objects
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fixed_placement_of_calibration_objects

            from zivid_interfaces.msg import FixedPlacementOfCalibrationBoard
            if FixedPlacementOfCalibrationBoard.__class__._TYPE_SUPPORT is None:
                FixedPlacementOfCalibrationBoard.__class__.__import_type_support__()

            from zivid_interfaces.msg import FixedPlacementOfFiducialMarker
            if FixedPlacementOfFiducialMarker.__class__._TYPE_SUPPORT is None:
                FixedPlacementOfFiducialMarker.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'CALIBRATION_BOARD': cls.__constants['CALIBRATION_BOARD'],
            'FIDUCIAL_MARKERS': cls.__constants['FIDUCIAL_MARKERS'],
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_FixedPlacementOfCalibrationObjects.__constants['NONE']

    @property
    def CALIBRATION_BOARD(self):
        """Message constant 'CALIBRATION_BOARD'."""
        return Metaclass_FixedPlacementOfCalibrationObjects.__constants['CALIBRATION_BOARD']

    @property
    def FIDUCIAL_MARKERS(self):
        """Message constant 'FIDUCIAL_MARKERS'."""
        return Metaclass_FixedPlacementOfCalibrationObjects.__constants['FIDUCIAL_MARKERS']


class FixedPlacementOfCalibrationObjects(metaclass=Metaclass_FixedPlacementOfCalibrationObjects):
    """
    Message class 'FixedPlacementOfCalibrationObjects'.

    Constants:
      NONE
      CALIBRATION_BOARD
      FIDUCIAL_MARKERS
    """

    __slots__ = [
        '_type',
        '_calibration_board',
        '_marker_dictionary',
        '_markers',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
        'calibration_board': 'zivid_interfaces/FixedPlacementOfCalibrationBoard',
        'marker_dictionary': 'string',
        'markers': 'sequence<zivid_interfaces/FixedPlacementOfFiducialMarker>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['zivid_interfaces', 'msg'], 'FixedPlacementOfCalibrationBoard'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['zivid_interfaces', 'msg'], 'FixedPlacementOfFiducialMarker')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        from zivid_interfaces.msg import FixedPlacementOfCalibrationBoard
        self.calibration_board = kwargs.get('calibration_board', FixedPlacementOfCalibrationBoard())
        self.marker_dictionary = kwargs.get('marker_dictionary', str())
        self.markers = kwargs.get('markers', [])

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
        if self.type != other.type:
            return False
        if self.calibration_board != other.calibration_board:
            return False
        if self.marker_dictionary != other.marker_dictionary:
            return False
        if self.markers != other.markers:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def calibration_board(self):
        """Message field 'calibration_board'."""
        return self._calibration_board

    @calibration_board.setter
    def calibration_board(self, value):
        if __debug__:
            from zivid_interfaces.msg import FixedPlacementOfCalibrationBoard
            assert \
                isinstance(value, FixedPlacementOfCalibrationBoard), \
                "The 'calibration_board' field must be a sub message of type 'FixedPlacementOfCalibrationBoard'"
        self._calibration_board = value

    @builtins.property
    def marker_dictionary(self):
        """Message field 'marker_dictionary'."""
        return self._marker_dictionary

    @marker_dictionary.setter
    def marker_dictionary(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'marker_dictionary' field must be of type 'str'"
        self._marker_dictionary = value

    @builtins.property
    def markers(self):
        """Message field 'markers'."""
        return self._markers

    @markers.setter
    def markers(self, value):
        if __debug__:
            from zivid_interfaces.msg import FixedPlacementOfFiducialMarker
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
                 all(isinstance(v, FixedPlacementOfFiducialMarker) for v in value) and
                 True), \
                "The 'markers' field must be a set or sequence and each value of type 'FixedPlacementOfFiducialMarker'"
        self._markers = value
