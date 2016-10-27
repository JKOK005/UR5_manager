"""autogenerated by genpy from object_manipulation_msgs/ManipulationResult.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ManipulationResult(genpy.Message):
  _md5sum = "85f8d010e045fcb335637fc8fc59184b"
  _type = "object_manipulation_msgs/ManipulationResult"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# Result codes for manipulation tasks

# task completed as expected
# generally means you can proceed as planned
int32 SUCCESS = 1

# task not possible (e.g. out of reach or obstacles in the way)
# generally means that the world was not disturbed, so you can try another task
int32 UNFEASIBLE = -1

# task was thought possible, but failed due to unexpected events during execution
# it is likely that the world was disturbed, so you are encouraged to refresh
# your sensed world model before proceeding to another task
int32 FAILED = -2

# a lower level error prevented task completion (e.g. joint controller not responding)
# generally requires human attention
int32 ERROR = -3

# means that at some point during execution we ended up in a state that the collision-aware
# arm navigation module will not move out of. The world was likely not disturbed, but you 
# probably need a new collision map to move the arm out of the stuck position
int32 ARM_MOVEMENT_PREVENTED = -4

# specific to grasp actions
# the object was grasped successfully, but the lift attempt could not achieve the minimum lift distance requested
# it is likely that the collision environment will see collisions between the hand/object and the support surface
int32 LIFT_FAILED = -5

# specific to place actions
# the object was placed successfully, but the retreat attempt could not achieve the minimum retreat distance requested
# it is likely that the collision environment will see collisions between the hand and the object
int32 RETREAT_FAILED = -6

# indicates that somewhere along the line a human said "wait, stop, this is bad, go back and do something else"
int32 CANCELLED = -7

# the actual value of this error code
int32 value

"""
  # Pseudo-constants
  SUCCESS = 1
  UNFEASIBLE = -1
  FAILED = -2
  ERROR = -3
  ARM_MOVEMENT_PREVENTED = -4
  LIFT_FAILED = -5
  RETREAT_FAILED = -6
  CANCELLED = -7

  __slots__ = ['value']
  _slot_types = ['int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       value

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ManipulationResult, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.value is None:
        self.value = 0
    else:
      self.value = 0

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
      buff.write(_struct_i.pack(self.value))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 4
      (self.value,) = _struct_i.unpack(str[start:end])
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
      buff.write(_struct_i.pack(self.value))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 4
      (self.value,) = _struct_i.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_i = struct.Struct("<i")
