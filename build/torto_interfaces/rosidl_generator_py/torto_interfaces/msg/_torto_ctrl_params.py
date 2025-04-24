# generated from rosidl_generator_py/resource/_idl.py.em
# with input from torto_interfaces:msg/TortoCtrlParams.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TortoCtrlParams(type):
    """Metaclass of message 'TortoCtrlParams'."""

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
                'torto_interfaces.msg.TortoCtrlParams')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__torto_ctrl_params
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__torto_ctrl_params
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__torto_ctrl_params
            cls._TYPE_SUPPORT = module.type_support_msg__msg__torto_ctrl_params
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__torto_ctrl_params

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TortoCtrlParams(metaclass=Metaclass_TortoCtrlParams):
    """Message class 'TortoCtrlParams'."""

    __slots__ = [
        '_vx',
        '_vy',
        '_vz',
        '_vangular',
        '_angle_fr',
        '_angle_fl',
        '_angle_br',
        '_angle_bl',
        '_step_offset',
        '_step_period',
        '_gait_offset_fr',
        '_gait_offset_fl',
        '_gait_offset_br',
        '_gait_offset_bl',
        '_body_position_x',
        '_body_position_y',
        '_body_position_z',
        '_body_orientation_roll',
        '_body_orientation_pitch',
        '_body_orientation_yawn',
        '_foot_position_fr_x',
        '_foot_position_fr_y',
        '_foot_position_fr_z',
        '_foot_position_fl_x',
        '_foot_position_fl_y',
        '_foot_position_fl_z',
        '_foot_position_br_x',
        '_foot_position_br_y',
        '_foot_position_br_z',
        '_foot_position_bl_x',
        '_foot_position_bl_y',
        '_foot_position_bl_z',
    ]

    _fields_and_field_types = {
        'vx': 'double',
        'vy': 'double',
        'vz': 'double',
        'vangular': 'double',
        'angle_fr': 'double',
        'angle_fl': 'double',
        'angle_br': 'double',
        'angle_bl': 'double',
        'step_offset': 'double',
        'step_period': 'double',
        'gait_offset_fr': 'double',
        'gait_offset_fl': 'double',
        'gait_offset_br': 'double',
        'gait_offset_bl': 'double',
        'body_position_x': 'double',
        'body_position_y': 'double',
        'body_position_z': 'double',
        'body_orientation_roll': 'double',
        'body_orientation_pitch': 'double',
        'body_orientation_yawn': 'double',
        'foot_position_fr_x': 'double',
        'foot_position_fr_y': 'double',
        'foot_position_fr_z': 'double',
        'foot_position_fl_x': 'double',
        'foot_position_fl_y': 'double',
        'foot_position_fl_z': 'double',
        'foot_position_br_x': 'double',
        'foot_position_br_y': 'double',
        'foot_position_br_z': 'double',
        'foot_position_bl_x': 'double',
        'foot_position_bl_y': 'double',
        'foot_position_bl_z': 'double',
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
        self.vx = kwargs.get('vx', float())
        self.vy = kwargs.get('vy', float())
        self.vz = kwargs.get('vz', float())
        self.vangular = kwargs.get('vangular', float())
        self.angle_fr = kwargs.get('angle_fr', float())
        self.angle_fl = kwargs.get('angle_fl', float())
        self.angle_br = kwargs.get('angle_br', float())
        self.angle_bl = kwargs.get('angle_bl', float())
        self.step_offset = kwargs.get('step_offset', float())
        self.step_period = kwargs.get('step_period', float())
        self.gait_offset_fr = kwargs.get('gait_offset_fr', float())
        self.gait_offset_fl = kwargs.get('gait_offset_fl', float())
        self.gait_offset_br = kwargs.get('gait_offset_br', float())
        self.gait_offset_bl = kwargs.get('gait_offset_bl', float())
        self.body_position_x = kwargs.get('body_position_x', float())
        self.body_position_y = kwargs.get('body_position_y', float())
        self.body_position_z = kwargs.get('body_position_z', float())
        self.body_orientation_roll = kwargs.get('body_orientation_roll', float())
        self.body_orientation_pitch = kwargs.get('body_orientation_pitch', float())
        self.body_orientation_yawn = kwargs.get('body_orientation_yawn', float())
        self.foot_position_fr_x = kwargs.get('foot_position_fr_x', float())
        self.foot_position_fr_y = kwargs.get('foot_position_fr_y', float())
        self.foot_position_fr_z = kwargs.get('foot_position_fr_z', float())
        self.foot_position_fl_x = kwargs.get('foot_position_fl_x', float())
        self.foot_position_fl_y = kwargs.get('foot_position_fl_y', float())
        self.foot_position_fl_z = kwargs.get('foot_position_fl_z', float())
        self.foot_position_br_x = kwargs.get('foot_position_br_x', float())
        self.foot_position_br_y = kwargs.get('foot_position_br_y', float())
        self.foot_position_br_z = kwargs.get('foot_position_br_z', float())
        self.foot_position_bl_x = kwargs.get('foot_position_bl_x', float())
        self.foot_position_bl_y = kwargs.get('foot_position_bl_y', float())
        self.foot_position_bl_z = kwargs.get('foot_position_bl_z', float())

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
        if self.vx != other.vx:
            return False
        if self.vy != other.vy:
            return False
        if self.vz != other.vz:
            return False
        if self.vangular != other.vangular:
            return False
        if self.angle_fr != other.angle_fr:
            return False
        if self.angle_fl != other.angle_fl:
            return False
        if self.angle_br != other.angle_br:
            return False
        if self.angle_bl != other.angle_bl:
            return False
        if self.step_offset != other.step_offset:
            return False
        if self.step_period != other.step_period:
            return False
        if self.gait_offset_fr != other.gait_offset_fr:
            return False
        if self.gait_offset_fl != other.gait_offset_fl:
            return False
        if self.gait_offset_br != other.gait_offset_br:
            return False
        if self.gait_offset_bl != other.gait_offset_bl:
            return False
        if self.body_position_x != other.body_position_x:
            return False
        if self.body_position_y != other.body_position_y:
            return False
        if self.body_position_z != other.body_position_z:
            return False
        if self.body_orientation_roll != other.body_orientation_roll:
            return False
        if self.body_orientation_pitch != other.body_orientation_pitch:
            return False
        if self.body_orientation_yawn != other.body_orientation_yawn:
            return False
        if self.foot_position_fr_x != other.foot_position_fr_x:
            return False
        if self.foot_position_fr_y != other.foot_position_fr_y:
            return False
        if self.foot_position_fr_z != other.foot_position_fr_z:
            return False
        if self.foot_position_fl_x != other.foot_position_fl_x:
            return False
        if self.foot_position_fl_y != other.foot_position_fl_y:
            return False
        if self.foot_position_fl_z != other.foot_position_fl_z:
            return False
        if self.foot_position_br_x != other.foot_position_br_x:
            return False
        if self.foot_position_br_y != other.foot_position_br_y:
            return False
        if self.foot_position_br_z != other.foot_position_br_z:
            return False
        if self.foot_position_bl_x != other.foot_position_bl_x:
            return False
        if self.foot_position_bl_y != other.foot_position_bl_y:
            return False
        if self.foot_position_bl_z != other.foot_position_bl_z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def vx(self):
        """Message field 'vx'."""
        return self._vx

    @vx.setter
    def vx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vx' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vx' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vx = value

    @builtins.property
    def vy(self):
        """Message field 'vy'."""
        return self._vy

    @vy.setter
    def vy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vy = value

    @builtins.property
    def vz(self):
        """Message field 'vz'."""
        return self._vz

    @vz.setter
    def vz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vz' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vz' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vz = value

    @builtins.property
    def vangular(self):
        """Message field 'vangular'."""
        return self._vangular

    @vangular.setter
    def vangular(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vangular' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vangular' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vangular = value

    @builtins.property
    def angle_fr(self):
        """Message field 'angle_fr'."""
        return self._angle_fr

    @angle_fr.setter
    def angle_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_fr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_fr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_fr = value

    @builtins.property
    def angle_fl(self):
        """Message field 'angle_fl'."""
        return self._angle_fl

    @angle_fl.setter
    def angle_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_fl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_fl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_fl = value

    @builtins.property
    def angle_br(self):
        """Message field 'angle_br'."""
        return self._angle_br

    @angle_br.setter
    def angle_br(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_br' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_br' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_br = value

    @builtins.property
    def angle_bl(self):
        """Message field 'angle_bl'."""
        return self._angle_bl

    @angle_bl.setter
    def angle_bl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_bl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_bl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_bl = value

    @builtins.property
    def step_offset(self):
        """Message field 'step_offset'."""
        return self._step_offset

    @step_offset.setter
    def step_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'step_offset' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'step_offset' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._step_offset = value

    @builtins.property
    def step_period(self):
        """Message field 'step_period'."""
        return self._step_period

    @step_period.setter
    def step_period(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'step_period' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'step_period' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._step_period = value

    @builtins.property
    def gait_offset_fr(self):
        """Message field 'gait_offset_fr'."""
        return self._gait_offset_fr

    @gait_offset_fr.setter
    def gait_offset_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gait_offset_fr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gait_offset_fr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gait_offset_fr = value

    @builtins.property
    def gait_offset_fl(self):
        """Message field 'gait_offset_fl'."""
        return self._gait_offset_fl

    @gait_offset_fl.setter
    def gait_offset_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gait_offset_fl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gait_offset_fl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gait_offset_fl = value

    @builtins.property
    def gait_offset_br(self):
        """Message field 'gait_offset_br'."""
        return self._gait_offset_br

    @gait_offset_br.setter
    def gait_offset_br(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gait_offset_br' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gait_offset_br' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gait_offset_br = value

    @builtins.property
    def gait_offset_bl(self):
        """Message field 'gait_offset_bl'."""
        return self._gait_offset_bl

    @gait_offset_bl.setter
    def gait_offset_bl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gait_offset_bl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gait_offset_bl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gait_offset_bl = value

    @builtins.property
    def body_position_x(self):
        """Message field 'body_position_x'."""
        return self._body_position_x

    @body_position_x.setter
    def body_position_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'body_position_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'body_position_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._body_position_x = value

    @builtins.property
    def body_position_y(self):
        """Message field 'body_position_y'."""
        return self._body_position_y

    @body_position_y.setter
    def body_position_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'body_position_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'body_position_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._body_position_y = value

    @builtins.property
    def body_position_z(self):
        """Message field 'body_position_z'."""
        return self._body_position_z

    @body_position_z.setter
    def body_position_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'body_position_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'body_position_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._body_position_z = value

    @builtins.property
    def body_orientation_roll(self):
        """Message field 'body_orientation_roll'."""
        return self._body_orientation_roll

    @body_orientation_roll.setter
    def body_orientation_roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'body_orientation_roll' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'body_orientation_roll' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._body_orientation_roll = value

    @builtins.property
    def body_orientation_pitch(self):
        """Message field 'body_orientation_pitch'."""
        return self._body_orientation_pitch

    @body_orientation_pitch.setter
    def body_orientation_pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'body_orientation_pitch' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'body_orientation_pitch' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._body_orientation_pitch = value

    @builtins.property
    def body_orientation_yawn(self):
        """Message field 'body_orientation_yawn'."""
        return self._body_orientation_yawn

    @body_orientation_yawn.setter
    def body_orientation_yawn(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'body_orientation_yawn' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'body_orientation_yawn' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._body_orientation_yawn = value

    @builtins.property
    def foot_position_fr_x(self):
        """Message field 'foot_position_fr_x'."""
        return self._foot_position_fr_x

    @foot_position_fr_x.setter
    def foot_position_fr_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'foot_position_fr_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'foot_position_fr_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._foot_position_fr_x = value

    @builtins.property
    def foot_position_fr_y(self):
        """Message field 'foot_position_fr_y'."""
        return self._foot_position_fr_y

    @foot_position_fr_y.setter
    def foot_position_fr_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'foot_position_fr_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'foot_position_fr_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._foot_position_fr_y = value

    @builtins.property
    def foot_position_fr_z(self):
        """Message field 'foot_position_fr_z'."""
        return self._foot_position_fr_z

    @foot_position_fr_z.setter
    def foot_position_fr_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'foot_position_fr_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'foot_position_fr_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._foot_position_fr_z = value

    @builtins.property
    def foot_position_fl_x(self):
        """Message field 'foot_position_fl_x'."""
        return self._foot_position_fl_x

    @foot_position_fl_x.setter
    def foot_position_fl_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'foot_position_fl_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'foot_position_fl_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._foot_position_fl_x = value

    @builtins.property
    def foot_position_fl_y(self):
        """Message field 'foot_position_fl_y'."""
        return self._foot_position_fl_y

    @foot_position_fl_y.setter
    def foot_position_fl_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'foot_position_fl_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'foot_position_fl_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._foot_position_fl_y = value

    @builtins.property
    def foot_position_fl_z(self):
        """Message field 'foot_position_fl_z'."""
        return self._foot_position_fl_z

    @foot_position_fl_z.setter
    def foot_position_fl_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'foot_position_fl_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'foot_position_fl_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._foot_position_fl_z = value

    @builtins.property
    def foot_position_br_x(self):
        """Message field 'foot_position_br_x'."""
        return self._foot_position_br_x

    @foot_position_br_x.setter
    def foot_position_br_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'foot_position_br_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'foot_position_br_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._foot_position_br_x = value

    @builtins.property
    def foot_position_br_y(self):
        """Message field 'foot_position_br_y'."""
        return self._foot_position_br_y

    @foot_position_br_y.setter
    def foot_position_br_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'foot_position_br_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'foot_position_br_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._foot_position_br_y = value

    @builtins.property
    def foot_position_br_z(self):
        """Message field 'foot_position_br_z'."""
        return self._foot_position_br_z

    @foot_position_br_z.setter
    def foot_position_br_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'foot_position_br_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'foot_position_br_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._foot_position_br_z = value

    @builtins.property
    def foot_position_bl_x(self):
        """Message field 'foot_position_bl_x'."""
        return self._foot_position_bl_x

    @foot_position_bl_x.setter
    def foot_position_bl_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'foot_position_bl_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'foot_position_bl_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._foot_position_bl_x = value

    @builtins.property
    def foot_position_bl_y(self):
        """Message field 'foot_position_bl_y'."""
        return self._foot_position_bl_y

    @foot_position_bl_y.setter
    def foot_position_bl_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'foot_position_bl_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'foot_position_bl_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._foot_position_bl_y = value

    @builtins.property
    def foot_position_bl_z(self):
        """Message field 'foot_position_bl_z'."""
        return self._foot_position_bl_z

    @foot_position_bl_z.setter
    def foot_position_bl_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'foot_position_bl_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'foot_position_bl_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._foot_position_bl_z = value
