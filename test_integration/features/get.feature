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

Feature: Signal API Get

    Scenario Outline: HeadlessApp_Get_Sensor_Value
        Given PAL set sensor signal <path> to <datatype> <value>
        When HeadlessApp get the sensor signal <path> of <datatype>
        Then the result should be <datatype> <value> on <path>

    Examples:
        | path                                         | datatype  | value            |
        | Vehicle.ADAS.ABS.IsEnabled | bool | true |
        | Vehicle.ADAS.ABS.IsEnabled | bool | false |
        | Vehicle.ADAS.ActiveAutonomyLevel | string | SAE_0 |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | 0.99999999999 |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | 99.9999999999 |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 80 |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 100 |
        | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | -100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 80 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 100 |
        | Vehicle.Cabin.SeatPosCount | uint8[] | [0,80,100] |
        | Vehicle.Chassis.SteeringWheel.Angle | int16 | -100 |
        | Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Altitude | double | 0.99999999999 |
        | Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Altitude | double | 99.9999999999 |
        | Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Range | uint32 | 80 |
        | Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Range | uint32 | 100 |
        | Vehicle.Powertrain.CombustionEngine.EngineCoolant.LifeRemaining | int32 | -100 |
        | Vehicle.Powertrain.FuelSystem.RefuelPortPosition | string[] | ["FRONT_LEFT","FRONT_MIDDLE","FRONT_RIGHT","REAR_LEFT","REAR_MIDDLE","REAR_RIGHT","LEFT_FRONT","LEFT_MIDDLE","LEFT_REAR","RIGHT_FRONT","RIGHT_MIDDLE","RIGHT_REAR"] |
