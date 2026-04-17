// SPDX-License-Identifier: Apache-2.0
//
// Copyright 2026 JASPAR
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "step.h"
// To be auto-generated
#include "adas/abs/Signal_IsEnabled.h" // IWYU pragma: keep
#include "adas/abs/Signal_IsEnabled_Availability_Actuator.h" // IWYU pragma: keep
#include "adas/abs/Signal_IsEnabled_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/abs/Signal_IsEngaged.h" // IWYU pragma: keep
#include "adas/abs/Signal_IsEngaged_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/Signal_ActiveAutonomyLevel.h" // IWYU pragma: keep
#include "adas/Signal_ActiveAutonomyLevel_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/adaptivecruisecontrol/Signal_DegradationStatus.h" // IWYU pragma: keep
#include "adas/adaptivecruisecontrol/Signal_DegradationStatus_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/adaptivecruisecontrol/Signal_DistanceSet.h" // IWYU pragma: keep
#include "adas/adaptivecruisecontrol/Signal_DistanceSet_Availability_Actuator.h" // IWYU pragma: keep
#include "adas/adaptivecruisecontrol/Signal_DistanceSet_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/adaptivecruisecontrol/Signal_IsActive.h" // IWYU pragma: keep
#include "adas/adaptivecruisecontrol/Signal_IsActive_Availability_Actuator.h" // IWYU pragma: keep
#include "adas/adaptivecruisecontrol/Signal_IsActive_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/adaptivecruisecontrol/Signal_IsEnabled.h" // IWYU pragma: keep
#include "adas/adaptivecruisecontrol/Signal_IsEnabled_Availability_Actuator.h" // IWYU pragma: keep
#include "adas/adaptivecruisecontrol/Signal_IsEnabled_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/adaptivecruisecontrol/Signal_SpeedSet.h" // IWYU pragma: keep
#include "adas/adaptivecruisecontrol/Signal_SpeedSet_Availability_Actuator.h" // IWYU pragma: keep
#include "adas/adaptivecruisecontrol/Signal_SpeedSet_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/dms/Signal_DegradationStatus.h" // IWYU pragma: keep
#include "adas/dms/Signal_DegradationStatus_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/dms/Signal_IsEnabled.h" // IWYU pragma: keep
#include "adas/dms/Signal_IsEnabled_Availability_Actuator.h" // IWYU pragma: keep
#include "adas/dms/Signal_IsEnabled_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/dms/Signal_IsWarning.h" // IWYU pragma: keep
#include "adas/dms/Signal_IsWarning_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/eba/Signal_IsEnabled.h" // IWYU pragma: keep
#include "adas/eba/Signal_IsEnabled_Availability_Actuator.h" // IWYU pragma: keep
#include "adas/eba/Signal_IsEnabled_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/eba/Signal_IsEngaged.h" // IWYU pragma: keep
#include "adas/eba/Signal_IsEngaged_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/ebd/Signal_IsEnabled.h" // IWYU pragma: keep
#include "adas/ebd/Signal_IsEnabled_Availability_Actuator.h" // IWYU pragma: keep
#include "adas/ebd/Signal_IsEnabled_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/ebd/Signal_IsEngaged.h" // IWYU pragma: keep
#include "adas/ebd/Signal_IsEngaged_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/esc/Signal_IsEnabled.h" // IWYU pragma: keep
#include "adas/esc/Signal_IsEnabled_Availability_Actuator.h" // IWYU pragma: keep
#include "adas/esc/Signal_IsEnabled_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/esc/Signal_IsEngaged.h" // IWYU pragma: keep
#include "adas/esc/Signal_IsEngaged_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/esc/Signal_IsStrongCrossWindDetected.h" // IWYU pragma: keep
#include "adas/esc/Signal_IsStrongCrossWindDetected_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/esc/roadfriction/Signal_LowerBound.h" // IWYU pragma: keep
#include "adas/esc/roadfriction/Signal_LowerBound_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/esc/roadfriction/Signal_MostProbable.h" // IWYU pragma: keep
#include "adas/esc/roadfriction/Signal_MostProbable_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/esc/roadfriction/Signal_UpperBound.h" // IWYU pragma: keep
#include "adas/esc/roadfriction/Signal_UpperBound_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/Signal_IsAutoPowerOptimize.h" // IWYU pragma: keep
#include "adas/Signal_IsAutoPowerOptimize_Availability_Actuator.h" // IWYU pragma: keep
#include "adas/Signal_IsAutoPowerOptimize_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/lanedeparturedetection/Signal_DegradationStatus.h" // IWYU pragma: keep
#include "adas/lanedeparturedetection/Signal_DegradationStatus_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/lanedeparturedetection/Signal_IsEnabled.h" // IWYU pragma: keep
#include "adas/lanedeparturedetection/Signal_IsEnabled_Availability_Actuator.h" // IWYU pragma: keep
#include "adas/lanedeparturedetection/Signal_IsEnabled_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/lanedeparturedetection/Signal_IsWarning.h" // IWYU pragma: keep
#include "adas/lanedeparturedetection/Signal_IsWarning_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/obstacledetection/Signal_DegradationStatus.h" // IWYU pragma: keep
#include "adas/obstacledetection/Signal_DegradationStatus_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/obstacledetection/Signal_IsEnabled.h" // IWYU pragma: keep
#include "adas/obstacledetection/Signal_IsEnabled_Availability_Actuator.h" // IWYU pragma: keep
#include "adas/obstacledetection/Signal_IsEnabled_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/obstacledetection/Signal_IsWarning.h" // IWYU pragma: keep
#include "adas/obstacledetection/Signal_IsWarning_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/Signal_PowerOptimizeLevel.h" // IWYU pragma: keep
#include "adas/Signal_PowerOptimizeLevel_Availability_Actuator.h" // IWYU pragma: keep
#include "adas/Signal_PowerOptimizeLevel_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/Signal_SupportedAutonomyLevel.h" // IWYU pragma: keep
#include "adas/tcs/Signal_IsEnabled.h" // IWYU pragma: keep
#include "adas/tcs/Signal_IsEnabled_Availability_Actuator.h" // IWYU pragma: keep
#include "adas/tcs/Signal_IsEnabled_Availability_Sensor.h" // IWYU pragma: keep
#include "adas/tcs/Signal_IsEngaged.h" // IWYU pragma: keep
#include "adas/tcs/Signal_IsEngaged_Availability_Sensor.h" // IWYU pragma: keep
#include "acceleration/Signal_Lateral.h" // IWYU pragma: keep
#include "acceleration/Signal_Lateral_Availability_Sensor.h" // IWYU pragma: keep
#include "acceleration/Signal_Longitudinal.h" // IWYU pragma: keep
#include "acceleration/Signal_Longitudinal_Availability_Sensor.h" // IWYU pragma: keep
#include "acceleration/Signal_Vertical.h" // IWYU pragma: keep
#include "acceleration/Signal_Vertical_Availability_Sensor.h" // IWYU pragma: keep
#include "angularvelocity/Signal_Pitch.h" // IWYU pragma: keep
#include "angularvelocity/Signal_Pitch_Availability_Sensor.h" // IWYU pragma: keep
#include "angularvelocity/Signal_Roll.h" // IWYU pragma: keep
#include "angularvelocity/Signal_Roll_Availability_Sensor.h" // IWYU pragma: keep
#include "angularvelocity/Signal_Yaw.h" // IWYU pragma: keep
#include "angularvelocity/Signal_Yaw_Availability_Sensor.h" // IWYU pragma: keep
#include "Signal_AverageSpeed.h" // IWYU pragma: keep
#include "Signal_AverageSpeed_Availability_Sensor.h" // IWYU pragma: keep
#include "body/hood/Signal_IsLocked.h" // IWYU pragma: keep
#include "body/hood/Signal_IsLocked_Availability_Actuator.h" // IWYU pragma: keep
#include "body/hood/Signal_IsLocked_Availability_Sensor.h" // IWYU pragma: keep
#include "body/hood/Signal_IsOpen.h" // IWYU pragma: keep
#include "body/hood/Signal_IsOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "body/hood/Signal_IsOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "body/hood/Signal_Position.h" // IWYU pragma: keep
#include "body/hood/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "body/hood/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "body/horn/Signal_IsActive.h" // IWYU pragma: keep
#include "body/horn/Signal_IsActive_Availability_Actuator.h" // IWYU pragma: keep
#include "body/horn/Signal_IsActive_Availability_Sensor.h" // IWYU pragma: keep
#include "body/Signal_IsAutoPowerOptimize.h" // IWYU pragma: keep
#include "body/Signal_IsAutoPowerOptimize_Availability_Actuator.h" // IWYU pragma: keep
#include "body/Signal_IsAutoPowerOptimize_Availability_Sensor.h" // IWYU pragma: keep
#include "body/lights/backup/Signal_IsDefect.h" // IWYU pragma: keep
#include "body/lights/backup/Signal_IsDefect_Availability_Sensor.h" // IWYU pragma: keep
#include "body/lights/backup/Signal_IsOn.h" // IWYU pragma: keep
#include "body/lights/backup/Signal_IsOn_Availability_Actuator.h" // IWYU pragma: keep
#include "body/lights/backup/Signal_IsOn_Availability_Sensor.h" // IWYU pragma: keep
#include "body/lights/beam/high/Signal_IsDefect.h" // IWYU pragma: keep
#include "body/lights/beam/high/Signal_IsDefect_Availability_Sensor.h" // IWYU pragma: keep
#include "body/lights/beam/high/Signal_IsOn.h" // IWYU pragma: keep
#include "body/lights/beam/high/Signal_IsOn_Availability_Actuator.h" // IWYU pragma: keep
#include "body/lights/beam/high/Signal_IsOn_Availability_Sensor.h" // IWYU pragma: keep
#include "body/lights/beam/low/Signal_IsDefect.h" // IWYU pragma: keep
#include "body/lights/beam/low/Signal_IsDefect_Availability_Sensor.h" // IWYU pragma: keep
#include "body/lights/beam/low/Signal_IsOn.h" // IWYU pragma: keep
#include "body/lights/beam/low/Signal_IsOn_Availability_Actuator.h" // IWYU pragma: keep
#include "body/lights/beam/low/Signal_IsOn_Availability_Sensor.h" // IWYU pragma: keep
#include "body/lights/brake/Signal_IsActive.h" // IWYU pragma: keep
#include "body/lights/brake/Signal_IsActive_Availability_Actuator.h" // IWYU pragma: keep
#include "body/lights/brake/Signal_IsActive_Availability_Sensor.h" // IWYU pragma: keep
#include "body/lights/brake/Signal_IsDefect.h" // IWYU pragma: keep
#include "body/lights/brake/Signal_IsDefect_Availability_Sensor.h" // IWYU pragma: keep
#include "body/lights/directionindicator/left/Signal_IsDefect.h" // IWYU pragma: keep
#include "body/lights/directionindicator/left/Signal_IsDefect_Availability_Sensor.h" // IWYU pragma: keep
#include "body/lights/directionindicator/left/Signal_IsSignaling.h" // IWYU pragma: keep
#include "body/lights/directionindicator/left/Signal_IsSignaling_Availability_Actuator.h" // IWYU pragma: keep
#include "body/lights/directionindicator/left/Signal_IsSignaling_Availability_Sensor.h" // IWYU pragma: keep
#include "body/lights/directionindicator/right/Signal_IsDefect.h" // IWYU pragma: keep
#include "body/lights/directionindicator/right/Signal_IsDefect_Availability_Sensor.h" // IWYU pragma: keep
#include "body/lights/directionindicator/right/Signal_IsSignaling.h" // IWYU pragma: keep
#include "body/lights/directionindicator/right/Signal_IsSignaling_Availability_Actuator.h" // IWYU pragma: keep
#include "body/lights/directionindicator/right/Signal_IsSignaling_Availability_Sensor.h" // IWYU pragma: keep
#include "body/lights/fog/front/Signal_IsDefect.h" // IWYU pragma: keep
#include "body/lights/fog/front/Signal_IsDefect_Availability_Sensor.h" // IWYU pragma: keep
#include "body/lights/fog/front/Signal_IsOn.h" // IWYU pragma: keep
#include "body/lights/fog/front/Signal_IsOn_Availability_Actuator.h" // IWYU pragma: keep
#include "body/lights/fog/front/Signal_IsOn_Availability_Sensor.h" // IWYU pragma: keep
#include "body/lights/fog/rear/Signal_IsDefect.h" // IWYU pragma: keep
#include "body/lights/fog/rear/Signal_IsDefect_Availability_Sensor.h" // IWYU pragma: keep
#include "body/lights/fog/rear/Signal_IsOn.h" // IWYU pragma: keep
#include "body/lights/fog/rear/Signal_IsOn_Availability_Actuator.h" // IWYU pragma: keep
#include "body/lights/fog/rear/Signal_IsOn_Availability_Sensor.h" // IWYU pragma: keep
#include "body/lights/hazard/Signal_IsDefect.h" // IWYU pragma: keep
#include "body/lights/hazard/Signal_IsDefect_Availability_Sensor.h" // IWYU pragma: keep
#include "body/lights/hazard/Signal_IsSignaling.h" // IWYU pragma: keep
#include "body/lights/hazard/Signal_IsSignaling_Availability_Actuator.h" // IWYU pragma: keep
#include "body/lights/hazard/Signal_IsSignaling_Availability_Sensor.h" // IWYU pragma: keep
#include "body/lights/licenseplate/Signal_IsDefect.h" // IWYU pragma: keep
#include "body/lights/licenseplate/Signal_IsDefect_Availability_Sensor.h" // IWYU pragma: keep
#include "body/lights/licenseplate/Signal_IsOn.h" // IWYU pragma: keep
#include "body/lights/licenseplate/Signal_IsOn_Availability_Actuator.h" // IWYU pragma: keep
#include "body/lights/licenseplate/Signal_IsOn_Availability_Sensor.h" // IWYU pragma: keep
#include "body/lights/parking/Signal_IsDefect.h" // IWYU pragma: keep
#include "body/lights/parking/Signal_IsDefect_Availability_Sensor.h" // IWYU pragma: keep
#include "body/lights/parking/Signal_IsOn.h" // IWYU pragma: keep
#include "body/lights/parking/Signal_IsOn_Availability_Actuator.h" // IWYU pragma: keep
#include "body/lights/parking/Signal_IsOn_Availability_Sensor.h" // IWYU pragma: keep
#include "body/lights/running/Signal_IsDefect.h" // IWYU pragma: keep
#include "body/lights/running/Signal_IsDefect_Availability_Sensor.h" // IWYU pragma: keep
#include "body/lights/running/Signal_IsOn.h" // IWYU pragma: keep
#include "body/lights/running/Signal_IsOn_Availability_Actuator.h" // IWYU pragma: keep
#include "body/lights/running/Signal_IsOn_Availability_Sensor.h" // IWYU pragma: keep
#include "body/mirrors/driverside/Signal_IsFolded.h" // IWYU pragma: keep
#include "body/mirrors/driverside/Signal_IsFolded_Availability_Actuator.h" // IWYU pragma: keep
#include "body/mirrors/driverside/Signal_IsFolded_Availability_Sensor.h" // IWYU pragma: keep
#include "body/mirrors/driverside/Signal_IsHeatingOn.h" // IWYU pragma: keep
#include "body/mirrors/driverside/Signal_IsHeatingOn_Availability_Actuator.h" // IWYU pragma: keep
#include "body/mirrors/driverside/Signal_IsHeatingOn_Availability_Sensor.h" // IWYU pragma: keep
#include "body/mirrors/driverside/Signal_IsLocked.h" // IWYU pragma: keep
#include "body/mirrors/driverside/Signal_IsLocked_Availability_Actuator.h" // IWYU pragma: keep
#include "body/mirrors/driverside/Signal_IsLocked_Availability_Sensor.h" // IWYU pragma: keep
#include "body/mirrors/driverside/Signal_Pan.h" // IWYU pragma: keep
#include "body/mirrors/driverside/Signal_Pan_Availability_Actuator.h" // IWYU pragma: keep
#include "body/mirrors/driverside/Signal_Pan_Availability_Sensor.h" // IWYU pragma: keep
#include "body/mirrors/driverside/Signal_Tilt.h" // IWYU pragma: keep
#include "body/mirrors/driverside/Signal_Tilt_Availability_Actuator.h" // IWYU pragma: keep
#include "body/mirrors/driverside/Signal_Tilt_Availability_Sensor.h" // IWYU pragma: keep
#include "body/mirrors/passengerside/Signal_IsFolded.h" // IWYU pragma: keep
#include "body/mirrors/passengerside/Signal_IsFolded_Availability_Actuator.h" // IWYU pragma: keep
#include "body/mirrors/passengerside/Signal_IsFolded_Availability_Sensor.h" // IWYU pragma: keep
#include "body/mirrors/passengerside/Signal_IsHeatingOn.h" // IWYU pragma: keep
#include "body/mirrors/passengerside/Signal_IsHeatingOn_Availability_Actuator.h" // IWYU pragma: keep
#include "body/mirrors/passengerside/Signal_IsHeatingOn_Availability_Sensor.h" // IWYU pragma: keep
#include "body/mirrors/passengerside/Signal_IsLocked.h" // IWYU pragma: keep
#include "body/mirrors/passengerside/Signal_IsLocked_Availability_Actuator.h" // IWYU pragma: keep
#include "body/mirrors/passengerside/Signal_IsLocked_Availability_Sensor.h" // IWYU pragma: keep
#include "body/mirrors/passengerside/Signal_Pan.h" // IWYU pragma: keep
#include "body/mirrors/passengerside/Signal_Pan_Availability_Actuator.h" // IWYU pragma: keep
#include "body/mirrors/passengerside/Signal_Pan_Availability_Sensor.h" // IWYU pragma: keep
#include "body/mirrors/passengerside/Signal_Tilt.h" // IWYU pragma: keep
#include "body/mirrors/passengerside/Signal_Tilt_Availability_Actuator.h" // IWYU pragma: keep
#include "body/mirrors/passengerside/Signal_Tilt_Availability_Sensor.h" // IWYU pragma: keep
#include "body/Signal_PowerOptimizeLevel.h" // IWYU pragma: keep
#include "body/Signal_PowerOptimizeLevel_Availability_Actuator.h" // IWYU pragma: keep
#include "body/Signal_PowerOptimizeLevel_Availability_Sensor.h" // IWYU pragma: keep
#include "body/raindetection/Signal_Intensity.h" // IWYU pragma: keep
#include "body/raindetection/Signal_Intensity_Availability_Sensor.h" // IWYU pragma: keep
#include "body/Signal_RearMainSpoilerPosition.h" // IWYU pragma: keep
#include "body/Signal_RearMainSpoilerPosition_Availability_Actuator.h" // IWYU pragma: keep
#include "body/Signal_RearMainSpoilerPosition_Availability_Sensor.h" // IWYU pragma: keep
#include "body/trunk/front/Signal_IsLightOn.h" // IWYU pragma: keep
#include "body/trunk/front/Signal_IsLightOn_Availability_Actuator.h" // IWYU pragma: keep
#include "body/trunk/front/Signal_IsLightOn_Availability_Sensor.h" // IWYU pragma: keep
#include "body/trunk/front/Signal_IsLocked.h" // IWYU pragma: keep
#include "body/trunk/front/Signal_IsLocked_Availability_Actuator.h" // IWYU pragma: keep
#include "body/trunk/front/Signal_IsLocked_Availability_Sensor.h" // IWYU pragma: keep
#include "body/trunk/front/Signal_IsOpen.h" // IWYU pragma: keep
#include "body/trunk/front/Signal_IsOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "body/trunk/front/Signal_IsOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "body/trunk/front/Signal_Position.h" // IWYU pragma: keep
#include "body/trunk/front/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "body/trunk/front/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "body/trunk/rear/Signal_IsLightOn.h" // IWYU pragma: keep
#include "body/trunk/rear/Signal_IsLightOn_Availability_Actuator.h" // IWYU pragma: keep
#include "body/trunk/rear/Signal_IsLightOn_Availability_Sensor.h" // IWYU pragma: keep
#include "body/trunk/rear/Signal_IsLocked.h" // IWYU pragma: keep
#include "body/trunk/rear/Signal_IsLocked_Availability_Actuator.h" // IWYU pragma: keep
#include "body/trunk/rear/Signal_IsLocked_Availability_Sensor.h" // IWYU pragma: keep
#include "body/trunk/rear/Signal_IsOpen.h" // IWYU pragma: keep
#include "body/trunk/rear/Signal_IsOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "body/trunk/rear/Signal_IsOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "body/trunk/rear/Signal_Position.h" // IWYU pragma: keep
#include "body/trunk/rear/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "body/trunk/rear/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/front/Signal_IsHeatingOn.h" // IWYU pragma: keep
#include "body/windshield/front/Signal_IsHeatingOn_Availability_Actuator.h" // IWYU pragma: keep
#include "body/windshield/front/Signal_IsHeatingOn_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/front/washerfluid/Signal_Level.h" // IWYU pragma: keep
#include "body/windshield/front/washerfluid/Signal_Level_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/Signal_Intensity.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/Signal_Intensity_Availability_Actuator.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/Signal_Intensity_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/Signal_IsWiperWorn_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/Signal_IsWipersWorn.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/Signal_Mode.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/Signal_Mode_Availability_Actuator.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/Signal_Mode_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/system/Signal_DriveCurrent.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/system/Signal_DriveCurrent_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/system/Signal_Frequency.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/system/Signal_Frequency_Availability_Actuator.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/system/Signal_Frequency_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/system/Signal_IsBlocked.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/system/Signal_IsBlocked_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/system/Signal_IsEndingWipeCycle.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/system/Signal_IsEndingWipeCycle_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/system/Signal_IsOverheated.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/system/Signal_IsOverheated_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/system/Signal_IsPositionReached.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/system/Signal_IsPositionReached_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/system/Signal_IsWiperError.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/system/Signal_IsWiperError_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/system/Signal_IsWiping.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/system/Signal_IsWiping_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/system/Signal_Mode.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/system/Signal_Mode_Availability_Actuator.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/system/Signal_Mode_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/system/Signal_Position.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/system/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/system/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/Signal_WiperWear.h" // IWYU pragma: keep
#include "body/windshield/front/wiping/Signal_WiperWear_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/rear/Signal_IsHeatingOn.h" // IWYU pragma: keep
#include "body/windshield/rear/Signal_IsHeatingOn_Availability_Actuator.h" // IWYU pragma: keep
#include "body/windshield/rear/Signal_IsHeatingOn_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/rear/washerfluid/Signal_Level.h" // IWYU pragma: keep
#include "body/windshield/rear/washerfluid/Signal_Level_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/Signal_Intensity.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/Signal_Intensity_Availability_Actuator.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/Signal_Intensity_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/Signal_IsWiperWorn_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/Signal_IsWipersWorn.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/Signal_Mode.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/Signal_Mode_Availability_Actuator.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/Signal_Mode_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/system/Signal_DriveCurrent.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/system/Signal_DriveCurrent_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/system/Signal_Frequency.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/system/Signal_Frequency_Availability_Actuator.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/system/Signal_Frequency_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/system/Signal_IsBlocked.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/system/Signal_IsBlocked_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/system/Signal_IsEndingWipeCycle.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/system/Signal_IsEndingWipeCycle_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/system/Signal_IsOverheated.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/system/Signal_IsOverheated_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/system/Signal_IsPositionReached.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/system/Signal_IsPositionReached_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/system/Signal_IsWiperError.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/system/Signal_IsWiperError_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/system/Signal_IsWiping.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/system/Signal_IsWiping_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/system/Signal_Mode.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/system/Signal_Mode_Availability_Actuator.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/system/Signal_Mode_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/system/Signal_Position.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/system/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/system/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/Signal_WiperWear.h" // IWYU pragma: keep
#include "body/windshield/rear/wiping/Signal_WiperWear_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/convertible/Signal_IsOpen.h" // IWYU pragma: keep
#include "cabin/convertible/Signal_IsOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/convertible/Signal_IsOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/convertible/Signal_Position.h" // IWYU pragma: keep
#include "cabin/convertible/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/convertible/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row1/driverside/Signal_IsChildLockActive.h" // IWYU pragma: keep
#include "cabin/door/row1/driverside/Signal_IsChildLockActive_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row1/driverside/Signal_IsLocked.h" // IWYU pragma: keep
#include "cabin/door/row1/driverside/Signal_IsLocked_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row1/driverside/Signal_IsLocked_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row1/driverside/Signal_IsOpen.h" // IWYU pragma: keep
#include "cabin/door/row1/driverside/Signal_IsOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row1/driverside/Signal_IsOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row1/driverside/Signal_Position.h" // IWYU pragma: keep
#include "cabin/door/row1/driverside/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row1/driverside/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row1/driverside/shade/Signal_IsOpen.h" // IWYU pragma: keep
#include "cabin/door/row1/driverside/shade/Signal_IsOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row1/driverside/shade/Signal_IsOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row1/driverside/shade/Signal_Position.h" // IWYU pragma: keep
#include "cabin/door/row1/driverside/shade/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row1/driverside/shade/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row1/driverside/window/Signal_IsOpen.h" // IWYU pragma: keep
#include "cabin/door/row1/driverside/window/Signal_IsOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row1/driverside/window/Signal_IsOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row1/driverside/window/Signal_Position.h" // IWYU pragma: keep
#include "cabin/door/row1/driverside/window/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row1/driverside/window/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row1/passengerside/Signal_IsChildLockActive.h" // IWYU pragma: keep
#include "cabin/door/row1/passengerside/Signal_IsChildLockActive_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row1/passengerside/Signal_IsLocked.h" // IWYU pragma: keep
#include "cabin/door/row1/passengerside/Signal_IsLocked_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row1/passengerside/Signal_IsLocked_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row1/passengerside/Signal_IsOpen.h" // IWYU pragma: keep
#include "cabin/door/row1/passengerside/Signal_IsOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row1/passengerside/Signal_IsOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row1/passengerside/Signal_Position.h" // IWYU pragma: keep
#include "cabin/door/row1/passengerside/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row1/passengerside/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row1/passengerside/shade/Signal_IsOpen.h" // IWYU pragma: keep
#include "cabin/door/row1/passengerside/shade/Signal_IsOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row1/passengerside/shade/Signal_IsOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row1/passengerside/shade/Signal_Position.h" // IWYU pragma: keep
#include "cabin/door/row1/passengerside/shade/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row1/passengerside/shade/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row1/passengerside/window/Signal_IsOpen.h" // IWYU pragma: keep
#include "cabin/door/row1/passengerside/window/Signal_IsOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row1/passengerside/window/Signal_IsOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row1/passengerside/window/Signal_Position.h" // IWYU pragma: keep
#include "cabin/door/row1/passengerside/window/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row1/passengerside/window/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row2/driverside/Signal_IsChildLockActive.h" // IWYU pragma: keep
#include "cabin/door/row2/driverside/Signal_IsChildLockActive_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row2/driverside/Signal_IsLocked.h" // IWYU pragma: keep
#include "cabin/door/row2/driverside/Signal_IsLocked_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row2/driverside/Signal_IsLocked_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row2/driverside/Signal_IsOpen.h" // IWYU pragma: keep
#include "cabin/door/row2/driverside/Signal_IsOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row2/driverside/Signal_IsOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row2/driverside/Signal_Position.h" // IWYU pragma: keep
#include "cabin/door/row2/driverside/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row2/driverside/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row2/driverside/shade/Signal_IsOpen.h" // IWYU pragma: keep
#include "cabin/door/row2/driverside/shade/Signal_IsOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row2/driverside/shade/Signal_IsOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row2/driverside/shade/Signal_Position.h" // IWYU pragma: keep
#include "cabin/door/row2/driverside/shade/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row2/driverside/shade/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row2/driverside/window/Signal_IsOpen.h" // IWYU pragma: keep
#include "cabin/door/row2/driverside/window/Signal_IsOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row2/driverside/window/Signal_IsOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row2/driverside/window/Signal_Position.h" // IWYU pragma: keep
#include "cabin/door/row2/driverside/window/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row2/driverside/window/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row2/passengerside/Signal_IsChildLockActive.h" // IWYU pragma: keep
#include "cabin/door/row2/passengerside/Signal_IsChildLockActive_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row2/passengerside/Signal_IsLocked.h" // IWYU pragma: keep
#include "cabin/door/row2/passengerside/Signal_IsLocked_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row2/passengerside/Signal_IsLocked_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row2/passengerside/Signal_IsOpen.h" // IWYU pragma: keep
#include "cabin/door/row2/passengerside/Signal_IsOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row2/passengerside/Signal_IsOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row2/passengerside/Signal_Position.h" // IWYU pragma: keep
#include "cabin/door/row2/passengerside/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row2/passengerside/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row2/passengerside/shade/Signal_IsOpen.h" // IWYU pragma: keep
#include "cabin/door/row2/passengerside/shade/Signal_IsOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row2/passengerside/shade/Signal_IsOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row2/passengerside/shade/Signal_Position.h" // IWYU pragma: keep
#include "cabin/door/row2/passengerside/shade/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row2/passengerside/shade/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row2/passengerside/window/Signal_IsOpen.h" // IWYU pragma: keep
#include "cabin/door/row2/passengerside/window/Signal_IsOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row2/passengerside/window/Signal_IsOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/door/row2/passengerside/window/Signal_Position.h" // IWYU pragma: keep
#include "cabin/door/row2/passengerside/window/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/door/row2/passengerside/window/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/Signal_DoorCount.h" // IWYU pragma: keep
#include "cabin/Signal_DriverPosition.h" // IWYU pragma: keep
#include "cabin/hvac/Signal_AmbientAirTemperature.h" // IWYU pragma: keep
#include "cabin/hvac/Signal_AmbientAirTemperature_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/Signal_IsAirConditioningActive.h" // IWYU pragma: keep
#include "cabin/hvac/Signal_IsAirConditioningActive_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/Signal_IsAirConditioningActive_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/Signal_IsAutoPowerOptimize.h" // IWYU pragma: keep
#include "cabin/hvac/Signal_IsAutoPowerOptimize_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/Signal_IsAutoPowerOptimize_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/Signal_IsFrontDefrosterActive.h" // IWYU pragma: keep
#include "cabin/hvac/Signal_IsFrontDefrosterActive_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/Signal_IsFrontDefrosterActive_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/Signal_IsRearDefrosterActive.h" // IWYU pragma: keep
#include "cabin/hvac/Signal_IsRearDefrosterActive_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/Signal_IsRearDefrosterActive_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/Signal_IsRecirculationActive.h" // IWYU pragma: keep
#include "cabin/hvac/Signal_IsRecirculationActive_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/Signal_IsRecirculationActive_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/Signal_PowerOptimizeLevel.h" // IWYU pragma: keep
#include "cabin/hvac/Signal_PowerOptimizeLevel_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/Signal_PowerOptimizeLevel_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/station/row1/driver/Signal_AirDistribution.h" // IWYU pragma: keep
#include "cabin/hvac/station/row1/driver/Signal_AirDistribution_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/station/row1/driver/Signal_AirDistribution_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/station/row1/driver/Signal_FanSpeed.h" // IWYU pragma: keep
#include "cabin/hvac/station/row1/driver/Signal_FanSpeed_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/station/row1/driver/Signal_FanSpeed_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/station/row1/driver/Signal_Temperature.h" // IWYU pragma: keep
#include "cabin/hvac/station/row1/driver/Signal_Temperature_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/station/row1/driver/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/station/row1/passenger/Signal_AirDistribution.h" // IWYU pragma: keep
#include "cabin/hvac/station/row1/passenger/Signal_AirDistribution_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/station/row1/passenger/Signal_AirDistribution_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/station/row1/passenger/Signal_FanSpeed.h" // IWYU pragma: keep
#include "cabin/hvac/station/row1/passenger/Signal_FanSpeed_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/station/row1/passenger/Signal_FanSpeed_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/station/row1/passenger/Signal_Temperature.h" // IWYU pragma: keep
#include "cabin/hvac/station/row1/passenger/Signal_Temperature_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/station/row1/passenger/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/station/row2/driver/Signal_AirDistribution.h" // IWYU pragma: keep
#include "cabin/hvac/station/row2/driver/Signal_AirDistribution_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/station/row2/driver/Signal_AirDistribution_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/station/row2/driver/Signal_FanSpeed.h" // IWYU pragma: keep
#include "cabin/hvac/station/row2/driver/Signal_FanSpeed_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/station/row2/driver/Signal_FanSpeed_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/station/row2/driver/Signal_Temperature.h" // IWYU pragma: keep
#include "cabin/hvac/station/row2/driver/Signal_Temperature_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/station/row2/driver/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/station/row2/passenger/Signal_AirDistribution.h" // IWYU pragma: keep
#include "cabin/hvac/station/row2/passenger/Signal_AirDistribution_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/station/row2/passenger/Signal_AirDistribution_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/station/row2/passenger/Signal_FanSpeed.h" // IWYU pragma: keep
#include "cabin/hvac/station/row2/passenger/Signal_FanSpeed_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/station/row2/passenger/Signal_FanSpeed_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/station/row2/passenger/Signal_Temperature.h" // IWYU pragma: keep
#include "cabin/hvac/station/row2/passenger/Signal_Temperature_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/station/row2/passenger/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/station/row3/driver/Signal_AirDistribution.h" // IWYU pragma: keep
#include "cabin/hvac/station/row3/driver/Signal_AirDistribution_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/station/row3/driver/Signal_AirDistribution_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/station/row3/driver/Signal_FanSpeed.h" // IWYU pragma: keep
#include "cabin/hvac/station/row3/driver/Signal_FanSpeed_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/station/row3/driver/Signal_FanSpeed_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/station/row3/driver/Signal_Temperature.h" // IWYU pragma: keep
#include "cabin/hvac/station/row3/driver/Signal_Temperature_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/station/row3/driver/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/station/row3/passenger/Signal_AirDistribution.h" // IWYU pragma: keep
#include "cabin/hvac/station/row3/passenger/Signal_AirDistribution_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/station/row3/passenger/Signal_AirDistribution_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/station/row3/passenger/Signal_FanSpeed.h" // IWYU pragma: keep
#include "cabin/hvac/station/row3/passenger/Signal_FanSpeed_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/station/row3/passenger/Signal_FanSpeed_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/station/row3/passenger/Signal_Temperature.h" // IWYU pragma: keep
#include "cabin/hvac/station/row3/passenger/Signal_Temperature_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/station/row3/passenger/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/station/row4/driver/Signal_AirDistribution.h" // IWYU pragma: keep
#include "cabin/hvac/station/row4/driver/Signal_AirDistribution_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/station/row4/driver/Signal_AirDistribution_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/station/row4/driver/Signal_FanSpeed.h" // IWYU pragma: keep
#include "cabin/hvac/station/row4/driver/Signal_FanSpeed_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/station/row4/driver/Signal_FanSpeed_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/station/row4/driver/Signal_Temperature.h" // IWYU pragma: keep
#include "cabin/hvac/station/row4/driver/Signal_Temperature_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/station/row4/driver/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/station/row4/passenger/Signal_AirDistribution.h" // IWYU pragma: keep
#include "cabin/hvac/station/row4/passenger/Signal_AirDistribution_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/station/row4/passenger/Signal_AirDistribution_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/station/row4/passenger/Signal_FanSpeed.h" // IWYU pragma: keep
#include "cabin/hvac/station/row4/passenger/Signal_FanSpeed_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/station/row4/passenger/Signal_FanSpeed_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/hvac/station/row4/passenger/Signal_Temperature.h" // IWYU pragma: keep
#include "cabin/hvac/station/row4/passenger/Signal_Temperature_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/hvac/station/row4/passenger/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/Signal_IsAutoPowerOptimize.h" // IWYU pragma: keep
#include "cabin/Signal_IsAutoPowerOptimize_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/Signal_IsAutoPowerOptimize_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/Signal_IsWindowChildLockEngaged.h" // IWYU pragma: keep
#include "cabin/Signal_IsWindowChildLockEngaged_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/Signal_IsWindowChildLockEngaged_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/domelight/Signal_Color.h" // IWYU pragma: keep
#include "cabin/light/domelight/Signal_Color_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/domelight/Signal_Color_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/domelight/Signal_Intensity.h" // IWYU pragma: keep
#include "cabin/light/domelight/Signal_Intensity_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/domelight/Signal_Intensity_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/domelight/Signal_IsLightOn.h" // IWYU pragma: keep
#include "cabin/light/domelight/Signal_IsLightOn_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/domelight/Signal_IsLightOn_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row1/driverside/Signal_Color.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row1/driverside/Signal_Color_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row1/driverside/Signal_Color_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row1/driverside/Signal_Intensity.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row1/driverside/Signal_Intensity_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row1/driverside/Signal_Intensity_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row1/driverside/Signal_IsLightOn.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row1/driverside/Signal_IsLightOn_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row1/driverside/Signal_IsLightOn_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row1/passengerside/Signal_Color.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row1/passengerside/Signal_Color_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row1/passengerside/Signal_Color_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row1/passengerside/Signal_Intensity.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row1/passengerside/Signal_Intensity_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row1/passengerside/Signal_Intensity_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row1/passengerside/Signal_IsLightOn.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row1/passengerside/Signal_IsLightOn_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row1/passengerside/Signal_IsLightOn_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row2/driverside/Signal_Color.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row2/driverside/Signal_Color_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row2/driverside/Signal_Color_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row2/driverside/Signal_Intensity.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row2/driverside/Signal_Intensity_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row2/driverside/Signal_Intensity_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row2/driverside/Signal_IsLightOn.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row2/driverside/Signal_IsLightOn_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row2/driverside/Signal_IsLightOn_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row2/passengerside/Signal_Color.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row2/passengerside/Signal_Color_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row2/passengerside/Signal_Color_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row2/passengerside/Signal_Intensity.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row2/passengerside/Signal_Intensity_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row2/passengerside/Signal_Intensity_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row2/passengerside/Signal_IsLightOn.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row2/passengerside/Signal_IsLightOn_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row2/passengerside/Signal_IsLightOn_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row3/driverside/Signal_Color.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row3/driverside/Signal_Color_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row3/driverside/Signal_Color_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row3/driverside/Signal_Intensity.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row3/driverside/Signal_Intensity_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row3/driverside/Signal_Intensity_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row3/driverside/Signal_IsLightOn.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row3/driverside/Signal_IsLightOn_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row3/driverside/Signal_IsLightOn_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row3/passengerside/Signal_Color.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row3/passengerside/Signal_Color_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row3/passengerside/Signal_Color_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row3/passengerside/Signal_Intensity.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row3/passengerside/Signal_Intensity_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row3/passengerside/Signal_Intensity_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row3/passengerside/Signal_IsLightOn.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row3/passengerside/Signal_IsLightOn_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row3/passengerside/Signal_IsLightOn_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row4/driverside/Signal_Color.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row4/driverside/Signal_Color_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row4/driverside/Signal_Color_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row4/driverside/Signal_Intensity.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row4/driverside/Signal_Intensity_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row4/driverside/Signal_Intensity_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row4/driverside/Signal_IsLightOn.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row4/driverside/Signal_IsLightOn_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row4/driverside/Signal_IsLightOn_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row4/passengerside/Signal_Color.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row4/passengerside/Signal_Color_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row4/passengerside/Signal_Color_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row4/passengerside/Signal_Intensity.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row4/passengerside/Signal_Intensity_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row4/passengerside/Signal_Intensity_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row4/passengerside/Signal_IsLightOn.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row4/passengerside/Signal_IsLightOn_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/footwelllight/row4/passengerside/Signal_IsLightOn_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/Signal_IsDomeOn_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/Signal_IsDomeOn_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/Signal_IsGloveBoxOn.h" // IWYU pragma: keep
#include "cabin/light/Signal_IsGloveBoxOn_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/Signal_IsGloveBoxOn_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/Signal_PerceivedAmbientLight.h" // IWYU pragma: keep
#include "cabin/light/Signal_PerceivedAmbientLight_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row1/driverside/Signal_Color.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row1/driverside/Signal_Color_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row1/driverside/Signal_Color_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row1/driverside/Signal_Intensity.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row1/driverside/Signal_Intensity_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row1/driverside/Signal_Intensity_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row1/driverside/Signal_IsLightOn.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row1/driverside/Signal_IsLightOn_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row1/driverside/Signal_IsLightOn_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row1/passengerside/Signal_Color.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row1/passengerside/Signal_Color_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row1/passengerside/Signal_Color_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row1/passengerside/Signal_Intensity.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row1/passengerside/Signal_Intensity_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row1/passengerside/Signal_Intensity_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row1/passengerside/Signal_IsLightOn.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row1/passengerside/Signal_IsLightOn_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row1/passengerside/Signal_IsLightOn_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row2/driverside/Signal_Color.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row2/driverside/Signal_Color_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row2/driverside/Signal_Color_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row2/driverside/Signal_Intensity.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row2/driverside/Signal_Intensity_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row2/driverside/Signal_Intensity_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row2/driverside/Signal_IsLightOn.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row2/driverside/Signal_IsLightOn_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row2/driverside/Signal_IsLightOn_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row2/passengerside/Signal_Color.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row2/passengerside/Signal_Color_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row2/passengerside/Signal_Color_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row2/passengerside/Signal_Intensity.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row2/passengerside/Signal_Intensity_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row2/passengerside/Signal_Intensity_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row2/passengerside/Signal_IsLightOn.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row2/passengerside/Signal_IsLightOn_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row2/passengerside/Signal_IsLightOn_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row3/driverside/Signal_Color.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row3/driverside/Signal_Color_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row3/driverside/Signal_Color_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row3/driverside/Signal_Intensity.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row3/driverside/Signal_Intensity_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row3/driverside/Signal_Intensity_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row3/driverside/Signal_IsLightOn.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row3/driverside/Signal_IsLightOn_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row3/driverside/Signal_IsLightOn_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row3/passengerside/Signal_Color.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row3/passengerside/Signal_Color_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row3/passengerside/Signal_Color_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row3/passengerside/Signal_Intensity.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row3/passengerside/Signal_Intensity_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row3/passengerside/Signal_Intensity_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row3/passengerside/Signal_IsLightOn.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row3/passengerside/Signal_IsLightOn_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row3/passengerside/Signal_IsLightOn_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row4/driverside/Signal_Color.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row4/driverside/Signal_Color_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row4/driverside/Signal_Color_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row4/driverside/Signal_Intensity.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row4/driverside/Signal_Intensity_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row4/driverside/Signal_Intensity_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row4/driverside/Signal_IsLightOn.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row4/driverside/Signal_IsLightOn_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row4/driverside/Signal_IsLightOn_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row4/passengerside/Signal_Color.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row4/passengerside/Signal_Color_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row4/passengerside/Signal_Color_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row4/passengerside/Signal_Intensity.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row4/passengerside/Signal_Intensity_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row4/passengerside/Signal_Intensity_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row4/passengerside/Signal_IsLightOn.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row4/passengerside/Signal_IsLightOn_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/light/spotlight/row4/passengerside/Signal_IsLightOn_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/Signal_PowerOptimizeLevel.h" // IWYU pragma: keep
#include "cabin/Signal_PowerOptimizeLevel_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/Signal_PowerOptimizeLevel_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/rearshade/Signal_IsOpen.h" // IWYU pragma: keep
#include "cabin/rearshade/Signal_IsOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/rearshade/Signal_IsOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/rearshade/Signal_Position.h" // IWYU pragma: keep
#include "cabin/rearshade/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/rearshade/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/rearviewmirror/Signal_DimmingLevel.h" // IWYU pragma: keep
#include "cabin/rearviewmirror/Signal_DimmingLevel_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/rearviewmirror/Signal_DimmingLevel_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/airbag/Signal_IsDeployed.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/airbag/Signal_IsDeployed_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/backrest/lumbar/Signal_Height.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/backrest/lumbar/Signal_Height_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/backrest/lumbar/Signal_Height_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/backrest/lumbar/Signal_Support.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/backrest/lumbar/Signal_Support_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/backrest/lumbar/Signal_Support_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/backrest/Signal_Recline.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/backrest/Signal_Recline_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/backrest/Signal_Recline_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/backrest/sidebolster/Signal_Support.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/backrest/sidebolster/Signal_Support_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/backrest/sidebolster/Signal_Support_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/headrest/Signal_Angle.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/headrest/Signal_Angle_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/headrest/Signal_Angle_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/headrest/Signal_Height.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/headrest/Signal_Height_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/headrest/Signal_Height_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/Signal_Heater.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/Signal_Heater_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/Signal_Heater_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/Signal_Height.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/Signal_Height_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/Signal_Height_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/Signal_IsBelted.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/Signal_IsBelted_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/Signal_IsOccupied.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/Signal_IsOccupied_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/Signal_Massage.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/Signal_Massage_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/Signal_Massage_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/Signal_Position.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/Signal_SeatBeltHeight.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/Signal_SeatBeltHeight_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/Signal_SeatBeltHeight_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/seating/Signal_Length.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/seating/Signal_Length_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/seating/Signal_Length_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/Signal_Tilt.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/Signal_Tilt_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/Signal_Tilt_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/Signal_Ventilator.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/Signal_Ventilator_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/driverside/Signal_Ventilator_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/airbag/Signal_IsDeployed.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/airbag/Signal_IsDeployed_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/backrest/lumbar/Signal_Height.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/backrest/lumbar/Signal_Height_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/backrest/lumbar/Signal_Height_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/backrest/lumbar/Signal_Support.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/backrest/lumbar/Signal_Support_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/backrest/lumbar/Signal_Support_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/backrest/Signal_Recline.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/backrest/Signal_Recline_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/backrest/Signal_Recline_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/backrest/sidebolster/Signal_Support.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/backrest/sidebolster/Signal_Support_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/backrest/sidebolster/Signal_Support_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/headrest/Signal_Angle.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/headrest/Signal_Angle_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/headrest/Signal_Angle_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/headrest/Signal_Height.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/headrest/Signal_Height_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/headrest/Signal_Height_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/Signal_Heater.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/Signal_Heater_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/Signal_Heater_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/Signal_Height.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/Signal_Height_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/Signal_Height_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/Signal_IsBelted.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/Signal_IsBelted_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/Signal_IsOccupied.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/Signal_IsOccupied_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/Signal_Massage.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/Signal_Massage_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/Signal_Massage_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/Signal_Position.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/Signal_SeatBeltHeight.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/Signal_SeatBeltHeight_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/Signal_SeatBeltHeight_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/seating/Signal_Length.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/seating/Signal_Length_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/seating/Signal_Length_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/Signal_Tilt.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/Signal_Tilt_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/Signal_Tilt_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/Signal_Ventilator.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/Signal_Ventilator_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/middle/Signal_Ventilator_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/airbag/Signal_IsDeployed.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/airbag/Signal_IsDeployed_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/backrest/lumbar/Signal_Height.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/backrest/lumbar/Signal_Height_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/backrest/lumbar/Signal_Height_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/backrest/lumbar/Signal_Support.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/backrest/lumbar/Signal_Support_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/backrest/lumbar/Signal_Support_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/backrest/Signal_Recline.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/backrest/Signal_Recline_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/backrest/Signal_Recline_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/backrest/sidebolster/Signal_Support.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/backrest/sidebolster/Signal_Support_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/backrest/sidebolster/Signal_Support_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/headrest/Signal_Angle.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/headrest/Signal_Angle_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/headrest/Signal_Angle_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/headrest/Signal_Height.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/headrest/Signal_Height_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/headrest/Signal_Height_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/Signal_Heater.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/Signal_Heater_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/Signal_Heater_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/Signal_Height.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/Signal_Height_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/Signal_Height_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/Signal_IsBelted.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/Signal_IsBelted_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/Signal_IsOccupied.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/Signal_IsOccupied_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/Signal_Massage.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/Signal_Massage_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/Signal_Massage_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/Signal_Position.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/Signal_SeatBeltHeight.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/Signal_SeatBeltHeight_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/Signal_SeatBeltHeight_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/seating/Signal_Length.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/seating/Signal_Length_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/seating/Signal_Length_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/Signal_Tilt.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/Signal_Tilt_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/Signal_Tilt_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/Signal_Ventilator.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/Signal_Ventilator_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row1/passengerside/Signal_Ventilator_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/airbag/Signal_IsDeployed.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/airbag/Signal_IsDeployed_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/backrest/lumbar/Signal_Height.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/backrest/lumbar/Signal_Height_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/backrest/lumbar/Signal_Height_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/backrest/lumbar/Signal_Support.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/backrest/lumbar/Signal_Support_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/backrest/lumbar/Signal_Support_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/backrest/Signal_Recline.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/backrest/Signal_Recline_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/backrest/Signal_Recline_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/backrest/sidebolster/Signal_Support.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/backrest/sidebolster/Signal_Support_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/backrest/sidebolster/Signal_Support_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/headrest/Signal_Angle.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/headrest/Signal_Angle_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/headrest/Signal_Angle_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/headrest/Signal_Height.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/headrest/Signal_Height_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/headrest/Signal_Height_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/Signal_Heater.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/Signal_Heater_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/Signal_Heater_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/Signal_Height.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/Signal_Height_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/Signal_Height_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/Signal_IsBelted.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/Signal_IsBelted_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/Signal_IsOccupied.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/Signal_IsOccupied_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/Signal_Massage.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/Signal_Massage_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/Signal_Massage_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/Signal_Position.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/Signal_SeatBeltHeight.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/Signal_SeatBeltHeight_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/Signal_SeatBeltHeight_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/seating/Signal_Length.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/seating/Signal_Length_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/seating/Signal_Length_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/Signal_Tilt.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/Signal_Tilt_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/Signal_Tilt_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/Signal_Ventilator.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/Signal_Ventilator_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/driverside/Signal_Ventilator_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/airbag/Signal_IsDeployed.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/airbag/Signal_IsDeployed_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/backrest/lumbar/Signal_Height.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/backrest/lumbar/Signal_Height_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/backrest/lumbar/Signal_Height_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/backrest/lumbar/Signal_Support.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/backrest/lumbar/Signal_Support_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/backrest/lumbar/Signal_Support_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/backrest/Signal_Recline.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/backrest/Signal_Recline_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/backrest/Signal_Recline_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/backrest/sidebolster/Signal_Support.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/backrest/sidebolster/Signal_Support_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/backrest/sidebolster/Signal_Support_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/headrest/Signal_Angle.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/headrest/Signal_Angle_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/headrest/Signal_Angle_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/headrest/Signal_Height.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/headrest/Signal_Height_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/headrest/Signal_Height_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/Signal_Heater.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/Signal_Heater_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/Signal_Heater_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/Signal_Height.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/Signal_Height_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/Signal_Height_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/Signal_IsBelted.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/Signal_IsBelted_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/Signal_IsOccupied.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/Signal_IsOccupied_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/Signal_Massage.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/Signal_Massage_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/Signal_Massage_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/Signal_Position.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/Signal_SeatBeltHeight.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/Signal_SeatBeltHeight_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/Signal_SeatBeltHeight_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/seating/Signal_Length.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/seating/Signal_Length_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/seating/Signal_Length_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/Signal_Tilt.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/Signal_Tilt_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/Signal_Tilt_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/Signal_Ventilator.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/Signal_Ventilator_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/middle/Signal_Ventilator_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/airbag/Signal_IsDeployed.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/airbag/Signal_IsDeployed_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/backrest/lumbar/Signal_Height.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/backrest/lumbar/Signal_Height_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/backrest/lumbar/Signal_Height_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/backrest/lumbar/Signal_Support.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/backrest/lumbar/Signal_Support_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/backrest/lumbar/Signal_Support_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/backrest/Signal_Recline.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/backrest/Signal_Recline_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/backrest/Signal_Recline_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/backrest/sidebolster/Signal_Support.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/backrest/sidebolster/Signal_Support_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/backrest/sidebolster/Signal_Support_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/headrest/Signal_Angle.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/headrest/Signal_Angle_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/headrest/Signal_Angle_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/headrest/Signal_Height.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/headrest/Signal_Height_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/headrest/Signal_Height_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/Signal_Heater.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/Signal_Heater_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/Signal_Heater_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/Signal_Height.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/Signal_Height_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/Signal_Height_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/Signal_IsBelted.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/Signal_IsBelted_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/Signal_IsOccupied.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/Signal_IsOccupied_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/Signal_Massage.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/Signal_Massage_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/Signal_Massage_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/Signal_Position.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/Signal_SeatBeltHeight.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/Signal_SeatBeltHeight_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/Signal_SeatBeltHeight_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/seating/Signal_Length.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/seating/Signal_Length_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/seating/Signal_Length_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/Signal_Tilt.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/Signal_Tilt_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/Signal_Tilt_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/Signal_Ventilator.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/Signal_Ventilator_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/seat/row2/passengerside/Signal_Ventilator_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/Signal_SeatPosCount.h" // IWYU pragma: keep
#include "cabin/Signal_SeatRowCount.h" // IWYU pragma: keep
#include "cabin/sunroof/shade/Signal_IsOpen.h" // IWYU pragma: keep
#include "cabin/sunroof/shade/Signal_IsOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/sunroof/shade/Signal_IsOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/sunroof/shade/Signal_Position.h" // IWYU pragma: keep
#include "cabin/sunroof/shade/Signal_Position_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/sunroof/shade/Signal_Position_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/sunroof/Signal_Slide.h" // IWYU pragma: keep
#include "cabin/sunroof/Signal_Slide_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/sunroof/Signal_Slide_Availability_Sensor.h" // IWYU pragma: keep
#include "cabin/sunroof/Signal_Tilt.h" // IWYU pragma: keep
#include "cabin/sunroof/Signal_Tilt_Availability_Actuator.h" // IWYU pragma: keep
#include "cabin/sunroof/Signal_Tilt_Availability_Sensor.h" // IWYU pragma: keep
#include "Signal_CargoVolume.h" // IWYU pragma: keep
#include "chassis/accelerator/Signal_PedalPosition.h" // IWYU pragma: keep
#include "chassis/accelerator/Signal_PedalPosition_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row1/Signal_AxleWidth.h" // IWYU pragma: keep
#include "chassis/axle/row1/Signal_SteeringAngle.h" // IWYU pragma: keep
#include "chassis/axle/row1/Signal_SteeringAngle_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row1/Signal_TireAspectRatio.h" // IWYU pragma: keep
#include "chassis/axle/row1/Signal_TireWidth.h" // IWYU pragma: keep
#include "chassis/axle/row1/Signal_TrackWidth.h" // IWYU pragma: keep
#include "chassis/axle/row1/Signal_TreadWidth.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/left/Signal_AngularSpeed.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/left/Signal_AngularSpeed_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/left/brake/Signal_FluidLevel.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/left/brake/Signal_FluidLevel_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/left/brake/Signal_IsBrakesWorn.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/left/brake/Signal_IsBrakesWorn_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/left/brake/Signal_IsFluidLevelLow.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/left/brake/Signal_IsFluidLevelLow_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/left/brake/Signal_PadWear.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/left/brake/Signal_PadWear_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/left/Signal_Speed.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/left/Signal_Speed_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/left/tire/Signal_IsPressureLow.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/left/tire/Signal_IsPressureLow_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/left/tire/Signal_Pressure.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/left/tire/Signal_Pressure_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/left/tire/Signal_Temperature.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/left/tire/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/right/Signal_AngularSpeed.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/right/Signal_AngularSpeed_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/right/brake/Signal_FluidLevel.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/right/brake/Signal_FluidLevel_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/right/brake/Signal_IsBrakesWorn.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/right/brake/Signal_IsBrakesWorn_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/right/brake/Signal_IsFluidLevelLow.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/right/brake/Signal_IsFluidLevelLow_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/right/brake/Signal_PadWear.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/right/brake/Signal_PadWear_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/right/Signal_Speed.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/right/Signal_Speed_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/right/tire/Signal_IsPressureLow.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/right/tire/Signal_IsPressureLow_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/right/tire/Signal_Pressure.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/right/tire/Signal_Pressure_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/right/tire/Signal_Temperature.h" // IWYU pragma: keep
#include "chassis/axle/row1/wheel/right/tire/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row1/Signal_WheelCount.h" // IWYU pragma: keep
#include "chassis/axle/row1/Signal_WheelDiameter.h" // IWYU pragma: keep
#include "chassis/axle/row1/Signal_WheelWidth.h" // IWYU pragma: keep
#include "chassis/axle/row2/Signal_AxleWidth.h" // IWYU pragma: keep
#include "chassis/axle/row2/Signal_SteeringAngle.h" // IWYU pragma: keep
#include "chassis/axle/row2/Signal_SteeringAngle_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row2/Signal_TireAspectRatio.h" // IWYU pragma: keep
#include "chassis/axle/row2/Signal_TireWidth.h" // IWYU pragma: keep
#include "chassis/axle/row2/Signal_TrackWidth.h" // IWYU pragma: keep
#include "chassis/axle/row2/Signal_TreadWidth.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/left/Signal_AngularSpeed.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/left/Signal_AngularSpeed_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/left/brake/Signal_FluidLevel.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/left/brake/Signal_FluidLevel_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/left/brake/Signal_IsBrakesWorn.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/left/brake/Signal_IsBrakesWorn_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/left/brake/Signal_IsFluidLevelLow.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/left/brake/Signal_IsFluidLevelLow_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/left/brake/Signal_PadWear.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/left/brake/Signal_PadWear_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/left/Signal_Speed.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/left/Signal_Speed_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/left/tire/Signal_IsPressureLow.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/left/tire/Signal_IsPressureLow_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/left/tire/Signal_Pressure.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/left/tire/Signal_Pressure_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/left/tire/Signal_Temperature.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/left/tire/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/right/Signal_AngularSpeed.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/right/Signal_AngularSpeed_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/right/brake/Signal_FluidLevel.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/right/brake/Signal_FluidLevel_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/right/brake/Signal_IsBrakesWorn.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/right/brake/Signal_IsBrakesWorn_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/right/brake/Signal_IsFluidLevelLow.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/right/brake/Signal_IsFluidLevelLow_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/right/brake/Signal_PadWear.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/right/brake/Signal_PadWear_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/right/Signal_Speed.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/right/Signal_Speed_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/right/tire/Signal_IsPressureLow.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/right/tire/Signal_IsPressureLow_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/right/tire/Signal_Pressure.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/right/tire/Signal_Pressure_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/right/tire/Signal_Temperature.h" // IWYU pragma: keep
#include "chassis/axle/row2/wheel/right/tire/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/axle/row2/Signal_WheelCount.h" // IWYU pragma: keep
#include "chassis/axle/row2/Signal_WheelDiameter.h" // IWYU pragma: keep
#include "chassis/axle/row2/Signal_WheelWidth.h" // IWYU pragma: keep
#include "chassis/Signal_AxleCount.h" // IWYU pragma: keep
#include "chassis/brake/Signal_IsDriverEmergencyBrakingDetected.h" // IWYU pragma: keep
#include "chassis/brake/Signal_IsDriverEmergencyBrakingDetected_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/brake/Signal_PedalPosition.h" // IWYU pragma: keep
#include "chassis/brake/Signal_PedalPosition_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/parkingbrake/Signal_IsAutoApplyEnabled.h" // IWYU pragma: keep
#include "chassis/parkingbrake/Signal_IsAutoApplyEnabled_Availability_Actuator.h" // IWYU pragma: keep
#include "chassis/parkingbrake/Signal_IsAutoApplyEnabled_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/parkingbrake/Signal_IsEngaged.h" // IWYU pragma: keep
#include "chassis/parkingbrake/Signal_IsEngaged_Availability_Actuator.h" // IWYU pragma: keep
#include "chassis/parkingbrake/Signal_IsEngaged_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/steeringwheel/Signal_Angle.h" // IWYU pragma: keep
#include "chassis/steeringwheel/Signal_Angle_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/steeringwheel/Signal_Extension.h" // IWYU pragma: keep
#include "chassis/steeringwheel/Signal_Extension_Availability_Actuator.h" // IWYU pragma: keep
#include "chassis/steeringwheel/Signal_Extension_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/steeringwheel/Signal_Heating.h" // IWYU pragma: keep
#include "chassis/steeringwheel/Signal_Heating_Availability_Actuator.h" // IWYU pragma: keep
#include "chassis/steeringwheel/Signal_Heating_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/steeringwheel/Signal_Tilt.h" // IWYU pragma: keep
#include "chassis/steeringwheel/Signal_Tilt_Availability_Actuator.h" // IWYU pragma: keep
#include "chassis/steeringwheel/Signal_Tilt_Availability_Sensor.h" // IWYU pragma: keep
#include "chassis/Signal_Wheelbase.h" // IWYU pragma: keep
#include "Signal_CurbWeight.h" // IWYU pragma: keep
#include "currentlocation/gnssreceiver/gnsslocationtype/Signal_Altitude.h" // IWYU pragma: keep
#include "currentlocation/gnssreceiver/gnsslocationtype/Signal_Altitude_Availability_Sensor.h" // IWYU pragma: keep
#include "currentlocation/gnssreceiver/gnsslocationtype/Signal_FixType.h" // IWYU pragma: keep
#include "currentlocation/gnssreceiver/gnsslocationtype/Signal_FixType_Availability_Sensor.h" // IWYU pragma: keep
#include "currentlocation/gnssreceiver/gnsslocationtype/Signal_HorizontalAccuracy.h" // IWYU pragma: keep
#include "currentlocation/gnssreceiver/gnsslocationtype/Signal_HorizontalAccuracy_Availability_Sensor.h" // IWYU pragma: keep
#include "currentlocation/gnssreceiver/gnsslocationtype/Signal_Latitude.h" // IWYU pragma: keep
#include "currentlocation/gnssreceiver/gnsslocationtype/Signal_Latitude_Availability_Sensor.h" // IWYU pragma: keep
#include "currentlocation/gnssreceiver/gnsslocationtype/Signal_Longitude.h" // IWYU pragma: keep
#include "currentlocation/gnssreceiver/gnsslocationtype/Signal_Longitude_Availability_Sensor.h" // IWYU pragma: keep
#include "currentlocation/gnssreceiver/gnsslocationtype/Signal_Timestamp.h" // IWYU pragma: keep
#include "currentlocation/gnssreceiver/gnsslocationtype/Signal_Timestamp_Availability_Sensor.h" // IWYU pragma: keep
#include "currentlocation/gnssreceiver/gnsslocationtype/Signal_VerticalAccuracy.h" // IWYU pragma: keep
#include "currentlocation/gnssreceiver/gnsslocationtype/Signal_VerticalAccuracy_Availability_Sensor.h" // IWYU pragma: keep
#include "currentlocation/gnssreceiver/mountingposition/Signal_X.h" // IWYU pragma: keep
#include "currentlocation/gnssreceiver/mountingposition/Signal_Y.h" // IWYU pragma: keep
#include "currentlocation/gnssreceiver/mountingposition/Signal_Z.h" // IWYU pragma: keep
#include "currentlocation/referenceposition/Signal_X.h" // IWYU pragma: keep
#include "currentlocation/referenceposition/Signal_Y.h" // IWYU pragma: keep
#include "currentlocation/referenceposition/Signal_Z.h" // IWYU pragma: keep
#include "currentlocation/vehiclelocationtype/Signal_Altitude.h" // IWYU pragma: keep
#include "currentlocation/vehiclelocationtype/Signal_Altitude_Availability_Sensor.h" // IWYU pragma: keep
#include "currentlocation/vehiclelocationtype/Signal_DeadReckoningIsActive.h" // IWYU pragma: keep
#include "currentlocation/vehiclelocationtype/Signal_DeadReckoningIsActive_Availability_Sensor.h" // IWYU pragma: keep
#include "currentlocation/vehiclelocationtype/Signal_Heading.h" // IWYU pragma: keep
#include "currentlocation/vehiclelocationtype/Signal_Heading_Availability_Sensor.h" // IWYU pragma: keep
#include "currentlocation/vehiclelocationtype/Signal_HorizontalAccuracy.h" // IWYU pragma: keep
#include "currentlocation/vehiclelocationtype/Signal_HorizontalAccuracy_Availability_Sensor.h" // IWYU pragma: keep
#include "currentlocation/vehiclelocationtype/Signal_Latitude.h" // IWYU pragma: keep
#include "currentlocation/vehiclelocationtype/Signal_Latitude_Availability_Sensor.h" // IWYU pragma: keep
#include "currentlocation/vehiclelocationtype/Signal_Longitude.h" // IWYU pragma: keep
#include "currentlocation/vehiclelocationtype/Signal_Longitude_Availability_Sensor.h" // IWYU pragma: keep
#include "currentlocation/vehiclelocationtype/Signal_Timestamp.h" // IWYU pragma: keep
#include "currentlocation/vehiclelocationtype/Signal_Timestamp_Availability_Sensor.h" // IWYU pragma: keep
#include "currentlocation/vehiclelocationtype/Signal_VerticalAccuracy.h" // IWYU pragma: keep
#include "currentlocation/vehiclelocationtype/Signal_VerticalAccuracy_Availability_Sensor.h" // IWYU pragma: keep
#include "Signal_CurrentOverallWeight.h" // IWYU pragma: keep
#include "Signal_CurrentOverallWeight_Availability_Sensor.h" // IWYU pragma: keep
#include "driver/Signal_DistractionLevel.h" // IWYU pragma: keep
#include "driver/Signal_DistractionLevel_Availability_Sensor.h" // IWYU pragma: keep
#include "driver/Signal_FatigueLevel.h" // IWYU pragma: keep
#include "driver/Signal_FatigueLevel_Availability_Sensor.h" // IWYU pragma: keep
#include "driver/Signal_HeartRate.h" // IWYU pragma: keep
#include "driver/Signal_HeartRate_Availability_Sensor.h" // IWYU pragma: keep
#include "driver/Signal_IsEyesOnRoad.h" // IWYU pragma: keep
#include "driver/Signal_IsEyesOnRoad_Availability_Sensor.h" // IWYU pragma: keep
#include "driver/Signal_IsHandsOnWheel.h" // IWYU pragma: keep
#include "driver/Signal_IsHandsOnWheel_Availability_Sensor.h" // IWYU pragma: keep
#include "Signal_EmissionsCO2.h" // IWYU pragma: keep
#include "exterior/Signal_AirTemperature.h" // IWYU pragma: keep
#include "exterior/Signal_AirTemperature_Availability_Sensor.h" // IWYU pragma: keep
#include "exterior/Signal_Humidity.h" // IWYU pragma: keep
#include "exterior/Signal_Humidity_Availability_Sensor.h" // IWYU pragma: keep
#include "exterior/Signal_LightIntensity.h" // IWYU pragma: keep
#include "exterior/Signal_LightIntensity_Availability_Sensor.h" // IWYU pragma: keep
#include "Signal_GrossWeight.h" // IWYU pragma: keep
#include "Signal_Height.h" // IWYU pragma: keep
#include "Signal_IsAutoPowerOptimize.h" // IWYU pragma: keep
#include "Signal_IsAutoPowerOptimize_Availability_Actuator.h" // IWYU pragma: keep
#include "Signal_IsAutoPowerOptimize_Availability_Sensor.h" // IWYU pragma: keep
#include "Signal_IsBrokenDown.h" // IWYU pragma: keep
#include "Signal_IsBrokenDown_Availability_Sensor.h" // IWYU pragma: keep
#include "Signal_IsMoving.h" // IWYU pragma: keep
#include "Signal_IsMoving_Availability_Sensor.h" // IWYU pragma: keep
#include "Signal_Length.h" // IWYU pragma: keep
#include "lowvoltagebattery/Signal_CurrentCurrent.h" // IWYU pragma: keep
#include "lowvoltagebattery/Signal_CurrentCurrent_Availability_Sensor.h" // IWYU pragma: keep
#include "lowvoltagebattery/Signal_CurrentVoltage.h" // IWYU pragma: keep
#include "lowvoltagebattery/Signal_CurrentVoltage_Availability_Sensor.h" // IWYU pragma: keep
#include "lowvoltagebattery/Signal_NominalCapacity.h" // IWYU pragma: keep
#include "lowvoltagebattery/Signal_NominalVoltage.h" // IWYU pragma: keep
#include "Signal_LowVoltageSystemState.h" // IWYU pragma: keep
#include "Signal_LowVoltageSystemState_Availability_Sensor.h" // IWYU pragma: keep
#include "Signal_MaxTowBallWeight.h" // IWYU pragma: keep
#include "Signal_MaxTowWeight.h" // IWYU pragma: keep
#include "occupant/row1/driverside/headposition/Signal_Pitch.h" // IWYU pragma: keep
#include "occupant/row1/driverside/headposition/Signal_Pitch_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/driverside/headposition/Signal_Roll.h" // IWYU pragma: keep
#include "occupant/row1/driverside/headposition/Signal_Roll_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/driverside/headposition/Signal_X.h" // IWYU pragma: keep
#include "occupant/row1/driverside/headposition/Signal_X_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/driverside/headposition/Signal_Y.h" // IWYU pragma: keep
#include "occupant/row1/driverside/headposition/Signal_Y_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/driverside/headposition/Signal_Yaw.h" // IWYU pragma: keep
#include "occupant/row1/driverside/headposition/Signal_Yaw_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/driverside/headposition/Signal_Z.h" // IWYU pragma: keep
#include "occupant/row1/driverside/headposition/Signal_Z_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/driverside/identifier/Signal_Issuer.h" // IWYU pragma: keep
#include "occupant/row1/driverside/identifier/Signal_Issuer_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/driverside/identifier/Signal_Subject.h" // IWYU pragma: keep
#include "occupant/row1/driverside/identifier/Signal_Subject_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/driverside/mideyegaze/Signal_Azimuth.h" // IWYU pragma: keep
#include "occupant/row1/driverside/mideyegaze/Signal_Azimuth_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/driverside/mideyegaze/Signal_Elevation.h" // IWYU pragma: keep
#include "occupant/row1/driverside/mideyegaze/Signal_Elevation_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/middle/headposition/Signal_Pitch.h" // IWYU pragma: keep
#include "occupant/row1/middle/headposition/Signal_Pitch_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/middle/headposition/Signal_Roll.h" // IWYU pragma: keep
#include "occupant/row1/middle/headposition/Signal_Roll_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/middle/headposition/Signal_X.h" // IWYU pragma: keep
#include "occupant/row1/middle/headposition/Signal_X_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/middle/headposition/Signal_Y.h" // IWYU pragma: keep
#include "occupant/row1/middle/headposition/Signal_Y_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/middle/headposition/Signal_Yaw.h" // IWYU pragma: keep
#include "occupant/row1/middle/headposition/Signal_Yaw_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/middle/headposition/Signal_Z.h" // IWYU pragma: keep
#include "occupant/row1/middle/headposition/Signal_Z_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/middle/identifier/Signal_Issuer.h" // IWYU pragma: keep
#include "occupant/row1/middle/identifier/Signal_Issuer_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/middle/identifier/Signal_Subject.h" // IWYU pragma: keep
#include "occupant/row1/middle/identifier/Signal_Subject_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/middle/mideyegaze/Signal_Azimuth.h" // IWYU pragma: keep
#include "occupant/row1/middle/mideyegaze/Signal_Azimuth_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/middle/mideyegaze/Signal_Elevation.h" // IWYU pragma: keep
#include "occupant/row1/middle/mideyegaze/Signal_Elevation_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/passengerside/headposition/Signal_Pitch.h" // IWYU pragma: keep
#include "occupant/row1/passengerside/headposition/Signal_Pitch_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/passengerside/headposition/Signal_Roll.h" // IWYU pragma: keep
#include "occupant/row1/passengerside/headposition/Signal_Roll_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/passengerside/headposition/Signal_X.h" // IWYU pragma: keep
#include "occupant/row1/passengerside/headposition/Signal_X_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/passengerside/headposition/Signal_Y.h" // IWYU pragma: keep
#include "occupant/row1/passengerside/headposition/Signal_Y_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/passengerside/headposition/Signal_Yaw.h" // IWYU pragma: keep
#include "occupant/row1/passengerside/headposition/Signal_Yaw_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/passengerside/headposition/Signal_Z.h" // IWYU pragma: keep
#include "occupant/row1/passengerside/headposition/Signal_Z_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/passengerside/identifier/Signal_Issuer.h" // IWYU pragma: keep
#include "occupant/row1/passengerside/identifier/Signal_Issuer_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/passengerside/identifier/Signal_Subject.h" // IWYU pragma: keep
#include "occupant/row1/passengerside/identifier/Signal_Subject_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/passengerside/mideyegaze/Signal_Azimuth.h" // IWYU pragma: keep
#include "occupant/row1/passengerside/mideyegaze/Signal_Azimuth_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row1/passengerside/mideyegaze/Signal_Elevation.h" // IWYU pragma: keep
#include "occupant/row1/passengerside/mideyegaze/Signal_Elevation_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/driverside/headposition/Signal_Pitch.h" // IWYU pragma: keep
#include "occupant/row2/driverside/headposition/Signal_Pitch_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/driverside/headposition/Signal_Roll.h" // IWYU pragma: keep
#include "occupant/row2/driverside/headposition/Signal_Roll_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/driverside/headposition/Signal_X.h" // IWYU pragma: keep
#include "occupant/row2/driverside/headposition/Signal_X_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/driverside/headposition/Signal_Y.h" // IWYU pragma: keep
#include "occupant/row2/driverside/headposition/Signal_Y_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/driverside/headposition/Signal_Yaw.h" // IWYU pragma: keep
#include "occupant/row2/driverside/headposition/Signal_Yaw_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/driverside/headposition/Signal_Z.h" // IWYU pragma: keep
#include "occupant/row2/driverside/headposition/Signal_Z_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/driverside/identifier/Signal_Issuer.h" // IWYU pragma: keep
#include "occupant/row2/driverside/identifier/Signal_Issuer_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/driverside/identifier/Signal_Subject.h" // IWYU pragma: keep
#include "occupant/row2/driverside/identifier/Signal_Subject_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/driverside/mideyegaze/Signal_Azimuth.h" // IWYU pragma: keep
#include "occupant/row2/driverside/mideyegaze/Signal_Azimuth_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/driverside/mideyegaze/Signal_Elevation.h" // IWYU pragma: keep
#include "occupant/row2/driverside/mideyegaze/Signal_Elevation_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/middle/headposition/Signal_Pitch.h" // IWYU pragma: keep
#include "occupant/row2/middle/headposition/Signal_Pitch_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/middle/headposition/Signal_Roll.h" // IWYU pragma: keep
#include "occupant/row2/middle/headposition/Signal_Roll_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/middle/headposition/Signal_X.h" // IWYU pragma: keep
#include "occupant/row2/middle/headposition/Signal_X_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/middle/headposition/Signal_Y.h" // IWYU pragma: keep
#include "occupant/row2/middle/headposition/Signal_Y_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/middle/headposition/Signal_Yaw.h" // IWYU pragma: keep
#include "occupant/row2/middle/headposition/Signal_Yaw_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/middle/headposition/Signal_Z.h" // IWYU pragma: keep
#include "occupant/row2/middle/headposition/Signal_Z_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/middle/identifier/Signal_Issuer.h" // IWYU pragma: keep
#include "occupant/row2/middle/identifier/Signal_Issuer_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/middle/identifier/Signal_Subject.h" // IWYU pragma: keep
#include "occupant/row2/middle/identifier/Signal_Subject_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/middle/mideyegaze/Signal_Azimuth.h" // IWYU pragma: keep
#include "occupant/row2/middle/mideyegaze/Signal_Azimuth_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/middle/mideyegaze/Signal_Elevation.h" // IWYU pragma: keep
#include "occupant/row2/middle/mideyegaze/Signal_Elevation_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/passengerside/headposition/Signal_Pitch.h" // IWYU pragma: keep
#include "occupant/row2/passengerside/headposition/Signal_Pitch_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/passengerside/headposition/Signal_Roll.h" // IWYU pragma: keep
#include "occupant/row2/passengerside/headposition/Signal_Roll_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/passengerside/headposition/Signal_X.h" // IWYU pragma: keep
#include "occupant/row2/passengerside/headposition/Signal_X_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/passengerside/headposition/Signal_Y.h" // IWYU pragma: keep
#include "occupant/row2/passengerside/headposition/Signal_Y_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/passengerside/headposition/Signal_Yaw.h" // IWYU pragma: keep
#include "occupant/row2/passengerside/headposition/Signal_Yaw_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/passengerside/headposition/Signal_Z.h" // IWYU pragma: keep
#include "occupant/row2/passengerside/headposition/Signal_Z_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/passengerside/identifier/Signal_Issuer.h" // IWYU pragma: keep
#include "occupant/row2/passengerside/identifier/Signal_Issuer_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/passengerside/identifier/Signal_Subject.h" // IWYU pragma: keep
#include "occupant/row2/passengerside/identifier/Signal_Subject_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/passengerside/mideyegaze/Signal_Azimuth.h" // IWYU pragma: keep
#include "occupant/row2/passengerside/mideyegaze/Signal_Azimuth_Availability_Sensor.h" // IWYU pragma: keep
#include "occupant/row2/passengerside/mideyegaze/Signal_Elevation.h" // IWYU pragma: keep
#include "occupant/row2/passengerside/mideyegaze/Signal_Elevation_Availability_Sensor.h" // IWYU pragma: keep
#include "Signal_PowerOptimizeLevel.h" // IWYU pragma: keep
#include "Signal_PowerOptimizeLevel_Availability_Actuator.h" // IWYU pragma: keep
#include "Signal_PowerOptimizeLevel_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/Signal_AccumulatedBrakingEnergy.h" // IWYU pragma: keep
#include "powertrain/Signal_AccumulatedBrakingEnergy_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_AspirationType.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_Bore.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_CompressionRatio.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_Configuration.h" // IWYU pragma: keep
#include "powertrain/combustionengine/dieselexhaustfluid/Signal_Capacity.h" // IWYU pragma: keep
#include "powertrain/combustionengine/dieselexhaustfluid/Signal_IsLevelLow.h" // IWYU pragma: keep
#include "powertrain/combustionengine/dieselexhaustfluid/Signal_IsLevelLow_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/combustionengine/dieselexhaustfluid/Signal_Level.h" // IWYU pragma: keep
#include "powertrain/combustionengine/dieselexhaustfluid/Signal_Level_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/combustionengine/dieselexhaustfluid/Signal_Range.h" // IWYU pragma: keep
#include "powertrain/combustionengine/dieselexhaustfluid/Signal_Range_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/combustionengine/dieselparticulatefilter/Signal_DeltaPressure.h" // IWYU pragma: keep
#include "powertrain/combustionengine/dieselparticulatefilter/Signal_DeltaPressure_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/combustionengine/dieselparticulatefilter/Signal_InletTemperature.h" // IWYU pragma: keep
#include "powertrain/combustionengine/dieselparticulatefilter/Signal_InletTemperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/combustionengine/dieselparticulatefilter/Signal_OutletTemperature.h" // IWYU pragma: keep
#include "powertrain/combustionengine/dieselparticulatefilter/Signal_OutletTemperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_Displacement.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_EOP.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_EOP_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_EngineCode.h" // IWYU pragma: keep
#include "powertrain/combustionengine/enginecoolant/Signal_Capacity.h" // IWYU pragma: keep
#include "powertrain/combustionengine/enginecoolant/Signal_Level.h" // IWYU pragma: keep
#include "powertrain/combustionengine/enginecoolant/Signal_Level_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/combustionengine/enginecoolant/Signal_LifeRemaining.h" // IWYU pragma: keep
#include "powertrain/combustionengine/enginecoolant/Signal_LifeRemaining_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/combustionengine/enginecoolant/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/combustionengine/enginecoolant/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_EngineHours.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_EngineHours_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/combustionengine/engineoil/Signal_Capacity.h" // IWYU pragma: keep
#include "powertrain/combustionengine/engineoil/Signal_Level.h" // IWYU pragma: keep
#include "powertrain/combustionengine/engineoil/Signal_Level_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/combustionengine/engineoil/Signal_LifeRemaining.h" // IWYU pragma: keep
#include "powertrain/combustionengine/engineoil/Signal_LifeRemaining_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/combustionengine/engineoil/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/combustionengine/engineoil/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_IdleHours.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_IdleHours_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_IsRunning.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_IsRunning_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_MAF.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_MAF_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_MAP.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_MAP_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_MaxPower.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_MaxTorque.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_NumberOfCylinders.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_NumberOfValvesPerCylinder.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_Power.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_Power_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_Speed.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_Speed_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_StrokeLength.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_TPS.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_TPS_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_Torque.h" // IWYU pragma: keep
#include "powertrain/combustionengine/Signal_Torque_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number1/Signal_EngineCode.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number1/enginecoolant/Signal_Capacity.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number1/enginecoolant/Signal_Level.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number1/enginecoolant/Signal_Level_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number1/enginecoolant/Signal_LifeRemaining.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number1/enginecoolant/Signal_LifeRemaining_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number1/enginecoolant/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number1/enginecoolant/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number1/Signal_MaxPower.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number1/Signal_MaxRegenPower.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number1/Signal_MaxRegenTorque.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number1/Signal_MaxTorque.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number1/Signal_Power.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number1/Signal_Power_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number1/Signal_Speed.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number1/Signal_Speed_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number1/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number1/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number1/Signal_TimeInUse.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number1/Signal_TimeInUse_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number1/Signal_Torque.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number1/Signal_Torque_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number2/Signal_EngineCode.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number2/enginecoolant/Signal_Capacity.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number2/enginecoolant/Signal_Level.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number2/enginecoolant/Signal_Level_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number2/enginecoolant/Signal_LifeRemaining.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number2/enginecoolant/Signal_LifeRemaining_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number2/enginecoolant/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number2/enginecoolant/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number2/Signal_MaxPower.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number2/Signal_MaxRegenPower.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number2/Signal_MaxRegenTorque.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number2/Signal_MaxTorque.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number2/Signal_Power.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number2/Signal_Power_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number2/Signal_Speed.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number2/Signal_Speed_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number2/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number2/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number2/Signal_TimeInUse.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number2/Signal_TimeInUse_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number2/Signal_Torque.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number2/Signal_Torque_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number3/Signal_EngineCode.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number3/enginecoolant/Signal_Capacity.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number3/enginecoolant/Signal_Level.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number3/enginecoolant/Signal_Level_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number3/enginecoolant/Signal_LifeRemaining.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number3/enginecoolant/Signal_LifeRemaining_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number3/enginecoolant/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number3/enginecoolant/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number3/Signal_MaxPower.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number3/Signal_MaxRegenPower.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number3/Signal_MaxRegenTorque.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number3/Signal_MaxTorque.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number3/Signal_Power.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number3/Signal_Power_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number3/Signal_Speed.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number3/Signal_Speed_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number3/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number3/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number3/Signal_TimeInUse.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number3/Signal_TimeInUse_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number3/Signal_Torque.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number3/Signal_Torque_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number4/Signal_EngineCode.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number4/enginecoolant/Signal_Capacity.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number4/enginecoolant/Signal_Level.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number4/enginecoolant/Signal_Level_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number4/enginecoolant/Signal_LifeRemaining.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number4/enginecoolant/Signal_LifeRemaining_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number4/enginecoolant/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number4/enginecoolant/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number4/Signal_MaxPower.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number4/Signal_MaxRegenPower.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number4/Signal_MaxRegenTorque.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number4/Signal_MaxTorque.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number4/Signal_Power.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number4/Signal_Power_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number4/Signal_Speed.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number4/Signal_Speed_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number4/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number4/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number4/Signal_TimeInUse.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number4/Signal_TimeInUse_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number4/Signal_Torque.h" // IWYU pragma: keep
#include "powertrain/electricmotor/number4/Signal_Torque_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/fuelsystem/Signal_AbsoluteLevel.h" // IWYU pragma: keep
#include "powertrain/fuelsystem/Signal_AbsoluteLevel_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/fuelsystem/Signal_AverageConsumption.h" // IWYU pragma: keep
#include "powertrain/fuelsystem/Signal_AverageConsumption_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/fuelsystem/Signal_ConsumptionSinceStart.h" // IWYU pragma: keep
#include "powertrain/fuelsystem/Signal_ConsumptionSinceStart_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/fuelsystem/Signal_InstantConsumption.h" // IWYU pragma: keep
#include "powertrain/fuelsystem/Signal_InstantConsumption_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/fuelsystem/Signal_IsEngineStopStartEnabled.h" // IWYU pragma: keep
#include "powertrain/fuelsystem/Signal_IsEngineStopStartEnabled_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/fuelsystem/Signal_IsFuelLevelLow.h" // IWYU pragma: keep
#include "powertrain/fuelsystem/Signal_IsFuelLevelLow_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/fuelsystem/Signal_IsFuelPortFlapOpen.h" // IWYU pragma: keep
#include "powertrain/fuelsystem/Signal_IsFuelPortFlapOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/fuelsystem/Signal_IsFuelPortFlapOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/fuelsystem/Signal_Range.h" // IWYU pragma: keep
#include "powertrain/fuelsystem/Signal_Range_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/fuelsystem/Signal_RefuelPortPosition.h" // IWYU pragma: keep
#include "powertrain/fuelsystem/Signal_RelativeLevel.h" // IWYU pragma: keep
#include "powertrain/fuelsystem/Signal_RelativeLevel_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/fuelsystem/Signal_SupportedFuel.h" // IWYU pragma: keep
#include "powertrain/fuelsystem/Signal_TankCapacity.h" // IWYU pragma: keep
#include "powertrain/fuelsystem/Signal_TimeRemaining.h" // IWYU pragma: keep
#include "powertrain/fuelsystem/Signal_TimeRemaining_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/Signal_IsAutoPowerOptimize.h" // IWYU pragma: keep
#include "powertrain/Signal_IsAutoPowerOptimize_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/Signal_IsAutoPowerOptimize_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/Signal_PowerOptimizeLevel.h" // IWYU pragma: keep
#include "powertrain/Signal_PowerOptimizeLevel_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/Signal_PowerOptimizeLevel_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/Signal_Range.h" // IWYU pragma: keep
#include "powertrain/Signal_Range_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/Signal_TimeRemaining.h" // IWYU pragma: keep
#include "powertrain/Signal_TimeRemaining_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/Signal_AveragePower.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/Signal_AveragePower_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargecurrent/Signal_DC.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargecurrent/Signal_DC_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargecurrent/Signal_Phase1.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargecurrent/Signal_Phase1_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargecurrent/Signal_Phase2.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargecurrent/Signal_Phase2_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargecurrent/Signal_Phase3.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargecurrent/Signal_Phase3_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/Signal_ChargeLimit.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/Signal_ChargeLimit_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/Signal_ChargeLimit_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/Signal_ChargeRate.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/Signal_ChargeRate_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargevoltage/Signal_DC.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargevoltage/Signal_DC_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargevoltage/Signal_Phase1.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargevoltage/Signal_Phase1_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargevoltage/Signal_Phase2.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargevoltage/Signal_Phase2_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargevoltage/Signal_Phase3.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargevoltage/Signal_Phase3_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/anyposition/Signal_IsChargingCableConnected.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/anyposition/Signal_IsChargingCableConnected_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/anyposition/Signal_IsChargingCableLocked.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/anyposition/Signal_IsChargingCableLocked_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/anyposition/Signal_IsChargingCableLocked_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/anyposition/Signal_IsFlapOpen.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/anyposition/Signal_IsFlapOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/anyposition/Signal_IsFlapOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/anyposition/Signal_SupportedInletTypes.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontleft/Signal_IsChargingCableConnected.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontleft/Signal_IsChargingCableConnected_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontleft/Signal_IsChargingCableLocked.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontleft/Signal_IsChargingCableLocked_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontleft/Signal_IsChargingCableLocked_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontleft/Signal_IsFlapOpen.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontleft/Signal_IsFlapOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontleft/Signal_IsFlapOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontleft/Signal_SupportedInletTypes.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontmiddle/Signal_IsChargingCableConnected.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontmiddle/Signal_IsChargingCableConnected_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontmiddle/Signal_IsChargingCableLocked.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontmiddle/Signal_IsChargingCableLocked_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontmiddle/Signal_IsChargingCableLocked_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontmiddle/Signal_IsFlapOpen.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontmiddle/Signal_IsFlapOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontmiddle/Signal_IsFlapOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontmiddle/Signal_SupportedInletTypes.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontright/Signal_IsChargingCableConnected.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontright/Signal_IsChargingCableConnected_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontright/Signal_IsChargingCableLocked.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontright/Signal_IsChargingCableLocked_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontright/Signal_IsChargingCableLocked_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontright/Signal_IsFlapOpen.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontright/Signal_IsFlapOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontright/Signal_IsFlapOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/frontright/Signal_SupportedInletTypes.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearleft/Signal_IsChargingCableConnected.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearleft/Signal_IsChargingCableConnected_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearleft/Signal_IsChargingCableLocked.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearleft/Signal_IsChargingCableLocked_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearleft/Signal_IsChargingCableLocked_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearleft/Signal_IsFlapOpen.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearleft/Signal_IsFlapOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearleft/Signal_IsFlapOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearleft/Signal_SupportedInletTypes.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearmiddle/Signal_IsChargingCableConnected.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearmiddle/Signal_IsChargingCableConnected_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearmiddle/Signal_IsChargingCableLocked.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearmiddle/Signal_IsChargingCableLocked_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearmiddle/Signal_IsChargingCableLocked_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearmiddle/Signal_IsFlapOpen.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearmiddle/Signal_IsFlapOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearmiddle/Signal_IsFlapOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearmiddle/Signal_SupportedInletTypes.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearright/Signal_IsChargingCableConnected.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearright/Signal_IsChargingCableConnected_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearright/Signal_IsChargingCableLocked.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearright/Signal_IsChargingCableLocked_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearright/Signal_IsChargingCableLocked_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearright/Signal_IsFlapOpen.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearright/Signal_IsFlapOpen_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearright/Signal_IsFlapOpen_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/chargingport/rearright/Signal_SupportedInletTypes.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/Signal_EvseId.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/Signal_EvseId_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/Signal_IsCharging.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/Signal_IsCharging_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/Signal_IsDischarging.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/Signal_IsDischarging_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/location/Signal_Altitude.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/location/Signal_Altitude_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/location/Signal_Latitude.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/location/Signal_Latitude_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/location/Signal_Longitude.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/location/Signal_Longitude_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/Signal_MaxPower.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/Signal_MaxPower_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/maximumchargingcurrent/Signal_DC.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/maximumchargingcurrent/Signal_DC_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/maximumchargingcurrent/Signal_Phase1.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/maximumchargingcurrent/Signal_Phase1_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/maximumchargingcurrent/Signal_Phase2.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/maximumchargingcurrent/Signal_Phase2_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/maximumchargingcurrent/Signal_Phase3.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/maximumchargingcurrent/Signal_Phase3_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/Signal_PowerLoss.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/Signal_PowerLoss_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/Signal_StartStopCharging.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/Signal_StartStopCharging_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/Signal_StartStopCharging_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/Signal_TimeToComplete.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/Signal_TimeToComplete_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/timer/Signal_Mode.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/timer/Signal_Mode_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/timer/Signal_Mode_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/timer/Signal_Time.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/timer/Signal_Time_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/charging/timer/Signal_Time_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/dcdc/Signal_PowerLoss.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/dcdc/Signal_PowerLoss_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/dcdc/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/dcdc/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/Signal_MaxVoltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/Signal_NominalVoltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_AccumulatedChargedEnergy.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_AccumulatedChargedEnergy_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_AccumulatedChargedThroughput.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_AccumulatedChargedThroughput_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_AccumulatedConsumedEnergy.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_AccumulatedConsumedEnergy_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_AccumulatedConsumedThroughput.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_AccumulatedConsumedThroughput_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/batteryconditioning/Signal_IsActive.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/batteryconditioning/Signal_IsActive_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/batteryconditioning/Signal_IsOngoing.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/batteryconditioning/Signal_IsOngoing_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/batteryconditioning/Signal_RequestedMode.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/batteryconditioning/Signal_RequestedMode_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/batteryconditioning/Signal_RequestedMode_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/batteryconditioning/Signal_StartTime.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/batteryconditioning/Signal_StartTime_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/batteryconditioning/Signal_StartTime_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/batteryconditioning/Signal_TargetTemperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/batteryconditioning/Signal_TargetTemperature_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/batteryconditioning/Signal_TargetTemperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/batteryconditioning/Signal_TargetTime.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/batteryconditioning/Signal_TargetTime_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/batteryconditioning/Signal_TargetTime_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cellvoltage/Signal_IdMax.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cellvoltage/Signal_IdMax_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cellvoltage/Signal_IdMin.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cellvoltage/Signal_IdMin_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cellvoltage/Signal_Max.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cellvoltage/Signal_Max_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cellvoltage/Signal_Min.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cellvoltage/Signal_Min_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number1/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number1/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number1/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number1/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number10/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number10/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number10/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number10/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number2/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number2/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number2/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number2/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number3/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number3/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number3/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number3/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number4/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number4/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number4/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number4/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number5/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number5/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number5/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number5/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number6/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number6/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number6/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number6/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number7/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number7/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number7/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number7/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number8/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number8/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number8/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number8/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number9/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number9/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number9/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/cells/number9/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_CurrentCurrent.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_CurrentCurrent_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_CurrentPower.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_CurrentPower_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_CurrentVoltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_CurrentVoltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_ErrorCodes.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_ErrorCodes_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_GrossCapacity.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_Id.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_IsGroundConnected.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_IsGroundConnected_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_IsPowerConnected.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_IsPowerConnected_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_NetCapacity.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_NetCapacity_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_PowerLoss.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_PowerLoss_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_ProductionDate.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/stateofcharge/Signal_Current.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/stateofcharge/Signal_Current_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/stateofcharge/Signal_Displayed.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/stateofcharge/Signal_Displayed_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_StateOfHealth.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/Signal_StateOfHealth_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/temperature/Signal_Average.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/temperature/Signal_Average_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/temperature/Signal_Max.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/temperature/Signal_Max_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/temperature/Signal_Min.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number1/temperature/Signal_Min_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_AccumulatedChargedEnergy.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_AccumulatedChargedEnergy_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_AccumulatedChargedThroughput.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_AccumulatedChargedThroughput_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_AccumulatedConsumedEnergy.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_AccumulatedConsumedEnergy_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_AccumulatedConsumedThroughput.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_AccumulatedConsumedThroughput_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/batteryconditioning/Signal_IsActive.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/batteryconditioning/Signal_IsActive_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/batteryconditioning/Signal_IsOngoing.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/batteryconditioning/Signal_IsOngoing_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/batteryconditioning/Signal_RequestedMode.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/batteryconditioning/Signal_RequestedMode_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/batteryconditioning/Signal_RequestedMode_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/batteryconditioning/Signal_StartTime.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/batteryconditioning/Signal_StartTime_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/batteryconditioning/Signal_StartTime_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/batteryconditioning/Signal_TargetTemperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/batteryconditioning/Signal_TargetTemperature_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/batteryconditioning/Signal_TargetTemperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/batteryconditioning/Signal_TargetTime.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/batteryconditioning/Signal_TargetTime_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/batteryconditioning/Signal_TargetTime_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cellvoltage/Signal_IdMax.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cellvoltage/Signal_IdMax_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cellvoltage/Signal_IdMin.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cellvoltage/Signal_IdMin_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cellvoltage/Signal_Max.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cellvoltage/Signal_Max_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cellvoltage/Signal_Min.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cellvoltage/Signal_Min_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number1/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number1/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number1/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number1/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number10/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number10/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number10/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number10/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number2/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number2/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number2/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number2/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number3/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number3/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number3/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number3/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number4/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number4/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number4/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number4/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number5/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number5/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number5/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number5/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number6/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number6/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number6/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number6/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number7/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number7/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number7/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number7/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number8/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number8/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number8/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number8/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number9/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number9/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number9/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/cells/number9/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_CurrentCurrent.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_CurrentCurrent_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_CurrentPower.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_CurrentPower_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_CurrentVoltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_CurrentVoltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_ErrorCodes.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_ErrorCodes_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_GrossCapacity.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_Id.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_IsGroundConnected.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_IsGroundConnected_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_IsPowerConnected.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_IsPowerConnected_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_NetCapacity.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_NetCapacity_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_PowerLoss.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_PowerLoss_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_ProductionDate.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/stateofcharge/Signal_Current.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/stateofcharge/Signal_Current_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/stateofcharge/Signal_Displayed.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/stateofcharge/Signal_Displayed_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_StateOfHealth.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/Signal_StateOfHealth_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/temperature/Signal_Average.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/temperature/Signal_Average_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/temperature/Signal_Max.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/temperature/Signal_Max_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/temperature/Signal_Min.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number2/temperature/Signal_Min_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_AccumulatedChargedEnergy.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_AccumulatedChargedEnergy_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_AccumulatedChargedThroughput.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_AccumulatedChargedThroughput_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_AccumulatedConsumedEnergy.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_AccumulatedConsumedEnergy_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_AccumulatedConsumedThroughput.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_AccumulatedConsumedThroughput_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/batteryconditioning/Signal_IsActive.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/batteryconditioning/Signal_IsActive_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/batteryconditioning/Signal_IsOngoing.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/batteryconditioning/Signal_IsOngoing_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/batteryconditioning/Signal_RequestedMode.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/batteryconditioning/Signal_RequestedMode_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/batteryconditioning/Signal_RequestedMode_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/batteryconditioning/Signal_StartTime.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/batteryconditioning/Signal_StartTime_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/batteryconditioning/Signal_StartTime_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/batteryconditioning/Signal_TargetTemperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/batteryconditioning/Signal_TargetTemperature_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/batteryconditioning/Signal_TargetTemperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/batteryconditioning/Signal_TargetTime.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/batteryconditioning/Signal_TargetTime_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/batteryconditioning/Signal_TargetTime_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cellvoltage/Signal_IdMax.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cellvoltage/Signal_IdMax_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cellvoltage/Signal_IdMin.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cellvoltage/Signal_IdMin_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cellvoltage/Signal_Max.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cellvoltage/Signal_Max_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cellvoltage/Signal_Min.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cellvoltage/Signal_Min_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number1/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number1/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number1/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number1/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number10/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number10/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number10/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number10/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number2/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number2/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number2/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number2/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number3/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number3/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number3/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number3/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number4/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number4/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number4/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number4/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number5/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number5/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number5/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number5/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number6/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number6/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number6/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number6/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number7/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number7/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number7/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number7/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number8/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number8/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number8/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number8/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number9/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number9/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number9/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/cells/number9/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_CurrentCurrent.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_CurrentCurrent_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_CurrentPower.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_CurrentPower_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_CurrentVoltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_CurrentVoltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_ErrorCodes.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_ErrorCodes_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_GrossCapacity.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_Id.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_IsGroundConnected.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_IsGroundConnected_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_IsPowerConnected.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_IsPowerConnected_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_NetCapacity.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_NetCapacity_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_PowerLoss.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_PowerLoss_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_ProductionDate.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/stateofcharge/Signal_Current.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/stateofcharge/Signal_Current_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/stateofcharge/Signal_Displayed.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/stateofcharge/Signal_Displayed_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_StateOfHealth.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/Signal_StateOfHealth_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/temperature/Signal_Average.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/temperature/Signal_Average_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/temperature/Signal_Max.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/temperature/Signal_Max_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/temperature/Signal_Min.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number3/temperature/Signal_Min_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_AccumulatedChargedEnergy.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_AccumulatedChargedEnergy_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_AccumulatedChargedThroughput.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_AccumulatedChargedThroughput_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_AccumulatedConsumedEnergy.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_AccumulatedConsumedEnergy_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_AccumulatedConsumedThroughput.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_AccumulatedConsumedThroughput_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/batteryconditioning/Signal_IsActive.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/batteryconditioning/Signal_IsActive_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/batteryconditioning/Signal_IsOngoing.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/batteryconditioning/Signal_IsOngoing_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/batteryconditioning/Signal_RequestedMode.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/batteryconditioning/Signal_RequestedMode_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/batteryconditioning/Signal_RequestedMode_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/batteryconditioning/Signal_StartTime.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/batteryconditioning/Signal_StartTime_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/batteryconditioning/Signal_StartTime_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/batteryconditioning/Signal_TargetTemperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/batteryconditioning/Signal_TargetTemperature_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/batteryconditioning/Signal_TargetTemperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/batteryconditioning/Signal_TargetTime.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/batteryconditioning/Signal_TargetTime_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/batteryconditioning/Signal_TargetTime_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cellvoltage/Signal_IdMax.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cellvoltage/Signal_IdMax_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cellvoltage/Signal_IdMin.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cellvoltage/Signal_IdMin_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cellvoltage/Signal_Max.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cellvoltage/Signal_Max_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cellvoltage/Signal_Min.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cellvoltage/Signal_Min_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number1/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number1/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number1/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number1/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number10/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number10/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number10/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number10/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number2/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number2/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number2/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number2/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number3/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number3/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number3/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number3/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number4/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number4/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number4/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number4/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number5/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number5/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number5/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number5/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number6/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number6/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number6/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number6/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number7/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number7/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number7/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number7/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number8/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number8/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number8/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number8/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number9/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number9/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number9/Signal_Voltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/cells/number9/Signal_Voltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_CurrentCurrent.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_CurrentCurrent_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_CurrentPower.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_CurrentPower_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_CurrentVoltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_CurrentVoltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_ErrorCodes.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_ErrorCodes_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_GrossCapacity.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_Id.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_IsGroundConnected.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_IsGroundConnected_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_IsPowerConnected.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_IsPowerConnected_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_NetCapacity.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_NetCapacity_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_PowerLoss.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_PowerLoss_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_ProductionDate.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/stateofcharge/Signal_Current.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/stateofcharge/Signal_Current_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/stateofcharge/Signal_Displayed.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/stateofcharge/Signal_Displayed_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_StateOfHealth.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/Signal_StateOfHealth_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/temperature/Signal_Average.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/temperature/Signal_Average_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/temperature/Signal_Max.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/temperature/Signal_Max_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/temperature/Signal_Min.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/number4/temperature/Signal_Min_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/Signal_Range.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/Signal_Range_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/Signal_TimeRemaining.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/Signal_TimeRemaining_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/Signal_TotalCurrentCurrent.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/Signal_TotalCurrentCurrent_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/Signal_TotalCurrentPower.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/Signal_TotalCurrentPower_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/Signal_TotalCurrentVoltage.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/Signal_TotalCurrentVoltage_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/Signal_TotalGrossCapacity.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/Signal_TotalNetCapacity.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/Signal_TotalNetCapacity_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/totalstateofcharge/Signal_Current.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/totalstateofcharge/Signal_Current_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/totalstateofcharge/Signal_Displayed.h" // IWYU pragma: keep
#include "powertrain/tractionbattery/totalstateofcharge/Signal_Displayed_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_ClutchEngagement.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_ClutchEngagement_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_ClutchEngagement_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_ClutchWear.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_ClutchWear_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_CurrentGear.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_CurrentGear_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_CurrentPhysicalGear.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_CurrentPhysicalGear_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_DiffLockCenterEngagement.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_DiffLockCenterEngagement_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_DiffLockCenterEngagement_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_DiffLockFrontEngagement.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_DiffLockFrontEngagement_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_DiffLockFrontEngagement_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_DiffLockRearEngagement.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_DiffLockRearEngagement_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_DiffLockRearEngagement_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_DriveType.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_GearChangeMode.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_GearChangeMode_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_GearChangeMode_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_GearCount.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_IsElectricalPowertrainEngaged.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_IsElectricalPowertrainEngaged_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_IsElectricalPowertrainEngaged_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_IsLowRangeEngaged.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_IsLowRangeEngaged_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_IsLowRangeEngaged_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_IsParkLockEngaged.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_IsParkLockEngaged_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_IsParkLockEngaged_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_PerformanceMode.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_PerformanceMode_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_PerformanceMode_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_SelectedGear.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_SelectedGear_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_SelectedGear_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_Temperature.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_Temperature_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_TorqueDistribution.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_TorqueDistribution_Availability_Actuator.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_TorqueDistribution_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_TravelledDistance.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_TravelledDistance_Availability_Sensor.h" // IWYU pragma: keep
#include "powertrain/transmission/Signal_Type.h" // IWYU pragma: keep
#include "powertrain/Signal_Type.h" // IWYU pragma: keep
#include "Signal_RoofLoad.h" // IWYU pragma: keep
#include "Signal_Speed.h" // IWYU pragma: keep
#include "Signal_Speed_Availability_Sensor.h" // IWYU pragma: keep
#include "Signal_StartTime.h" // IWYU pragma: keep
#include "trailer/Signal_IsConnected.h" // IWYU pragma: keep
#include "trailer/Signal_IsConnected_Availability_Sensor.h" // IWYU pragma: keep
#include "Signal_TraveledDistance.h" // IWYU pragma: keep
#include "Signal_TraveledDistanceSinceStart.h" // IWYU pragma: keep
#include "Signal_TraveledDistanceSinceStart_Availability_Sensor.h" // IWYU pragma: keep
#include "Signal_TraveledDistance_Availability_Sensor.h" // IWYU pragma: keep
#include "Signal_TripDuration.h" // IWYU pragma: keep
#include "Signal_TripDuration_Availability_Sensor.h" // IWYU pragma: keep
#include "Signal_TripMeterReading.h" // IWYU pragma: keep
#include "Signal_TripMeterReading_Availability_Actuator.h" // IWYU pragma: keep
#include "Signal_TripMeterReading_Availability_Sensor.h" // IWYU pragma: keep
#include "Signal_TurningDiameter.h" // IWYU pragma: keep
#include "vehicleidentification/Signal_AcrissCode.h" // IWYU pragma: keep
#include "vehicleidentification/Signal_BodyType.h" // IWYU pragma: keep
#include "vehicleidentification/Signal_Brand.h" // IWYU pragma: keep
#include "vehicleidentification/Signal_DateVehicleFirstRegistered.h" // IWYU pragma: keep
#include "vehicleidentification/Signal_KnownVehicleDamages.h" // IWYU pragma: keep
#include "vehicleidentification/Signal_LicensePlate.h" // IWYU pragma: keep
#include "vehicleidentification/Signal_MeetsEmissionStandard.h" // IWYU pragma: keep
#include "vehicleidentification/Signal_Model.h" // IWYU pragma: keep
#include "vehicleidentification/Signal_OptionalExtras.h" // IWYU pragma: keep
#include "vehicleidentification/Signal_ProductionDate.h" // IWYU pragma: keep
#include "vehicleidentification/Signal_PurchaseDate.h" // IWYU pragma: keep
#include "vehicleidentification/Signal_VIN.h" // IWYU pragma: keep
#include "vehicleidentification/Signal_VehicleConfiguration.h" // IWYU pragma: keep
#include "vehicleidentification/Signal_VehicleExteriorColor.h" // IWYU pragma: keep
#include "vehicleidentification/Signal_VehicleInteriorColor.h" // IWYU pragma: keep
#include "vehicleidentification/Signal_VehicleInteriorType.h" // IWYU pragma: keep
#include "vehicleidentification/Signal_VehicleModelDate.h" // IWYU pragma: keep
#include "vehicleidentification/Signal_VehicleSeatingCapacity.h" // IWYU pragma: keep
#include "vehicleidentification/Signal_VehicleSpecialUsage.h" // IWYU pragma: keep
#include "vehicleidentification/Signal_WMI.h" // IWYU pragma: keep
#include "vehicleidentification/Signal_Year.h" // IWYU pragma: keep
#include "versionyoriitovss/Signal_Label.h" // IWYU pragma: keep
#include "versionyoriitovss/Signal_Major.h" // IWYU pragma: keep
#include "versionyoriitovss/Signal_Minor.h" // IWYU pragma: keep
#include "versionyoriitovss/Signal_Patch.h" // IWYU pragma: keep
#include "versionvss/Signal_Label.h" // IWYU pragma: keep
#include "versionvss/Signal_Major.h" // IWYU pragma: keep
#include "versionvss/Signal_Minor.h" // IWYU pragma: keep
#include "versionvss/Signal_Patch.h" // IWYU pragma: keep
#include "Signal_WidthExcludingMirrors.h" // IWYU pragma: keep
#include "Signal_WidthFoldedMirrors.h" // IWYU pragma: keep
#include "Signal_WidthIncludingMirrors.h" // IWYU pragma: keep

