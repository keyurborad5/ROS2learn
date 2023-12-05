# generated from rosidl_generator_py/resource/_idl.py.em
# with input from av_msgs:msg/VehicleStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleStatus(type):
    """Metaclass of message 'VehicleStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'AUTONOMOUS': 0,
        'MANUAL': 1,
        'MOVING': 0,
        'STOPPED': 1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('av_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'av_msgs.msg.VehicleStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'AUTONOMOUS': cls.__constants['AUTONOMOUS'],
            'MANUAL': cls.__constants['MANUAL'],
            'MOVING': cls.__constants['MOVING'],
            'STOPPED': cls.__constants['STOPPED'],
        }

    @property
    def AUTONOMOUS(self):
        """Message constant 'AUTONOMOUS'."""
        return Metaclass_VehicleStatus.__constants['AUTONOMOUS']

    @property
    def MANUAL(self):
        """Message constant 'MANUAL'."""
        return Metaclass_VehicleStatus.__constants['MANUAL']

    @property
    def MOVING(self):
        """Message constant 'MOVING'."""
        return Metaclass_VehicleStatus.__constants['MOVING']

    @property
    def STOPPED(self):
        """Message constant 'STOPPED'."""
        return Metaclass_VehicleStatus.__constants['STOPPED']


class VehicleStatus(metaclass=Metaclass_VehicleStatus):
    """
    Message class 'VehicleStatus'.

    Constants:
      AUTONOMOUS
      MANUAL
      MOVING
      STOPPED
    """

    __slots__ = [
        '_driving_type',
        '_current_action',
        '_current_speed',
    ]

    _fields_and_field_types = {
        'driving_type': 'uint8',
        'current_action': 'uint8',
        'current_speed': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.driving_type = kwargs.get('driving_type', int())
        self.current_action = kwargs.get('current_action', int())
        self.current_speed = kwargs.get('current_speed', float())

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
        if self.driving_type != other.driving_type:
            return False
        if self.current_action != other.current_action:
            return False
        if self.current_speed != other.current_speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def driving_type(self):
        """Message field 'driving_type'."""
        return self._driving_type

    @driving_type.setter
    def driving_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'driving_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'driving_type' field must be an unsigned integer in [0, 255]"
        self._driving_type = value

    @property
    def current_action(self):
        """Message field 'current_action'."""
        return self._current_action

    @current_action.setter
    def current_action(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_action' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'current_action' field must be an unsigned integer in [0, 255]"
        self._current_action = value

    @property
    def current_speed(self):
        """Message field 'current_speed'."""
        return self._current_speed

    @current_speed.setter
    def current_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_speed' field must be of type 'float'"
        self._current_speed = value
