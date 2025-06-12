uint8 EYE_TO_HAND = 1
uint8 EYE_IN_HAND = 2

# The configuration to use for the hand-eye calibration: EYE_TO_HAND or EYE_IN_HAND
uint8 configuration

# Handles of hand-eye captures to use in this hand-eye calibration. Leave empty to use all captures.
int32[] capture_handles

# Optionally, add fixed objects for low degrees-of-freedom (DOF) hand-eye calibration. Leave default for regular (6-DOF)
# calibration.
FixedPlacementOfCalibrationObjects fixed_objects

