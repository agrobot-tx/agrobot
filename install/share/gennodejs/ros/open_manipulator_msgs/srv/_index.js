
"use strict";

let SetDrawingTrajectory = require('./SetDrawingTrajectory.js')
let SetJointPosition = require('./SetJointPosition.js')
let SetActuatorState = require('./SetActuatorState.js')
let SetKinematicsPose = require('./SetKinematicsPose.js')
let GetJointPosition = require('./GetJointPosition.js')
let GetKinematicsPose = require('./GetKinematicsPose.js')

module.exports = {
  SetDrawingTrajectory: SetDrawingTrajectory,
  SetJointPosition: SetJointPosition,
  SetActuatorState: SetActuatorState,
  SetKinematicsPose: SetKinematicsPose,
  GetJointPosition: GetJointPosition,
  GetKinematicsPose: GetKinematicsPose,
};