// To be auto-generated
static bool REGISTERED = [] {
	Registry<bool>::Register("Vehicle.ADAS.ABS.IsEnabled", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::adas::abs::isenabled, bool);});
	Registry<bool>::Register("Vehicle.ADAS.ABS.IsEnabled_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::abs::isenabled_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.ADAS.ABS.IsEnabled_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::abs::isenabled_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.ADAS.ABS.IsEngaged", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::abs::isengaged, bool);});
	Registry<bool>::Register("Vehicle.ADAS.ABS.IsEngaged_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::abs::isengaged_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.ADAS.ActiveAutonomyLevel", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::activeautonomylevel, std::string);});
	Registry<bool>::Register("Vehicle.ADAS.ActiveAutonomyLevel_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::activeautonomylevel_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.ADAS.AdaptiveCruiseControl.DegradationStatus", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::adaptivecruisecontrol::degradationstatus, std::string);});
	Registry<bool>::Register("Vehicle.ADAS.AdaptiveCruiseControl.DegradationStatus_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::adaptivecruisecontrol::degradationstatus_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.ADAS.AdaptiveCruiseControl.DistanceSet", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::adas::adaptivecruisecontrol::distanceset, std::string);});
	Registry<bool>::Register("Vehicle.ADAS.AdaptiveCruiseControl.DistanceSet_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::adaptivecruisecontrol::distanceset_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.ADAS.AdaptiveCruiseControl.DistanceSet_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::adaptivecruisecontrol::distanceset_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.ADAS.AdaptiveCruiseControl.IsActive", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::adas::adaptivecruisecontrol::isactive, bool);});
	Registry<bool>::Register("Vehicle.ADAS.AdaptiveCruiseControl.IsActive_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::adaptivecruisecontrol::isactive_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.ADAS.AdaptiveCruiseControl.IsActive_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::adaptivecruisecontrol::isactive_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.ADAS.AdaptiveCruiseControl.IsEnabled", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::adas::adaptivecruisecontrol::isenabled, bool);});
	Registry<bool>::Register("Vehicle.ADAS.AdaptiveCruiseControl.IsEnabled_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::adaptivecruisecontrol::isenabled_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.ADAS.AdaptiveCruiseControl.IsEnabled_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::adaptivecruisecontrol::isenabled_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::adas::adaptivecruisecontrol::speedset, float);});
	Registry<bool>::Register("Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::adaptivecruisecontrol::speedset_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::adaptivecruisecontrol::speedset_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.ADAS.DMS.DegradationStatus", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::dms::degradationstatus, std::string);});
	Registry<bool>::Register("Vehicle.ADAS.DMS.DegradationStatus_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::dms::degradationstatus_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.ADAS.DMS.IsEnabled", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::adas::dms::isenabled, bool);});
	Registry<bool>::Register("Vehicle.ADAS.DMS.IsEnabled_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::dms::isenabled_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.ADAS.DMS.IsEnabled_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::dms::isenabled_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.ADAS.DMS.IsWarning", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::dms::iswarning, bool);});
	Registry<bool>::Register("Vehicle.ADAS.DMS.IsWarning_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::dms::iswarning_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.ADAS.EBA.IsEnabled", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::adas::eba::isenabled, bool);});
	Registry<bool>::Register("Vehicle.ADAS.EBA.IsEnabled_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::eba::isenabled_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.ADAS.EBA.IsEnabled_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::eba::isenabled_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.ADAS.EBA.IsEngaged", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::eba::isengaged, bool);});
	Registry<bool>::Register("Vehicle.ADAS.EBA.IsEngaged_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::eba::isengaged_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.ADAS.EBD.IsEnabled", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::adas::ebd::isenabled, bool);});
	Registry<bool>::Register("Vehicle.ADAS.EBD.IsEnabled_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::ebd::isenabled_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.ADAS.EBD.IsEnabled_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::ebd::isenabled_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.ADAS.EBD.IsEngaged", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::ebd::isengaged, bool);});
	Registry<bool>::Register("Vehicle.ADAS.EBD.IsEngaged_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::ebd::isengaged_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.ADAS.ESC.IsEnabled", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::adas::esc::isenabled, bool);});
	Registry<bool>::Register("Vehicle.ADAS.ESC.IsEnabled_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::esc::isenabled_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.ADAS.ESC.IsEnabled_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::esc::isenabled_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.ADAS.ESC.IsEngaged", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::esc::isengaged, bool);});
	Registry<bool>::Register("Vehicle.ADAS.ESC.IsEngaged_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::esc::isengaged_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.ADAS.ESC.IsStrongCrossWindDetected", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::esc::isstrongcrosswinddetected, bool);});
	Registry<bool>::Register("Vehicle.ADAS.ESC.IsStrongCrossWindDetected_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::esc::isstrongcrosswinddetected_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.ADAS.ESC.RoadFriction.LowerBound", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::esc::roadfriction::lowerbound, float);});
	Registry<bool>::Register("Vehicle.ADAS.ESC.RoadFriction.LowerBound_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::esc::roadfriction::lowerbound_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.ADAS.ESC.RoadFriction.MostProbable", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::esc::roadfriction::mostprobable, float);});
	Registry<bool>::Register("Vehicle.ADAS.ESC.RoadFriction.MostProbable_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::esc::roadfriction::mostprobable_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.ADAS.ESC.RoadFriction.UpperBound", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::esc::roadfriction::upperbound, float);});
	Registry<bool>::Register("Vehicle.ADAS.ESC.RoadFriction.UpperBound_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::esc::roadfriction::upperbound_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.ADAS.IsAutoPowerOptimize", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::adas::isautopoweroptimize, bool);});
	Registry<bool>::Register("Vehicle.ADAS.IsAutoPowerOptimize_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::isautopoweroptimize_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.ADAS.IsAutoPowerOptimize_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::isautopoweroptimize_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.ADAS.LaneDepartureDetection.DegradationStatus", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::lanedeparturedetection::degradationstatus, std::string);});
	Registry<bool>::Register("Vehicle.ADAS.LaneDepartureDetection.DegradationStatus_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::lanedeparturedetection::degradationstatus_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.ADAS.LaneDepartureDetection.IsEnabled", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::adas::lanedeparturedetection::isenabled, bool);});
	Registry<bool>::Register("Vehicle.ADAS.LaneDepartureDetection.IsEnabled_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::lanedeparturedetection::isenabled_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.ADAS.LaneDepartureDetection.IsEnabled_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::lanedeparturedetection::isenabled_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.ADAS.LaneDepartureDetection.IsWarning", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::lanedeparturedetection::iswarning, bool);});
	Registry<bool>::Register("Vehicle.ADAS.LaneDepartureDetection.IsWarning_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::lanedeparturedetection::iswarning_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.ADAS.ObstacleDetection.DegradationStatus", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::obstacledetection::degradationstatus, std::string);});
	Registry<bool>::Register("Vehicle.ADAS.ObstacleDetection.DegradationStatus_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::obstacledetection::degradationstatus_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.ADAS.ObstacleDetection.IsEnabled", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::adas::obstacledetection::isenabled, bool);});
	Registry<bool>::Register("Vehicle.ADAS.ObstacleDetection.IsEnabled_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::obstacledetection::isenabled_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.ADAS.ObstacleDetection.IsEnabled_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::obstacledetection::isenabled_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.ADAS.ObstacleDetection.IsWarning", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::obstacledetection::iswarning, bool);});
	Registry<bool>::Register("Vehicle.ADAS.ObstacleDetection.IsWarning_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::obstacledetection::iswarning_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.ADAS.PowerOptimizeLevel", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::adas::poweroptimizelevel, uint8_t);});
	Registry<bool>::Register("Vehicle.ADAS.PowerOptimizeLevel_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::poweroptimizelevel_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.ADAS.PowerOptimizeLevel_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::poweroptimizelevel_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.ADAS.SupportedAutonomyLevel", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::adas::supportedautonomylevel, std::string);});
	Registry<bool>::Register("Vehicle.ADAS.TCS.IsEnabled", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::adas::tcs::isenabled, bool);});
	Registry<bool>::Register("Vehicle.ADAS.TCS.IsEnabled_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::tcs::isenabled_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.ADAS.TCS.IsEnabled_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::tcs::isenabled_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.ADAS.TCS.IsEngaged", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::tcs::isengaged, bool);});
	Registry<bool>::Register("Vehicle.ADAS.TCS.IsEngaged_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::adas::tcs::isengaged_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Acceleration.Lateral", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::acceleration::lateral, float);});
	Registry<bool>::Register("Vehicle.Acceleration.Lateral_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::acceleration::lateral_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Acceleration.Longitudinal", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::acceleration::longitudinal, float);});
	Registry<bool>::Register("Vehicle.Acceleration.Longitudinal_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::acceleration::longitudinal_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Acceleration.Vertical", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::acceleration::vertical, float);});
	Registry<bool>::Register("Vehicle.Acceleration.Vertical_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::acceleration::vertical_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.AngularVelocity.Pitch", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::angularvelocity::pitch, float);});
	Registry<bool>::Register("Vehicle.AngularVelocity.Pitch_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::angularvelocity::pitch_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.AngularVelocity.Roll", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::angularvelocity::roll, float);});
	Registry<bool>::Register("Vehicle.AngularVelocity.Roll_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::angularvelocity::roll_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.AngularVelocity.Yaw", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::angularvelocity::yaw, float);});
	Registry<bool>::Register("Vehicle.AngularVelocity.Yaw_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::angularvelocity::yaw_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.AverageSpeed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::averagespeed, float);});
	Registry<bool>::Register("Vehicle.AverageSpeed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::averagespeed_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Hood.IsLocked", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::hood::islocked, bool);});
	Registry<bool>::Register("Vehicle.Body.Hood.IsLocked_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::hood::islocked_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Hood.IsLocked_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::hood::islocked_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Hood.IsOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::hood::isopen, bool);});
	Registry<bool>::Register("Vehicle.Body.Hood.IsOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::hood::isopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Hood.IsOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::hood::isopen_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Body.Hood.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::hood::position, uint8_t);});
	Registry<bool>::Register("Vehicle.Body.Hood.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::hood::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Hood.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::hood::position_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Horn.IsActive", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::horn::isactive, bool);});
	Registry<bool>::Register("Vehicle.Body.Horn.IsActive_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::horn::isactive_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Horn.IsActive_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::horn::isactive_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.IsAutoPowerOptimize", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::isautopoweroptimize, bool);});
	Registry<bool>::Register("Vehicle.Body.IsAutoPowerOptimize_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::isautopoweroptimize_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.IsAutoPowerOptimize_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::isautopoweroptimize_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Backup.IsDefect", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::backup::isdefect, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Backup.IsDefect_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::backup::isdefect_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Backup.IsOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::lights::backup::ison, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Backup.IsOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::backup::ison_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Backup.IsOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::backup::ison_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Beam.High.IsDefect", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::beam::high::isdefect, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Beam.High.IsDefect_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::beam::high::isdefect_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Beam.High.IsOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::lights::beam::high::ison, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Beam.High.IsOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::beam::high::ison_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Beam.High.IsOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::beam::high::ison_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Beam.Low.IsDefect", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::beam::low::isdefect, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Beam.Low.IsDefect_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::beam::low::isdefect_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Beam.Low.IsOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::lights::beam::low::ison, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Beam.Low.IsOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::beam::low::ison_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Beam.Low.IsOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::beam::low::ison_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Body.Lights.Brake.IsActive", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::lights::brake::isactive, std::string);});
	Registry<bool>::Register("Vehicle.Body.Lights.Brake.IsActive_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::brake::isactive_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Brake.IsActive_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::brake::isactive_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Brake.IsDefect", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::brake::isdefect, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Brake.IsDefect_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::brake::isdefect_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.DirectionIndicator.Left.IsDefect", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::directionindicator::left::isdefect, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.DirectionIndicator.Left.IsDefect_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::directionindicator::left::isdefect_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.DirectionIndicator.Left.IsSignaling", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::lights::directionindicator::left::issignaling, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.DirectionIndicator.Left.IsSignaling_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::directionindicator::left::issignaling_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.DirectionIndicator.Left.IsSignaling_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::directionindicator::left::issignaling_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.DirectionIndicator.Right.IsDefect", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::directionindicator::right::isdefect, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.DirectionIndicator.Right.IsDefect_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::directionindicator::right::isdefect_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.DirectionIndicator.Right.IsSignaling", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::lights::directionindicator::right::issignaling, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.DirectionIndicator.Right.IsSignaling_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::directionindicator::right::issignaling_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.DirectionIndicator.Right.IsSignaling_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::directionindicator::right::issignaling_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Fog.Front.IsDefect", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::fog::front::isdefect, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Fog.Front.IsDefect_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::fog::front::isdefect_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Fog.Front.IsOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::lights::fog::front::ison, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Fog.Front.IsOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::fog::front::ison_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Fog.Front.IsOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::fog::front::ison_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Fog.Rear.IsDefect", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::fog::rear::isdefect, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Fog.Rear.IsDefect_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::fog::rear::isdefect_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Fog.Rear.IsOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::lights::fog::rear::ison, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Fog.Rear.IsOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::fog::rear::ison_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Fog.Rear.IsOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::fog::rear::ison_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Hazard.IsDefect", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::hazard::isdefect, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Hazard.IsDefect_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::hazard::isdefect_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Hazard.IsSignaling", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::lights::hazard::issignaling, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Hazard.IsSignaling_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::hazard::issignaling_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Hazard.IsSignaling_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::hazard::issignaling_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.LicensePlate.IsDefect", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::licenseplate::isdefect, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.LicensePlate.IsDefect_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::licenseplate::isdefect_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.LicensePlate.IsOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::lights::licenseplate::ison, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.LicensePlate.IsOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::licenseplate::ison_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.LicensePlate.IsOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::licenseplate::ison_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Parking.IsDefect", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::parking::isdefect, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Parking.IsDefect_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::parking::isdefect_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Parking.IsOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::lights::parking::ison, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Parking.IsOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::parking::ison_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Parking.IsOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::parking::ison_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Running.IsDefect", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::running::isdefect, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Running.IsDefect_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::running::isdefect_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Running.IsOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::lights::running::ison, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Running.IsOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::running::ison_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Lights.Running.IsOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::lights::running::ison_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.DriverSide.IsFolded", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::mirrors::driverside::isfolded, bool);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.DriverSide.IsFolded_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::mirrors::driverside::isfolded_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.DriverSide.IsFolded_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::mirrors::driverside::isfolded_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.DriverSide.IsHeatingOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::mirrors::driverside::isheatingon, bool);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.DriverSide.IsHeatingOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::mirrors::driverside::isheatingon_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.DriverSide.IsHeatingOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::mirrors::driverside::isheatingon_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.DriverSide.IsLocked", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::mirrors::driverside::islocked, bool);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.DriverSide.IsLocked_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::mirrors::driverside::islocked_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.DriverSide.IsLocked_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::mirrors::driverside::islocked_availability_sensor, bool);});
	Registry<int8_t>::Register("Vehicle.Body.Mirrors.DriverSide.Pan", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::mirrors::driverside::pan, int8_t);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.DriverSide.Pan_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::mirrors::driverside::pan_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.DriverSide.Pan_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::mirrors::driverside::pan_availability_sensor, bool);});
	Registry<int8_t>::Register("Vehicle.Body.Mirrors.DriverSide.Tilt", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::mirrors::driverside::tilt, int8_t);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.DriverSide.Tilt_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::mirrors::driverside::tilt_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.DriverSide.Tilt_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::mirrors::driverside::tilt_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.PassengerSide.IsFolded", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::mirrors::passengerside::isfolded, bool);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.PassengerSide.IsFolded_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::mirrors::passengerside::isfolded_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.PassengerSide.IsFolded_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::mirrors::passengerside::isfolded_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.PassengerSide.IsHeatingOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::mirrors::passengerside::isheatingon, bool);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.PassengerSide.IsHeatingOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::mirrors::passengerside::isheatingon_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.PassengerSide.IsHeatingOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::mirrors::passengerside::isheatingon_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.PassengerSide.IsLocked", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::mirrors::passengerside::islocked, bool);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.PassengerSide.IsLocked_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::mirrors::passengerside::islocked_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.PassengerSide.IsLocked_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::mirrors::passengerside::islocked_availability_sensor, bool);});
	Registry<int8_t>::Register("Vehicle.Body.Mirrors.PassengerSide.Pan", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::mirrors::passengerside::pan, int8_t);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.PassengerSide.Pan_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::mirrors::passengerside::pan_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.PassengerSide.Pan_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::mirrors::passengerside::pan_availability_sensor, bool);});
	Registry<int8_t>::Register("Vehicle.Body.Mirrors.PassengerSide.Tilt", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::mirrors::passengerside::tilt, int8_t);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.PassengerSide.Tilt_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::mirrors::passengerside::tilt_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Mirrors.PassengerSide.Tilt_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::mirrors::passengerside::tilt_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Body.PowerOptimizeLevel", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::poweroptimizelevel, uint8_t);});
	Registry<bool>::Register("Vehicle.Body.PowerOptimizeLevel_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::poweroptimizelevel_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.PowerOptimizeLevel_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::poweroptimizelevel_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Body.Raindetection.Intensity", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::raindetection::intensity, uint8_t);});
	Registry<bool>::Register("Vehicle.Body.Raindetection.Intensity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::raindetection::intensity_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Body.RearMainSpoilerPosition", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::rearmainspoilerposition, float);});
	Registry<bool>::Register("Vehicle.Body.RearMainSpoilerPosition_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::rearmainspoilerposition_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.RearMainSpoilerPosition_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::rearmainspoilerposition_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Trunk.Front.IsLightOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::trunk::front::islighton, bool);});
	Registry<bool>::Register("Vehicle.Body.Trunk.Front.IsLightOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::trunk::front::islighton_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Trunk.Front.IsLightOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::trunk::front::islighton_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Trunk.Front.IsLocked", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::trunk::front::islocked, bool);});
	Registry<bool>::Register("Vehicle.Body.Trunk.Front.IsLocked_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::trunk::front::islocked_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Trunk.Front.IsLocked_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::trunk::front::islocked_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Trunk.Front.IsOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::trunk::front::isopen, bool);});
	Registry<bool>::Register("Vehicle.Body.Trunk.Front.IsOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::trunk::front::isopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Trunk.Front.IsOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::trunk::front::isopen_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Body.Trunk.Front.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::trunk::front::position, uint8_t);});
	Registry<bool>::Register("Vehicle.Body.Trunk.Front.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::trunk::front::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Trunk.Front.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::trunk::front::position_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Trunk.Rear.IsLightOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::trunk::rear::islighton, bool);});
	Registry<bool>::Register("Vehicle.Body.Trunk.Rear.IsLightOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::trunk::rear::islighton_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Trunk.Rear.IsLightOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::trunk::rear::islighton_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Trunk.Rear.IsLocked", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::trunk::rear::islocked, bool);});
	Registry<bool>::Register("Vehicle.Body.Trunk.Rear.IsLocked_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::trunk::rear::islocked_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Trunk.Rear.IsLocked_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::trunk::rear::islocked_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Trunk.Rear.IsOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::trunk::rear::isopen, bool);});
	Registry<bool>::Register("Vehicle.Body.Trunk.Rear.IsOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::trunk::rear::isopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Trunk.Rear.IsOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::trunk::rear::isopen_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Body.Trunk.Rear.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::trunk::rear::position, uint8_t);});
	Registry<bool>::Register("Vehicle.Body.Trunk.Rear.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::trunk::rear::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Trunk.Rear.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::trunk::rear::position_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.IsHeatingOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::windshield::front::isheatingon, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.IsHeatingOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::isheatingon_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.IsHeatingOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::isheatingon_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Body.Windshield.Front.WasherFluid.Level", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::washerfluid::level, uint8_t);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.WasherFluid.Level_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::washerfluid::level_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Body.Windshield.Front.Wiping.Intensity", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::windshield::front::wiping::intensity, uint8_t);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.Intensity_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::intensity_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.Intensity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::intensity_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.IsWiperWorn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::iswiperworn_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.IsWipersWorn", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::iswipersworn, bool);});
	Registry<std::string>::Register("Vehicle.Body.Windshield.Front.Wiping.Mode", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::windshield::front::wiping::mode, std::string);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.Mode_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::mode_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.Mode_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::mode_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Body.Windshield.Front.Wiping.System.DriveCurrent", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::system::drivecurrent, float);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.System.DriveCurrent_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::system::drivecurrent_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Body.Windshield.Front.Wiping.System.Frequency", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::windshield::front::wiping::system::frequency, uint8_t);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.System.Frequency_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::system::frequency_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.System.Frequency_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::system::frequency_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.System.IsBlocked", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::system::isblocked, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.System.IsBlocked_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::system::isblocked_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.System.IsEndingWipeCycle", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::system::isendingwipecycle, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.System.IsEndingWipeCycle_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::system::isendingwipecycle_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.System.IsOverheated", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::system::isoverheated, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.System.IsOverheated_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::system::isoverheated_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.System.IsPositionReached", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::system::ispositionreached, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.System.IsPositionReached_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::system::ispositionreached_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.System.IsWiperError", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::system::iswipererror, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.System.IsWiperError_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::system::iswipererror_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.System.IsWiping", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::system::iswiping, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.System.IsWiping_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::system::iswiping_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Body.Windshield.Front.Wiping.System.Mode", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::windshield::front::wiping::system::mode, std::string);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.System.Mode_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::system::mode_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.System.Mode_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::system::mode_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Body.Windshield.Front.Wiping.System.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::windshield::front::wiping::system::position, uint8_t);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.System.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::system::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.System.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::system::position_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Body.Windshield.Front.Wiping.WiperWear", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::wiperwear, uint8_t);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Front.Wiping.WiperWear_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::front::wiping::wiperwear_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.IsHeatingOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::windshield::rear::isheatingon, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.IsHeatingOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::isheatingon_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.IsHeatingOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::isheatingon_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Body.Windshield.Rear.WasherFluid.Level", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::washerfluid::level, uint8_t);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.WasherFluid.Level_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::washerfluid::level_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Body.Windshield.Rear.Wiping.Intensity", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::windshield::rear::wiping::intensity, uint8_t);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.Intensity_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::intensity_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.Intensity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::intensity_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.IsWiperWorn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::iswiperworn_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.IsWipersWorn", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::iswipersworn, bool);});
	Registry<std::string>::Register("Vehicle.Body.Windshield.Rear.Wiping.Mode", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::windshield::rear::wiping::mode, std::string);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.Mode_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::mode_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.Mode_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::mode_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Body.Windshield.Rear.Wiping.System.DriveCurrent", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::system::drivecurrent, float);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.System.DriveCurrent_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::system::drivecurrent_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Body.Windshield.Rear.Wiping.System.Frequency", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::windshield::rear::wiping::system::frequency, uint8_t);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.System.Frequency_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::system::frequency_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.System.Frequency_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::system::frequency_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.System.IsBlocked", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::system::isblocked, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.System.IsBlocked_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::system::isblocked_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.System.IsEndingWipeCycle", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::system::isendingwipecycle, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.System.IsEndingWipeCycle_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::system::isendingwipecycle_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.System.IsOverheated", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::system::isoverheated, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.System.IsOverheated_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::system::isoverheated_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.System.IsPositionReached", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::system::ispositionreached, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.System.IsPositionReached_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::system::ispositionreached_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.System.IsWiperError", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::system::iswipererror, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.System.IsWiperError_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::system::iswipererror_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.System.IsWiping", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::system::iswiping, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.System.IsWiping_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::system::iswiping_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Body.Windshield.Rear.Wiping.System.Mode", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::windshield::rear::wiping::system::mode, std::string);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.System.Mode_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::system::mode_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.System.Mode_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::system::mode_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Body.Windshield.Rear.Wiping.System.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::body::windshield::rear::wiping::system::position, uint8_t);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.System.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::system::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.System.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::system::position_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Body.Windshield.Rear.Wiping.WiperWear", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::wiperwear, uint8_t);});
	Registry<bool>::Register("Vehicle.Body.Windshield.Rear.Wiping.WiperWear_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::body::windshield::rear::wiping::wiperwear_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Convertible.IsOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::convertible::isopen, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Convertible.IsOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::convertible::isopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Convertible.IsOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::convertible::isopen_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Convertible.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::convertible::position, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Convertible.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::convertible::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Convertible.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::convertible::position_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.DriverSide.IsChildLockActive", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::driverside::ischildlockactive, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.DriverSide.IsChildLockActive_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::driverside::ischildlockactive_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.DriverSide.IsLocked", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row1::driverside::islocked, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.DriverSide.IsLocked_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::driverside::islocked_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.DriverSide.IsLocked_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::driverside::islocked_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.DriverSide.IsOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row1::driverside::isopen, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.DriverSide.IsOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::driverside::isopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.DriverSide.IsOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::driverside::isopen_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Door.Row1.DriverSide.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row1::driverside::position, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.DriverSide.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::driverside::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.DriverSide.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::driverside::position_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.DriverSide.Shade.IsOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row1::driverside::shade::isopen, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.DriverSide.Shade.IsOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::driverside::shade::isopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.DriverSide.Shade.IsOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::driverside::shade::isopen_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Door.Row1.DriverSide.Shade.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row1::driverside::shade::position, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.DriverSide.Shade.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::driverside::shade::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.DriverSide.Shade.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::driverside::shade::position_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.DriverSide.Window.IsOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row1::driverside::window::isopen, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.DriverSide.Window.IsOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::driverside::window::isopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.DriverSide.Window.IsOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::driverside::window::isopen_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Door.Row1.DriverSide.Window.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row1::driverside::window::position, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.DriverSide.Window.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::driverside::window::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.DriverSide.Window.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::driverside::window::position_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.PassengerSide.IsChildLockActive", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::passengerside::ischildlockactive, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.PassengerSide.IsChildLockActive_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::passengerside::ischildlockactive_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.PassengerSide.IsLocked", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row1::passengerside::islocked, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.PassengerSide.IsLocked_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::passengerside::islocked_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.PassengerSide.IsLocked_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::passengerside::islocked_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.PassengerSide.IsOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row1::passengerside::isopen, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.PassengerSide.IsOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::passengerside::isopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.PassengerSide.IsOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::passengerside::isopen_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Door.Row1.PassengerSide.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row1::passengerside::position, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.PassengerSide.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::passengerside::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.PassengerSide.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::passengerside::position_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.PassengerSide.Shade.IsOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row1::passengerside::shade::isopen, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.PassengerSide.Shade.IsOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::passengerside::shade::isopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.PassengerSide.Shade.IsOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::passengerside::shade::isopen_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Door.Row1.PassengerSide.Shade.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row1::passengerside::shade::position, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.PassengerSide.Shade.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::passengerside::shade::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.PassengerSide.Shade.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::passengerside::shade::position_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.PassengerSide.Window.IsOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row1::passengerside::window::isopen, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.PassengerSide.Window.IsOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::passengerside::window::isopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.PassengerSide.Window.IsOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::passengerside::window::isopen_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Door.Row1.PassengerSide.Window.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row1::passengerside::window::position, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.PassengerSide.Window.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::passengerside::window::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row1.PassengerSide.Window.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row1::passengerside::window::position_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.DriverSide.IsChildLockActive", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::driverside::ischildlockactive, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.DriverSide.IsChildLockActive_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::driverside::ischildlockactive_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.DriverSide.IsLocked", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row2::driverside::islocked, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.DriverSide.IsLocked_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::driverside::islocked_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.DriverSide.IsLocked_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::driverside::islocked_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.DriverSide.IsOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row2::driverside::isopen, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.DriverSide.IsOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::driverside::isopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.DriverSide.IsOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::driverside::isopen_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Door.Row2.DriverSide.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row2::driverside::position, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.DriverSide.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::driverside::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.DriverSide.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::driverside::position_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.DriverSide.Shade.IsOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row2::driverside::shade::isopen, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.DriverSide.Shade.IsOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::driverside::shade::isopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.DriverSide.Shade.IsOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::driverside::shade::isopen_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Door.Row2.DriverSide.Shade.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row2::driverside::shade::position, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.DriverSide.Shade.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::driverside::shade::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.DriverSide.Shade.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::driverside::shade::position_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.DriverSide.Window.IsOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row2::driverside::window::isopen, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.DriverSide.Window.IsOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::driverside::window::isopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.DriverSide.Window.IsOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::driverside::window::isopen_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Door.Row2.DriverSide.Window.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row2::driverside::window::position, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.DriverSide.Window.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::driverside::window::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.DriverSide.Window.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::driverside::window::position_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.PassengerSide.IsChildLockActive", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::passengerside::ischildlockactive, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.PassengerSide.IsChildLockActive_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::passengerside::ischildlockactive_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.PassengerSide.IsLocked", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row2::passengerside::islocked, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.PassengerSide.IsLocked_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::passengerside::islocked_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.PassengerSide.IsLocked_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::passengerside::islocked_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.PassengerSide.IsOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row2::passengerside::isopen, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.PassengerSide.IsOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::passengerside::isopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.PassengerSide.IsOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::passengerside::isopen_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Door.Row2.PassengerSide.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row2::passengerside::position, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.PassengerSide.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::passengerside::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.PassengerSide.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::passengerside::position_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.PassengerSide.Shade.IsOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row2::passengerside::shade::isopen, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.PassengerSide.Shade.IsOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::passengerside::shade::isopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.PassengerSide.Shade.IsOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::passengerside::shade::isopen_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Door.Row2.PassengerSide.Shade.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row2::passengerside::shade::position, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.PassengerSide.Shade.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::passengerside::shade::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.PassengerSide.Shade.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::passengerside::shade::position_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.PassengerSide.Window.IsOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row2::passengerside::window::isopen, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.PassengerSide.Window.IsOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::passengerside::window::isopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.PassengerSide.Window.IsOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::passengerside::window::isopen_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Door.Row2.PassengerSide.Window.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::door::row2::passengerside::window::position, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.PassengerSide.Window.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::passengerside::window::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Door.Row2.PassengerSide.Window.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::door::row2::passengerside::window::position_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.DoorCount", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::cabin::doorcount, uint8_t);});
	Registry<std::string>::Register("Vehicle.Cabin.DriverPosition", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::cabin::driverposition, std::string);});
	Registry<float>::Register("Vehicle.Cabin.HVAC.AmbientAirTemperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::ambientairtemperature, float);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.AmbientAirTemperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::ambientairtemperature_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.IsAirConditioningActive", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::isairconditioningactive, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.IsAirConditioningActive_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::isairconditioningactive_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.IsAirConditioningActive_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::isairconditioningactive_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.IsAutoPowerOptimize", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::isautopoweroptimize, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.IsAutoPowerOptimize_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::isautopoweroptimize_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.IsAutoPowerOptimize_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::isautopoweroptimize_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.IsFrontDefrosterActive", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::isfrontdefrosteractive, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.IsFrontDefrosterActive_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::isfrontdefrosteractive_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.IsFrontDefrosterActive_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::isfrontdefrosteractive_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.IsRearDefrosterActive", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::isreardefrosteractive, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.IsRearDefrosterActive_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::isreardefrosteractive_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.IsRearDefrosterActive_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::isreardefrosteractive_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.IsRecirculationActive", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::isrecirculationactive, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.IsRecirculationActive_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::isrecirculationactive_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.IsRecirculationActive_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::isrecirculationactive_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.HVAC.PowerOptimizeLevel", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::poweroptimizelevel, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.PowerOptimizeLevel_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::poweroptimizelevel_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.PowerOptimizeLevel_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::poweroptimizelevel_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Cabin.HVAC.Station.Row1.Driver.AirDistribution", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::station::row1::driver::airdistribution, std::string);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row1.Driver.AirDistribution_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row1::driver::airdistribution_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row1.Driver.AirDistribution_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row1::driver::airdistribution_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.HVAC.Station.Row1.Driver.FanSpeed", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::station::row1::driver::fanspeed, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row1.Driver.FanSpeed_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row1::driver::fanspeed_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row1.Driver.FanSpeed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row1::driver::fanspeed_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.HVAC.Station.Row1.Driver.Temperature", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::station::row1::driver::temperature, float);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row1.Driver.Temperature_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row1::driver::temperature_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row1.Driver.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row1::driver::temperature_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Cabin.HVAC.Station.Row1.Passenger.AirDistribution", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::station::row1::passenger::airdistribution, std::string);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row1.Passenger.AirDistribution_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row1::passenger::airdistribution_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row1.Passenger.AirDistribution_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row1::passenger::airdistribution_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.HVAC.Station.Row1.Passenger.FanSpeed", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::station::row1::passenger::fanspeed, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row1.Passenger.FanSpeed_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row1::passenger::fanspeed_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row1.Passenger.FanSpeed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row1::passenger::fanspeed_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.HVAC.Station.Row1.Passenger.Temperature", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::station::row1::passenger::temperature, float);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row1.Passenger.Temperature_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row1::passenger::temperature_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row1.Passenger.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row1::passenger::temperature_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Cabin.HVAC.Station.Row2.Driver.AirDistribution", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::station::row2::driver::airdistribution, std::string);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row2.Driver.AirDistribution_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row2::driver::airdistribution_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row2.Driver.AirDistribution_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row2::driver::airdistribution_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.HVAC.Station.Row2.Driver.FanSpeed", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::station::row2::driver::fanspeed, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row2.Driver.FanSpeed_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row2::driver::fanspeed_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row2.Driver.FanSpeed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row2::driver::fanspeed_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.HVAC.Station.Row2.Driver.Temperature", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::station::row2::driver::temperature, float);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row2.Driver.Temperature_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row2::driver::temperature_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row2.Driver.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row2::driver::temperature_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Cabin.HVAC.Station.Row2.Passenger.AirDistribution", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::station::row2::passenger::airdistribution, std::string);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row2.Passenger.AirDistribution_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row2::passenger::airdistribution_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row2.Passenger.AirDistribution_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row2::passenger::airdistribution_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.HVAC.Station.Row2.Passenger.FanSpeed", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::station::row2::passenger::fanspeed, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row2.Passenger.FanSpeed_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row2::passenger::fanspeed_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row2.Passenger.FanSpeed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row2::passenger::fanspeed_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.HVAC.Station.Row2.Passenger.Temperature", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::station::row2::passenger::temperature, float);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row2.Passenger.Temperature_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row2::passenger::temperature_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row2.Passenger.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row2::passenger::temperature_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Cabin.HVAC.Station.Row3.Driver.AirDistribution", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::station::row3::driver::airdistribution, std::string);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row3.Driver.AirDistribution_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row3::driver::airdistribution_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row3.Driver.AirDistribution_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row3::driver::airdistribution_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.HVAC.Station.Row3.Driver.FanSpeed", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::station::row3::driver::fanspeed, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row3.Driver.FanSpeed_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row3::driver::fanspeed_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row3.Driver.FanSpeed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row3::driver::fanspeed_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.HVAC.Station.Row3.Driver.Temperature", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::station::row3::driver::temperature, float);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row3.Driver.Temperature_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row3::driver::temperature_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row3.Driver.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row3::driver::temperature_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Cabin.HVAC.Station.Row3.Passenger.AirDistribution", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::station::row3::passenger::airdistribution, std::string);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row3.Passenger.AirDistribution_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row3::passenger::airdistribution_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row3.Passenger.AirDistribution_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row3::passenger::airdistribution_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.HVAC.Station.Row3.Passenger.FanSpeed", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::station::row3::passenger::fanspeed, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row3.Passenger.FanSpeed_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row3::passenger::fanspeed_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row3.Passenger.FanSpeed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row3::passenger::fanspeed_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.HVAC.Station.Row3.Passenger.Temperature", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::station::row3::passenger::temperature, float);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row3.Passenger.Temperature_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row3::passenger::temperature_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row3.Passenger.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row3::passenger::temperature_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Cabin.HVAC.Station.Row4.Driver.AirDistribution", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::station::row4::driver::airdistribution, std::string);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row4.Driver.AirDistribution_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row4::driver::airdistribution_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row4.Driver.AirDistribution_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row4::driver::airdistribution_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.HVAC.Station.Row4.Driver.FanSpeed", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::station::row4::driver::fanspeed, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row4.Driver.FanSpeed_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row4::driver::fanspeed_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row4.Driver.FanSpeed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row4::driver::fanspeed_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.HVAC.Station.Row4.Driver.Temperature", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::station::row4::driver::temperature, float);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row4.Driver.Temperature_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row4::driver::temperature_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row4.Driver.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row4::driver::temperature_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Cabin.HVAC.Station.Row4.Passenger.AirDistribution", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::station::row4::passenger::airdistribution, std::string);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row4.Passenger.AirDistribution_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row4::passenger::airdistribution_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row4.Passenger.AirDistribution_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row4::passenger::airdistribution_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.HVAC.Station.Row4.Passenger.FanSpeed", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::station::row4::passenger::fanspeed, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row4.Passenger.FanSpeed_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row4::passenger::fanspeed_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row4.Passenger.FanSpeed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row4::passenger::fanspeed_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.HVAC.Station.Row4.Passenger.Temperature", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::hvac::station::row4::passenger::temperature, float);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row4.Passenger.Temperature_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row4::passenger::temperature_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.HVAC.Station.Row4.Passenger.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::hvac::station::row4::passenger::temperature_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.IsAutoPowerOptimize", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::isautopoweroptimize, bool);});
	Registry<bool>::Register("Vehicle.Cabin.IsAutoPowerOptimize_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::isautopoweroptimize_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.IsAutoPowerOptimize_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::isautopoweroptimize_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.IsWindowChildLockEngaged", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::iswindowchildlockengaged, bool);});
	Registry<bool>::Register("Vehicle.Cabin.IsWindowChildLockEngaged_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::iswindowchildlockengaged_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.IsWindowChildLockEngaged_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::iswindowchildlockengaged_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Cabin.Light.DomeLight.Color", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::domelight::color, std::string);});
	Registry<bool>::Register("Vehicle.Cabin.Light.DomeLight.Color_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::domelight::color_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.DomeLight.Color_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::domelight::color_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Light.DomeLight.Intensity", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::domelight::intensity, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Light.DomeLight.Intensity_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::domelight::intensity_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.DomeLight.Intensity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::domelight::intensity_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.DomeLight.IsLightOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::domelight::islighton, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.DomeLight.IsLightOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::domelight::islighton_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.DomeLight.IsLightOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::domelight::islighton_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.Color", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::footwelllight::row1::driverside::color, std::string);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.Color_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row1::driverside::color_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.Color_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row1::driverside::color_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.Intensity", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::footwelllight::row1::driverside::intensity, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.Intensity_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row1::driverside::intensity_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.Intensity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row1::driverside::intensity_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.IsLightOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::footwelllight::row1::driverside::islighton, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.IsLightOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row1::driverside::islighton_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.IsLightOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row1::driverside::islighton_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.Color", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::footwelllight::row1::passengerside::color, std::string);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.Color_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row1::passengerside::color_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.Color_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row1::passengerside::color_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.Intensity", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::footwelllight::row1::passengerside::intensity, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.Intensity_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row1::passengerside::intensity_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.Intensity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row1::passengerside::intensity_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.IsLightOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::footwelllight::row1::passengerside::islighton, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.IsLightOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row1::passengerside::islighton_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.IsLightOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row1::passengerside::islighton_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.Color", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::footwelllight::row2::driverside::color, std::string);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.Color_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row2::driverside::color_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.Color_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row2::driverside::color_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.Intensity", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::footwelllight::row2::driverside::intensity, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.Intensity_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row2::driverside::intensity_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.Intensity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row2::driverside::intensity_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.IsLightOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::footwelllight::row2::driverside::islighton, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.IsLightOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row2::driverside::islighton_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.IsLightOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row2::driverside::islighton_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.Color", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::footwelllight::row2::passengerside::color, std::string);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.Color_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row2::passengerside::color_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.Color_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row2::passengerside::color_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.Intensity", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::footwelllight::row2::passengerside::intensity, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.Intensity_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row2::passengerside::intensity_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.Intensity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row2::passengerside::intensity_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.IsLightOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::footwelllight::row2::passengerside::islighton, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.IsLightOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row2::passengerside::islighton_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.IsLightOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row2::passengerside::islighton_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.Color", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::footwelllight::row3::driverside::color, std::string);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.Color_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row3::driverside::color_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.Color_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row3::driverside::color_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.Intensity", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::footwelllight::row3::driverside::intensity, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.Intensity_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row3::driverside::intensity_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.Intensity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row3::driverside::intensity_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.IsLightOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::footwelllight::row3::driverside::islighton, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.IsLightOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row3::driverside::islighton_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.IsLightOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row3::driverside::islighton_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.Color", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::footwelllight::row3::passengerside::color, std::string);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.Color_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row3::passengerside::color_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.Color_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row3::passengerside::color_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.Intensity", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::footwelllight::row3::passengerside::intensity, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.Intensity_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row3::passengerside::intensity_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.Intensity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row3::passengerside::intensity_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.IsLightOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::footwelllight::row3::passengerside::islighton, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.IsLightOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row3::passengerside::islighton_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.IsLightOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row3::passengerside::islighton_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.Color", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::footwelllight::row4::driverside::color, std::string);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.Color_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row4::driverside::color_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.Color_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row4::driverside::color_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.Intensity", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::footwelllight::row4::driverside::intensity, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.Intensity_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row4::driverside::intensity_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.Intensity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row4::driverside::intensity_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.IsLightOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::footwelllight::row4::driverside::islighton, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.IsLightOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row4::driverside::islighton_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.IsLightOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row4::driverside::islighton_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.Color", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::footwelllight::row4::passengerside::color, std::string);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.Color_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row4::passengerside::color_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.Color_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row4::passengerside::color_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.Intensity", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::footwelllight::row4::passengerside::intensity, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.Intensity_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row4::passengerside::intensity_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.Intensity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row4::passengerside::intensity_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.IsLightOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::footwelllight::row4::passengerside::islighton, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.IsLightOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row4::passengerside::islighton_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.IsLightOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::footwelllight::row4::passengerside::islighton_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.IsDomeOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::isdomeon_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.IsDomeOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::isdomeon_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.IsGloveBoxOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::isgloveboxon, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.IsGloveBoxOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::isgloveboxon_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.IsGloveBoxOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::isgloveboxon_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Light.PerceivedAmbientLight", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::perceivedambientlight, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Light.PerceivedAmbientLight_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::perceivedambientlight_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.Color", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::spotlight::row1::driverside::color, std::string);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.Color_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row1::driverside::color_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.Color_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row1::driverside::color_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.Intensity", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::spotlight::row1::driverside::intensity, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.Intensity_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row1::driverside::intensity_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.Intensity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row1::driverside::intensity_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.IsLightOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::spotlight::row1::driverside::islighton, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.IsLightOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row1::driverside::islighton_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.IsLightOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row1::driverside::islighton_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.Color", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::spotlight::row1::passengerside::color, std::string);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.Color_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row1::passengerside::color_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.Color_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row1::passengerside::color_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.Intensity", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::spotlight::row1::passengerside::intensity, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.Intensity_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row1::passengerside::intensity_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.Intensity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row1::passengerside::intensity_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.IsLightOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::spotlight::row1::passengerside::islighton, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.IsLightOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row1::passengerside::islighton_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.IsLightOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row1::passengerside::islighton_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.Color", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::spotlight::row2::driverside::color, std::string);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.Color_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row2::driverside::color_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.Color_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row2::driverside::color_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.Intensity", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::spotlight::row2::driverside::intensity, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.Intensity_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row2::driverside::intensity_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.Intensity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row2::driverside::intensity_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.IsLightOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::spotlight::row2::driverside::islighton, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.IsLightOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row2::driverside::islighton_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.IsLightOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row2::driverside::islighton_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.Color", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::spotlight::row2::passengerside::color, std::string);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.Color_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row2::passengerside::color_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.Color_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row2::passengerside::color_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.Intensity", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::spotlight::row2::passengerside::intensity, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.Intensity_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row2::passengerside::intensity_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.Intensity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row2::passengerside::intensity_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.IsLightOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::spotlight::row2::passengerside::islighton, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.IsLightOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row2::passengerside::islighton_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.IsLightOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row2::passengerside::islighton_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.Color", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::spotlight::row3::driverside::color, std::string);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.Color_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row3::driverside::color_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.Color_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row3::driverside::color_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.Intensity", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::spotlight::row3::driverside::intensity, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.Intensity_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row3::driverside::intensity_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.Intensity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row3::driverside::intensity_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.IsLightOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::spotlight::row3::driverside::islighton, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.IsLightOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row3::driverside::islighton_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.IsLightOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row3::driverside::islighton_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.Color", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::spotlight::row3::passengerside::color, std::string);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.Color_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row3::passengerside::color_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.Color_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row3::passengerside::color_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.Intensity", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::spotlight::row3::passengerside::intensity, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.Intensity_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row3::passengerside::intensity_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.Intensity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row3::passengerside::intensity_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.IsLightOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::spotlight::row3::passengerside::islighton, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.IsLightOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row3::passengerside::islighton_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.IsLightOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row3::passengerside::islighton_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.Color", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::spotlight::row4::driverside::color, std::string);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.Color_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row4::driverside::color_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.Color_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row4::driverside::color_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.Intensity", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::spotlight::row4::driverside::intensity, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.Intensity_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row4::driverside::intensity_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.Intensity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row4::driverside::intensity_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.IsLightOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::spotlight::row4::driverside::islighton, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.IsLightOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row4::driverside::islighton_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.IsLightOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row4::driverside::islighton_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.Color", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::spotlight::row4::passengerside::color, std::string);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.Color_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row4::passengerside::color_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.Color_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row4::passengerside::color_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.Intensity", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::spotlight::row4::passengerside::intensity, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.Intensity_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row4::passengerside::intensity_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.Intensity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row4::passengerside::intensity_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.IsLightOn", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::light::spotlight::row4::passengerside::islighton, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.IsLightOn_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row4::passengerside::islighton_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.IsLightOn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::light::spotlight::row4::passengerside::islighton_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.PowerOptimizeLevel", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::poweroptimizelevel, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.PowerOptimizeLevel_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::poweroptimizelevel_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.PowerOptimizeLevel_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::poweroptimizelevel_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.RearShade.IsOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::rearshade::isopen, bool);});
	Registry<bool>::Register("Vehicle.Cabin.RearShade.IsOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::rearshade::isopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.RearShade.IsOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::rearshade::isopen_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.RearShade.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::rearshade::position, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.RearShade.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::rearshade::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.RearShade.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::rearshade::position_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.RearviewMirror.DimmingLevel", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::rearviewmirror::dimminglevel, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.RearviewMirror.DimmingLevel_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::rearviewmirror::dimminglevel_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.RearviewMirror.DimmingLevel_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::rearviewmirror::dimminglevel_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Airbag.IsDeployed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::airbag::isdeployed, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Airbag.IsDeployed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::airbag::isdeployed_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Lumbar.Height", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::driverside::backrest::lumbar::height, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Lumbar.Height_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::backrest::lumbar::height_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Lumbar.Height_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::backrest::lumbar::height_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Lumbar.Support", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::driverside::backrest::lumbar::support, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Lumbar.Support_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::backrest::lumbar::support_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Lumbar.Support_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::backrest::lumbar::support_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Recline", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::driverside::backrest::recline, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Recline_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::backrest::recline_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Recline_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::backrest::recline_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.SideBolster.Support", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::driverside::backrest::sidebolster::support, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.SideBolster.Support_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::backrest::sidebolster::support_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.SideBolster.Support_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::backrest::sidebolster::support_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Headrest.Angle", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::driverside::headrest::angle, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Headrest.Angle_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::headrest::angle_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Headrest.Angle_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::headrest::angle_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Headrest.Height", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::driverside::headrest::height, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Headrest.Height_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::headrest::height_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Headrest.Height_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::headrest::height_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Heater", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::driverside::heater, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Heater_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::heater_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Heater_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::heater_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Height", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::driverside::height, uint16_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Height_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::height_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Height_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::height_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.IsBelted", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::isbelted, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.IsBelted_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::isbelted_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.IsOccupied", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::isoccupied, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.IsOccupied_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::isoccupied_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Massage", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::driverside::massage, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Massage_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::massage_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Massage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::massage_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::driverside::position, uint16_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::position_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.SeatBeltHeight", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::driverside::seatbeltheight, uint16_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.SeatBeltHeight_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::seatbeltheight_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.SeatBeltHeight_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::seatbeltheight_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Seating.Length", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::driverside::seating::length, uint16_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Seating.Length_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::seating::length_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Seating.Length_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::seating::length_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Tilt", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::driverside::tilt, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Tilt_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::tilt_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Tilt_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::tilt_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Ventilator", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::driverside::ventilator, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Ventilator_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::ventilator_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.DriverSide.Ventilator_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::driverside::ventilator_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Airbag.IsDeployed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::airbag::isdeployed, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Airbag.IsDeployed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::airbag::isdeployed_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row1.Middle.Backrest.Lumbar.Height", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::middle::backrest::lumbar::height, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Backrest.Lumbar.Height_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::backrest::lumbar::height_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Backrest.Lumbar.Height_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::backrest::lumbar::height_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row1.Middle.Backrest.Lumbar.Support", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::middle::backrest::lumbar::support, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Backrest.Lumbar.Support_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::backrest::lumbar::support_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Backrest.Lumbar.Support_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::backrest::lumbar::support_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row1.Middle.Backrest.Recline", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::middle::backrest::recline, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Backrest.Recline_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::backrest::recline_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Backrest.Recline_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::backrest::recline_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row1.Middle.Backrest.SideBolster.Support", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::middle::backrest::sidebolster::support, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Backrest.SideBolster.Support_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::backrest::sidebolster::support_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Backrest.SideBolster.Support_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::backrest::sidebolster::support_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row1.Middle.Headrest.Angle", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::middle::headrest::angle, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Headrest.Angle_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::headrest::angle_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Headrest.Angle_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::headrest::angle_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row1.Middle.Headrest.Height", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::middle::headrest::height, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Headrest.Height_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::headrest::height_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Headrest.Height_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::headrest::height_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row1.Middle.Heater", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::middle::heater, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Heater_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::heater_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Heater_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::heater_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Cabin.Seat.Row1.Middle.Height", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::middle::height, uint16_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Height_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::height_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Height_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::height_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.IsBelted", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::isbelted, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.IsBelted_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::isbelted_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.IsOccupied", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::isoccupied, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.IsOccupied_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::isoccupied_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row1.Middle.Massage", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::middle::massage, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Massage_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::massage_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Massage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::massage_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Cabin.Seat.Row1.Middle.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::middle::position, uint16_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::position_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Cabin.Seat.Row1.Middle.SeatBeltHeight", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::middle::seatbeltheight, uint16_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.SeatBeltHeight_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::seatbeltheight_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.SeatBeltHeight_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::seatbeltheight_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Cabin.Seat.Row1.Middle.Seating.Length", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::middle::seating::length, uint16_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Seating.Length_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::seating::length_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Seating.Length_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::seating::length_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row1.Middle.Tilt", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::middle::tilt, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Tilt_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::tilt_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Tilt_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::tilt_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row1.Middle.Ventilator", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::middle::ventilator, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Ventilator_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::ventilator_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.Middle.Ventilator_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::middle::ventilator_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Airbag.IsDeployed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::airbag::isdeployed, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Airbag.IsDeployed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::airbag::isdeployed_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Lumbar.Height", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::passengerside::backrest::lumbar::height, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Lumbar.Height_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::backrest::lumbar::height_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Lumbar.Height_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::backrest::lumbar::height_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Lumbar.Support", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::passengerside::backrest::lumbar::support, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Lumbar.Support_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::backrest::lumbar::support_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Lumbar.Support_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::backrest::lumbar::support_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Recline", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::passengerside::backrest::recline, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Recline_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::backrest::recline_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Recline_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::backrest::recline_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.SideBolster.Support", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::passengerside::backrest::sidebolster::support, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.SideBolster.Support_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::backrest::sidebolster::support_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.SideBolster.Support_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::backrest::sidebolster::support_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Headrest.Angle", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::passengerside::headrest::angle, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Headrest.Angle_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::headrest::angle_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Headrest.Angle_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::headrest::angle_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Headrest.Height", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::passengerside::headrest::height, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Headrest.Height_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::headrest::height_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Headrest.Height_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::headrest::height_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Heater", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::passengerside::heater, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Heater_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::heater_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Heater_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::heater_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Height", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::passengerside::height, uint16_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Height_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::height_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Height_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::height_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.IsBelted", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::isbelted, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.IsBelted_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::isbelted_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.IsOccupied", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::isoccupied, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.IsOccupied_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::isoccupied_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Massage", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::passengerside::massage, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Massage_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::massage_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Massage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::massage_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::passengerside::position, uint16_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::position_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.SeatBeltHeight", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::passengerside::seatbeltheight, uint16_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.SeatBeltHeight_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::seatbeltheight_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.SeatBeltHeight_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::seatbeltheight_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Seating.Length", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::passengerside::seating::length, uint16_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Seating.Length_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::seating::length_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Seating.Length_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::seating::length_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Tilt", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::passengerside::tilt, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Tilt_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::tilt_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Tilt_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::tilt_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Ventilator", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row1::passengerside::ventilator, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Ventilator_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::ventilator_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row1.PassengerSide.Ventilator_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row1::passengerside::ventilator_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Airbag.IsDeployed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::airbag::isdeployed, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Airbag.IsDeployed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::airbag::isdeployed_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Lumbar.Height", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::driverside::backrest::lumbar::height, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Lumbar.Height_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::backrest::lumbar::height_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Lumbar.Height_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::backrest::lumbar::height_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Lumbar.Support", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::driverside::backrest::lumbar::support, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Lumbar.Support_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::backrest::lumbar::support_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Lumbar.Support_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::backrest::lumbar::support_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Recline", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::driverside::backrest::recline, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Recline_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::backrest::recline_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Recline_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::backrest::recline_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.SideBolster.Support", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::driverside::backrest::sidebolster::support, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.SideBolster.Support_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::backrest::sidebolster::support_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.SideBolster.Support_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::backrest::sidebolster::support_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Headrest.Angle", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::driverside::headrest::angle, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Headrest.Angle_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::headrest::angle_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Headrest.Angle_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::headrest::angle_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Headrest.Height", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::driverside::headrest::height, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Headrest.Height_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::headrest::height_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Headrest.Height_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::headrest::height_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Heater", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::driverside::heater, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Heater_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::heater_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Heater_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::heater_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Height", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::driverside::height, uint16_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Height_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::height_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Height_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::height_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.IsBelted", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::isbelted, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.IsBelted_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::isbelted_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.IsOccupied", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::isoccupied, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.IsOccupied_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::isoccupied_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Massage", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::driverside::massage, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Massage_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::massage_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Massage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::massage_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::driverside::position, uint16_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::position_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.SeatBeltHeight", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::driverside::seatbeltheight, uint16_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.SeatBeltHeight_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::seatbeltheight_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.SeatBeltHeight_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::seatbeltheight_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Seating.Length", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::driverside::seating::length, uint16_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Seating.Length_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::seating::length_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Seating.Length_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::seating::length_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Tilt", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::driverside::tilt, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Tilt_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::tilt_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Tilt_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::tilt_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Ventilator", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::driverside::ventilator, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Ventilator_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::ventilator_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.DriverSide.Ventilator_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::driverside::ventilator_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Airbag.IsDeployed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::airbag::isdeployed, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Airbag.IsDeployed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::airbag::isdeployed_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row2.Middle.Backrest.Lumbar.Height", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::middle::backrest::lumbar::height, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Backrest.Lumbar.Height_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::backrest::lumbar::height_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Backrest.Lumbar.Height_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::backrest::lumbar::height_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row2.Middle.Backrest.Lumbar.Support", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::middle::backrest::lumbar::support, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Backrest.Lumbar.Support_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::backrest::lumbar::support_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Backrest.Lumbar.Support_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::backrest::lumbar::support_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row2.Middle.Backrest.Recline", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::middle::backrest::recline, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Backrest.Recline_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::backrest::recline_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Backrest.Recline_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::backrest::recline_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row2.Middle.Backrest.SideBolster.Support", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::middle::backrest::sidebolster::support, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Backrest.SideBolster.Support_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::backrest::sidebolster::support_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Backrest.SideBolster.Support_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::backrest::sidebolster::support_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row2.Middle.Headrest.Angle", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::middle::headrest::angle, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Headrest.Angle_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::headrest::angle_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Headrest.Angle_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::headrest::angle_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row2.Middle.Headrest.Height", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::middle::headrest::height, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Headrest.Height_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::headrest::height_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Headrest.Height_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::headrest::height_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row2.Middle.Heater", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::middle::heater, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Heater_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::heater_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Heater_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::heater_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Cabin.Seat.Row2.Middle.Height", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::middle::height, uint16_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Height_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::height_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Height_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::height_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.IsBelted", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::isbelted, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.IsBelted_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::isbelted_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.IsOccupied", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::isoccupied, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.IsOccupied_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::isoccupied_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row2.Middle.Massage", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::middle::massage, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Massage_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::massage_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Massage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::massage_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Cabin.Seat.Row2.Middle.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::middle::position, uint16_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::position_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Cabin.Seat.Row2.Middle.SeatBeltHeight", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::middle::seatbeltheight, uint16_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.SeatBeltHeight_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::seatbeltheight_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.SeatBeltHeight_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::seatbeltheight_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Cabin.Seat.Row2.Middle.Seating.Length", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::middle::seating::length, uint16_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Seating.Length_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::seating::length_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Seating.Length_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::seating::length_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row2.Middle.Tilt", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::middle::tilt, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Tilt_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::tilt_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Tilt_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::tilt_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row2.Middle.Ventilator", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::middle::ventilator, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Ventilator_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::ventilator_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.Middle.Ventilator_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::middle::ventilator_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Airbag.IsDeployed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::airbag::isdeployed, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Airbag.IsDeployed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::airbag::isdeployed_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Lumbar.Height", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::passengerside::backrest::lumbar::height, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Lumbar.Height_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::backrest::lumbar::height_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Lumbar.Height_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::backrest::lumbar::height_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Lumbar.Support", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::passengerside::backrest::lumbar::support, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Lumbar.Support_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::backrest::lumbar::support_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Lumbar.Support_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::backrest::lumbar::support_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Recline", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::passengerside::backrest::recline, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Recline_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::backrest::recline_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Recline_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::backrest::recline_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.SideBolster.Support", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::passengerside::backrest::sidebolster::support, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.SideBolster.Support_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::backrest::sidebolster::support_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.SideBolster.Support_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::backrest::sidebolster::support_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Headrest.Angle", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::passengerside::headrest::angle, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Headrest.Angle_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::headrest::angle_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Headrest.Angle_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::headrest::angle_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Headrest.Height", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::passengerside::headrest::height, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Headrest.Height_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::headrest::height_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Headrest.Height_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::headrest::height_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Heater", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::passengerside::heater, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Heater_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::heater_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Heater_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::heater_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Height", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::passengerside::height, uint16_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Height_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::height_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Height_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::height_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.IsBelted", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::isbelted, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.IsBelted_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::isbelted_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.IsOccupied", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::isoccupied, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.IsOccupied_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::isoccupied_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Massage", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::passengerside::massage, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Massage_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::massage_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Massage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::massage_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::passengerside::position, uint16_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::position_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.SeatBeltHeight", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::passengerside::seatbeltheight, uint16_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.SeatBeltHeight_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::seatbeltheight_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.SeatBeltHeight_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::seatbeltheight_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Seating.Length", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::passengerside::seating::length, uint16_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Seating.Length_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::seating::length_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Seating.Length_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::seating::length_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Tilt", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::passengerside::tilt, float);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Tilt_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::tilt_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Tilt_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::tilt_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Ventilator", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::seat::row2::passengerside::ventilator, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Ventilator_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::ventilator_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Seat.Row2.PassengerSide.Ventilator_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::seat::row2::passengerside::ventilator_availability_sensor, bool);});
	Registry<std::vector<uint8_t>>::Register("Vehicle.Cabin.SeatPosCount", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::cabin::seatposcount, std::vector<uint8_t>);});
	Registry<uint8_t>::Register("Vehicle.Cabin.SeatRowCount", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::cabin::seatrowcount, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Sunroof.Shade.IsOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::sunroof::shade::isopen, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Sunroof.Shade.IsOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::sunroof::shade::isopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Sunroof.Shade.IsOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::sunroof::shade::isopen_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Sunroof.Shade.Position", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::sunroof::shade::position, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Sunroof.Shade.Position_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::sunroof::shade::position_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Sunroof.Shade.Position_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::sunroof::shade::position_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Sunroof.Slide", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::sunroof::slide, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Sunroof.Slide_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::sunroof::slide_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Sunroof.Slide_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::sunroof::slide_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Cabin.Sunroof.Tilt", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::cabin::sunroof::tilt, uint8_t);});
	Registry<bool>::Register("Vehicle.Cabin.Sunroof.Tilt_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::sunroof::tilt_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Cabin.Sunroof.Tilt_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::cabin::sunroof::tilt_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.CargoVolume", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::cargovolume, float);});
	Registry<uint8_t>::Register("Vehicle.Chassis.Accelerator.PedalPosition", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::accelerator::pedalposition, uint8_t);});
	Registry<bool>::Register("Vehicle.Chassis.Accelerator.PedalPosition_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::accelerator::pedalposition_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Chassis.Axle.Row1.AxleWidth", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::chassis::axle::row1::axlewidth, uint16_t);});
	Registry<float>::Register("Vehicle.Chassis.Axle.Row1.SteeringAngle", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::steeringangle, float);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row1.SteeringAngle_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::steeringangle_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Chassis.Axle.Row1.TireAspectRatio", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::chassis::axle::row1::tireaspectratio, uint8_t);});
	Registry<uint16_t>::Register("Vehicle.Chassis.Axle.Row1.TireWidth", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::chassis::axle::row1::tirewidth, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.Chassis.Axle.Row1.TrackWidth", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::chassis::axle::row1::trackwidth, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.Chassis.Axle.Row1.TreadWidth", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::chassis::axle::row1::treadwidth, uint16_t);});
	Registry<float>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Left.AngularSpeed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::left::angularspeed, float);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Left.AngularSpeed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::left::angularspeed_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Left.Brake.FluidLevel", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::left::brake::fluidlevel, uint8_t);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Left.Brake.FluidLevel_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::left::brake::fluidlevel_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Left.Brake.IsBrakesWorn", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::left::brake::isbrakesworn, bool);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Left.Brake.IsBrakesWorn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::left::brake::isbrakesworn_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Left.Brake.IsFluidLevelLow", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::left::brake::isfluidlevellow, bool);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Left.Brake.IsFluidLevelLow_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::left::brake::isfluidlevellow_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Left.Brake.PadWear", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::left::brake::padwear, uint8_t);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Left.Brake.PadWear_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::left::brake::padwear_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Left.Speed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::left::speed, float);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Left.Speed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::left::speed_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Left.Tire.IsPressureLow", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::left::tire::ispressurelow, bool);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Left.Tire.IsPressureLow_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::left::tire::ispressurelow_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Left.Tire.Pressure", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::left::tire::pressure, uint16_t);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Left.Tire.Pressure_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::left::tire::pressure_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Left.Tire.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::left::tire::temperature, float);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Left.Tire.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::left::tire::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Right.AngularSpeed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::right::angularspeed, float);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Right.AngularSpeed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::right::angularspeed_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Right.Brake.FluidLevel", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::right::brake::fluidlevel, uint8_t);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Right.Brake.FluidLevel_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::right::brake::fluidlevel_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Right.Brake.IsBrakesWorn", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::right::brake::isbrakesworn, bool);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Right.Brake.IsBrakesWorn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::right::brake::isbrakesworn_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Right.Brake.IsFluidLevelLow", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::right::brake::isfluidlevellow, bool);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Right.Brake.IsFluidLevelLow_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::right::brake::isfluidlevellow_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Right.Brake.PadWear", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::right::brake::padwear, uint8_t);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Right.Brake.PadWear_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::right::brake::padwear_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Right.Speed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::right::speed, float);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Right.Speed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::right::speed_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Right.Tire.IsPressureLow", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::right::tire::ispressurelow, bool);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Right.Tire.IsPressureLow_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::right::tire::ispressurelow_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Right.Tire.Pressure", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::right::tire::pressure, uint16_t);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Right.Tire.Pressure_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::right::tire::pressure_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Right.Tire.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::right::tire::temperature, float);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row1.Wheel.Right.Tire.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row1::wheel::right::tire::temperature_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Chassis.Axle.Row1.WheelCount", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::chassis::axle::row1::wheelcount, uint8_t);});
	Registry<float>::Register("Vehicle.Chassis.Axle.Row1.WheelDiameter", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::chassis::axle::row1::wheeldiameter, float);});
	Registry<float>::Register("Vehicle.Chassis.Axle.Row1.WheelWidth", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::chassis::axle::row1::wheelwidth, float);});
	Registry<uint16_t>::Register("Vehicle.Chassis.Axle.Row2.AxleWidth", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::chassis::axle::row2::axlewidth, uint16_t);});
	Registry<float>::Register("Vehicle.Chassis.Axle.Row2.SteeringAngle", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::steeringangle, float);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row2.SteeringAngle_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::steeringangle_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Chassis.Axle.Row2.TireAspectRatio", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::chassis::axle::row2::tireaspectratio, uint8_t);});
	Registry<uint16_t>::Register("Vehicle.Chassis.Axle.Row2.TireWidth", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::chassis::axle::row2::tirewidth, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.Chassis.Axle.Row2.TrackWidth", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::chassis::axle::row2::trackwidth, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.Chassis.Axle.Row2.TreadWidth", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::chassis::axle::row2::treadwidth, uint16_t);});
	Registry<float>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Left.AngularSpeed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::left::angularspeed, float);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Left.AngularSpeed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::left::angularspeed_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Left.Brake.FluidLevel", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::left::brake::fluidlevel, uint8_t);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Left.Brake.FluidLevel_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::left::brake::fluidlevel_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Left.Brake.IsBrakesWorn", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::left::brake::isbrakesworn, bool);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Left.Brake.IsBrakesWorn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::left::brake::isbrakesworn_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Left.Brake.IsFluidLevelLow", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::left::brake::isfluidlevellow, bool);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Left.Brake.IsFluidLevelLow_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::left::brake::isfluidlevellow_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Left.Brake.PadWear", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::left::brake::padwear, uint8_t);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Left.Brake.PadWear_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::left::brake::padwear_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Left.Speed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::left::speed, float);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Left.Speed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::left::speed_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Left.Tire.IsPressureLow", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::left::tire::ispressurelow, bool);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Left.Tire.IsPressureLow_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::left::tire::ispressurelow_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Left.Tire.Pressure", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::left::tire::pressure, uint16_t);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Left.Tire.Pressure_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::left::tire::pressure_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Left.Tire.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::left::tire::temperature, float);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Left.Tire.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::left::tire::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Right.AngularSpeed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::right::angularspeed, float);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Right.AngularSpeed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::right::angularspeed_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Right.Brake.FluidLevel", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::right::brake::fluidlevel, uint8_t);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Right.Brake.FluidLevel_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::right::brake::fluidlevel_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Right.Brake.IsBrakesWorn", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::right::brake::isbrakesworn, bool);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Right.Brake.IsBrakesWorn_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::right::brake::isbrakesworn_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Right.Brake.IsFluidLevelLow", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::right::brake::isfluidlevellow, bool);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Right.Brake.IsFluidLevelLow_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::right::brake::isfluidlevellow_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Right.Brake.PadWear", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::right::brake::padwear, uint8_t);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Right.Brake.PadWear_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::right::brake::padwear_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Right.Speed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::right::speed, float);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Right.Speed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::right::speed_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Right.Tire.IsPressureLow", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::right::tire::ispressurelow, bool);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Right.Tire.IsPressureLow_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::right::tire::ispressurelow_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Right.Tire.Pressure", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::right::tire::pressure, uint16_t);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Right.Tire.Pressure_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::right::tire::pressure_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Right.Tire.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::right::tire::temperature, float);});
	Registry<bool>::Register("Vehicle.Chassis.Axle.Row2.Wheel.Right.Tire.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::axle::row2::wheel::right::tire::temperature_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Chassis.Axle.Row2.WheelCount", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::chassis::axle::row2::wheelcount, uint8_t);});
	Registry<float>::Register("Vehicle.Chassis.Axle.Row2.WheelDiameter", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::chassis::axle::row2::wheeldiameter, float);});
	Registry<float>::Register("Vehicle.Chassis.Axle.Row2.WheelWidth", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::chassis::axle::row2::wheelwidth, float);});
	Registry<uint8_t>::Register("Vehicle.Chassis.AxleCount", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::chassis::axlecount, uint8_t);});
	Registry<bool>::Register("Vehicle.Chassis.Brake.IsDriverEmergencyBrakingDetected", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::brake::isdriveremergencybrakingdetected, bool);});
	Registry<bool>::Register("Vehicle.Chassis.Brake.IsDriverEmergencyBrakingDetected_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::brake::isdriveremergencybrakingdetected_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Chassis.Brake.PedalPosition", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::brake::pedalposition, uint8_t);});
	Registry<bool>::Register("Vehicle.Chassis.Brake.PedalPosition_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::brake::pedalposition_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Chassis.ParkingBrake.IsAutoApplyEnabled", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::chassis::parkingbrake::isautoapplyenabled, bool);});
	Registry<bool>::Register("Vehicle.Chassis.ParkingBrake.IsAutoApplyEnabled_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::parkingbrake::isautoapplyenabled_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Chassis.ParkingBrake.IsAutoApplyEnabled_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::parkingbrake::isautoapplyenabled_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Chassis.ParkingBrake.IsEngaged", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::chassis::parkingbrake::isengaged, bool);});
	Registry<bool>::Register("Vehicle.Chassis.ParkingBrake.IsEngaged_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::parkingbrake::isengaged_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Chassis.ParkingBrake.IsEngaged_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::parkingbrake::isengaged_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.Chassis.SteeringWheel.Angle", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::steeringwheel::angle, int16_t);});
	Registry<bool>::Register("Vehicle.Chassis.SteeringWheel.Angle_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::steeringwheel::angle_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Chassis.SteeringWheel.Extension", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::chassis::steeringwheel::extension, uint8_t);});
	Registry<bool>::Register("Vehicle.Chassis.SteeringWheel.Extension_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::steeringwheel::extension_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Chassis.SteeringWheel.Extension_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::steeringwheel::extension_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Chassis.SteeringWheel.Heating", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::chassis::steeringwheel::heating, uint8_t);});
	Registry<bool>::Register("Vehicle.Chassis.SteeringWheel.Heating_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::steeringwheel::heating_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Chassis.SteeringWheel.Heating_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::steeringwheel::heating_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Chassis.SteeringWheel.Tilt", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::chassis::steeringwheel::tilt, uint8_t);});
	Registry<bool>::Register("Vehicle.Chassis.SteeringWheel.Tilt_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::steeringwheel::tilt_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Chassis.SteeringWheel.Tilt_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::chassis::steeringwheel::tilt_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Chassis.Wheelbase", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::chassis::wheelbase, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.CurbWeight", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::curbweight, uint16_t);});
	Registry<double>::Register("Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Altitude", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::gnssreceiver::gnsslocationtype::altitude, double);});
	Registry<bool>::Register("Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Altitude_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::gnssreceiver::gnsslocationtype::altitude_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.FixType", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::gnssreceiver::gnsslocationtype::fixtype, std::string);});
	Registry<bool>::Register("Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.FixType_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::gnssreceiver::gnsslocationtype::fixtype_availability_sensor, bool);});
	Registry<double>::Register("Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.HorizontalAccuracy", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::gnssreceiver::gnsslocationtype::horizontalaccuracy, double);});
	Registry<bool>::Register("Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.HorizontalAccuracy_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::gnssreceiver::gnsslocationtype::horizontalaccuracy_availability_sensor, bool);});
	Registry<double>::Register("Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Latitude", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::gnssreceiver::gnsslocationtype::latitude, double);});
	Registry<bool>::Register("Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Latitude_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::gnssreceiver::gnsslocationtype::latitude_availability_sensor, bool);});
	Registry<double>::Register("Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Longitude", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::gnssreceiver::gnsslocationtype::longitude, double);});
	Registry<bool>::Register("Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Longitude_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::gnssreceiver::gnsslocationtype::longitude_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Timestamp", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::gnssreceiver::gnsslocationtype::timestamp, std::string);});
	Registry<bool>::Register("Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Timestamp_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::gnssreceiver::gnsslocationtype::timestamp_availability_sensor, bool);});
	Registry<double>::Register("Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.VerticalAccuracy", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::gnssreceiver::gnsslocationtype::verticalaccuracy, double);});
	Registry<bool>::Register("Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.VerticalAccuracy_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::gnssreceiver::gnsslocationtype::verticalaccuracy_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.CurrentLocation.GNSSReceiver.MountingPosition.X", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::currentlocation::gnssreceiver::mountingposition::x, int16_t);});
	Registry<int16_t>::Register("Vehicle.CurrentLocation.GNSSReceiver.MountingPosition.Y", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::currentlocation::gnssreceiver::mountingposition::y, int16_t);});
	Registry<int16_t>::Register("Vehicle.CurrentLocation.GNSSReceiver.MountingPosition.Z", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::currentlocation::gnssreceiver::mountingposition::z, int16_t);});
	Registry<int16_t>::Register("Vehicle.CurrentLocation.ReferencePosition.X", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::currentlocation::referenceposition::x, int16_t);});
	Registry<int16_t>::Register("Vehicle.CurrentLocation.ReferencePosition.Y", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::currentlocation::referenceposition::y, int16_t);});
	Registry<int16_t>::Register("Vehicle.CurrentLocation.ReferencePosition.Z", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::currentlocation::referenceposition::z, int16_t);});
	Registry<double>::Register("Vehicle.CurrentLocation.VehicleLocationType.Altitude", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::vehiclelocationtype::altitude, double);});
	Registry<bool>::Register("Vehicle.CurrentLocation.VehicleLocationType.Altitude_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::vehiclelocationtype::altitude_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.CurrentLocation.VehicleLocationType.DeadReckoningIsActive", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::vehiclelocationtype::deadreckoningisactive, bool);});
	Registry<bool>::Register("Vehicle.CurrentLocation.VehicleLocationType.DeadReckoningIsActive_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::vehiclelocationtype::deadreckoningisactive_availability_sensor, bool);});
	Registry<double>::Register("Vehicle.CurrentLocation.VehicleLocationType.Heading", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::vehiclelocationtype::heading, double);});
	Registry<bool>::Register("Vehicle.CurrentLocation.VehicleLocationType.Heading_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::vehiclelocationtype::heading_availability_sensor, bool);});
	Registry<double>::Register("Vehicle.CurrentLocation.VehicleLocationType.HorizontalAccuracy", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::vehiclelocationtype::horizontalaccuracy, double);});
	Registry<bool>::Register("Vehicle.CurrentLocation.VehicleLocationType.HorizontalAccuracy_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::vehiclelocationtype::horizontalaccuracy_availability_sensor, bool);});
	Registry<double>::Register("Vehicle.CurrentLocation.VehicleLocationType.Latitude", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::vehiclelocationtype::latitude, double);});
	Registry<bool>::Register("Vehicle.CurrentLocation.VehicleLocationType.Latitude_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::vehiclelocationtype::latitude_availability_sensor, bool);});
	Registry<double>::Register("Vehicle.CurrentLocation.VehicleLocationType.Longitude", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::vehiclelocationtype::longitude, double);});
	Registry<bool>::Register("Vehicle.CurrentLocation.VehicleLocationType.Longitude_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::vehiclelocationtype::longitude_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.CurrentLocation.VehicleLocationType.Timestamp", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::vehiclelocationtype::timestamp, std::string);});
	Registry<bool>::Register("Vehicle.CurrentLocation.VehicleLocationType.Timestamp_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::vehiclelocationtype::timestamp_availability_sensor, bool);});
	Registry<double>::Register("Vehicle.CurrentLocation.VehicleLocationType.VerticalAccuracy", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::vehiclelocationtype::verticalaccuracy, double);});
	Registry<bool>::Register("Vehicle.CurrentLocation.VehicleLocationType.VerticalAccuracy_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentlocation::vehiclelocationtype::verticalaccuracy_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.CurrentOverallWeight", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentoverallweight, uint16_t);});
	Registry<bool>::Register("Vehicle.CurrentOverallWeight_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::currentoverallweight_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Driver.DistractionLevel", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::driver::distractionlevel, float);});
	Registry<bool>::Register("Vehicle.Driver.DistractionLevel_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::driver::distractionlevel_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Driver.FatigueLevel", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::driver::fatiguelevel, float);});
	Registry<bool>::Register("Vehicle.Driver.FatigueLevel_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::driver::fatiguelevel_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Driver.HeartRate", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::driver::heartrate, uint16_t);});
	Registry<bool>::Register("Vehicle.Driver.HeartRate_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::driver::heartrate_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Driver.IsEyesOnRoad", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::driver::iseyesonroad, bool);});
	Registry<bool>::Register("Vehicle.Driver.IsEyesOnRoad_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::driver::iseyesonroad_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Driver.IsHandsOnWheel", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::driver::ishandsonwheel, bool);});
	Registry<bool>::Register("Vehicle.Driver.IsHandsOnWheel_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::driver::ishandsonwheel_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.EmissionsCO2", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::emissionsco2, int16_t);});
	Registry<float>::Register("Vehicle.Exterior.AirTemperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::exterior::airtemperature, float);});
	Registry<bool>::Register("Vehicle.Exterior.AirTemperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::exterior::airtemperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Exterior.Humidity", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::exterior::humidity, float);});
	Registry<bool>::Register("Vehicle.Exterior.Humidity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::exterior::humidity_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Exterior.LightIntensity", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::exterior::lightintensity, float);});
	Registry<bool>::Register("Vehicle.Exterior.LightIntensity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::exterior::lightintensity_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.GrossWeight", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::grossweight, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.Height", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::height, uint16_t);});
	Registry<bool>::Register("Vehicle.IsAutoPowerOptimize", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::isautopoweroptimize, bool);});
	Registry<bool>::Register("Vehicle.IsAutoPowerOptimize_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::isautopoweroptimize_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.IsAutoPowerOptimize_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::isautopoweroptimize_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.IsBrokenDown", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::isbrokendown, bool);});
	Registry<bool>::Register("Vehicle.IsBrokenDown_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::isbrokendown_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.IsMoving", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::ismoving, bool);});
	Registry<bool>::Register("Vehicle.IsMoving_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::ismoving_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Length", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::length, uint16_t);});
	Registry<float>::Register("Vehicle.LowVoltageBattery.CurrentCurrent", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::lowvoltagebattery::currentcurrent, float);});
	Registry<bool>::Register("Vehicle.LowVoltageBattery.CurrentCurrent_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::lowvoltagebattery::currentcurrent_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.LowVoltageBattery.CurrentVoltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::lowvoltagebattery::currentvoltage, float);});
	Registry<bool>::Register("Vehicle.LowVoltageBattery.CurrentVoltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::lowvoltagebattery::currentvoltage_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.LowVoltageBattery.NominalCapacity", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::lowvoltagebattery::nominalcapacity, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.LowVoltageBattery.NominalVoltage", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::lowvoltagebattery::nominalvoltage, uint16_t);});
	Registry<std::string>::Register("Vehicle.LowVoltageSystemState", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::lowvoltagesystemstate, std::string);});
	Registry<bool>::Register("Vehicle.LowVoltageSystemState_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::lowvoltagesystemstate_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.MaxTowBallWeight", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::maxtowballweight, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.MaxTowWeight", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::maxtowweight, uint16_t);});
	Registry<float>::Register("Vehicle.Occupant.Row1.DriverSide.HeadPosition.Pitch", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::driverside::headposition::pitch, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.DriverSide.HeadPosition.Pitch_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::driverside::headposition::pitch_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row1.DriverSide.HeadPosition.Roll", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::driverside::headposition::roll, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.DriverSide.HeadPosition.Roll_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::driverside::headposition::roll_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.Occupant.Row1.DriverSide.HeadPosition.X", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::driverside::headposition::x, int16_t);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.DriverSide.HeadPosition.X_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::driverside::headposition::x_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.Occupant.Row1.DriverSide.HeadPosition.Y", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::driverside::headposition::y, int16_t);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.DriverSide.HeadPosition.Y_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::driverside::headposition::y_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row1.DriverSide.HeadPosition.Yaw", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::driverside::headposition::yaw, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.DriverSide.HeadPosition.Yaw_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::driverside::headposition::yaw_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.Occupant.Row1.DriverSide.HeadPosition.Z", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::driverside::headposition::z, int16_t);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.DriverSide.HeadPosition.Z_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::driverside::headposition::z_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Occupant.Row1.DriverSide.Identifier.Issuer", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::driverside::identifier::issuer, std::string);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.DriverSide.Identifier.Issuer_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::driverside::identifier::issuer_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Occupant.Row1.DriverSide.Identifier.Subject", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::driverside::identifier::subject, std::string);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.DriverSide.Identifier.Subject_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::driverside::identifier::subject_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row1.DriverSide.MidEyeGaze.Azimuth", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::driverside::mideyegaze::azimuth, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.DriverSide.MidEyeGaze.Azimuth_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::driverside::mideyegaze::azimuth_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row1.DriverSide.MidEyeGaze.Elevation", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::driverside::mideyegaze::elevation, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.DriverSide.MidEyeGaze.Elevation_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::driverside::mideyegaze::elevation_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row1.Middle.HeadPosition.Pitch", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::middle::headposition::pitch, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.Middle.HeadPosition.Pitch_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::middle::headposition::pitch_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row1.Middle.HeadPosition.Roll", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::middle::headposition::roll, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.Middle.HeadPosition.Roll_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::middle::headposition::roll_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.Occupant.Row1.Middle.HeadPosition.X", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::middle::headposition::x, int16_t);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.Middle.HeadPosition.X_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::middle::headposition::x_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.Occupant.Row1.Middle.HeadPosition.Y", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::middle::headposition::y, int16_t);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.Middle.HeadPosition.Y_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::middle::headposition::y_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row1.Middle.HeadPosition.Yaw", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::middle::headposition::yaw, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.Middle.HeadPosition.Yaw_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::middle::headposition::yaw_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.Occupant.Row1.Middle.HeadPosition.Z", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::middle::headposition::z, int16_t);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.Middle.HeadPosition.Z_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::middle::headposition::z_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Occupant.Row1.Middle.Identifier.Issuer", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::middle::identifier::issuer, std::string);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.Middle.Identifier.Issuer_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::middle::identifier::issuer_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Occupant.Row1.Middle.Identifier.Subject", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::middle::identifier::subject, std::string);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.Middle.Identifier.Subject_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::middle::identifier::subject_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row1.Middle.MidEyeGaze.Azimuth", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::middle::mideyegaze::azimuth, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.Middle.MidEyeGaze.Azimuth_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::middle::mideyegaze::azimuth_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row1.Middle.MidEyeGaze.Elevation", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::middle::mideyegaze::elevation, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.Middle.MidEyeGaze.Elevation_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::middle::mideyegaze::elevation_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row1.PassengerSide.HeadPosition.Pitch", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::passengerside::headposition::pitch, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.PassengerSide.HeadPosition.Pitch_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::passengerside::headposition::pitch_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row1.PassengerSide.HeadPosition.Roll", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::passengerside::headposition::roll, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.PassengerSide.HeadPosition.Roll_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::passengerside::headposition::roll_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.Occupant.Row1.PassengerSide.HeadPosition.X", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::passengerside::headposition::x, int16_t);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.PassengerSide.HeadPosition.X_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::passengerside::headposition::x_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.Occupant.Row1.PassengerSide.HeadPosition.Y", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::passengerside::headposition::y, int16_t);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.PassengerSide.HeadPosition.Y_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::passengerside::headposition::y_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row1.PassengerSide.HeadPosition.Yaw", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::passengerside::headposition::yaw, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.PassengerSide.HeadPosition.Yaw_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::passengerside::headposition::yaw_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.Occupant.Row1.PassengerSide.HeadPosition.Z", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::passengerside::headposition::z, int16_t);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.PassengerSide.HeadPosition.Z_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::passengerside::headposition::z_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Occupant.Row1.PassengerSide.Identifier.Issuer", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::passengerside::identifier::issuer, std::string);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.PassengerSide.Identifier.Issuer_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::passengerside::identifier::issuer_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Occupant.Row1.PassengerSide.Identifier.Subject", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::passengerside::identifier::subject, std::string);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.PassengerSide.Identifier.Subject_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::passengerside::identifier::subject_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row1.PassengerSide.MidEyeGaze.Azimuth", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::passengerside::mideyegaze::azimuth, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.PassengerSide.MidEyeGaze.Azimuth_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::passengerside::mideyegaze::azimuth_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row1.PassengerSide.MidEyeGaze.Elevation", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::passengerside::mideyegaze::elevation, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row1.PassengerSide.MidEyeGaze.Elevation_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row1::passengerside::mideyegaze::elevation_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row2.DriverSide.HeadPosition.Pitch", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::driverside::headposition::pitch, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.DriverSide.HeadPosition.Pitch_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::driverside::headposition::pitch_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row2.DriverSide.HeadPosition.Roll", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::driverside::headposition::roll, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.DriverSide.HeadPosition.Roll_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::driverside::headposition::roll_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.Occupant.Row2.DriverSide.HeadPosition.X", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::driverside::headposition::x, int16_t);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.DriverSide.HeadPosition.X_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::driverside::headposition::x_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.Occupant.Row2.DriverSide.HeadPosition.Y", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::driverside::headposition::y, int16_t);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.DriverSide.HeadPosition.Y_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::driverside::headposition::y_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row2.DriverSide.HeadPosition.Yaw", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::driverside::headposition::yaw, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.DriverSide.HeadPosition.Yaw_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::driverside::headposition::yaw_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.Occupant.Row2.DriverSide.HeadPosition.Z", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::driverside::headposition::z, int16_t);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.DriverSide.HeadPosition.Z_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::driverside::headposition::z_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Occupant.Row2.DriverSide.Identifier.Issuer", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::driverside::identifier::issuer, std::string);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.DriverSide.Identifier.Issuer_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::driverside::identifier::issuer_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Occupant.Row2.DriverSide.Identifier.Subject", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::driverside::identifier::subject, std::string);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.DriverSide.Identifier.Subject_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::driverside::identifier::subject_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row2.DriverSide.MidEyeGaze.Azimuth", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::driverside::mideyegaze::azimuth, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.DriverSide.MidEyeGaze.Azimuth_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::driverside::mideyegaze::azimuth_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row2.DriverSide.MidEyeGaze.Elevation", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::driverside::mideyegaze::elevation, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.DriverSide.MidEyeGaze.Elevation_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::driverside::mideyegaze::elevation_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row2.Middle.HeadPosition.Pitch", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::middle::headposition::pitch, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.Middle.HeadPosition.Pitch_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::middle::headposition::pitch_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row2.Middle.HeadPosition.Roll", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::middle::headposition::roll, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.Middle.HeadPosition.Roll_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::middle::headposition::roll_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.Occupant.Row2.Middle.HeadPosition.X", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::middle::headposition::x, int16_t);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.Middle.HeadPosition.X_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::middle::headposition::x_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.Occupant.Row2.Middle.HeadPosition.Y", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::middle::headposition::y, int16_t);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.Middle.HeadPosition.Y_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::middle::headposition::y_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row2.Middle.HeadPosition.Yaw", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::middle::headposition::yaw, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.Middle.HeadPosition.Yaw_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::middle::headposition::yaw_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.Occupant.Row2.Middle.HeadPosition.Z", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::middle::headposition::z, int16_t);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.Middle.HeadPosition.Z_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::middle::headposition::z_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Occupant.Row2.Middle.Identifier.Issuer", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::middle::identifier::issuer, std::string);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.Middle.Identifier.Issuer_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::middle::identifier::issuer_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Occupant.Row2.Middle.Identifier.Subject", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::middle::identifier::subject, std::string);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.Middle.Identifier.Subject_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::middle::identifier::subject_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row2.Middle.MidEyeGaze.Azimuth", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::middle::mideyegaze::azimuth, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.Middle.MidEyeGaze.Azimuth_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::middle::mideyegaze::azimuth_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row2.Middle.MidEyeGaze.Elevation", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::middle::mideyegaze::elevation, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.Middle.MidEyeGaze.Elevation_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::middle::mideyegaze::elevation_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row2.PassengerSide.HeadPosition.Pitch", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::passengerside::headposition::pitch, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.PassengerSide.HeadPosition.Pitch_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::passengerside::headposition::pitch_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row2.PassengerSide.HeadPosition.Roll", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::passengerside::headposition::roll, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.PassengerSide.HeadPosition.Roll_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::passengerside::headposition::roll_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.Occupant.Row2.PassengerSide.HeadPosition.X", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::passengerside::headposition::x, int16_t);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.PassengerSide.HeadPosition.X_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::passengerside::headposition::x_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.Occupant.Row2.PassengerSide.HeadPosition.Y", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::passengerside::headposition::y, int16_t);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.PassengerSide.HeadPosition.Y_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::passengerside::headposition::y_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row2.PassengerSide.HeadPosition.Yaw", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::passengerside::headposition::yaw, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.PassengerSide.HeadPosition.Yaw_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::passengerside::headposition::yaw_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.Occupant.Row2.PassengerSide.HeadPosition.Z", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::passengerside::headposition::z, int16_t);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.PassengerSide.HeadPosition.Z_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::passengerside::headposition::z_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Occupant.Row2.PassengerSide.Identifier.Issuer", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::passengerside::identifier::issuer, std::string);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.PassengerSide.Identifier.Issuer_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::passengerside::identifier::issuer_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Occupant.Row2.PassengerSide.Identifier.Subject", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::passengerside::identifier::subject, std::string);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.PassengerSide.Identifier.Subject_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::passengerside::identifier::subject_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row2.PassengerSide.MidEyeGaze.Azimuth", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::passengerside::mideyegaze::azimuth, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.PassengerSide.MidEyeGaze.Azimuth_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::passengerside::mideyegaze::azimuth_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Occupant.Row2.PassengerSide.MidEyeGaze.Elevation", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::passengerside::mideyegaze::elevation, float);});
	Registry<bool>::Register("Vehicle.Occupant.Row2.PassengerSide.MidEyeGaze.Elevation_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::occupant::row2::passengerside::mideyegaze::elevation_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.PowerOptimizeLevel", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::poweroptimizelevel, uint8_t);});
	Registry<bool>::Register("Vehicle.PowerOptimizeLevel_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::poweroptimizelevel_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.PowerOptimizeLevel_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::poweroptimizelevel_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.AccumulatedBrakingEnergy", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::accumulatedbrakingenergy, float);});
	Registry<bool>::Register("Vehicle.Powertrain.AccumulatedBrakingEnergy_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::accumulatedbrakingenergy_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.CombustionEngine.AspirationType", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::combustionengine::aspirationtype, std::string);});
	Registry<float>::Register("Vehicle.Powertrain.CombustionEngine.Bore", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::combustionengine::bore, float);});
	Registry<std::string>::Register("Vehicle.Powertrain.CombustionEngine.CompressionRatio", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::combustionengine::compressionratio, std::string);});
	Registry<std::string>::Register("Vehicle.Powertrain.CombustionEngine.Configuration", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::combustionengine::configuration, std::string);});
	Registry<float>::Register("Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Capacity", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::combustionengine::dieselexhaustfluid::capacity, float);});
	Registry<bool>::Register("Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.IsLevelLow", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::dieselexhaustfluid::islevellow, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.IsLevelLow_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::dieselexhaustfluid::islevellow_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Level", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::dieselexhaustfluid::level, uint8_t);});
	Registry<bool>::Register("Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Level_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::dieselexhaustfluid::level_availability_sensor, bool);});
	Registry<uint32_t>::Register("Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Range", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::dieselexhaustfluid::range, uint32_t);});
	Registry<bool>::Register("Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Range_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::dieselexhaustfluid::range_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.CombustionEngine.DieselParticulateFilter.DeltaPressure", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::dieselparticulatefilter::deltapressure, float);});
	Registry<bool>::Register("Vehicle.Powertrain.CombustionEngine.DieselParticulateFilter.DeltaPressure_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::dieselparticulatefilter::deltapressure_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.CombustionEngine.DieselParticulateFilter.InletTemperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::dieselparticulatefilter::inlettemperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.CombustionEngine.DieselParticulateFilter.InletTemperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::dieselparticulatefilter::inlettemperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.CombustionEngine.DieselParticulateFilter.OutletTemperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::dieselparticulatefilter::outlettemperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.CombustionEngine.DieselParticulateFilter.OutletTemperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::dieselparticulatefilter::outlettemperature_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.CombustionEngine.Displacement", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::combustionengine::displacement, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.CombustionEngine.EOP", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::eop, uint16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.CombustionEngine.EOP_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::eop_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.CombustionEngine.EngineCode", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::combustionengine::enginecode, std::string);});
	Registry<float>::Register("Vehicle.Powertrain.CombustionEngine.EngineCoolant.Capacity", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::combustionengine::enginecoolant::capacity, float);});
	Registry<std::string>::Register("Vehicle.Powertrain.CombustionEngine.EngineCoolant.Level", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::enginecoolant::level, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.CombustionEngine.EngineCoolant.Level_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::enginecoolant::level_availability_sensor, bool);});
	Registry<int32_t>::Register("Vehicle.Powertrain.CombustionEngine.EngineCoolant.LifeRemaining", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::enginecoolant::liferemaining, int32_t);});
	Registry<bool>::Register("Vehicle.Powertrain.CombustionEngine.EngineCoolant.LifeRemaining_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::enginecoolant::liferemaining_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.CombustionEngine.EngineCoolant.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::enginecoolant::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.CombustionEngine.EngineCoolant.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::enginecoolant::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.CombustionEngine.EngineHours", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::enginehours, float);});
	Registry<bool>::Register("Vehicle.Powertrain.CombustionEngine.EngineHours_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::enginehours_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.CombustionEngine.EngineOil.Capacity", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::combustionengine::engineoil::capacity, float);});
	Registry<std::string>::Register("Vehicle.Powertrain.CombustionEngine.EngineOil.Level", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::engineoil::level, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.CombustionEngine.EngineOil.Level_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::engineoil::level_availability_sensor, bool);});
	Registry<int32_t>::Register("Vehicle.Powertrain.CombustionEngine.EngineOil.LifeRemaining", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::engineoil::liferemaining, int32_t);});
	Registry<bool>::Register("Vehicle.Powertrain.CombustionEngine.EngineOil.LifeRemaining_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::engineoil::liferemaining_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.CombustionEngine.EngineOil.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::engineoil::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.CombustionEngine.EngineOil.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::engineoil::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.CombustionEngine.IdleHours", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::idlehours, float);});
	Registry<bool>::Register("Vehicle.Powertrain.CombustionEngine.IdleHours_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::idlehours_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.CombustionEngine.IsRunning", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::isrunning, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.CombustionEngine.IsRunning_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::isrunning_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.CombustionEngine.MAF", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::maf, uint16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.CombustionEngine.MAF_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::maf_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.CombustionEngine.MAP", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::map, uint16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.CombustionEngine.MAP_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::map_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.CombustionEngine.MaxPower", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::combustionengine::maxpower, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.CombustionEngine.MaxTorque", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::combustionengine::maxtorque, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.CombustionEngine.NumberOfCylinders", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::combustionengine::numberofcylinders, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.CombustionEngine.NumberOfValvesPerCylinder", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::combustionengine::numberofvalvespercylinder, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.CombustionEngine.Power", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::power, uint16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.CombustionEngine.Power_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::power_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.CombustionEngine.Speed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::speed, uint16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.CombustionEngine.Speed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::speed_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.CombustionEngine.StrokeLength", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::combustionengine::strokelength, float);});
	Registry<uint8_t>::Register("Vehicle.Powertrain.CombustionEngine.TPS", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::tps, uint8_t);});
	Registry<bool>::Register("Vehicle.Powertrain.CombustionEngine.TPS_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::tps_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.Powertrain.CombustionEngine.Torque", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::torque, int16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.CombustionEngine.Torque_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::combustionengine::torque_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.ElectricMotor.Number1.EngineCode", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::electricmotor::number1::enginecode, std::string);});
	Registry<float>::Register("Vehicle.Powertrain.ElectricMotor.Number1.EngineCoolant.Capacity", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::electricmotor::number1::enginecoolant::capacity, float);});
	Registry<std::string>::Register("Vehicle.Powertrain.ElectricMotor.Number1.EngineCoolant.Level", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number1::enginecoolant::level, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number1.EngineCoolant.Level_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number1::enginecoolant::level_availability_sensor, bool);});
	Registry<int32_t>::Register("Vehicle.Powertrain.ElectricMotor.Number1.EngineCoolant.LifeRemaining", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number1::enginecoolant::liferemaining, int32_t);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number1.EngineCoolant.LifeRemaining_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number1::enginecoolant::liferemaining_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.ElectricMotor.Number1.EngineCoolant.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number1::enginecoolant::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number1.EngineCoolant.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number1::enginecoolant::temperature_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.ElectricMotor.Number1.MaxPower", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::electricmotor::number1::maxpower, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.ElectricMotor.Number1.MaxRegenPower", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::electricmotor::number1::maxregenpower, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.ElectricMotor.Number1.MaxRegenTorque", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::electricmotor::number1::maxregentorque, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.ElectricMotor.Number1.MaxTorque", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::electricmotor::number1::maxtorque, uint16_t);});
	Registry<int16_t>::Register("Vehicle.Powertrain.ElectricMotor.Number1.Power", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number1::power, int16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number1.Power_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number1::power_availability_sensor, bool);});
	Registry<int32_t>::Register("Vehicle.Powertrain.ElectricMotor.Number1.Speed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number1::speed, int32_t);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number1.Speed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number1::speed_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.ElectricMotor.Number1.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number1::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number1.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number1::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.ElectricMotor.Number1.TimeInUse", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number1::timeinuse, float);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number1.TimeInUse_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number1::timeinuse_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.Powertrain.ElectricMotor.Number1.Torque", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number1::torque, int16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number1.Torque_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number1::torque_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.ElectricMotor.Number2.EngineCode", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::electricmotor::number2::enginecode, std::string);});
	Registry<float>::Register("Vehicle.Powertrain.ElectricMotor.Number2.EngineCoolant.Capacity", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::electricmotor::number2::enginecoolant::capacity, float);});
	Registry<std::string>::Register("Vehicle.Powertrain.ElectricMotor.Number2.EngineCoolant.Level", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number2::enginecoolant::level, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number2.EngineCoolant.Level_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number2::enginecoolant::level_availability_sensor, bool);});
	Registry<int32_t>::Register("Vehicle.Powertrain.ElectricMotor.Number2.EngineCoolant.LifeRemaining", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number2::enginecoolant::liferemaining, int32_t);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number2.EngineCoolant.LifeRemaining_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number2::enginecoolant::liferemaining_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.ElectricMotor.Number2.EngineCoolant.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number2::enginecoolant::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number2.EngineCoolant.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number2::enginecoolant::temperature_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.ElectricMotor.Number2.MaxPower", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::electricmotor::number2::maxpower, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.ElectricMotor.Number2.MaxRegenPower", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::electricmotor::number2::maxregenpower, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.ElectricMotor.Number2.MaxRegenTorque", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::electricmotor::number2::maxregentorque, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.ElectricMotor.Number2.MaxTorque", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::electricmotor::number2::maxtorque, uint16_t);});
	Registry<int16_t>::Register("Vehicle.Powertrain.ElectricMotor.Number2.Power", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number2::power, int16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number2.Power_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number2::power_availability_sensor, bool);});
	Registry<int32_t>::Register("Vehicle.Powertrain.ElectricMotor.Number2.Speed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number2::speed, int32_t);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number2.Speed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number2::speed_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.ElectricMotor.Number2.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number2::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number2.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number2::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.ElectricMotor.Number2.TimeInUse", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number2::timeinuse, float);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number2.TimeInUse_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number2::timeinuse_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.Powertrain.ElectricMotor.Number2.Torque", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number2::torque, int16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number2.Torque_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number2::torque_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.ElectricMotor.Number3.EngineCode", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::electricmotor::number3::enginecode, std::string);});
	Registry<float>::Register("Vehicle.Powertrain.ElectricMotor.Number3.EngineCoolant.Capacity", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::electricmotor::number3::enginecoolant::capacity, float);});
	Registry<std::string>::Register("Vehicle.Powertrain.ElectricMotor.Number3.EngineCoolant.Level", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number3::enginecoolant::level, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number3.EngineCoolant.Level_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number3::enginecoolant::level_availability_sensor, bool);});
	Registry<int32_t>::Register("Vehicle.Powertrain.ElectricMotor.Number3.EngineCoolant.LifeRemaining", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number3::enginecoolant::liferemaining, int32_t);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number3.EngineCoolant.LifeRemaining_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number3::enginecoolant::liferemaining_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.ElectricMotor.Number3.EngineCoolant.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number3::enginecoolant::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number3.EngineCoolant.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number3::enginecoolant::temperature_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.ElectricMotor.Number3.MaxPower", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::electricmotor::number3::maxpower, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.ElectricMotor.Number3.MaxRegenPower", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::electricmotor::number3::maxregenpower, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.ElectricMotor.Number3.MaxRegenTorque", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::electricmotor::number3::maxregentorque, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.ElectricMotor.Number3.MaxTorque", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::electricmotor::number3::maxtorque, uint16_t);});
	Registry<int16_t>::Register("Vehicle.Powertrain.ElectricMotor.Number3.Power", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number3::power, int16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number3.Power_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number3::power_availability_sensor, bool);});
	Registry<int32_t>::Register("Vehicle.Powertrain.ElectricMotor.Number3.Speed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number3::speed, int32_t);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number3.Speed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number3::speed_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.ElectricMotor.Number3.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number3::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number3.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number3::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.ElectricMotor.Number3.TimeInUse", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number3::timeinuse, float);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number3.TimeInUse_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number3::timeinuse_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.Powertrain.ElectricMotor.Number3.Torque", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number3::torque, int16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number3.Torque_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number3::torque_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.ElectricMotor.Number4.EngineCode", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::electricmotor::number4::enginecode, std::string);});
	Registry<float>::Register("Vehicle.Powertrain.ElectricMotor.Number4.EngineCoolant.Capacity", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::electricmotor::number4::enginecoolant::capacity, float);});
	Registry<std::string>::Register("Vehicle.Powertrain.ElectricMotor.Number4.EngineCoolant.Level", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number4::enginecoolant::level, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number4.EngineCoolant.Level_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number4::enginecoolant::level_availability_sensor, bool);});
	Registry<int32_t>::Register("Vehicle.Powertrain.ElectricMotor.Number4.EngineCoolant.LifeRemaining", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number4::enginecoolant::liferemaining, int32_t);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number4.EngineCoolant.LifeRemaining_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number4::enginecoolant::liferemaining_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.ElectricMotor.Number4.EngineCoolant.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number4::enginecoolant::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number4.EngineCoolant.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number4::enginecoolant::temperature_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.ElectricMotor.Number4.MaxPower", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::electricmotor::number4::maxpower, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.ElectricMotor.Number4.MaxRegenPower", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::electricmotor::number4::maxregenpower, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.ElectricMotor.Number4.MaxRegenTorque", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::electricmotor::number4::maxregentorque, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.ElectricMotor.Number4.MaxTorque", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::electricmotor::number4::maxtorque, uint16_t);});
	Registry<int16_t>::Register("Vehicle.Powertrain.ElectricMotor.Number4.Power", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number4::power, int16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number4.Power_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number4::power_availability_sensor, bool);});
	Registry<int32_t>::Register("Vehicle.Powertrain.ElectricMotor.Number4.Speed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number4::speed, int32_t);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number4.Speed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number4::speed_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.ElectricMotor.Number4.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number4::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number4.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number4::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.ElectricMotor.Number4.TimeInUse", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number4::timeinuse, float);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number4.TimeInUse_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number4::timeinuse_availability_sensor, bool);});
	Registry<int16_t>::Register("Vehicle.Powertrain.ElectricMotor.Number4.Torque", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number4::torque, int16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.ElectricMotor.Number4.Torque_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::electricmotor::number4::torque_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.FuelSystem.AbsoluteLevel", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::fuelsystem::absolutelevel, float);});
	Registry<bool>::Register("Vehicle.Powertrain.FuelSystem.AbsoluteLevel_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::fuelsystem::absolutelevel_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.FuelSystem.AverageConsumption", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::fuelsystem::averageconsumption, float);});
	Registry<bool>::Register("Vehicle.Powertrain.FuelSystem.AverageConsumption_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::fuelsystem::averageconsumption_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.FuelSystem.ConsumptionSinceStart", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::fuelsystem::consumptionsincestart, float);});
	Registry<bool>::Register("Vehicle.Powertrain.FuelSystem.ConsumptionSinceStart_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::fuelsystem::consumptionsincestart_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.FuelSystem.InstantConsumption", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::fuelsystem::instantconsumption, float);});
	Registry<bool>::Register("Vehicle.Powertrain.FuelSystem.InstantConsumption_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::fuelsystem::instantconsumption_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.FuelSystem.IsEngineStopStartEnabled", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::fuelsystem::isenginestopstartenabled, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.FuelSystem.IsEngineStopStartEnabled_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::fuelsystem::isenginestopstartenabled_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.FuelSystem.IsFuelLevelLow", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::fuelsystem::isfuellevellow, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.FuelSystem.IsFuelLevelLow_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::fuelsystem::isfuellevellow_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.FuelSystem.IsFuelPortFlapOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::fuelsystem::isfuelportflapopen, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.FuelSystem.IsFuelPortFlapOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::fuelsystem::isfuelportflapopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.FuelSystem.IsFuelPortFlapOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::fuelsystem::isfuelportflapopen_availability_sensor, bool);});
	Registry<uint32_t>::Register("Vehicle.Powertrain.FuelSystem.Range", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::fuelsystem::range, uint32_t);});
	Registry<bool>::Register("Vehicle.Powertrain.FuelSystem.Range_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::fuelsystem::range_availability_sensor, bool);});
	Registry<std::vector<std::string>>::Register("Vehicle.Powertrain.FuelSystem.RefuelPortPosition", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::fuelsystem::refuelportposition, std::vector<std::string>);});
	Registry<uint8_t>::Register("Vehicle.Powertrain.FuelSystem.RelativeLevel", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::fuelsystem::relativelevel, uint8_t);});
	Registry<bool>::Register("Vehicle.Powertrain.FuelSystem.RelativeLevel_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::fuelsystem::relativelevel_availability_sensor, bool);});
	Registry<std::vector<std::string>>::Register("Vehicle.Powertrain.FuelSystem.SupportedFuel", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::fuelsystem::supportedfuel, std::vector<std::string>);});
	Registry<float>::Register("Vehicle.Powertrain.FuelSystem.TankCapacity", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::fuelsystem::tankcapacity, float);});
	Registry<uint32_t>::Register("Vehicle.Powertrain.FuelSystem.TimeRemaining", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::fuelsystem::timeremaining, uint32_t);});
	Registry<bool>::Register("Vehicle.Powertrain.FuelSystem.TimeRemaining_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::fuelsystem::timeremaining_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.IsAutoPowerOptimize", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::isautopoweroptimize, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.IsAutoPowerOptimize_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::isautopoweroptimize_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.IsAutoPowerOptimize_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::isautopoweroptimize_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Powertrain.PowerOptimizeLevel", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::poweroptimizelevel, uint8_t);});
	Registry<bool>::Register("Vehicle.Powertrain.PowerOptimizeLevel_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::poweroptimizelevel_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.PowerOptimizeLevel_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::poweroptimizelevel_availability_sensor, bool);});
	Registry<uint32_t>::Register("Vehicle.Powertrain.Range", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::range, uint32_t);});
	Registry<bool>::Register("Vehicle.Powertrain.Range_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::range_availability_sensor, bool);});
	Registry<uint32_t>::Register("Vehicle.Powertrain.TimeRemaining", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::timeremaining, uint32_t);});
	Registry<bool>::Register("Vehicle.Powertrain.TimeRemaining_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::timeremaining_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Charging.AveragePower", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::averagepower, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.AveragePower_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::averagepower_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargeCurrent.DC", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargecurrent::dc, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargeCurrent.DC_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargecurrent::dc_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargeCurrent.Phase1", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargecurrent::phase1, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargeCurrent.Phase1_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargecurrent::phase1_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargeCurrent.Phase2", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargecurrent::phase2, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargeCurrent.Phase2_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargecurrent::phase2_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargeCurrent.Phase3", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargecurrent::phase3, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargeCurrent.Phase3_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargecurrent::phase3_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargeLimit", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargelimit, uint8_t);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargeLimit_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargelimit_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargeLimit_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargelimit_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargeRate", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargerate, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargeRate_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargerate_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargeVoltage.DC", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargevoltage::dc, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargeVoltage.DC_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargevoltage::dc_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargeVoltage.Phase1", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargevoltage::phase1, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargeVoltage.Phase1_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargevoltage::phase1_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargeVoltage.Phase2", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargevoltage::phase2, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargeVoltage.Phase2_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargevoltage::phase2_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargeVoltage.Phase3", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargevoltage::phase3, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargeVoltage.Phase3_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargevoltage::phase3_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.AnyPosition.IsChargingCableConnected", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::anyposition::ischargingcableconnected, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.AnyPosition.IsChargingCableConnected_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::anyposition::ischargingcableconnected_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.AnyPosition.IsChargingCableLocked", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::anyposition::ischargingcablelocked, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.AnyPosition.IsChargingCableLocked_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::anyposition::ischargingcablelocked_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.AnyPosition.IsChargingCableLocked_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::anyposition::ischargingcablelocked_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.AnyPosition.IsFlapOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::anyposition::isflapopen, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.AnyPosition.IsFlapOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::anyposition::isflapopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.AnyPosition.IsFlapOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::anyposition::isflapopen_availability_sensor, bool);});
	Registry<std::vector<std::string>>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.AnyPosition.SupportedInletTypes", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::anyposition::supportedinlettypes, std::vector<std::string>);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontLeft.IsChargingCableConnected", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontleft::ischargingcableconnected, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontLeft.IsChargingCableConnected_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontleft::ischargingcableconnected_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontLeft.IsChargingCableLocked", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontleft::ischargingcablelocked, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontLeft.IsChargingCableLocked_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontleft::ischargingcablelocked_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontLeft.IsChargingCableLocked_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontleft::ischargingcablelocked_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontLeft.IsFlapOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontleft::isflapopen, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontLeft.IsFlapOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontleft::isflapopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontLeft.IsFlapOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontleft::isflapopen_availability_sensor, bool);});
	Registry<std::vector<std::string>>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontLeft.SupportedInletTypes", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontleft::supportedinlettypes, std::vector<std::string>);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontMiddle.IsChargingCableConnected", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontmiddle::ischargingcableconnected, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontMiddle.IsChargingCableConnected_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontmiddle::ischargingcableconnected_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontMiddle.IsChargingCableLocked", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontmiddle::ischargingcablelocked, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontMiddle.IsChargingCableLocked_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontmiddle::ischargingcablelocked_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontMiddle.IsChargingCableLocked_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontmiddle::ischargingcablelocked_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontMiddle.IsFlapOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontmiddle::isflapopen, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontMiddle.IsFlapOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontmiddle::isflapopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontMiddle.IsFlapOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontmiddle::isflapopen_availability_sensor, bool);});
	Registry<std::vector<std::string>>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontMiddle.SupportedInletTypes", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontmiddle::supportedinlettypes, std::vector<std::string>);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontRight.IsChargingCableConnected", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontright::ischargingcableconnected, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontRight.IsChargingCableConnected_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontright::ischargingcableconnected_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontRight.IsChargingCableLocked", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontright::ischargingcablelocked, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontRight.IsChargingCableLocked_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontright::ischargingcablelocked_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontRight.IsChargingCableLocked_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontright::ischargingcablelocked_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontRight.IsFlapOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontright::isflapopen, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontRight.IsFlapOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontright::isflapopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontRight.IsFlapOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontright::isflapopen_availability_sensor, bool);});
	Registry<std::vector<std::string>>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontRight.SupportedInletTypes", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::frontright::supportedinlettypes, std::vector<std::string>);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearLeft.IsChargingCableConnected", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearleft::ischargingcableconnected, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearLeft.IsChargingCableConnected_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearleft::ischargingcableconnected_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearLeft.IsChargingCableLocked", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearleft::ischargingcablelocked, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearLeft.IsChargingCableLocked_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearleft::ischargingcablelocked_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearLeft.IsChargingCableLocked_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearleft::ischargingcablelocked_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearLeft.IsFlapOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearleft::isflapopen, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearLeft.IsFlapOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearleft::isflapopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearLeft.IsFlapOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearleft::isflapopen_availability_sensor, bool);});
	Registry<std::vector<std::string>>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearLeft.SupportedInletTypes", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearleft::supportedinlettypes, std::vector<std::string>);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearMiddle.IsChargingCableConnected", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearmiddle::ischargingcableconnected, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearMiddle.IsChargingCableConnected_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearmiddle::ischargingcableconnected_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearMiddle.IsChargingCableLocked", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearmiddle::ischargingcablelocked, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearMiddle.IsChargingCableLocked_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearmiddle::ischargingcablelocked_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearMiddle.IsChargingCableLocked_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearmiddle::ischargingcablelocked_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearMiddle.IsFlapOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearmiddle::isflapopen, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearMiddle.IsFlapOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearmiddle::isflapopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearMiddle.IsFlapOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearmiddle::isflapopen_availability_sensor, bool);});
	Registry<std::vector<std::string>>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearMiddle.SupportedInletTypes", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearmiddle::supportedinlettypes, std::vector<std::string>);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearRight.IsChargingCableConnected", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearright::ischargingcableconnected, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearRight.IsChargingCableConnected_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearright::ischargingcableconnected_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearRight.IsChargingCableLocked", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearright::ischargingcablelocked, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearRight.IsChargingCableLocked_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearright::ischargingcablelocked_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearRight.IsChargingCableLocked_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearright::ischargingcablelocked_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearRight.IsFlapOpen", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearright::isflapopen, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearRight.IsFlapOpen_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearright::isflapopen_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearRight.IsFlapOpen_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearright::isflapopen_availability_sensor, bool);});
	Registry<std::vector<std::string>>::Register("Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearRight.SupportedInletTypes", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::tractionbattery::charging::chargingport::rearright::supportedinlettypes, std::vector<std::string>);});
	Registry<std::string>::Register("Vehicle.Powertrain.TractionBattery.Charging.EvseId", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::evseid, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.EvseId_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::evseid_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.IsCharging", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::ischarging, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.IsCharging_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::ischarging_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.IsDischarging", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::isdischarging, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.IsDischarging_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::isdischarging_availability_sensor, bool);});
	Registry<double>::Register("Vehicle.Powertrain.TractionBattery.Charging.Location.Altitude", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::location::altitude, double);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.Location.Altitude_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::location::altitude_availability_sensor, bool);});
	Registry<double>::Register("Vehicle.Powertrain.TractionBattery.Charging.Location.Latitude", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::location::latitude, double);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.Location.Latitude_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::location::latitude_availability_sensor, bool);});
	Registry<double>::Register("Vehicle.Powertrain.TractionBattery.Charging.Location.Longitude", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::location::longitude, double);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.Location.Longitude_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::location::longitude_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Charging.MaxPower", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::maxpower, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.MaxPower_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::maxpower_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Charging.MaximumChargingCurrent.DC", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::maximumchargingcurrent::dc, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.MaximumChargingCurrent.DC_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::maximumchargingcurrent::dc_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Charging.MaximumChargingCurrent.Phase1", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::maximumchargingcurrent::phase1, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.MaximumChargingCurrent.Phase1_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::maximumchargingcurrent::phase1_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Charging.MaximumChargingCurrent.Phase2", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::maximumchargingcurrent::phase2, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.MaximumChargingCurrent.Phase2_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::maximumchargingcurrent::phase2_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Charging.MaximumChargingCurrent.Phase3", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::maximumchargingcurrent::phase3, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.MaximumChargingCurrent.Phase3_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::maximumchargingcurrent::phase3_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Charging.PowerLoss", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::powerloss, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.PowerLoss_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::powerloss_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.TractionBattery.Charging.StartStopCharging", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::charging::startstopcharging, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.StartStopCharging_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::startstopcharging_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.StartStopCharging_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::startstopcharging_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Charging.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::temperature_availability_sensor, bool);});
	Registry<uint32_t>::Register("Vehicle.Powertrain.TractionBattery.Charging.TimeToComplete", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::timetocomplete, uint32_t);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.TimeToComplete_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::timetocomplete_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.TractionBattery.Charging.Timer.Mode", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::charging::timer::mode, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.Timer.Mode_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::timer::mode_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.Timer.Mode_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::timer::mode_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.TractionBattery.Charging.Timer.Time", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::charging::timer::time, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.Timer.Time_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::timer::time_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Charging.Timer.Time_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::charging::timer::time_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.DCDC.PowerLoss", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::dcdc::powerloss, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.DCDC.PowerLoss_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::dcdc::powerloss_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.DCDC.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::dcdc::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.DCDC.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::dcdc::temperature_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.TractionBattery.MaxVoltage", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::tractionbattery::maxvoltage, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.TractionBattery.NominalVoltage", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::tractionbattery::nominalvoltage, uint16_t);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.AccumulatedChargedEnergy", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::accumulatedchargedenergy, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.AccumulatedChargedEnergy_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::accumulatedchargedenergy_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.AccumulatedChargedThroughput", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::accumulatedchargedthroughput, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.AccumulatedChargedThroughput_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::accumulatedchargedthroughput_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.AccumulatedConsumedEnergy", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::accumulatedconsumedenergy, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.AccumulatedConsumedEnergy_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::accumulatedconsumedenergy_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.AccumulatedConsumedThroughput", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::accumulatedconsumedthroughput, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.AccumulatedConsumedThroughput_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::accumulatedconsumedthroughput_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.IsActive", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::batteryconditioning::isactive, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.IsActive_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::batteryconditioning::isactive_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.IsOngoing", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::batteryconditioning::isongoing, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.IsOngoing_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::batteryconditioning::isongoing_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.RequestedMode", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::number1::batteryconditioning::requestedmode, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.RequestedMode_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::batteryconditioning::requestedmode_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.RequestedMode_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::batteryconditioning::requestedmode_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.StartTime", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::number1::batteryconditioning::starttime, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.StartTime_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::batteryconditioning::starttime_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.StartTime_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::batteryconditioning::starttime_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.TargetTemperature", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::number1::batteryconditioning::targettemperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.TargetTemperature_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::batteryconditioning::targettemperature_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.TargetTemperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::batteryconditioning::targettemperature_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.TargetTime", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::number1::batteryconditioning::targettime, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.TargetTime_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::batteryconditioning::targettime_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.TargetTime_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::batteryconditioning::targettime_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.TractionBattery.Number1.CellVoltage.IdMax", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cellvoltage::idmax, uint16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.CellVoltage.IdMax_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cellvoltage::idmax_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.TractionBattery.Number1.CellVoltage.IdMin", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cellvoltage::idmin, uint16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.CellVoltage.IdMin_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cellvoltage::idmin_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.CellVoltage.Max", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cellvoltage::max, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.CellVoltage.Max_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cellvoltage::max_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.CellVoltage.Min", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cellvoltage::min, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.CellVoltage.Min_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cellvoltage::min_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number1.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number1::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number1.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number1::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number1.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number1::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number1.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number1::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number10.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number10::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number10.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number10::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number10.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number10::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number10.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number10::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number2.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number2::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number2.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number2::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number2.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number2::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number2.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number2::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number3.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number3::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number3.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number3::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number3.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number3::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number3.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number3::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number4.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number4::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number4.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number4::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number4.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number4::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number4.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number4::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number5.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number5::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number5.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number5::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number5.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number5::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number5.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number5::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number6.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number6::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number6.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number6::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number6.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number6::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number6.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number6::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number7.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number7::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number7.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number7::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number7.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number7::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number7.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number7::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number8.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number8::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number8.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number8::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number8.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number8::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number8.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number8::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number9.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number9::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number9.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number9::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number9.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number9::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.Cells.Number9.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::cells::number9::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.CurrentCurrent", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::currentcurrent, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.CurrentCurrent_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::currentcurrent_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.CurrentPower", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::currentpower, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.CurrentPower_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::currentpower_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.CurrentVoltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::currentvoltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.CurrentVoltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::currentvoltage_availability_sensor, bool);});
	Registry<std::vector<std::string>>::Register("Vehicle.Powertrain.TractionBattery.Number1.ErrorCodes", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::errorcodes, std::vector<std::string>);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.ErrorCodes_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::errorcodes_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.TractionBattery.Number1.GrossCapacity", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::tractionbattery::number1::grosscapacity, uint16_t);});
	Registry<std::string>::Register("Vehicle.Powertrain.TractionBattery.Number1.Id", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::tractionbattery::number1::id, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.IsGroundConnected", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::isgroundconnected, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.IsGroundConnected_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::isgroundconnected_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.IsPowerConnected", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::ispowerconnected, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.IsPowerConnected_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::ispowerconnected_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.TractionBattery.Number1.NetCapacity", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::netcapacity, uint16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.NetCapacity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::netcapacity_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.PowerLoss", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::powerloss, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.PowerLoss_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::powerloss_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.TractionBattery.Number1.ProductionDate", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::tractionbattery::number1::productiondate, std::string);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.StateOfCharge.Current", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::stateofcharge::current, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.StateOfCharge.Current_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::stateofcharge::current_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.StateOfCharge.Displayed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::stateofcharge::displayed, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.StateOfCharge.Displayed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::stateofcharge::displayed_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.StateOfHealth", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::stateofhealth, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.StateOfHealth_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::stateofhealth_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.Temperature.Average", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::temperature::average, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.Temperature.Average_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::temperature::average_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.Temperature.Max", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::temperature::max, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.Temperature.Max_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::temperature::max_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number1.Temperature.Min", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::temperature::min, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number1.Temperature.Min_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number1::temperature::min_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.AccumulatedChargedEnergy", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::accumulatedchargedenergy, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.AccumulatedChargedEnergy_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::accumulatedchargedenergy_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.AccumulatedChargedThroughput", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::accumulatedchargedthroughput, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.AccumulatedChargedThroughput_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::accumulatedchargedthroughput_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.AccumulatedConsumedEnergy", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::accumulatedconsumedenergy, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.AccumulatedConsumedEnergy_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::accumulatedconsumedenergy_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.AccumulatedConsumedThroughput", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::accumulatedconsumedthroughput, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.AccumulatedConsumedThroughput_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::accumulatedconsumedthroughput_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.IsActive", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::batteryconditioning::isactive, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.IsActive_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::batteryconditioning::isactive_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.IsOngoing", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::batteryconditioning::isongoing, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.IsOngoing_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::batteryconditioning::isongoing_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.RequestedMode", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::number2::batteryconditioning::requestedmode, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.RequestedMode_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::batteryconditioning::requestedmode_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.RequestedMode_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::batteryconditioning::requestedmode_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.StartTime", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::number2::batteryconditioning::starttime, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.StartTime_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::batteryconditioning::starttime_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.StartTime_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::batteryconditioning::starttime_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.TargetTemperature", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::number2::batteryconditioning::targettemperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.TargetTemperature_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::batteryconditioning::targettemperature_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.TargetTemperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::batteryconditioning::targettemperature_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.TargetTime", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::number2::batteryconditioning::targettime, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.TargetTime_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::batteryconditioning::targettime_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.TargetTime_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::batteryconditioning::targettime_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.TractionBattery.Number2.CellVoltage.IdMax", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cellvoltage::idmax, uint16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.CellVoltage.IdMax_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cellvoltage::idmax_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.TractionBattery.Number2.CellVoltage.IdMin", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cellvoltage::idmin, uint16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.CellVoltage.IdMin_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cellvoltage::idmin_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.CellVoltage.Max", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cellvoltage::max, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.CellVoltage.Max_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cellvoltage::max_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.CellVoltage.Min", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cellvoltage::min, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.CellVoltage.Min_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cellvoltage::min_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number1.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number1::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number1.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number1::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number1.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number1::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number1.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number1::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number10.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number10::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number10.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number10::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number10.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number10::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number10.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number10::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number2.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number2::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number2.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number2::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number2.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number2::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number2.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number2::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number3.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number3::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number3.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number3::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number3.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number3::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number3.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number3::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number4.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number4::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number4.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number4::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number4.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number4::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number4.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number4::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number5.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number5::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number5.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number5::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number5.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number5::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number5.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number5::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number6.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number6::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number6.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number6::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number6.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number6::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number6.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number6::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number7.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number7::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number7.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number7::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number7.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number7::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number7.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number7::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number8.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number8::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number8.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number8::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number8.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number8::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number8.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number8::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number9.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number9::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number9.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number9::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number9.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number9::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.Cells.Number9.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::cells::number9::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.CurrentCurrent", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::currentcurrent, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.CurrentCurrent_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::currentcurrent_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.CurrentPower", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::currentpower, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.CurrentPower_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::currentpower_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.CurrentVoltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::currentvoltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.CurrentVoltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::currentvoltage_availability_sensor, bool);});
	Registry<std::vector<std::string>>::Register("Vehicle.Powertrain.TractionBattery.Number2.ErrorCodes", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::errorcodes, std::vector<std::string>);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.ErrorCodes_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::errorcodes_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.TractionBattery.Number2.GrossCapacity", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::tractionbattery::number2::grosscapacity, uint16_t);});
	Registry<std::string>::Register("Vehicle.Powertrain.TractionBattery.Number2.Id", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::tractionbattery::number2::id, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.IsGroundConnected", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::isgroundconnected, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.IsGroundConnected_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::isgroundconnected_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.IsPowerConnected", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::ispowerconnected, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.IsPowerConnected_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::ispowerconnected_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.TractionBattery.Number2.NetCapacity", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::netcapacity, uint16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.NetCapacity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::netcapacity_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.PowerLoss", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::powerloss, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.PowerLoss_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::powerloss_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.TractionBattery.Number2.ProductionDate", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::tractionbattery::number2::productiondate, std::string);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.StateOfCharge.Current", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::stateofcharge::current, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.StateOfCharge.Current_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::stateofcharge::current_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.StateOfCharge.Displayed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::stateofcharge::displayed, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.StateOfCharge.Displayed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::stateofcharge::displayed_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.StateOfHealth", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::stateofhealth, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.StateOfHealth_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::stateofhealth_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.Temperature.Average", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::temperature::average, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.Temperature.Average_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::temperature::average_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.Temperature.Max", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::temperature::max, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.Temperature.Max_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::temperature::max_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number2.Temperature.Min", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::temperature::min, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number2.Temperature.Min_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number2::temperature::min_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.AccumulatedChargedEnergy", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::accumulatedchargedenergy, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.AccumulatedChargedEnergy_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::accumulatedchargedenergy_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.AccumulatedChargedThroughput", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::accumulatedchargedthroughput, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.AccumulatedChargedThroughput_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::accumulatedchargedthroughput_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.AccumulatedConsumedEnergy", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::accumulatedconsumedenergy, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.AccumulatedConsumedEnergy_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::accumulatedconsumedenergy_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.AccumulatedConsumedThroughput", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::accumulatedconsumedthroughput, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.AccumulatedConsumedThroughput_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::accumulatedconsumedthroughput_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.IsActive", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::batteryconditioning::isactive, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.IsActive_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::batteryconditioning::isactive_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.IsOngoing", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::batteryconditioning::isongoing, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.IsOngoing_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::batteryconditioning::isongoing_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.RequestedMode", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::number3::batteryconditioning::requestedmode, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.RequestedMode_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::batteryconditioning::requestedmode_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.RequestedMode_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::batteryconditioning::requestedmode_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.StartTime", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::number3::batteryconditioning::starttime, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.StartTime_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::batteryconditioning::starttime_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.StartTime_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::batteryconditioning::starttime_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.TargetTemperature", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::number3::batteryconditioning::targettemperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.TargetTemperature_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::batteryconditioning::targettemperature_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.TargetTemperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::batteryconditioning::targettemperature_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.TargetTime", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::number3::batteryconditioning::targettime, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.TargetTime_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::batteryconditioning::targettime_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.TargetTime_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::batteryconditioning::targettime_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.TractionBattery.Number3.CellVoltage.IdMax", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cellvoltage::idmax, uint16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.CellVoltage.IdMax_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cellvoltage::idmax_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.TractionBattery.Number3.CellVoltage.IdMin", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cellvoltage::idmin, uint16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.CellVoltage.IdMin_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cellvoltage::idmin_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.CellVoltage.Max", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cellvoltage::max, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.CellVoltage.Max_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cellvoltage::max_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.CellVoltage.Min", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cellvoltage::min, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.CellVoltage.Min_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cellvoltage::min_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number1.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number1::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number1.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number1::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number1.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number1::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number1.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number1::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number10.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number10::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number10.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number10::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number10.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number10::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number10.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number10::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number2.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number2::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number2.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number2::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number2.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number2::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number2.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number2::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number3.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number3::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number3.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number3::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number3.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number3::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number3.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number3::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number4.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number4::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number4.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number4::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number4.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number4::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number4.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number4::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number5.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number5::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number5.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number5::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number5.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number5::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number5.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number5::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number6.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number6::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number6.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number6::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number6.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number6::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number6.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number6::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number7.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number7::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number7.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number7::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number7.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number7::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number7.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number7::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number8.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number8::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number8.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number8::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number8.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number8::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number8.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number8::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number9.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number9::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number9.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number9::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number9.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number9::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.Cells.Number9.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::cells::number9::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.CurrentCurrent", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::currentcurrent, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.CurrentCurrent_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::currentcurrent_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.CurrentPower", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::currentpower, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.CurrentPower_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::currentpower_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.CurrentVoltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::currentvoltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.CurrentVoltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::currentvoltage_availability_sensor, bool);});
	Registry<std::vector<std::string>>::Register("Vehicle.Powertrain.TractionBattery.Number3.ErrorCodes", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::errorcodes, std::vector<std::string>);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.ErrorCodes_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::errorcodes_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.TractionBattery.Number3.GrossCapacity", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::tractionbattery::number3::grosscapacity, uint16_t);});
	Registry<std::string>::Register("Vehicle.Powertrain.TractionBattery.Number3.Id", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::tractionbattery::number3::id, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.IsGroundConnected", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::isgroundconnected, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.IsGroundConnected_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::isgroundconnected_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.IsPowerConnected", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::ispowerconnected, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.IsPowerConnected_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::ispowerconnected_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.TractionBattery.Number3.NetCapacity", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::netcapacity, uint16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.NetCapacity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::netcapacity_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.PowerLoss", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::powerloss, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.PowerLoss_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::powerloss_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.TractionBattery.Number3.ProductionDate", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::tractionbattery::number3::productiondate, std::string);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.StateOfCharge.Current", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::stateofcharge::current, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.StateOfCharge.Current_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::stateofcharge::current_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.StateOfCharge.Displayed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::stateofcharge::displayed, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.StateOfCharge.Displayed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::stateofcharge::displayed_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.StateOfHealth", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::stateofhealth, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.StateOfHealth_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::stateofhealth_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.Temperature.Average", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::temperature::average, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.Temperature.Average_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::temperature::average_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.Temperature.Max", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::temperature::max, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.Temperature.Max_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::temperature::max_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number3.Temperature.Min", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::temperature::min, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number3.Temperature.Min_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number3::temperature::min_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.AccumulatedChargedEnergy", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::accumulatedchargedenergy, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.AccumulatedChargedEnergy_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::accumulatedchargedenergy_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.AccumulatedChargedThroughput", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::accumulatedchargedthroughput, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.AccumulatedChargedThroughput_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::accumulatedchargedthroughput_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.AccumulatedConsumedEnergy", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::accumulatedconsumedenergy, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.AccumulatedConsumedEnergy_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::accumulatedconsumedenergy_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.AccumulatedConsumedThroughput", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::accumulatedconsumedthroughput, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.AccumulatedConsumedThroughput_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::accumulatedconsumedthroughput_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.IsActive", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::batteryconditioning::isactive, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.IsActive_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::batteryconditioning::isactive_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.IsOngoing", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::batteryconditioning::isongoing, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.IsOngoing_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::batteryconditioning::isongoing_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.RequestedMode", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::number4::batteryconditioning::requestedmode, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.RequestedMode_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::batteryconditioning::requestedmode_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.RequestedMode_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::batteryconditioning::requestedmode_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.StartTime", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::number4::batteryconditioning::starttime, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.StartTime_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::batteryconditioning::starttime_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.StartTime_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::batteryconditioning::starttime_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.TargetTemperature", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::number4::batteryconditioning::targettemperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.TargetTemperature_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::batteryconditioning::targettemperature_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.TargetTemperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::batteryconditioning::targettemperature_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.TargetTime", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::tractionbattery::number4::batteryconditioning::targettime, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.TargetTime_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::batteryconditioning::targettime_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.TargetTime_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::batteryconditioning::targettime_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.TractionBattery.Number4.CellVoltage.IdMax", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cellvoltage::idmax, uint16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.CellVoltage.IdMax_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cellvoltage::idmax_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.TractionBattery.Number4.CellVoltage.IdMin", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cellvoltage::idmin, uint16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.CellVoltage.IdMin_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cellvoltage::idmin_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.CellVoltage.Max", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cellvoltage::max, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.CellVoltage.Max_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cellvoltage::max_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.CellVoltage.Min", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cellvoltage::min, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.CellVoltage.Min_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cellvoltage::min_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number1.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number1::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number1.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number1::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number1.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number1::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number1.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number1::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number10.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number10::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number10.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number10::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number10.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number10::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number10.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number10::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number2.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number2::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number2.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number2::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number2.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number2::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number2.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number2::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number3.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number3::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number3.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number3::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number3.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number3::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number3.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number3::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number4.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number4::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number4.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number4::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number4.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number4::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number4.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number4::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number5.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number5::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number5.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number5::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number5.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number5::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number5.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number5::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number6.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number6::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number6.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number6::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number6.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number6::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number6.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number6::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number7.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number7::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number7.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number7::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number7.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number7::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number7.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number7::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number8.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number8::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number8.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number8::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number8.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number8::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number8.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number8::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number9.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number9::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number9.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number9::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number9.Voltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number9::voltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.Cells.Number9.Voltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::cells::number9::voltage_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.CurrentCurrent", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::currentcurrent, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.CurrentCurrent_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::currentcurrent_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.CurrentPower", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::currentpower, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.CurrentPower_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::currentpower_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.CurrentVoltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::currentvoltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.CurrentVoltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::currentvoltage_availability_sensor, bool);});
	Registry<std::vector<std::string>>::Register("Vehicle.Powertrain.TractionBattery.Number4.ErrorCodes", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::errorcodes, std::vector<std::string>);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.ErrorCodes_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::errorcodes_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.TractionBattery.Number4.GrossCapacity", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::tractionbattery::number4::grosscapacity, uint16_t);});
	Registry<std::string>::Register("Vehicle.Powertrain.TractionBattery.Number4.Id", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::tractionbattery::number4::id, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.IsGroundConnected", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::isgroundconnected, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.IsGroundConnected_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::isgroundconnected_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.IsPowerConnected", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::ispowerconnected, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.IsPowerConnected_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::ispowerconnected_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.TractionBattery.Number4.NetCapacity", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::netcapacity, uint16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.NetCapacity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::netcapacity_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.PowerLoss", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::powerloss, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.PowerLoss_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::powerloss_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.TractionBattery.Number4.ProductionDate", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::tractionbattery::number4::productiondate, std::string);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.StateOfCharge.Current", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::stateofcharge::current, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.StateOfCharge.Current_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::stateofcharge::current_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.StateOfCharge.Displayed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::stateofcharge::displayed, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.StateOfCharge.Displayed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::stateofcharge::displayed_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.StateOfHealth", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::stateofhealth, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.StateOfHealth_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::stateofhealth_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.Temperature.Average", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::temperature::average, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.Temperature.Average_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::temperature::average_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.Temperature.Max", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::temperature::max, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.Temperature.Max_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::temperature::max_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.Number4.Temperature.Min", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::temperature::min, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Number4.Temperature.Min_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::number4::temperature::min_availability_sensor, bool);});
	Registry<uint32_t>::Register("Vehicle.Powertrain.TractionBattery.Range", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::range, uint32_t);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.Range_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::range_availability_sensor, bool);});
	Registry<uint32_t>::Register("Vehicle.Powertrain.TractionBattery.TimeRemaining", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::timeremaining, uint32_t);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.TimeRemaining_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::timeremaining_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.TotalCurrentCurrent", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::totalcurrentcurrent, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.TotalCurrentCurrent_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::totalcurrentcurrent_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.TotalCurrentPower", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::totalcurrentpower, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.TotalCurrentPower_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::totalcurrentpower_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.TotalCurrentVoltage", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::totalcurrentvoltage, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.TotalCurrentVoltage_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::totalcurrentvoltage_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.TractionBattery.TotalGrossCapacity", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::tractionbattery::totalgrosscapacity, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.Powertrain.TractionBattery.TotalNetCapacity", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::totalnetcapacity, uint16_t);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.TotalNetCapacity_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::totalnetcapacity_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.TotalStateOfCharge.Current", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::totalstateofcharge::current, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.TotalStateOfCharge.Current_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::totalstateofcharge::current_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.TractionBattery.TotalStateOfCharge.Displayed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::totalstateofcharge::displayed, float);});
	Registry<bool>::Register("Vehicle.Powertrain.TractionBattery.TotalStateOfCharge.Displayed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::tractionbattery::totalstateofcharge::displayed_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.Transmission.ClutchEngagement", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::transmission::clutchengagement, float);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.ClutchEngagement_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::clutchengagement_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.ClutchEngagement_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::clutchengagement_availability_sensor, bool);});
	Registry<uint8_t>::Register("Vehicle.Powertrain.Transmission.ClutchWear", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::clutchwear, uint8_t);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.ClutchWear_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::clutchwear_availability_sensor, bool);});
	Registry<int8_t>::Register("Vehicle.Powertrain.Transmission.CurrentGear", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::currentgear, int8_t);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.CurrentGear_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::currentgear_availability_sensor, bool);});
	Registry<int8_t>::Register("Vehicle.Powertrain.Transmission.CurrentPhysicalGear", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::currentphysicalgear, int8_t);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.CurrentPhysicalGear_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::currentphysicalgear_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.Transmission.DiffLockCenterEngagement", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::transmission::difflockcenterengagement, float);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.DiffLockCenterEngagement_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::difflockcenterengagement_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.DiffLockCenterEngagement_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::difflockcenterengagement_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.Transmission.DiffLockFrontEngagement", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::transmission::difflockfrontengagement, float);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.DiffLockFrontEngagement_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::difflockfrontengagement_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.DiffLockFrontEngagement_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::difflockfrontengagement_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.Transmission.DiffLockRearEngagement", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::transmission::difflockrearengagement, float);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.DiffLockRearEngagement_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::difflockrearengagement_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.DiffLockRearEngagement_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::difflockrearengagement_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.Transmission.DriveType", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::transmission::drivetype, std::string);});
	Registry<std::string>::Register("Vehicle.Powertrain.Transmission.GearChangeMode", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::transmission::gearchangemode, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.GearChangeMode_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::gearchangemode_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.GearChangeMode_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::gearchangemode_availability_sensor, bool);});
	Registry<int8_t>::Register("Vehicle.Powertrain.Transmission.GearCount", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::transmission::gearcount, int8_t);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.IsElectricalPowertrainEngaged", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::transmission::iselectricalpowertrainengaged, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.IsElectricalPowertrainEngaged_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::iselectricalpowertrainengaged_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.IsElectricalPowertrainEngaged_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::iselectricalpowertrainengaged_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.IsLowRangeEngaged", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::transmission::islowrangeengaged, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.IsLowRangeEngaged_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::islowrangeengaged_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.IsLowRangeEngaged_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::islowrangeengaged_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.IsParkLockEngaged", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::transmission::isparklockengaged, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.IsParkLockEngaged_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::isparklockengaged_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.IsParkLockEngaged_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::isparklockengaged_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.Transmission.PerformanceMode", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::transmission::performancemode, std::string);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.PerformanceMode_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::performancemode_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.PerformanceMode_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::performancemode_availability_sensor, bool);});
	Registry<int8_t>::Register("Vehicle.Powertrain.Transmission.SelectedGear", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::transmission::selectedgear, int8_t);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.SelectedGear_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::selectedgear_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.SelectedGear_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::selectedgear_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.Transmission.Temperature", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::temperature, float);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.Temperature_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::temperature_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.Transmission.TorqueDistribution", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::powertrain::transmission::torquedistribution, float);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.TorqueDistribution_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::torquedistribution_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.TorqueDistribution_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::torquedistribution_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.Powertrain.Transmission.TravelledDistance", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::travelleddistance, float);});
	Registry<bool>::Register("Vehicle.Powertrain.Transmission.TravelledDistance_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::powertrain::transmission::travelleddistance_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.Powertrain.Transmission.Type", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::transmission::type, std::string);});
	Registry<std::string>::Register("Vehicle.Powertrain.Type", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::powertrain::type, std::string);});
	Registry<int16_t>::Register("Vehicle.RoofLoad", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::roofload, int16_t);});
	Registry<float>::Register("Vehicle.Speed", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::speed, float);});
	Registry<bool>::Register("Vehicle.Speed_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::speed_availability_sensor, bool);});
	Registry<std::string>::Register("Vehicle.StartTime", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::starttime, std::string);});
	Registry<bool>::Register("Vehicle.Trailer.IsConnected", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::trailer::isconnected, bool);});
	Registry<bool>::Register("Vehicle.Trailer.IsConnected_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::trailer::isconnected_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.TraveledDistance", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::traveleddistance, float);});
	Registry<float>::Register("Vehicle.TraveledDistanceSinceStart", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::traveleddistancesincestart, float);});
	Registry<bool>::Register("Vehicle.TraveledDistanceSinceStart_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::traveleddistancesincestart_availability_sensor, bool);});
	Registry<bool>::Register("Vehicle.TraveledDistance_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::traveleddistance_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.TripDuration", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::tripduration, float);});
	Registry<bool>::Register("Vehicle.TripDuration_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::tripduration_availability_sensor, bool);});
	Registry<float>::Register("Vehicle.TripMeterReading", [] { RETURN_HANDLE_ACTUATOR(yoriito::vehicle::tripmeterreading, float);});
	Registry<bool>::Register("Vehicle.TripMeterReading_Availability_Actuator", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::tripmeterreading_availability_actuator, bool);});
	Registry<bool>::Register("Vehicle.TripMeterReading_Availability_Sensor", [] { RETURN_HANDLE_SENSOR(yoriito::vehicle::tripmeterreading_availability_sensor, bool);});
	Registry<uint16_t>::Register("Vehicle.TurningDiameter", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::turningdiameter, uint16_t);});
	Registry<std::string>::Register("Vehicle.VehicleIdentification.AcrissCode", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::vehicleidentification::acrisscode, std::string);});
	Registry<std::string>::Register("Vehicle.VehicleIdentification.BodyType", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::vehicleidentification::bodytype, std::string);});
	Registry<std::string>::Register("Vehicle.VehicleIdentification.Brand", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::vehicleidentification::brand, std::string);});
	Registry<std::string>::Register("Vehicle.VehicleIdentification.DateVehicleFirstRegistered", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::vehicleidentification::datevehiclefirstregistered, std::string);});
	Registry<std::string>::Register("Vehicle.VehicleIdentification.KnownVehicleDamages", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::vehicleidentification::knownvehicledamages, std::string);});
	Registry<std::string>::Register("Vehicle.VehicleIdentification.LicensePlate", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::vehicleidentification::licenseplate, std::string);});
	Registry<std::string>::Register("Vehicle.VehicleIdentification.MeetsEmissionStandard", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::vehicleidentification::meetsemissionstandard, std::string);});
	Registry<std::string>::Register("Vehicle.VehicleIdentification.Model", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::vehicleidentification::model, std::string);});
	Registry<std::vector<std::string>>::Register("Vehicle.VehicleIdentification.OptionalExtras", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::vehicleidentification::optionalextras, std::vector<std::string>);});
	Registry<std::string>::Register("Vehicle.VehicleIdentification.ProductionDate", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::vehicleidentification::productiondate, std::string);});
	Registry<std::string>::Register("Vehicle.VehicleIdentification.PurchaseDate", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::vehicleidentification::purchasedate, std::string);});
	Registry<std::string>::Register("Vehicle.VehicleIdentification.VIN", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::vehicleidentification::vin, std::string);});
	Registry<std::string>::Register("Vehicle.VehicleIdentification.VehicleConfiguration", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::vehicleidentification::vehicleconfiguration, std::string);});
	Registry<std::string>::Register("Vehicle.VehicleIdentification.VehicleExteriorColor", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::vehicleidentification::vehicleexteriorcolor, std::string);});
	Registry<std::string>::Register("Vehicle.VehicleIdentification.VehicleInteriorColor", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::vehicleidentification::vehicleinteriorcolor, std::string);});
	Registry<std::string>::Register("Vehicle.VehicleIdentification.VehicleInteriorType", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::vehicleidentification::vehicleinteriortype, std::string);});
	Registry<std::string>::Register("Vehicle.VehicleIdentification.VehicleModelDate", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::vehicleidentification::vehiclemodeldate, std::string);});
	Registry<uint16_t>::Register("Vehicle.VehicleIdentification.VehicleSeatingCapacity", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::vehicleidentification::vehicleseatingcapacity, uint16_t);});
	Registry<std::string>::Register("Vehicle.VehicleIdentification.VehicleSpecialUsage", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::vehicleidentification::vehiclespecialusage, std::string);});
	Registry<std::string>::Register("Vehicle.VehicleIdentification.WMI", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::vehicleidentification::wmi, std::string);});
	Registry<uint16_t>::Register("Vehicle.VehicleIdentification.Year", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::vehicleidentification::year, uint16_t);});
	Registry<std::string>::Register("Vehicle.VersionYoriitoVSS.Label", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::versionyoriitovss::label, std::string);});
	Registry<uint32_t>::Register("Vehicle.VersionYoriitoVSS.Major", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::versionyoriitovss::major, uint32_t);});
	Registry<uint32_t>::Register("Vehicle.VersionYoriitoVSS.Minor", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::versionyoriitovss::minor, uint32_t);});
	Registry<uint32_t>::Register("Vehicle.VersionYoriitoVSS.Patch", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::versionyoriitovss::patch, uint32_t);});
	Registry<std::string>::Register("Vehicle.VersionVSS.Label", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::versionvss::label, std::string);});
	Registry<uint32_t>::Register("Vehicle.VersionVSS.Major", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::versionvss::major, uint32_t);});
	Registry<uint32_t>::Register("Vehicle.VersionVSS.Minor", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::versionvss::minor, uint32_t);});
	Registry<uint32_t>::Register("Vehicle.VersionVSS.Patch", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::versionvss::patch, uint32_t);});
	Registry<uint16_t>::Register("Vehicle.WidthExcludingMirrors", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::widthexcludingmirrors, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.WidthFoldedMirrors", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::widthfoldedmirrors, uint16_t);});
	Registry<uint16_t>::Register("Vehicle.WidthIncludingMirrors", [] { RETURN_HANDLE_ATTRIBUTE(yoriito::vehicle::widthincludingmirrors, uint16_t);});

    return true;
}();
