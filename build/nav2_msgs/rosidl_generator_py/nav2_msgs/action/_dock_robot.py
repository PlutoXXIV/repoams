# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nav2_msgs:action/DockRobot.idl
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


class Metaclass_DockRobot_Goal(type):
    """Metaclass of message 'DockRobot_Goal'."""

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
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.action.DockRobot_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dock_robot__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dock_robot__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dock_robot__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__dock_robot__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dock_robot__goal

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'USE_DOCK_ID__DEFAULT': True,
            'MAX_STAGING_TIME__DEFAULT': 1000.0,
            'NAVIGATE_TO_STAGING_POSE__DEFAULT': True,
        }

    @property
    def USE_DOCK_ID__DEFAULT(cls):
        """Return default value for message field 'use_dock_id'."""
        return True

    @property
    def MAX_STAGING_TIME__DEFAULT(cls):
        """Return default value for message field 'max_staging_time'."""
        return 1000.0

    @property
    def NAVIGATE_TO_STAGING_POSE__DEFAULT(cls):
        """Return default value for message field 'navigate_to_staging_pose'."""
        return True


class DockRobot_Goal(metaclass=Metaclass_DockRobot_Goal):
    """Message class 'DockRobot_Goal'."""

    __slots__ = [
        '_use_dock_id',
        '_dock_id',
        '_dock_pose',
        '_dock_type',
        '_max_staging_time',
        '_navigate_to_staging_pose',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'use_dock_id': 'boolean',
        'dock_id': 'string',
        'dock_pose': 'geometry_msgs/PoseStamped',
        'dock_type': 'string',
        'max_staging_time': 'float',
        'navigate_to_staging_pose': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.use_dock_id = kwargs.get(
            'use_dock_id', DockRobot_Goal.USE_DOCK_ID__DEFAULT)
        self.dock_id = kwargs.get('dock_id', str())
        from geometry_msgs.msg import PoseStamped
        self.dock_pose = kwargs.get('dock_pose', PoseStamped())
        self.dock_type = kwargs.get('dock_type', str())
        self.max_staging_time = kwargs.get(
            'max_staging_time', DockRobot_Goal.MAX_STAGING_TIME__DEFAULT)
        self.navigate_to_staging_pose = kwargs.get(
            'navigate_to_staging_pose', DockRobot_Goal.NAVIGATE_TO_STAGING_POSE__DEFAULT)

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
        if self.use_dock_id != other.use_dock_id:
            return False
        if self.dock_id != other.dock_id:
            return False
        if self.dock_pose != other.dock_pose:
            return False
        if self.dock_type != other.dock_type:
            return False
        if self.max_staging_time != other.max_staging_time:
            return False
        if self.navigate_to_staging_pose != other.navigate_to_staging_pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def use_dock_id(self):
        """Message field 'use_dock_id'."""
        return self._use_dock_id

    @use_dock_id.setter
    def use_dock_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'use_dock_id' field must be of type 'bool'"
        self._use_dock_id = value

    @builtins.property
    def dock_id(self):
        """Message field 'dock_id'."""
        return self._dock_id

    @dock_id.setter
    def dock_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'dock_id' field must be of type 'str'"
        self._dock_id = value

    @builtins.property
    def dock_pose(self):
        """Message field 'dock_pose'."""
        return self._dock_pose

    @dock_pose.setter
    def dock_pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'dock_pose' field must be a sub message of type 'PoseStamped'"
        self._dock_pose = value

    @builtins.property
    def dock_type(self):
        """Message field 'dock_type'."""
        return self._dock_type

    @dock_type.setter
    def dock_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'dock_type' field must be of type 'str'"
        self._dock_type = value

    @builtins.property
    def max_staging_time(self):
        """Message field 'max_staging_time'."""
        return self._max_staging_time

    @max_staging_time.setter
    def max_staging_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_staging_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_staging_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_staging_time = value

    @builtins.property
    def navigate_to_staging_pose(self):
        """Message field 'navigate_to_staging_pose'."""
        return self._navigate_to_staging_pose

    @navigate_to_staging_pose.setter
    def navigate_to_staging_pose(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'navigate_to_staging_pose' field must be of type 'bool'"
        self._navigate_to_staging_pose = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DockRobot_Result(type):
    """Metaclass of message 'DockRobot_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'DOCK_NOT_IN_DB': 901,
        'DOCK_NOT_VALID': 902,
        'FAILED_TO_STAGE': 903,
        'FAILED_TO_DETECT_DOCK': 904,
        'FAILED_TO_CONTROL': 905,
        'FAILED_TO_CHARGE': 906,
        'TIMEOUT': 907,
        'UNKNOWN': 999,
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
                'nav2_msgs.action.DockRobot_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dock_robot__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dock_robot__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dock_robot__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__dock_robot__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dock_robot__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'DOCK_NOT_IN_DB': cls.__constants['DOCK_NOT_IN_DB'],
            'DOCK_NOT_VALID': cls.__constants['DOCK_NOT_VALID'],
            'FAILED_TO_STAGE': cls.__constants['FAILED_TO_STAGE'],
            'FAILED_TO_DETECT_DOCK': cls.__constants['FAILED_TO_DETECT_DOCK'],
            'FAILED_TO_CONTROL': cls.__constants['FAILED_TO_CONTROL'],
            'FAILED_TO_CHARGE': cls.__constants['FAILED_TO_CHARGE'],
            'TIMEOUT': cls.__constants['TIMEOUT'],
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'SUCCESS__DEFAULT': True,
            'ERROR_CODE__DEFAULT': 0,
            'NUM_RETRIES__DEFAULT': 0,
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_DockRobot_Result.__constants['NONE']

    @property
    def DOCK_NOT_IN_DB(self):
        """Message constant 'DOCK_NOT_IN_DB'."""
        return Metaclass_DockRobot_Result.__constants['DOCK_NOT_IN_DB']

    @property
    def DOCK_NOT_VALID(self):
        """Message constant 'DOCK_NOT_VALID'."""
        return Metaclass_DockRobot_Result.__constants['DOCK_NOT_VALID']

    @property
    def FAILED_TO_STAGE(self):
        """Message constant 'FAILED_TO_STAGE'."""
        return Metaclass_DockRobot_Result.__constants['FAILED_TO_STAGE']

    @property
    def FAILED_TO_DETECT_DOCK(self):
        """Message constant 'FAILED_TO_DETECT_DOCK'."""
        return Metaclass_DockRobot_Result.__constants['FAILED_TO_DETECT_DOCK']

    @property
    def FAILED_TO_CONTROL(self):
        """Message constant 'FAILED_TO_CONTROL'."""
        return Metaclass_DockRobot_Result.__constants['FAILED_TO_CONTROL']

    @property
    def FAILED_TO_CHARGE(self):
        """Message constant 'FAILED_TO_CHARGE'."""
        return Metaclass_DockRobot_Result.__constants['FAILED_TO_CHARGE']

    @property
    def TIMEOUT(self):
        """Message constant 'TIMEOUT'."""
        return Metaclass_DockRobot_Result.__constants['TIMEOUT']

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_DockRobot_Result.__constants['UNKNOWN']

    @property
    def SUCCESS__DEFAULT(cls):
        """Return default value for message field 'success'."""
        return True

    @property
    def ERROR_CODE__DEFAULT(cls):
        """Return default value for message field 'error_code'."""
        return 0

    @property
    def NUM_RETRIES__DEFAULT(cls):
        """Return default value for message field 'num_retries'."""
        return 0


class DockRobot_Result(metaclass=Metaclass_DockRobot_Result):
    """
    Message class 'DockRobot_Result'.

    Constants:
      NONE
      DOCK_NOT_IN_DB
      DOCK_NOT_VALID
      FAILED_TO_STAGE
      FAILED_TO_DETECT_DOCK
      FAILED_TO_CONTROL
      FAILED_TO_CHARGE
      TIMEOUT
      UNKNOWN
    """

    __slots__ = [
        '_success',
        '_error_code',
        '_num_retries',
        '_error_msg',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'error_code': 'uint16',
        'num_retries': 'uint16',
        'error_msg': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
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
        self.success = kwargs.get(
            'success', DockRobot_Result.SUCCESS__DEFAULT)
        self.error_code = kwargs.get(
            'error_code', DockRobot_Result.ERROR_CODE__DEFAULT)
        self.num_retries = kwargs.get(
            'num_retries', DockRobot_Result.NUM_RETRIES__DEFAULT)
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
        if self.success != other.success:
            return False
        if self.error_code != other.error_code:
            return False
        if self.num_retries != other.num_retries:
            return False
        if self.error_msg != other.error_msg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

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
    def num_retries(self):
        """Message field 'num_retries'."""
        return self._num_retries

    @num_retries.setter
    def num_retries(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num_retries' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'num_retries' field must be an unsigned integer in [0, 65535]"
        self._num_retries = value

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DockRobot_Feedback(type):
    """Metaclass of message 'DockRobot_Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'NAV_TO_STAGING_POSE': 1,
        'INITIAL_PERCEPTION': 2,
        'CONTROLLING': 3,
        'WAIT_FOR_CHARGE': 4,
        'RETRY': 5,
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
                'nav2_msgs.action.DockRobot_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dock_robot__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dock_robot__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dock_robot__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__dock_robot__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dock_robot__feedback

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'NAV_TO_STAGING_POSE': cls.__constants['NAV_TO_STAGING_POSE'],
            'INITIAL_PERCEPTION': cls.__constants['INITIAL_PERCEPTION'],
            'CONTROLLING': cls.__constants['CONTROLLING'],
            'WAIT_FOR_CHARGE': cls.__constants['WAIT_FOR_CHARGE'],
            'RETRY': cls.__constants['RETRY'],
            'NUM_RETRIES__DEFAULT': 0,
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_DockRobot_Feedback.__constants['NONE']

    @property
    def NAV_TO_STAGING_POSE(self):
        """Message constant 'NAV_TO_STAGING_POSE'."""
        return Metaclass_DockRobot_Feedback.__constants['NAV_TO_STAGING_POSE']

    @property
    def INITIAL_PERCEPTION(self):
        """Message constant 'INITIAL_PERCEPTION'."""
        return Metaclass_DockRobot_Feedback.__constants['INITIAL_PERCEPTION']

    @property
    def CONTROLLING(self):
        """Message constant 'CONTROLLING'."""
        return Metaclass_DockRobot_Feedback.__constants['CONTROLLING']

    @property
    def WAIT_FOR_CHARGE(self):
        """Message constant 'WAIT_FOR_CHARGE'."""
        return Metaclass_DockRobot_Feedback.__constants['WAIT_FOR_CHARGE']

    @property
    def RETRY(self):
        """Message constant 'RETRY'."""
        return Metaclass_DockRobot_Feedback.__constants['RETRY']

    @property
    def NUM_RETRIES__DEFAULT(cls):
        """Return default value for message field 'num_retries'."""
        return 0


class DockRobot_Feedback(metaclass=Metaclass_DockRobot_Feedback):
    """
    Message class 'DockRobot_Feedback'.

    Constants:
      NONE
      NAV_TO_STAGING_POSE
      INITIAL_PERCEPTION
      CONTROLLING
      WAIT_FOR_CHARGE
      RETRY
    """

    __slots__ = [
        '_state',
        '_docking_time',
        '_num_retries',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'state': 'uint16',
        'docking_time': 'builtin_interfaces/Duration',
        'num_retries': 'uint16',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
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
        self.state = kwargs.get('state', int())
        from builtin_interfaces.msg import Duration
        self.docking_time = kwargs.get('docking_time', Duration())
        self.num_retries = kwargs.get(
            'num_retries', DockRobot_Feedback.NUM_RETRIES__DEFAULT)

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
        if self.state != other.state:
            return False
        if self.docking_time != other.docking_time:
            return False
        if self.num_retries != other.num_retries:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'state' field must be an unsigned integer in [0, 65535]"
        self._state = value

    @builtins.property
    def docking_time(self):
        """Message field 'docking_time'."""
        return self._docking_time

    @docking_time.setter
    def docking_time(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'docking_time' field must be a sub message of type 'Duration'"
        self._docking_time = value

    @builtins.property
    def num_retries(self):
        """Message field 'num_retries'."""
        return self._num_retries

    @num_retries.setter
    def num_retries(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num_retries' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'num_retries' field must be an unsigned integer in [0, 65535]"
        self._num_retries = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DockRobot_SendGoal_Request(type):
    """Metaclass of message 'DockRobot_SendGoal_Request'."""

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
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.action.DockRobot_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dock_robot__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dock_robot__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dock_robot__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__dock_robot__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dock_robot__send_goal__request

            from nav2_msgs.action import DockRobot
            if DockRobot.Goal.__class__._TYPE_SUPPORT is None:
                DockRobot.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DockRobot_SendGoal_Request(metaclass=Metaclass_DockRobot_SendGoal_Request):
    """Message class 'DockRobot_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'nav2_msgs/DockRobot_Goal',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav2_msgs', 'action'], 'DockRobot_Goal'),  # noqa: E501
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
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from nav2_msgs.action._dock_robot import DockRobot_Goal
        self.goal = kwargs.get('goal', DockRobot_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if self._check_fields:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if self._check_fields:
            from nav2_msgs.action._dock_robot import DockRobot_Goal
            assert \
                isinstance(value, DockRobot_Goal), \
                "The 'goal' field must be a sub message of type 'DockRobot_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DockRobot_SendGoal_Response(type):
    """Metaclass of message 'DockRobot_SendGoal_Response'."""

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
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.action.DockRobot_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dock_robot__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dock_robot__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dock_robot__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__dock_robot__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dock_robot__send_goal__response

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


class DockRobot_SendGoal_Response(metaclass=Metaclass_DockRobot_SendGoal_Response):
    """Message class 'DockRobot_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
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
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DockRobot_SendGoal_Event(type):
    """Metaclass of message 'DockRobot_SendGoal_Event'."""

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
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.action.DockRobot_SendGoal_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dock_robot__send_goal__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dock_robot__send_goal__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dock_robot__send_goal__event
            cls._TYPE_SUPPORT = module.type_support_msg__action__dock_robot__send_goal__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dock_robot__send_goal__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DockRobot_SendGoal_Event(metaclass=Metaclass_DockRobot_SendGoal_Event):
    """Message class 'DockRobot_SendGoal_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<nav2_msgs/DockRobot_SendGoal_Request, 1>',
        'response': 'sequence<nav2_msgs/DockRobot_SendGoal_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['nav2_msgs', 'action'], 'DockRobot_SendGoal_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['nav2_msgs', 'action'], 'DockRobot_SendGoal_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from nav2_msgs.action import DockRobot_SendGoal_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, DockRobot_SendGoal_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'DockRobot_SendGoal_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from nav2_msgs.action import DockRobot_SendGoal_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, DockRobot_SendGoal_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'DockRobot_SendGoal_Response'"
        self._response = value


class Metaclass_DockRobot_SendGoal(type):
    """Metaclass of service 'DockRobot_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.action.DockRobot_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__dock_robot__send_goal

            from nav2_msgs.action import _dock_robot
            if _dock_robot.Metaclass_DockRobot_SendGoal_Request._TYPE_SUPPORT is None:
                _dock_robot.Metaclass_DockRobot_SendGoal_Request.__import_type_support__()
            if _dock_robot.Metaclass_DockRobot_SendGoal_Response._TYPE_SUPPORT is None:
                _dock_robot.Metaclass_DockRobot_SendGoal_Response.__import_type_support__()
            if _dock_robot.Metaclass_DockRobot_SendGoal_Event._TYPE_SUPPORT is None:
                _dock_robot.Metaclass_DockRobot_SendGoal_Event.__import_type_support__()


class DockRobot_SendGoal(metaclass=Metaclass_DockRobot_SendGoal):
    from nav2_msgs.action._dock_robot import DockRobot_SendGoal_Request as Request
    from nav2_msgs.action._dock_robot import DockRobot_SendGoal_Response as Response
    from nav2_msgs.action._dock_robot import DockRobot_SendGoal_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DockRobot_GetResult_Request(type):
    """Metaclass of message 'DockRobot_GetResult_Request'."""

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
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.action.DockRobot_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dock_robot__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dock_robot__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dock_robot__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__dock_robot__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dock_robot__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DockRobot_GetResult_Request(metaclass=Metaclass_DockRobot_GetResult_Request):
    """Message class 'DockRobot_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
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
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if self._check_fields:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DockRobot_GetResult_Response(type):
    """Metaclass of message 'DockRobot_GetResult_Response'."""

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
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.action.DockRobot_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dock_robot__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dock_robot__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dock_robot__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__dock_robot__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dock_robot__get_result__response

            from nav2_msgs.action import DockRobot
            if DockRobot.Result.__class__._TYPE_SUPPORT is None:
                DockRobot.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DockRobot_GetResult_Response(metaclass=Metaclass_DockRobot_GetResult_Response):
    """Message class 'DockRobot_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'nav2_msgs/DockRobot_Result',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav2_msgs', 'action'], 'DockRobot_Result'),  # noqa: E501
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
        self.status = kwargs.get('status', int())
        from nav2_msgs.action._dock_robot import DockRobot_Result
        self.result = kwargs.get('result', DockRobot_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if self._check_fields:
            from nav2_msgs.action._dock_robot import DockRobot_Result
            assert \
                isinstance(value, DockRobot_Result), \
                "The 'result' field must be a sub message of type 'DockRobot_Result'"
        self._result = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DockRobot_GetResult_Event(type):
    """Metaclass of message 'DockRobot_GetResult_Event'."""

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
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.action.DockRobot_GetResult_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dock_robot__get_result__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dock_robot__get_result__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dock_robot__get_result__event
            cls._TYPE_SUPPORT = module.type_support_msg__action__dock_robot__get_result__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dock_robot__get_result__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DockRobot_GetResult_Event(metaclass=Metaclass_DockRobot_GetResult_Event):
    """Message class 'DockRobot_GetResult_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<nav2_msgs/DockRobot_GetResult_Request, 1>',
        'response': 'sequence<nav2_msgs/DockRobot_GetResult_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['nav2_msgs', 'action'], 'DockRobot_GetResult_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['nav2_msgs', 'action'], 'DockRobot_GetResult_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from nav2_msgs.action import DockRobot_GetResult_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, DockRobot_GetResult_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'DockRobot_GetResult_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from nav2_msgs.action import DockRobot_GetResult_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, DockRobot_GetResult_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'DockRobot_GetResult_Response'"
        self._response = value


class Metaclass_DockRobot_GetResult(type):
    """Metaclass of service 'DockRobot_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.action.DockRobot_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__dock_robot__get_result

            from nav2_msgs.action import _dock_robot
            if _dock_robot.Metaclass_DockRobot_GetResult_Request._TYPE_SUPPORT is None:
                _dock_robot.Metaclass_DockRobot_GetResult_Request.__import_type_support__()
            if _dock_robot.Metaclass_DockRobot_GetResult_Response._TYPE_SUPPORT is None:
                _dock_robot.Metaclass_DockRobot_GetResult_Response.__import_type_support__()
            if _dock_robot.Metaclass_DockRobot_GetResult_Event._TYPE_SUPPORT is None:
                _dock_robot.Metaclass_DockRobot_GetResult_Event.__import_type_support__()


class DockRobot_GetResult(metaclass=Metaclass_DockRobot_GetResult):
    from nav2_msgs.action._dock_robot import DockRobot_GetResult_Request as Request
    from nav2_msgs.action._dock_robot import DockRobot_GetResult_Response as Response
    from nav2_msgs.action._dock_robot import DockRobot_GetResult_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DockRobot_FeedbackMessage(type):
    """Metaclass of message 'DockRobot_FeedbackMessage'."""

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
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.action.DockRobot_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dock_robot__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dock_robot__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dock_robot__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__dock_robot__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dock_robot__feedback_message

            from nav2_msgs.action import DockRobot
            if DockRobot.Feedback.__class__._TYPE_SUPPORT is None:
                DockRobot.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DockRobot_FeedbackMessage(metaclass=Metaclass_DockRobot_FeedbackMessage):
    """Message class 'DockRobot_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'nav2_msgs/DockRobot_Feedback',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav2_msgs', 'action'], 'DockRobot_Feedback'),  # noqa: E501
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
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from nav2_msgs.action._dock_robot import DockRobot_Feedback
        self.feedback = kwargs.get('feedback', DockRobot_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if self._check_fields:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if self._check_fields:
            from nav2_msgs.action._dock_robot import DockRobot_Feedback
            assert \
                isinstance(value, DockRobot_Feedback), \
                "The 'feedback' field must be a sub message of type 'DockRobot_Feedback'"
        self._feedback = value


class Metaclass_DockRobot(type):
    """Metaclass of action 'DockRobot'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.action.DockRobot')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__dock_robot

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from nav2_msgs.action import _dock_robot
            if _dock_robot.Metaclass_DockRobot_SendGoal._TYPE_SUPPORT is None:
                _dock_robot.Metaclass_DockRobot_SendGoal.__import_type_support__()
            if _dock_robot.Metaclass_DockRobot_GetResult._TYPE_SUPPORT is None:
                _dock_robot.Metaclass_DockRobot_GetResult.__import_type_support__()
            if _dock_robot.Metaclass_DockRobot_FeedbackMessage._TYPE_SUPPORT is None:
                _dock_robot.Metaclass_DockRobot_FeedbackMessage.__import_type_support__()


class DockRobot(metaclass=Metaclass_DockRobot):

    # The goal message defined in the action definition.
    from nav2_msgs.action._dock_robot import DockRobot_Goal as Goal
    # The result message defined in the action definition.
    from nav2_msgs.action._dock_robot import DockRobot_Result as Result
    # The feedback message defined in the action definition.
    from nav2_msgs.action._dock_robot import DockRobot_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from nav2_msgs.action._dock_robot import DockRobot_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from nav2_msgs.action._dock_robot import DockRobot_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from nav2_msgs.action._dock_robot import DockRobot_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
