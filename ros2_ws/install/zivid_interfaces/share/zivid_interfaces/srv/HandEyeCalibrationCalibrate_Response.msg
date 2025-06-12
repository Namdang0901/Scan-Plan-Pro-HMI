
bool success

# Textual representation of the result. Any indices being referred to correspond to entries into the provided list of
# capture handles.
#
# Note: Any reported lengths in this message are given in units of millimeter, which are used internally in the Zivid
# driver. This applies only to the textual representation of the result, other returned numerical results are given in
# the ROS convention of meter, as specified for each related field.
string message

# Computed hand-eye transform.
#
# The transform has the following meaning depending on the provided configuration:
#
#   - Eye-in-hand: Camera pose in robot end-effector frame.
#   - Eye-to-hand: Camera pose in robot base frame.
#
# Note: Lengths are given in units of meter. In the Zivid driver, the units are automatically converted from the default
# units of the Zivid point clouds in millimeter, to the ROS convention of meter.
geometry_msgs/Transform transform

# Hand-eye calibration residuals.
#
# Feature points (for each input pose) are transformed into a common frame. A rigid transform between feature points and
# corresponding centroids are utilized to compute residuals for rotational and translational parts.
#
# The order and size of the list of residuals correspond to the provided list of capture handles.
HandEyeCalibrationResidual[] residuals
