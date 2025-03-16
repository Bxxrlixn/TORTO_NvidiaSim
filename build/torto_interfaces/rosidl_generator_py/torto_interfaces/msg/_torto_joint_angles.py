# generated from rosidl_generator_py/resource/_idl.py.em
# with input from torto_interfaces:msg/TortoJointAngles.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TortoJointAngles(type):
    """Metaclass of message 'TortoJointAngles'."""

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
            module = import_type_support('torto_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'torto_interfaces.msg.TortoJointAngles')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__torto_joint_angles
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__torto_joint_angles
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__torto_joint_angles
            cls._TYPE_SUPPORT = module.type_support_msg__msg__torto_joint_angles
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__torto_joint_angles

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TortoJointAngles(metaclass=Metaclass_TortoJointAngles):
    """Message class 'TortoJointAngles'."""

    __slots__ = [
        '_theta_deg_fr_detoid',
        '_theta_deg_fr_femur',
        '_theta_deg_fr_tibia',
        '_theta_deg_fl_detoid',
        '_theta_deg_fl_femur',
        '_theta_deg_fl_tibia',
        '_theta_deg_br_detoid',
        '_theta_deg_br_femur',
        '_theta_deg_br_tibia',
        '_theta_deg_bl_detoid',
        '_theta_deg_bl_femur',
        '_theta_deg_bl_tibia',
    ]

    _fields_and_field_types = {
        'theta_deg_fr_detoid': 'double',
        'theta_deg_fr_femur': 'double',
        'theta_deg_fr_tibia': 'double',
        'theta_deg_fl_detoid': 'double',
        'theta_deg_fl_femur': 'double',
        'theta_deg_fl_tibia': 'double',
        'theta_deg_br_detoid': 'double',
        'theta_deg_br_femur': 'double',
        'theta_deg_br_tibia': 'double',
        'theta_deg_bl_detoid': 'double',
        'theta_deg_bl_femur': 'double',
        'theta_deg_bl_tibia': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.theta_deg_fr_detoid = kwargs.get('theta_deg_fr_detoid', float())
        self.theta_deg_fr_femur = kwargs.get('theta_deg_fr_femur', float())
        self.theta_deg_fr_tibia = kwargs.get('theta_deg_fr_tibia', float())
        self.theta_deg_fl_detoid = kwargs.get('theta_deg_fl_detoid', float())
        self.theta_deg_fl_femur = kwargs.get('theta_deg_fl_femur', float())
        self.theta_deg_fl_tibia = kwargs.get('theta_deg_fl_tibia', float())
        self.theta_deg_br_detoid = kwargs.get('theta_deg_br_detoid', float())
        self.theta_deg_br_femur = kwargs.get('theta_deg_br_femur', float())
        self.theta_deg_br_tibia = kwargs.get('theta_deg_br_tibia', float())
        self.theta_deg_bl_detoid = kwargs.get('theta_deg_bl_detoid', float())
        self.theta_deg_bl_femur = kwargs.get('theta_deg_bl_femur', float())
        self.theta_deg_bl_tibia = kwargs.get('theta_deg_bl_tibia', float())

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
        if self.theta_deg_fr_detoid != other.theta_deg_fr_detoid:
            return False
        if self.theta_deg_fr_femur != other.theta_deg_fr_femur:
            return False
        if self.theta_deg_fr_tibia != other.theta_deg_fr_tibia:
            return False
        if self.theta_deg_fl_detoid != other.theta_deg_fl_detoid:
            return False
        if self.theta_deg_fl_femur != other.theta_deg_fl_femur:
            return False
        if self.theta_deg_fl_tibia != other.theta_deg_fl_tibia:
            return False
        if self.theta_deg_br_detoid != other.theta_deg_br_detoid:
            return False
        if self.theta_deg_br_femur != other.theta_deg_br_femur:
            return False
        if self.theta_deg_br_tibia != other.theta_deg_br_tibia:
            return False
        if self.theta_deg_bl_detoid != other.theta_deg_bl_detoid:
            return False
        if self.theta_deg_bl_femur != other.theta_deg_bl_femur:
            return False
        if self.theta_deg_bl_tibia != other.theta_deg_bl_tibia:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def theta_deg_fr_detoid(self):
        """Message field 'theta_deg_fr_detoid'."""
        return self._theta_deg_fr_detoid

    @theta_deg_fr_detoid.setter
    def theta_deg_fr_detoid(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_deg_fr_detoid' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_deg_fr_detoid' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_deg_fr_detoid = value

    @builtins.property
    def theta_deg_fr_femur(self):
        """Message field 'theta_deg_fr_femur'."""
        return self._theta_deg_fr_femur

    @theta_deg_fr_femur.setter
    def theta_deg_fr_femur(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_deg_fr_femur' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_deg_fr_femur' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_deg_fr_femur = value

    @builtins.property
    def theta_deg_fr_tibia(self):
        """Message field 'theta_deg_fr_tibia'."""
        return self._theta_deg_fr_tibia

    @theta_deg_fr_tibia.setter
    def theta_deg_fr_tibia(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_deg_fr_tibia' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_deg_fr_tibia' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_deg_fr_tibia = value

    @builtins.property
    def theta_deg_fl_detoid(self):
        """Message field 'theta_deg_fl_detoid'."""
        return self._theta_deg_fl_detoid

    @theta_deg_fl_detoid.setter
    def theta_deg_fl_detoid(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_deg_fl_detoid' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_deg_fl_detoid' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_deg_fl_detoid = value

    @builtins.property
    def theta_deg_fl_femur(self):
        """Message field 'theta_deg_fl_femur'."""
        return self._theta_deg_fl_femur

    @theta_deg_fl_femur.setter
    def theta_deg_fl_femur(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_deg_fl_femur' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_deg_fl_femur' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_deg_fl_femur = value

    @builtins.property
    def theta_deg_fl_tibia(self):
        """Message field 'theta_deg_fl_tibia'."""
        return self._theta_deg_fl_tibia

    @theta_deg_fl_tibia.setter
    def theta_deg_fl_tibia(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_deg_fl_tibia' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_deg_fl_tibia' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_deg_fl_tibia = value

    @builtins.property
    def theta_deg_br_detoid(self):
        """Message field 'theta_deg_br_detoid'."""
        return self._theta_deg_br_detoid

    @theta_deg_br_detoid.setter
    def theta_deg_br_detoid(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_deg_br_detoid' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_deg_br_detoid' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_deg_br_detoid = value

    @builtins.property
    def theta_deg_br_femur(self):
        """Message field 'theta_deg_br_femur'."""
        return self._theta_deg_br_femur

    @theta_deg_br_femur.setter
    def theta_deg_br_femur(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_deg_br_femur' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_deg_br_femur' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_deg_br_femur = value

    @builtins.property
    def theta_deg_br_tibia(self):
        """Message field 'theta_deg_br_tibia'."""
        return self._theta_deg_br_tibia

    @theta_deg_br_tibia.setter
    def theta_deg_br_tibia(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_deg_br_tibia' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_deg_br_tibia' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_deg_br_tibia = value

    @builtins.property
    def theta_deg_bl_detoid(self):
        """Message field 'theta_deg_bl_detoid'."""
        return self._theta_deg_bl_detoid

    @theta_deg_bl_detoid.setter
    def theta_deg_bl_detoid(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_deg_bl_detoid' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_deg_bl_detoid' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_deg_bl_detoid = value

    @builtins.property
    def theta_deg_bl_femur(self):
        """Message field 'theta_deg_bl_femur'."""
        return self._theta_deg_bl_femur

    @theta_deg_bl_femur.setter
    def theta_deg_bl_femur(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_deg_bl_femur' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_deg_bl_femur' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_deg_bl_femur = value

    @builtins.property
    def theta_deg_bl_tibia(self):
        """Message field 'theta_deg_bl_tibia'."""
        return self._theta_deg_bl_tibia

    @theta_deg_bl_tibia.setter
    def theta_deg_bl_tibia(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_deg_bl_tibia' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_deg_bl_tibia' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_deg_bl_tibia = value
