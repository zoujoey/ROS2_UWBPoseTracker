# generated from rosidl_generator_py/resource/_idl.py.em
# with input from decawave_interfaces:msg/DecaRange.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DecaRange(type):
    """Metaclass of message 'DecaRange'."""

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
            module = import_type_support('decawave_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'decawave_interfaces.msg.DecaRange')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__deca_range
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__deca_range
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__deca_range
            cls._TYPE_SUPPORT = module.type_support_msg__msg__deca_range
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__deca_range

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DecaRange(metaclass=Metaclass_DecaRange):
    """Message class 'DecaRange'."""

    __slots__ = [
        '_header',
        '_tag_id',
        '_anch_id1',
        '_range1',
        '_anch_id2',
        '_range2',
        '_anch_id3',
        '_range3',
        '_anch_id4',
        '_range4',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'tag_id': 'string',
        'anch_id1': 'string',
        'range1': 'float',
        'anch_id2': 'string',
        'range2': 'float',
        'anch_id3': 'string',
        'range3': 'float',
        'anch_id4': 'string',
        'range4': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.tag_id = kwargs.get('tag_id', str())
        self.anch_id1 = kwargs.get('anch_id1', str())
        self.range1 = kwargs.get('range1', float())
        self.anch_id2 = kwargs.get('anch_id2', str())
        self.range2 = kwargs.get('range2', float())
        self.anch_id3 = kwargs.get('anch_id3', str())
        self.range3 = kwargs.get('range3', float())
        self.anch_id4 = kwargs.get('anch_id4', str())
        self.range4 = kwargs.get('range4', float())

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
        if self.header != other.header:
            return False
        if self.tag_id != other.tag_id:
            return False
        if self.anch_id1 != other.anch_id1:
            return False
        if self.range1 != other.range1:
            return False
        if self.anch_id2 != other.anch_id2:
            return False
        if self.range2 != other.range2:
            return False
        if self.anch_id3 != other.anch_id3:
            return False
        if self.range3 != other.range3:
            return False
        if self.anch_id4 != other.anch_id4:
            return False
        if self.range4 != other.range4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def tag_id(self):
        """Message field 'tag_id'."""
        return self._tag_id

    @tag_id.setter
    def tag_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'tag_id' field must be of type 'str'"
        self._tag_id = value

    @property
    def anch_id1(self):
        """Message field 'anch_id1'."""
        return self._anch_id1

    @anch_id1.setter
    def anch_id1(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'anch_id1' field must be of type 'str'"
        self._anch_id1 = value

    @property
    def range1(self):
        """Message field 'range1'."""
        return self._range1

    @range1.setter
    def range1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range1' field must be of type 'float'"
        self._range1 = value

    @property
    def anch_id2(self):
        """Message field 'anch_id2'."""
        return self._anch_id2

    @anch_id2.setter
    def anch_id2(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'anch_id2' field must be of type 'str'"
        self._anch_id2 = value

    @property
    def range2(self):
        """Message field 'range2'."""
        return self._range2

    @range2.setter
    def range2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range2' field must be of type 'float'"
        self._range2 = value

    @property
    def anch_id3(self):
        """Message field 'anch_id3'."""
        return self._anch_id3

    @anch_id3.setter
    def anch_id3(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'anch_id3' field must be of type 'str'"
        self._anch_id3 = value

    @property
    def range3(self):
        """Message field 'range3'."""
        return self._range3

    @range3.setter
    def range3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range3' field must be of type 'float'"
        self._range3 = value

    @property
    def anch_id4(self):
        """Message field 'anch_id4'."""
        return self._anch_id4

    @anch_id4.setter
    def anch_id4(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'anch_id4' field must be of type 'str'"
        self._anch_id4 = value

    @property
    def range4(self):
        """Message field 'range4'."""
        return self._range4

    @range4.setter
    def range4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range4' field must be of type 'float'"
        self._range4 = value
