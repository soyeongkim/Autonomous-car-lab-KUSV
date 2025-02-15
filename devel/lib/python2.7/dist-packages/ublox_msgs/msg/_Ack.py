# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ublox_msgs/Ack.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Ack(genpy.Message):
  _md5sum = "fc3270816d86d7c962dbc4b52a6c5386"
  _type = "ublox_msgs/Ack"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# ACK (0x05)
# Message Acknowledged / Not-Acknowledged
#
# Output upon processing of an input message
#

uint8 CLASS_ID = 5
uint8 NACK_MESSAGE_ID = 0
uint8 ACK_MESSAGE_ID = 1

uint8 clsID   # Class ID of the (Not-)Acknowledged Message
uint8 msgID   # Message ID of the (Not-)Acknowledged Message"""
  # Pseudo-constants
  CLASS_ID = 5
  NACK_MESSAGE_ID = 0
  ACK_MESSAGE_ID = 1

  __slots__ = ['clsID','msgID']
  _slot_types = ['uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       clsID,msgID

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Ack, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.clsID is None:
        self.clsID = 0
      if self.msgID is None:
        self.msgID = 0
    else:
      self.clsID = 0
      self.msgID = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_2B().pack(_x.clsID, _x.msgID))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 2
      (_x.clsID, _x.msgID,) = _get_struct_2B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2B().pack(_x.clsID, _x.msgID))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 2
      (_x.clsID, _x.msgID,) = _get_struct_2B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2B = None
def _get_struct_2B():
    global _struct_2B
    if _struct_2B is None:
        _struct_2B = struct.Struct("<2B")
    return _struct_2B
