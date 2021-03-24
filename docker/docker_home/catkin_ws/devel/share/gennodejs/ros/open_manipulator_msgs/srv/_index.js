
"use strict";

let SetActuatorState = require('./SetActuatorState.js')
let GetJointPosition = require('./GetJointPosition.js')
let SetJointPosition = require('./SetJointPosition.js')
let SetKinematicsPose = require('./SetKinematicsPose.js')
let SetDrawingTrajectory = require('./SetDrawingTrajectory.js')
let GetKinematicsPose = require('./GetKinematicsPose.js')

module.exports = {
  SetActuatorState: SetActuatorState,
  GetJointPosition: GetJointPosition,
  SetJointPosition: SetJointPosition,
  SetKinematicsPose: SetKinematicsPose,
  SetDrawingTrajectory: SetDrawingTrajectory,
  GetKinematicsPose: GetKinematicsPose,
};
