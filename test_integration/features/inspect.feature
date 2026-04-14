# SPDX-License-Identifier: Apache-2.0
#
# Copyright 2026 JASPAR
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# language: en

Feature: Signal API Inspect

    Scenario Outline: HeadlessApp_Inspect_Signal
        Given PAL set a signal <path> to <datatype> <value>
        Then HeadlessApp can inspect the signal <path> of <datatype>

    Examples:
    | path                                                     | datatype  | value     |
    | Vehicle.ADAS.ABS.IsEnabled | bool | false |
    | Vehicle.ADAS.ActiveAutonomyLevel | string | SAE_1 |
    | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | -340282350000000000000000000000000000000 |
    | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 0 |
    | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | -100 |
    | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 0 |
    | Vehicle.Cabin.SeatPosCount | uint8[] | [255,127,0] |
    | Vehicle.Chassis.SteeringWheel.Angle | int16 | -32768 |
    | Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Altitude | double | -179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
    | Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Range | uint32 | 0 |
    | Vehicle.Powertrain.CombustionEngine.EngineCoolant.LifeRemaining | int32 | -2147483648 |
    | Vehicle.Powertrain.FuelSystem.RefuelPortPosition | string[] | ["FRONT_LEFT","FRONT_MIDDLE","FRONT_RIGHT","REAR_LEFT","REAR_MIDDLE","REAR_RIGHT","LEFT_FRONT","LEFT_MIDDLE","LEFT_REAR","RIGHT_FRONT","RIGHT_MIDDLE","RIGHT_REAR"] |
