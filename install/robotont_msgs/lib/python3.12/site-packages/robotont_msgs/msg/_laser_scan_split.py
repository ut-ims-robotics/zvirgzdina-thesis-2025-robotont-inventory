# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robotont_msgs:msg/LaserScanSplit.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaserScanSplit(type):
    """Metaclass of message 'LaserScanSplit'."""

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
            module = import_type_support('robotont_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robotont_msgs.msg.LaserScanSplit')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__laser_scan_split
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__laser_scan_split
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__laser_scan_split
            cls._TYPE_SUPPORT = module.type_support_msg__msg__laser_scan_split
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__laser_scan_split

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


class LaserScanSplit(metaclass=Metaclass_LaserScanSplit):
    """Message class 'LaserScanSplit'."""

    __slots__ = [
        '_stamp',
        '_left_min',
        '_center_min',
        '_right_min',
        '_left_mean',
        '_center_mean',
        '_right_mean',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'left_min': 'double',
        'center_min': 'double',
        'right_min': 'double',
        'left_mean': 'double',
        'center_mean': 'double',
        'right_mean': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.left_min = kwargs.get('left_min', float())
        self.center_min = kwargs.get('center_min', float())
        self.right_min = kwargs.get('right_min', float())
        self.left_mean = kwargs.get('left_mean', float())
        self.center_mean = kwargs.get('center_mean', float())
        self.right_mean = kwargs.get('right_mean', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.stamp != other.stamp:
            return False
        if self.left_min != other.left_min:
            return False
        if self.center_min != other.center_min:
            return False
        if self.right_min != other.right_min:
            return False
        if self.left_mean != other.left_mean:
            return False
        if self.center_mean != other.center_mean:
            return False
        if self.right_mean != other.right_mean:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @builtins.property
    def left_min(self):
        """Message field 'left_min'."""
        return self._left_min

    @left_min.setter
    def left_min(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'left_min' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'left_min' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._left_min = value

    @builtins.property
    def center_min(self):
        """Message field 'center_min'."""
        return self._center_min

    @center_min.setter
    def center_min(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'center_min' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'center_min' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._center_min = value

    @builtins.property
    def right_min(self):
        """Message field 'right_min'."""
        return self._right_min

    @right_min.setter
    def right_min(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'right_min' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'right_min' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._right_min = value

    @builtins.property
    def left_mean(self):
        """Message field 'left_mean'."""
        return self._left_mean

    @left_mean.setter
    def left_mean(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'left_mean' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'left_mean' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._left_mean = value

    @builtins.property
    def center_mean(self):
        """Message field 'center_mean'."""
        return self._center_mean

    @center_mean.setter
    def center_mean(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'center_mean' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'center_mean' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._center_mean = value

    @builtins.property
    def right_mean(self):
        """Message field 'right_mean'."""
        return self._right_mean

    @right_mean.setter
    def right_mean(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'right_mean' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'right_mean' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._right_mean = value
