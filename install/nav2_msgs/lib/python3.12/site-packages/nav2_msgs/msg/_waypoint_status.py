# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nav2_msgs:msg/WaypointStatus.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WaypointStatus(type):
    """Metaclass of message 'WaypointStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PENDING': 0,
        'COMPLETED': 1,
        'SKIPPED': 2,
        'FAILED': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.msg.WaypointStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__waypoint_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__waypoint_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__waypoint_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__waypoint_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__waypoint_status

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PENDING': cls.__constants['PENDING'],
            'COMPLETED': cls.__constants['COMPLETED'],
            'SKIPPED': cls.__constants['SKIPPED'],
            'FAILED': cls.__constants['FAILED'],
        }

    @property
    def PENDING(self):
        """Message constant 'PENDING'."""
        return Metaclass_WaypointStatus.__constants['PENDING']

    @property
    def COMPLETED(self):
        """Message constant 'COMPLETED'."""
        return Metaclass_WaypointStatus.__constants['COMPLETED']

    @property
    def SKIPPED(self):
        """Message constant 'SKIPPED'."""
        return Metaclass_WaypointStatus.__constants['SKIPPED']

    @property
    def FAILED(self):
        """Message constant 'FAILED'."""
        return Metaclass_WaypointStatus.__constants['FAILED']


class WaypointStatus(metaclass=Metaclass_WaypointStatus):
    """
    Message class 'WaypointStatus'.

    Constants:
      PENDING
      COMPLETED
      SKIPPED
      FAILED
    """

    __slots__ = [
        '_waypoint_status',
        '_waypoint_index',
        '_waypoint_pose',
        '_error_code',
        '_error_msg',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'waypoint_status': 'uint8',
        'waypoint_index': 'uint32',
        'waypoint_pose': 'geometry_msgs/PoseStamped',
        'error_code': 'uint16',
        'error_msg': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.waypoint_status = kwargs.get('waypoint_status', int())
        self.waypoint_index = kwargs.get('waypoint_index', int())
        from geometry_msgs.msg import PoseStamped
        self.waypoint_pose = kwargs.get('waypoint_pose', PoseStamped())
        self.error_code = kwargs.get('error_code', int())
        self.error_msg = kwargs.get('error_msg', str())

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
        if self.waypoint_status != other.waypoint_status:
            return False
        if self.waypoint_index != other.waypoint_index:
            return False
        if self.waypoint_pose != other.waypoint_pose:
            return False
        if self.error_code != other.error_code:
            return False
        if self.error_msg != other.error_msg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def waypoint_status(self):
        """Message field 'waypoint_status'."""
        return self._waypoint_status

    @waypoint_status.setter
    def waypoint_status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'waypoint_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'waypoint_status' field must be an unsigned integer in [0, 255]"
        self._waypoint_status = value

    @builtins.property
    def waypoint_index(self):
        """Message field 'waypoint_index'."""
        return self._waypoint_index

    @waypoint_index.setter
    def waypoint_index(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'waypoint_index' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'waypoint_index' field must be an unsigned integer in [0, 4294967295]"
        self._waypoint_index = value

    @builtins.property
    def waypoint_pose(self):
        """Message field 'waypoint_pose'."""
        return self._waypoint_pose

    @waypoint_pose.setter
    def waypoint_pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'waypoint_pose' field must be a sub message of type 'PoseStamped'"
        self._waypoint_pose = value

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'error_code' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'error_code' field must be an unsigned integer in [0, 65535]"
        self._error_code = value

    @builtins.property
    def error_msg(self):
        """Message field 'error_msg'."""
        return self._error_msg

    @error_msg.setter
    def error_msg(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'error_msg' field must be of type 'str'"
        self._error_msg = value
