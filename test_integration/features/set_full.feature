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

Feature: Signal API set

    @coldstart @serial
    Scenario Outline: Cold start once and seed initial actuator values
        Given Kura service is cleanly restarted
        When HeadlessApp sets the following actuator signals
        | path                                                     | datatype | value         |
        | Vehicle.ADAS.ABS.IsEnabled | bool | true |
        | Vehicle.ADAS.AdaptiveCruiseControl.DistanceSet | string | DIST_2 |
        | Vehicle.ADAS.AdaptiveCruiseControl.IsActive | bool | true |
        | Vehicle.ADAS.AdaptiveCruiseControl.IsEnabled | bool | true |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | 100 |
        | Vehicle.ADAS.DMS.IsEnabled | bool | true |
        | Vehicle.ADAS.EBA.IsEnabled | bool | true |
        | Vehicle.ADAS.EBD.IsEnabled | bool | true |
        | Vehicle.ADAS.ESC.IsEnabled | bool | true |
        | Vehicle.ADAS.IsAutoPowerOptimize | bool | true |
        | Vehicle.ADAS.LaneDepartureDetection.IsEnabled | bool | true |
        | Vehicle.ADAS.ObstacleDetection.IsEnabled | bool | true |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 10 |
        | Vehicle.ADAS.TCS.IsEnabled | bool | true |
        | Vehicle.Body.Hood.IsLocked | bool | true |
        | Vehicle.Body.Hood.IsOpen | bool | true |
        | Vehicle.Body.Hood.Position | uint8 | 100 |
        | Vehicle.Body.Horn.IsActive | bool | true |
        | Vehicle.Body.IsAutoPowerOptimize | bool | true |
        | Vehicle.Body.Lights.Backup.IsOn | bool | true |
        | Vehicle.Body.Lights.Beam.High.IsOn | bool | true |
        | Vehicle.Body.Lights.Beam.Low.IsOn | bool | true |
        | Vehicle.Body.Lights.Brake.IsActive | string | ACTIVE |
        | Vehicle.Body.Lights.DirectionIndicator.Left.IsSignaling | bool | true |
        | Vehicle.Body.Lights.DirectionIndicator.Right.IsSignaling | bool | true |
        | Vehicle.Body.Lights.Fog.Front.IsOn | bool | true |
        | Vehicle.Body.Lights.Fog.Rear.IsOn | bool | true |
        | Vehicle.Body.Lights.Hazard.IsSignaling | bool | true |
        | Vehicle.Body.Lights.LicensePlate.IsOn | bool | true |
        | Vehicle.Body.Lights.Parking.IsOn | bool | true |
        | Vehicle.Body.Lights.Running.IsOn | bool | true |
        | Vehicle.Body.Mirrors.DriverSide.IsFolded | bool | true |
        | Vehicle.Body.Mirrors.DriverSide.IsHeatingOn | bool | true |
        | Vehicle.Body.Mirrors.DriverSide.IsLocked | bool | true |
        | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | -100 |
        | Vehicle.Body.Mirrors.DriverSide.Tilt | int8 | -100 |
        | Vehicle.Body.Mirrors.PassengerSide.IsFolded | bool | true |
        | Vehicle.Body.Mirrors.PassengerSide.IsHeatingOn | bool | true |
        | Vehicle.Body.Mirrors.PassengerSide.IsLocked | bool | true |
        | Vehicle.Body.Mirrors.PassengerSide.Pan | int8 | -100 |
        | Vehicle.Body.Mirrors.PassengerSide.Tilt | int8 | -100 |
        | Vehicle.Body.PowerOptimizeLevel | uint8 | 10 |
        | Vehicle.Body.RearMainSpoilerPosition | float | 100 |
        | Vehicle.Body.Trunk.Front.IsLightOn | bool | true |
        | Vehicle.Body.Trunk.Front.IsLocked | bool | true |
        | Vehicle.Body.Trunk.Front.IsOpen | bool | true |
        | Vehicle.Body.Trunk.Front.Position | uint8 | 100 |
        | Vehicle.Body.Trunk.Rear.IsLightOn | bool | true |
        | Vehicle.Body.Trunk.Rear.IsLocked | bool | true |
        | Vehicle.Body.Trunk.Rear.IsOpen | bool | true |
        | Vehicle.Body.Trunk.Rear.Position | uint8 | 100 |
        | Vehicle.Body.Windshield.Front.IsHeatingOn | bool | true |
        | Vehicle.Body.Windshield.Front.Wiping.Intensity | uint8 | 100 |
        | Vehicle.Body.Windshield.Front.Wiping.Mode | string | SLOW |
        | Vehicle.Body.Windshield.Front.Wiping.System.Frequency | uint8 | 100 |
        | Vehicle.Body.Windshield.Front.Wiping.System.Mode | string | WIPE |
        | Vehicle.Body.Windshield.Front.Wiping.System.Position | uint8 | 100 |
        | Vehicle.Body.Windshield.Rear.IsHeatingOn | bool | true |
        | Vehicle.Body.Windshield.Rear.Wiping.Intensity | uint8 | 100 |
        | Vehicle.Body.Windshield.Rear.Wiping.Mode | string | SLOW |
        | Vehicle.Body.Windshield.Rear.Wiping.System.Frequency | uint8 | 100 |
        | Vehicle.Body.Windshield.Rear.Wiping.System.Mode | string | WIPE |
        | Vehicle.Body.Windshield.Rear.Wiping.System.Position | uint8 | 100 |
        | Vehicle.Cabin.Convertible.IsOpen | bool | true |
        | Vehicle.Cabin.Convertible.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row1.DriverSide.IsLocked | bool | true |
        | Vehicle.Cabin.Door.Row1.DriverSide.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row1.DriverSide.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row1.DriverSide.Shade.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row1.DriverSide.Shade.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row1.DriverSide.Window.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row1.DriverSide.Window.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row1.PassengerSide.IsLocked | bool | true |
        | Vehicle.Cabin.Door.Row1.PassengerSide.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Shade.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Shade.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Window.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Window.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row2.DriverSide.IsLocked | bool | true |
        | Vehicle.Cabin.Door.Row2.DriverSide.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row2.DriverSide.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row2.DriverSide.Shade.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row2.DriverSide.Shade.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row2.DriverSide.Window.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row2.DriverSide.Window.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row2.PassengerSide.IsLocked | bool | true |
        | Vehicle.Cabin.Door.Row2.PassengerSide.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Shade.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Shade.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Window.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Window.Position | uint8 | 100 |
        | Vehicle.Cabin.HVAC.IsAirConditioningActive | bool | true |
        | Vehicle.Cabin.HVAC.IsAutoPowerOptimize | bool | true |
        | Vehicle.Cabin.HVAC.IsFrontDefrosterActive | bool | true |
        | Vehicle.Cabin.HVAC.IsRearDefrosterActive | bool | true |
        | Vehicle.Cabin.HVAC.IsRecirculationActive | bool | true |
        | Vehicle.Cabin.HVAC.PowerOptimizeLevel | uint8 | 10 |
        | Vehicle.Cabin.HVAC.Station.Row1.Driver.AirDistribution | string | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row1.Driver.FanSpeed | uint8 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row1.Driver.Temperature | float | 100 |
        | Vehicle.Cabin.HVAC.Station.Row1.Passenger.AirDistribution | string | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row1.Passenger.FanSpeed | uint8 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row1.Passenger.Temperature | float | 100 |
        | Vehicle.Cabin.HVAC.Station.Row2.Driver.AirDistribution | string | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row2.Driver.FanSpeed | uint8 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row2.Driver.Temperature | float | 100 |
        | Vehicle.Cabin.HVAC.Station.Row2.Passenger.AirDistribution | string | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row2.Passenger.FanSpeed | uint8 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row2.Passenger.Temperature | float | 100 |
        | Vehicle.Cabin.HVAC.Station.Row3.Driver.AirDistribution | string | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row3.Driver.FanSpeed | uint8 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row3.Driver.Temperature | float | 100 |
        | Vehicle.Cabin.HVAC.Station.Row3.Passenger.AirDistribution | string | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row3.Passenger.FanSpeed | uint8 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row3.Passenger.Temperature | float | 100 |
        | Vehicle.Cabin.HVAC.Station.Row4.Driver.AirDistribution | string | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row4.Driver.FanSpeed | uint8 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row4.Driver.Temperature | float | 100 |
        | Vehicle.Cabin.HVAC.Station.Row4.Passenger.AirDistribution | string | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row4.Passenger.FanSpeed | uint8 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row4.Passenger.Temperature | float | 100 |
        | Vehicle.Cabin.IsAutoPowerOptimize | bool | true |
        | Vehicle.Cabin.IsWindowChildLockEngaged | bool | true |
        | Vehicle.Cabin.Light.DomeLight.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.DomeLight.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.DomeLight.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.IsGloveBoxOn | bool | true |
        | Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.IsLightOn | bool | true |
        | Vehicle.Cabin.PowerOptimizeLevel | uint8 | 10 |
        | Vehicle.Cabin.RearShade.IsOpen | bool | true |
        | Vehicle.Cabin.RearShade.Position | uint8 | 100 |
        | Vehicle.Cabin.RearviewMirror.DimmingLevel | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Lumbar.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Lumbar.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Recline | float | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.SideBolster.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Headrest.Angle | float | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Headrest.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Heater | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Massage | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Position | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.SeatBeltHeight | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Seating.Length | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Tilt | float | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Ventilator | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.Lumbar.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.Lumbar.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.Recline | float | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.SideBolster.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Headrest.Angle | float | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Headrest.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Heater | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Height | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Massage | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Position | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.SeatBeltHeight | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Seating.Length | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Tilt | float | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Ventilator | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Lumbar.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Lumbar.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Recline | float | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.SideBolster.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Headrest.Angle | float | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Headrest.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Heater | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Height | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Massage | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Position | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.SeatBeltHeight | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Seating.Length | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Tilt | float | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Ventilator | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Lumbar.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Lumbar.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Recline | float | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.SideBolster.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Headrest.Angle | float | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Headrest.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Heater | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Height | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Massage | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Position | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.SeatBeltHeight | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Seating.Length | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Tilt | float | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Ventilator | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.Lumbar.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.Lumbar.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.Recline | float | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.SideBolster.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Headrest.Angle | float | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Headrest.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Heater | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Height | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Massage | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Position | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.SeatBeltHeight | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Seating.Length | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Tilt | float | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Ventilator | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Lumbar.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Lumbar.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Recline | float | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.SideBolster.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Headrest.Angle | float | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Headrest.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Heater | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Height | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Massage | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Position | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.SeatBeltHeight | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Seating.Length | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Tilt | float | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Ventilator | uint8 | 100 |
        | Vehicle.Cabin.Sunroof.Shade.IsOpen | bool | true |
        | Vehicle.Cabin.Sunroof.Shade.Position | uint8 | 100 |
        | Vehicle.Cabin.Sunroof.Slide | uint8 | 100 |
        | Vehicle.Cabin.Sunroof.Tilt | uint8 | 100 |
        | Vehicle.Chassis.ParkingBrake.IsAutoApplyEnabled | bool | true |
        | Vehicle.Chassis.ParkingBrake.IsEngaged | bool | true |
        | Vehicle.Chassis.SteeringWheel.Extension | uint8 | 100 |
        | Vehicle.Chassis.SteeringWheel.Heating | uint8 | 100 |
        | Vehicle.Chassis.SteeringWheel.Tilt | uint8 | 100 |
        | Vehicle.IsAutoPowerOptimize | bool | true |
        | Vehicle.PowerOptimizeLevel | uint8 | 10 |
        | Vehicle.Powertrain.FuelSystem.IsFuelPortFlapOpen | bool | true |
        | Vehicle.Powertrain.IsAutoPowerOptimize | bool | true |
        | Vehicle.Powertrain.PowerOptimizeLevel | uint8 | 10 |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargeLimit | uint8 | 100 |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.AnyPosition.IsChargingCableLocked | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.AnyPosition.IsFlapOpen | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontLeft.IsChargingCableLocked | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontLeft.IsFlapOpen | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontMiddle.IsChargingCableLocked | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontMiddle.IsFlapOpen | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontRight.IsChargingCableLocked | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontRight.IsFlapOpen | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearLeft.IsChargingCableLocked | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearLeft.IsFlapOpen | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearMiddle.IsChargingCableLocked | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearMiddle.IsFlapOpen | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearRight.IsChargingCableLocked | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearRight.IsFlapOpen | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.StartStopCharging | string | STOP |
        | Vehicle.Powertrain.TractionBattery.Charging.Timer.Mode | string | START_TIME |
        | Vehicle.Powertrain.TractionBattery.Charging.Timer.Time | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.RequestedMode | string | FAST_CHARGING_PREPARATION |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.StartTime | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.TargetTemperature | float | 100 |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.TargetTime | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.RequestedMode | string | FAST_CHARGING_PREPARATION |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.StartTime | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.TargetTemperature | float | 100 |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.TargetTime | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.RequestedMode | string | FAST_CHARGING_PREPARATION |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.StartTime | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.TargetTemperature | float | 100 |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.TargetTime | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.RequestedMode | string | FAST_CHARGING_PREPARATION |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.StartTime | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.TargetTemperature | float | 100 |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.TargetTime | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.Transmission.ClutchEngagement | float | 100 |
        | Vehicle.Powertrain.Transmission.DiffLockCenterEngagement | float | 100 |
        | Vehicle.Powertrain.Transmission.DiffLockFrontEngagement | float | 100 |
        | Vehicle.Powertrain.Transmission.DiffLockRearEngagement | float | 100 |
        | Vehicle.Powertrain.Transmission.GearChangeMode | string | AUTOMATIC |
        | Vehicle.Powertrain.Transmission.IsElectricalPowertrainEngaged | bool | true |
        | Vehicle.Powertrain.Transmission.IsLowRangeEngaged | bool | true |
        | Vehicle.Powertrain.Transmission.IsParkLockEngaged | bool | true |
        | Vehicle.Powertrain.Transmission.PerformanceMode | string | SPORT |
        | Vehicle.Powertrain.Transmission.SelectedGear | int8 | -100 |
        | Vehicle.Powertrain.Transmission.TorqueDistribution | float | 100 |
        | Vehicle.TripMeterReading | float | 100 |
        Then PAL should report the following actuator signals
        | path                                                     | datatype | value         |
        | Vehicle.ADAS.ABS.IsEnabled | bool | true |
        | Vehicle.ADAS.AdaptiveCruiseControl.DistanceSet | string | DIST_2 |
        | Vehicle.ADAS.AdaptiveCruiseControl.IsActive | bool | true |
        | Vehicle.ADAS.AdaptiveCruiseControl.IsEnabled | bool | true |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | 100 |
        | Vehicle.ADAS.DMS.IsEnabled | bool | true |
        | Vehicle.ADAS.EBA.IsEnabled | bool | true |
        | Vehicle.ADAS.EBD.IsEnabled | bool | true |
        | Vehicle.ADAS.ESC.IsEnabled | bool | true |
        | Vehicle.ADAS.IsAutoPowerOptimize | bool | true |
        | Vehicle.ADAS.LaneDepartureDetection.IsEnabled | bool | true |
        | Vehicle.ADAS.ObstacleDetection.IsEnabled | bool | true |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 10 |
        | Vehicle.ADAS.TCS.IsEnabled | bool | true |
        | Vehicle.Body.Hood.IsLocked | bool | true |
        | Vehicle.Body.Hood.IsOpen | bool | true |
        | Vehicle.Body.Hood.Position | uint8 | 100 |
        | Vehicle.Body.Horn.IsActive | bool | true |
        | Vehicle.Body.IsAutoPowerOptimize | bool | true |
        | Vehicle.Body.Lights.Backup.IsOn | bool | true |
        | Vehicle.Body.Lights.Beam.High.IsOn | bool | true |
        | Vehicle.Body.Lights.Beam.Low.IsOn | bool | true |
        | Vehicle.Body.Lights.Brake.IsActive | string | ACTIVE |
        | Vehicle.Body.Lights.DirectionIndicator.Left.IsSignaling | bool | true |
        | Vehicle.Body.Lights.DirectionIndicator.Right.IsSignaling | bool | true |
        | Vehicle.Body.Lights.Fog.Front.IsOn | bool | true |
        | Vehicle.Body.Lights.Fog.Rear.IsOn | bool | true |
        | Vehicle.Body.Lights.Hazard.IsSignaling | bool | true |
        | Vehicle.Body.Lights.LicensePlate.IsOn | bool | true |
        | Vehicle.Body.Lights.Parking.IsOn | bool | true |
        | Vehicle.Body.Lights.Running.IsOn | bool | true |
        | Vehicle.Body.Mirrors.DriverSide.IsFolded | bool | true |
        | Vehicle.Body.Mirrors.DriverSide.IsHeatingOn | bool | true |
        | Vehicle.Body.Mirrors.DriverSide.IsLocked | bool | true |
        | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | -100 |
        | Vehicle.Body.Mirrors.DriverSide.Tilt | int8 | -100 |
        | Vehicle.Body.Mirrors.PassengerSide.IsFolded | bool | true |
        | Vehicle.Body.Mirrors.PassengerSide.IsHeatingOn | bool | true |
        | Vehicle.Body.Mirrors.PassengerSide.IsLocked | bool | true |
        | Vehicle.Body.Mirrors.PassengerSide.Pan | int8 | -100 |
        | Vehicle.Body.Mirrors.PassengerSide.Tilt | int8 | -100 |
        | Vehicle.Body.PowerOptimizeLevel | uint8 | 10 |
        | Vehicle.Body.RearMainSpoilerPosition | float | 100 |
        | Vehicle.Body.Trunk.Front.IsLightOn | bool | true |
        | Vehicle.Body.Trunk.Front.IsLocked | bool | true |
        | Vehicle.Body.Trunk.Front.IsOpen | bool | true |
        | Vehicle.Body.Trunk.Front.Position | uint8 | 100 |
        | Vehicle.Body.Trunk.Rear.IsLightOn | bool | true |
        | Vehicle.Body.Trunk.Rear.IsLocked | bool | true |
        | Vehicle.Body.Trunk.Rear.IsOpen | bool | true |
        | Vehicle.Body.Trunk.Rear.Position | uint8 | 100 |
        | Vehicle.Body.Windshield.Front.IsHeatingOn | bool | true |
        | Vehicle.Body.Windshield.Front.Wiping.Intensity | uint8 | 100 |
        | Vehicle.Body.Windshield.Front.Wiping.Mode | string | SLOW |
        | Vehicle.Body.Windshield.Front.Wiping.System.Frequency | uint8 | 100 |
        | Vehicle.Body.Windshield.Front.Wiping.System.Mode | string | WIPE |
        | Vehicle.Body.Windshield.Front.Wiping.System.Position | uint8 | 100 |
        | Vehicle.Body.Windshield.Rear.IsHeatingOn | bool | true |
        | Vehicle.Body.Windshield.Rear.Wiping.Intensity | uint8 | 100 |
        | Vehicle.Body.Windshield.Rear.Wiping.Mode | string | SLOW |
        | Vehicle.Body.Windshield.Rear.Wiping.System.Frequency | uint8 | 100 |
        | Vehicle.Body.Windshield.Rear.Wiping.System.Mode | string | WIPE |
        | Vehicle.Body.Windshield.Rear.Wiping.System.Position | uint8 | 100 |
        | Vehicle.Cabin.Convertible.IsOpen | bool | true |
        | Vehicle.Cabin.Convertible.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row1.DriverSide.IsLocked | bool | true |
        | Vehicle.Cabin.Door.Row1.DriverSide.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row1.DriverSide.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row1.DriverSide.Shade.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row1.DriverSide.Shade.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row1.DriverSide.Window.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row1.DriverSide.Window.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row1.PassengerSide.IsLocked | bool | true |
        | Vehicle.Cabin.Door.Row1.PassengerSide.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Shade.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Shade.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Window.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Window.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row2.DriverSide.IsLocked | bool | true |
        | Vehicle.Cabin.Door.Row2.DriverSide.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row2.DriverSide.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row2.DriverSide.Shade.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row2.DriverSide.Shade.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row2.DriverSide.Window.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row2.DriverSide.Window.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row2.PassengerSide.IsLocked | bool | true |
        | Vehicle.Cabin.Door.Row2.PassengerSide.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Shade.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Shade.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Window.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Window.Position | uint8 | 100 |
        | Vehicle.Cabin.HVAC.IsAirConditioningActive | bool | true |
        | Vehicle.Cabin.HVAC.IsAutoPowerOptimize | bool | true |
        | Vehicle.Cabin.HVAC.IsFrontDefrosterActive | bool | true |
        | Vehicle.Cabin.HVAC.IsRearDefrosterActive | bool | true |
        | Vehicle.Cabin.HVAC.IsRecirculationActive | bool | true |
        | Vehicle.Cabin.HVAC.PowerOptimizeLevel | uint8 | 10 |
        | Vehicle.Cabin.HVAC.Station.Row1.Driver.AirDistribution | string | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row1.Driver.FanSpeed | uint8 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row1.Driver.Temperature | float | 100 |
        | Vehicle.Cabin.HVAC.Station.Row1.Passenger.AirDistribution | string | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row1.Passenger.FanSpeed | uint8 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row1.Passenger.Temperature | float | 100 |
        | Vehicle.Cabin.HVAC.Station.Row2.Driver.AirDistribution | string | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row2.Driver.FanSpeed | uint8 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row2.Driver.Temperature | float | 100 |
        | Vehicle.Cabin.HVAC.Station.Row2.Passenger.AirDistribution | string | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row2.Passenger.FanSpeed | uint8 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row2.Passenger.Temperature | float | 100 |
        | Vehicle.Cabin.HVAC.Station.Row3.Driver.AirDistribution | string | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row3.Driver.FanSpeed | uint8 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row3.Driver.Temperature | float | 100 |
        | Vehicle.Cabin.HVAC.Station.Row3.Passenger.AirDistribution | string | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row3.Passenger.FanSpeed | uint8 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row3.Passenger.Temperature | float | 100 |
        | Vehicle.Cabin.HVAC.Station.Row4.Driver.AirDistribution | string | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row4.Driver.FanSpeed | uint8 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row4.Driver.Temperature | float | 100 |
        | Vehicle.Cabin.HVAC.Station.Row4.Passenger.AirDistribution | string | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row4.Passenger.FanSpeed | uint8 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row4.Passenger.Temperature | float | 100 |
        | Vehicle.Cabin.IsAutoPowerOptimize | bool | true |
        | Vehicle.Cabin.IsWindowChildLockEngaged | bool | true |
        | Vehicle.Cabin.Light.DomeLight.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.DomeLight.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.DomeLight.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.IsGloveBoxOn | bool | true |
        | Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.IsLightOn | bool | true |
        | Vehicle.Cabin.PowerOptimizeLevel | uint8 | 10 |
        | Vehicle.Cabin.RearShade.IsOpen | bool | true |
        | Vehicle.Cabin.RearShade.Position | uint8 | 100 |
        | Vehicle.Cabin.RearviewMirror.DimmingLevel | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Lumbar.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Lumbar.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Recline | float | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.SideBolster.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Headrest.Angle | float | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Headrest.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Heater | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Massage | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Position | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.SeatBeltHeight | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Seating.Length | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Tilt | float | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Ventilator | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.Lumbar.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.Lumbar.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.Recline | float | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.SideBolster.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Headrest.Angle | float | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Headrest.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Heater | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Height | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Massage | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Position | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.SeatBeltHeight | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Seating.Length | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Tilt | float | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Ventilator | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Lumbar.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Lumbar.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Recline | float | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.SideBolster.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Headrest.Angle | float | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Headrest.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Heater | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Height | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Massage | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Position | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.SeatBeltHeight | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Seating.Length | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Tilt | float | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Ventilator | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Lumbar.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Lumbar.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Recline | float | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.SideBolster.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Headrest.Angle | float | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Headrest.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Heater | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Height | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Massage | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Position | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.SeatBeltHeight | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Seating.Length | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Tilt | float | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Ventilator | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.Lumbar.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.Lumbar.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.Recline | float | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.SideBolster.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Headrest.Angle | float | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Headrest.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Heater | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Height | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Massage | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Position | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.SeatBeltHeight | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Seating.Length | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Tilt | float | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Ventilator | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Lumbar.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Lumbar.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Recline | float | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.SideBolster.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Headrest.Angle | float | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Headrest.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Heater | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Height | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Massage | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Position | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.SeatBeltHeight | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Seating.Length | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Tilt | float | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Ventilator | uint8 | 100 |
        | Vehicle.Cabin.Sunroof.Shade.IsOpen | bool | true |
        | Vehicle.Cabin.Sunroof.Shade.Position | uint8 | 100 |
        | Vehicle.Cabin.Sunroof.Slide | uint8 | 100 |
        | Vehicle.Cabin.Sunroof.Tilt | uint8 | 100 |
        | Vehicle.Chassis.ParkingBrake.IsAutoApplyEnabled | bool | true |
        | Vehicle.Chassis.ParkingBrake.IsEngaged | bool | true |
        | Vehicle.Chassis.SteeringWheel.Extension | uint8 | 100 |
        | Vehicle.Chassis.SteeringWheel.Heating | uint8 | 100 |
        | Vehicle.Chassis.SteeringWheel.Tilt | uint8 | 100 |
        | Vehicle.IsAutoPowerOptimize | bool | true |
        | Vehicle.PowerOptimizeLevel | uint8 | 10 |
        | Vehicle.Powertrain.FuelSystem.IsFuelPortFlapOpen | bool | true |
        | Vehicle.Powertrain.IsAutoPowerOptimize | bool | true |
        | Vehicle.Powertrain.PowerOptimizeLevel | uint8 | 10 |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargeLimit | uint8 | 100 |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.AnyPosition.IsChargingCableLocked | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.AnyPosition.IsFlapOpen | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontLeft.IsChargingCableLocked | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontLeft.IsFlapOpen | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontMiddle.IsChargingCableLocked | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontMiddle.IsFlapOpen | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontRight.IsChargingCableLocked | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontRight.IsFlapOpen | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearLeft.IsChargingCableLocked | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearLeft.IsFlapOpen | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearMiddle.IsChargingCableLocked | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearMiddle.IsFlapOpen | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearRight.IsChargingCableLocked | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearRight.IsFlapOpen | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.StartStopCharging | string | STOP |
        | Vehicle.Powertrain.TractionBattery.Charging.Timer.Mode | string | START_TIME |
        | Vehicle.Powertrain.TractionBattery.Charging.Timer.Time | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.RequestedMode | string | FAST_CHARGING_PREPARATION |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.StartTime | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.TargetTemperature | float | 100 |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.TargetTime | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.RequestedMode | string | FAST_CHARGING_PREPARATION |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.StartTime | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.TargetTemperature | float | 100 |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.TargetTime | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.RequestedMode | string | FAST_CHARGING_PREPARATION |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.StartTime | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.TargetTemperature | float | 100 |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.TargetTime | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.RequestedMode | string | FAST_CHARGING_PREPARATION |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.StartTime | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.TargetTemperature | float | 100 |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.TargetTime | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.Transmission.ClutchEngagement | float | 100 |
        | Vehicle.Powertrain.Transmission.DiffLockCenterEngagement | float | 100 |
        | Vehicle.Powertrain.Transmission.DiffLockFrontEngagement | float | 100 |
        | Vehicle.Powertrain.Transmission.DiffLockRearEngagement | float | 100 |
        | Vehicle.Powertrain.Transmission.GearChangeMode | string | AUTOMATIC |
        | Vehicle.Powertrain.Transmission.IsElectricalPowertrainEngaged | bool | true |
        | Vehicle.Powertrain.Transmission.IsLowRangeEngaged | bool | true |
        | Vehicle.Powertrain.Transmission.IsParkLockEngaged | bool | true |
        | Vehicle.Powertrain.Transmission.PerformanceMode | string | SPORT |
        | Vehicle.Powertrain.Transmission.SelectedGear | int8 | -100 |
        | Vehicle.Powertrain.Transmission.TorqueDistribution | float | 100 |
        | Vehicle.TripMeterReading | float | 100 |

    @warm @serial
    Scenario Outline: Overwrite/confirm after cold start (no restart)
        Given Set the actuator signal <path> to <datatype> <default_value>
        When HeadlessApp set the actuator signal <path> to <datatype> <checked_value>
        Then the result obtained from the actuator signal by PAL should be <datatype> <checked_value> on <path>

    Examples:
        | path                                                     | datatype | default_value | checked_value |
        | Vehicle.ADAS.ABS.IsEnabled | bool | true | false |
        | Vehicle.ADAS.AdaptiveCruiseControl.DistanceSet | string | DIST_1 | DIST_2 |
        | Vehicle.ADAS.AdaptiveCruiseControl.IsActive | bool | true | false |
        | Vehicle.ADAS.AdaptiveCruiseControl.IsEnabled | bool | true | false |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | 0 | 100 |
        | Vehicle.ADAS.DMS.IsEnabled | bool | true | false |
        | Vehicle.ADAS.EBA.IsEnabled | bool | true | false |
        | Vehicle.ADAS.EBD.IsEnabled | bool | true | false |
        | Vehicle.ADAS.ESC.IsEnabled | bool | true | false |
        | Vehicle.ADAS.IsAutoPowerOptimize | bool | true | false |
        | Vehicle.ADAS.LaneDepartureDetection.IsEnabled | bool | true | false |
        | Vehicle.ADAS.ObstacleDetection.IsEnabled | bool | true | false |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 0 | 10 |
        | Vehicle.ADAS.TCS.IsEnabled | bool | true | false |
        | Vehicle.Body.Hood.IsLocked | bool | true | false |
        | Vehicle.Body.Hood.IsOpen | bool | true | false |
        | Vehicle.Body.Hood.Position | uint8 | 0 | 100 |
        | Vehicle.Body.Horn.IsActive | bool | true | false |
        | Vehicle.Body.IsAutoPowerOptimize | bool | true | false |
        | Vehicle.Body.Lights.Backup.IsOn | bool | true | false |
        | Vehicle.Body.Lights.Beam.High.IsOn | bool | true | false |
        | Vehicle.Body.Lights.Beam.Low.IsOn | bool | true | false |
        | Vehicle.Body.Lights.Brake.IsActive | string | INACTIVE | ACTIVE |
        | Vehicle.Body.Lights.DirectionIndicator.Left.IsSignaling | bool | true | false |
        | Vehicle.Body.Lights.DirectionIndicator.Right.IsSignaling | bool | true | false |
        | Vehicle.Body.Lights.Fog.Front.IsOn | bool | true | false |
        | Vehicle.Body.Lights.Fog.Rear.IsOn | bool | true | false |
        | Vehicle.Body.Lights.Hazard.IsSignaling | bool | true | false |
        | Vehicle.Body.Lights.LicensePlate.IsOn | bool | true | false |
        | Vehicle.Body.Lights.Parking.IsOn | bool | true | false |
        | Vehicle.Body.Lights.Running.IsOn | bool | true | false |
        | Vehicle.Body.Mirrors.DriverSide.IsFolded | bool | true | false |
        | Vehicle.Body.Mirrors.DriverSide.IsHeatingOn | bool | true | false |
        | Vehicle.Body.Mirrors.DriverSide.IsLocked | bool | true | false |
        | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | 0 | -100 |
        | Vehicle.Body.Mirrors.DriverSide.Tilt | int8 | 0 | -100 |
        | Vehicle.Body.Mirrors.PassengerSide.IsFolded | bool | true | false |
        | Vehicle.Body.Mirrors.PassengerSide.IsHeatingOn | bool | true | false |
        | Vehicle.Body.Mirrors.PassengerSide.IsLocked | bool | true | false |
        | Vehicle.Body.Mirrors.PassengerSide.Pan | int8 | 0 | -100 |
        | Vehicle.Body.Mirrors.PassengerSide.Tilt | int8 | 0 | -100 |
        | Vehicle.Body.PowerOptimizeLevel | uint8 | 0 | 10 |
        | Vehicle.Body.RearMainSpoilerPosition | float | 0 | 100 |
        | Vehicle.Body.Trunk.Front.IsLightOn | bool | true | false |
        | Vehicle.Body.Trunk.Front.IsLocked | bool | true | false |
        | Vehicle.Body.Trunk.Front.IsOpen | bool | true | false |
        | Vehicle.Body.Trunk.Front.Position | uint8 | 0 | 100 |
        | Vehicle.Body.Trunk.Rear.IsLightOn | bool | true | false |
        | Vehicle.Body.Trunk.Rear.IsLocked | bool | true | false |
        | Vehicle.Body.Trunk.Rear.IsOpen | bool | true | false |
        | Vehicle.Body.Trunk.Rear.Position | uint8 | 0 | 100 |
        | Vehicle.Body.Windshield.Front.IsHeatingOn | bool | true | false |
        | Vehicle.Body.Windshield.Front.Wiping.Intensity | uint8 | 0 | 100 |
        | Vehicle.Body.Windshield.Front.Wiping.Mode | string | OFF | SLOW |
        | Vehicle.Body.Windshield.Front.Wiping.System.Frequency | uint8 | 0 | 100 |
        | Vehicle.Body.Windshield.Front.Wiping.System.Mode | string | STOP_HOLD | WIPE |
        | Vehicle.Body.Windshield.Front.Wiping.System.Position | uint8 | 0 | 100 |
        | Vehicle.Body.Windshield.Rear.IsHeatingOn | bool | true | false |
        | Vehicle.Body.Windshield.Rear.Wiping.Intensity | uint8 | 0 | 100 |
        | Vehicle.Body.Windshield.Rear.Wiping.Mode | string | OFF | SLOW |
        | Vehicle.Body.Windshield.Rear.Wiping.System.Frequency | uint8 | 0 | 100 |
        | Vehicle.Body.Windshield.Rear.Wiping.System.Mode | string | STOP_HOLD | WIPE |
        | Vehicle.Body.Windshield.Rear.Wiping.System.Position | uint8 | 0 | 100 |
        | Vehicle.Cabin.Convertible.IsOpen | bool | true | false |
        | Vehicle.Cabin.Convertible.Position | uint8 | 0 | 100 |
        | Vehicle.Cabin.Door.Row1.DriverSide.IsLocked | bool | true | false |
        | Vehicle.Cabin.Door.Row1.DriverSide.IsOpen | bool | true | false |
        | Vehicle.Cabin.Door.Row1.DriverSide.Position | uint8 | 0 | 100 |
        | Vehicle.Cabin.Door.Row1.DriverSide.Shade.IsOpen | bool | true | false |
        | Vehicle.Cabin.Door.Row1.DriverSide.Shade.Position | uint8 | 0 | 100 |
        | Vehicle.Cabin.Door.Row1.DriverSide.Window.IsOpen | bool | true | false |
        | Vehicle.Cabin.Door.Row1.DriverSide.Window.Position | uint8 | 0 | 100 |
        | Vehicle.Cabin.Door.Row1.PassengerSide.IsLocked | bool | true | false |
        | Vehicle.Cabin.Door.Row1.PassengerSide.IsOpen | bool | true | false |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Position | uint8 | 0 | 100 |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Shade.IsOpen | bool | true | false |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Shade.Position | uint8 | 0 | 100 |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Window.IsOpen | bool | true | false |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Window.Position | uint8 | 0 | 100 |
        | Vehicle.Cabin.Door.Row2.DriverSide.IsLocked | bool | true | false |
        | Vehicle.Cabin.Door.Row2.DriverSide.IsOpen | bool | true | false |
        | Vehicle.Cabin.Door.Row2.DriverSide.Position | uint8 | 0 | 100 |
        | Vehicle.Cabin.Door.Row2.DriverSide.Shade.IsOpen | bool | true | false |
        | Vehicle.Cabin.Door.Row2.DriverSide.Shade.Position | uint8 | 0 | 100 |
        | Vehicle.Cabin.Door.Row2.DriverSide.Window.IsOpen | bool | true | false |
        | Vehicle.Cabin.Door.Row2.DriverSide.Window.Position | uint8 | 0 | 100 |
        | Vehicle.Cabin.Door.Row2.PassengerSide.IsLocked | bool | true | false |
        | Vehicle.Cabin.Door.Row2.PassengerSide.IsOpen | bool | true | false |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Position | uint8 | 0 | 100 |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Shade.IsOpen | bool | true | false |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Shade.Position | uint8 | 0 | 100 |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Window.IsOpen | bool | true | false |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Window.Position | uint8 | 0 | 100 |
        | Vehicle.Cabin.HVAC.IsAirConditioningActive | bool | true | false |
        | Vehicle.Cabin.HVAC.IsAutoPowerOptimize | bool | true | false |
        | Vehicle.Cabin.HVAC.IsFrontDefrosterActive | bool | true | false |
        | Vehicle.Cabin.HVAC.IsRearDefrosterActive | bool | true | false |
        | Vehicle.Cabin.HVAC.IsRecirculationActive | bool | true | false |
        | Vehicle.Cabin.HVAC.PowerOptimizeLevel | uint8 | 0 | 10 |
        | Vehicle.Cabin.HVAC.Station.Row1.Driver.AirDistribution | string | UP | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row1.Driver.FanSpeed | uint8 | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row1.Driver.Temperature | float | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row1.Passenger.AirDistribution | string | UP | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row1.Passenger.FanSpeed | uint8 | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row1.Passenger.Temperature | float | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row2.Driver.AirDistribution | string | UP | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row2.Driver.FanSpeed | uint8 | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row2.Driver.Temperature | float | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row2.Passenger.AirDistribution | string | UP | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row2.Passenger.FanSpeed | uint8 | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row2.Passenger.Temperature | float | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row3.Driver.AirDistribution | string | UP | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row3.Driver.FanSpeed | uint8 | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row3.Driver.Temperature | float | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row3.Passenger.AirDistribution | string | UP | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row3.Passenger.FanSpeed | uint8 | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row3.Passenger.Temperature | float | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row4.Driver.AirDistribution | string | UP | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row4.Driver.FanSpeed | uint8 | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row4.Driver.Temperature | float | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row4.Passenger.AirDistribution | string | UP | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row4.Passenger.FanSpeed | uint8 | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row4.Passenger.Temperature | float | 0 | 100 |
        | Vehicle.Cabin.IsAutoPowerOptimize | bool | true | false |
        | Vehicle.Cabin.IsWindowChildLockEngaged | bool | true | false |
        | Vehicle.Cabin.Light.DomeLight.Color | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.DomeLight.Intensity | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.DomeLight.IsLightOn | bool | true | false |
        | Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.Color | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.Intensity | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.IsLightOn | bool | true | false |
        | Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.Color | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.Intensity | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.IsLightOn | bool | true | false |
        | Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.Color | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.Intensity | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.IsLightOn | bool | true | false |
        | Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.Color | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.Intensity | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.IsLightOn | bool | true | false |
        | Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.Color | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.Intensity | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.IsLightOn | bool | true | false |
        | Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.Color | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.Intensity | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.IsLightOn | bool | true | false |
        | Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.Color | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.Intensity | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.IsLightOn | bool | true | false |
        | Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.Color | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.Intensity | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.IsLightOn | bool | true | false |
        | Vehicle.Cabin.Light.IsGloveBoxOn | bool | true | false |
        | Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.Color | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.Intensity | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.IsLightOn | bool | true | false |
        | Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.Color | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.Intensity | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.IsLightOn | bool | true | false |
        | Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.Color | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.Intensity | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.IsLightOn | bool | true | false |
        | Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.Color | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.Intensity | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.IsLightOn | bool | true | false |
        | Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.Color | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.Intensity | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.IsLightOn | bool | true | false |
        | Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.Color | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.Intensity | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.IsLightOn | bool | true | false |
        | Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.Color | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.Intensity | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.IsLightOn | bool | true | false |
        | Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.Color | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.Intensity | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.IsLightOn | bool | true | false |
        | Vehicle.Cabin.PowerOptimizeLevel | uint8 | 0 | 10 |
        | Vehicle.Cabin.RearShade.IsOpen | bool | true | false |
        | Vehicle.Cabin.RearShade.Position | uint8 | 0 | 100 |
        | Vehicle.Cabin.RearviewMirror.DimmingLevel | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Lumbar.Height | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Lumbar.Support | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Recline | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.SideBolster.Support | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Headrest.Angle | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Headrest.Height | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Heater | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Massage | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Position | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.SeatBeltHeight | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Seating.Length | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Tilt | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Ventilator | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.Lumbar.Height | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.Lumbar.Support | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.Recline | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.SideBolster.Support | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Headrest.Angle | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Headrest.Height | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Heater | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Height | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Massage | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Position | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.SeatBeltHeight | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Seating.Length | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Tilt | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Ventilator | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Lumbar.Height | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Lumbar.Support | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Recline | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.SideBolster.Support | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Headrest.Angle | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Headrest.Height | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Heater | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Height | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Massage | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Position | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.SeatBeltHeight | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Seating.Length | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Tilt | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Ventilator | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Lumbar.Height | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Lumbar.Support | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Recline | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.SideBolster.Support | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Headrest.Angle | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Headrest.Height | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Heater | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Height | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Massage | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Position | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.SeatBeltHeight | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Seating.Length | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Tilt | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Ventilator | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.Lumbar.Height | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.Lumbar.Support | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.Recline | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.SideBolster.Support | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Headrest.Angle | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Headrest.Height | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Heater | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Height | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Massage | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Position | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.SeatBeltHeight | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Seating.Length | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Tilt | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Ventilator | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Lumbar.Height | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Lumbar.Support | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Recline | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.SideBolster.Support | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Headrest.Angle | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Headrest.Height | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Heater | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Height | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Massage | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Position | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.SeatBeltHeight | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Seating.Length | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Tilt | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Ventilator | uint8 | 0 | 100 |
        | Vehicle.Cabin.Sunroof.Shade.IsOpen | bool | true | false |
        | Vehicle.Cabin.Sunroof.Shade.Position | uint8 | 0 | 100 |
        | Vehicle.Cabin.Sunroof.Slide | uint8 | 0 | 100 |
        | Vehicle.Cabin.Sunroof.Tilt | uint8 | 0 | 100 |
        | Vehicle.Chassis.ParkingBrake.IsAutoApplyEnabled | bool | true | false |
        | Vehicle.Chassis.ParkingBrake.IsEngaged | bool | true | false |
        | Vehicle.Chassis.SteeringWheel.Extension | uint8 | 0 | 100 |
        | Vehicle.Chassis.SteeringWheel.Heating | uint8 | 0 | 100 |
        | Vehicle.Chassis.SteeringWheel.Tilt | uint8 | 0 | 100 |
        | Vehicle.IsAutoPowerOptimize | bool | true | false |
        | Vehicle.PowerOptimizeLevel | uint8 | 0 | 10 |
        | Vehicle.Powertrain.FuelSystem.IsFuelPortFlapOpen | bool | true | false |
        | Vehicle.Powertrain.IsAutoPowerOptimize | bool | true | false |
        | Vehicle.Powertrain.PowerOptimizeLevel | uint8 | 0 | 10 |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargeLimit | uint8 | 100 | 100 |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.AnyPosition.IsChargingCableLocked | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.AnyPosition.IsFlapOpen | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontLeft.IsChargingCableLocked | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontLeft.IsFlapOpen | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontMiddle.IsChargingCableLocked | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontMiddle.IsFlapOpen | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontRight.IsChargingCableLocked | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontRight.IsFlapOpen | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearLeft.IsChargingCableLocked | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearLeft.IsFlapOpen | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearMiddle.IsChargingCableLocked | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearMiddle.IsFlapOpen | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearRight.IsChargingCableLocked | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearRight.IsFlapOpen | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.StartStopCharging | string | START | STOP |
        | Vehicle.Powertrain.TractionBattery.Charging.Timer.Mode | string | INACTIVE | START_TIME |
        | Vehicle.Powertrain.TractionBattery.Charging.Timer.Time | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.RequestedMode | string | INACTIVE | FAST_CHARGING_PREPARATION |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.StartTime | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.TargetTemperature | float | 0 | 100 |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.TargetTime | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.RequestedMode | string | INACTIVE | FAST_CHARGING_PREPARATION |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.StartTime | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.TargetTemperature | float | 0 | 100 |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.TargetTime | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.RequestedMode | string | INACTIVE | FAST_CHARGING_PREPARATION |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.StartTime | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.TargetTemperature | float | 0 | 100 |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.TargetTime | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.RequestedMode | string | INACTIVE | FAST_CHARGING_PREPARATION |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.StartTime | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.TargetTemperature | float | 0 | 100 |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.TargetTime | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.Transmission.ClutchEngagement | float | 0 | 100 |
        | Vehicle.Powertrain.Transmission.DiffLockCenterEngagement | float | 0 | 100 |
        | Vehicle.Powertrain.Transmission.DiffLockFrontEngagement | float | 0 | 100 |
        | Vehicle.Powertrain.Transmission.DiffLockRearEngagement | float | 0 | 100 |
        | Vehicle.Powertrain.Transmission.GearChangeMode | string | MANUAL | AUTOMATIC |
        | Vehicle.Powertrain.Transmission.IsElectricalPowertrainEngaged | bool | true | false |
        | Vehicle.Powertrain.Transmission.IsLowRangeEngaged | bool | true | false |
        | Vehicle.Powertrain.Transmission.IsParkLockEngaged | bool | true | false |
        | Vehicle.Powertrain.Transmission.PerformanceMode | string | NORMAL | SPORT |
        | Vehicle.Powertrain.Transmission.SelectedGear | int8 | 0 | -100 |
        | Vehicle.Powertrain.Transmission.TorqueDistribution | float | 0 | 100 |
        | Vehicle.TripMeterReading | float | 0 | 100 |

    Scenario Outline: Millions of set requests do not kill kura server & values remain consistent
        When HeadlessApp set the signal <path> to <datatype> <checked_value> <count> times with duplex <duplex>
        Then the result obtained from the actuator signal by PAL should be <datatype> <checked_value> on <path>

    Examples:
        | path                                                     | count            | duplex           | datatype      | default_value | checked_value |
        | Vehicle.ADAS.ABS.IsEnabled | 20 | 10 | bool | true | false |
        | Vehicle.ADAS.AdaptiveCruiseControl.DistanceSet | 20 | 10 | string | DIST_1 | DIST_2 |
        | Vehicle.ADAS.AdaptiveCruiseControl.IsActive | 20 | 10 | bool | true | false |
        | Vehicle.ADAS.AdaptiveCruiseControl.IsEnabled | 20 | 10 | bool | true | false |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | 20 | 10 | float | 0 | 100 |
        | Vehicle.ADAS.DMS.IsEnabled | 20 | 10 | bool | true | false |
        | Vehicle.ADAS.EBA.IsEnabled | 20 | 10 | bool | true | false |
        | Vehicle.ADAS.EBD.IsEnabled | 20 | 10 | bool | true | false |
        | Vehicle.ADAS.ESC.IsEnabled | 20 | 10 | bool | true | false |
        | Vehicle.ADAS.IsAutoPowerOptimize | 20 | 10 | bool | true | false |
        | Vehicle.ADAS.LaneDepartureDetection.IsEnabled | 20 | 10 | bool | true | false |
        | Vehicle.ADAS.ObstacleDetection.IsEnabled | 20 | 10 | bool | true | false |
        | Vehicle.ADAS.PowerOptimizeLevel | 20 | 10 | uint8 | 0 | 10 |
        | Vehicle.ADAS.TCS.IsEnabled | 20 | 10 | bool | true | false |
        | Vehicle.Body.Hood.IsLocked | 20 | 10 | bool | true | false |
        | Vehicle.Body.Hood.IsOpen | 20 | 10 | bool | true | false |
        | Vehicle.Body.Hood.Position | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Body.Horn.IsActive | 20 | 10 | bool | true | false |
        | Vehicle.Body.IsAutoPowerOptimize | 20 | 10 | bool | true | false |
        | Vehicle.Body.Lights.Backup.IsOn | 20 | 10 | bool | true | false |
        | Vehicle.Body.Lights.Beam.High.IsOn | 20 | 10 | bool | true | false |
        | Vehicle.Body.Lights.Beam.Low.IsOn | 20 | 10 | bool | true | false |
        | Vehicle.Body.Lights.Brake.IsActive | 20 | 10 | string | INACTIVE | ACTIVE |
        | Vehicle.Body.Lights.DirectionIndicator.Left.IsSignaling | 20 | 10 | bool | true | false |
        | Vehicle.Body.Lights.DirectionIndicator.Right.IsSignaling | 20 | 10 | bool | true | false |
        | Vehicle.Body.Lights.Fog.Front.IsOn | 20 | 10 | bool | true | false |
        | Vehicle.Body.Lights.Fog.Rear.IsOn | 20 | 10 | bool | true | false |
        | Vehicle.Body.Lights.Hazard.IsSignaling | 20 | 10 | bool | true | false |
        | Vehicle.Body.Lights.LicensePlate.IsOn | 20 | 10 | bool | true | false |
        | Vehicle.Body.Lights.Parking.IsOn | 20 | 10 | bool | true | false |
        | Vehicle.Body.Lights.Running.IsOn | 20 | 10 | bool | true | false |
        | Vehicle.Body.Mirrors.DriverSide.IsFolded | 20 | 10 | bool | true | false |
        | Vehicle.Body.Mirrors.DriverSide.IsHeatingOn | 20 | 10 | bool | true | false |
        | Vehicle.Body.Mirrors.DriverSide.IsLocked | 20 | 10 | bool | true | false |
        | Vehicle.Body.Mirrors.DriverSide.Pan | 20 | 10 | int8 | 0 | -100 |
        | Vehicle.Body.Mirrors.DriverSide.Tilt | 20 | 10 | int8 | 0 | -100 |
        | Vehicle.Body.Mirrors.PassengerSide.IsFolded | 20 | 10 | bool | true | false |
        | Vehicle.Body.Mirrors.PassengerSide.IsHeatingOn | 20 | 10 | bool | true | false |
        | Vehicle.Body.Mirrors.PassengerSide.IsLocked | 20 | 10 | bool | true | false |
        | Vehicle.Body.Mirrors.PassengerSide.Pan | 20 | 10 | int8 | 0 | -100 |
        | Vehicle.Body.Mirrors.PassengerSide.Tilt | 20 | 10 | int8 | 0 | -100 |
        | Vehicle.Body.PowerOptimizeLevel | 20 | 10 | uint8 | 0 | 10 |
        | Vehicle.Body.RearMainSpoilerPosition | 20 | 10 | float | 0 | 100 |
        | Vehicle.Body.Trunk.Front.IsLightOn | 20 | 10 | bool | true | false |
        | Vehicle.Body.Trunk.Front.IsLocked | 20 | 10 | bool | true | false |
        | Vehicle.Body.Trunk.Front.IsOpen | 20 | 10 | bool | true | false |
        | Vehicle.Body.Trunk.Front.Position | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Body.Trunk.Rear.IsLightOn | 20 | 10 | bool | true | false |
        | Vehicle.Body.Trunk.Rear.IsLocked | 20 | 10 | bool | true | false |
        | Vehicle.Body.Trunk.Rear.IsOpen | 20 | 10 | bool | true | false |
        | Vehicle.Body.Trunk.Rear.Position | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Body.Windshield.Front.IsHeatingOn | 20 | 10 | bool | true | false |
        | Vehicle.Body.Windshield.Front.Wiping.Intensity | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Body.Windshield.Front.Wiping.Mode | 20 | 10 | string | OFF | SLOW |
        | Vehicle.Body.Windshield.Front.Wiping.System.Frequency | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Body.Windshield.Front.Wiping.System.Mode | 20 | 10 | string | STOP_HOLD | WIPE |
        | Vehicle.Body.Windshield.Front.Wiping.System.Position | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Body.Windshield.Rear.IsHeatingOn | 20 | 10 | bool | true | false |
        | Vehicle.Body.Windshield.Rear.Wiping.Intensity | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Body.Windshield.Rear.Wiping.Mode | 20 | 10 | string | OFF | SLOW |
        | Vehicle.Body.Windshield.Rear.Wiping.System.Frequency | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Body.Windshield.Rear.Wiping.System.Mode | 20 | 10 | string | STOP_HOLD | WIPE |
        | Vehicle.Body.Windshield.Rear.Wiping.System.Position | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Convertible.IsOpen | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Convertible.Position | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Door.Row1.DriverSide.IsLocked | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Door.Row1.DriverSide.IsOpen | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Door.Row1.DriverSide.Position | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Door.Row1.DriverSide.Shade.IsOpen | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Door.Row1.DriverSide.Shade.Position | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Door.Row1.DriverSide.Window.IsOpen | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Door.Row1.DriverSide.Window.Position | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Door.Row1.PassengerSide.IsLocked | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Door.Row1.PassengerSide.IsOpen | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Position | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Shade.IsOpen | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Shade.Position | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Window.IsOpen | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Window.Position | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Door.Row2.DriverSide.IsLocked | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Door.Row2.DriverSide.IsOpen | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Door.Row2.DriverSide.Position | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Door.Row2.DriverSide.Shade.IsOpen | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Door.Row2.DriverSide.Shade.Position | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Door.Row2.DriverSide.Window.IsOpen | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Door.Row2.DriverSide.Window.Position | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Door.Row2.PassengerSide.IsLocked | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Door.Row2.PassengerSide.IsOpen | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Position | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Shade.IsOpen | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Shade.Position | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Window.IsOpen | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Window.Position | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.HVAC.IsAirConditioningActive | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.HVAC.IsAutoPowerOptimize | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.HVAC.IsFrontDefrosterActive | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.HVAC.IsRearDefrosterActive | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.HVAC.IsRecirculationActive | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.HVAC.PowerOptimizeLevel | 20 | 10 | uint8 | 0 | 10 |
        | Vehicle.Cabin.HVAC.Station.Row1.Driver.AirDistribution | 20 | 10 | string | UP | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row1.Driver.FanSpeed | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row1.Driver.Temperature | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row1.Passenger.AirDistribution | 20 | 10 | string | UP | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row1.Passenger.FanSpeed | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row1.Passenger.Temperature | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row2.Driver.AirDistribution | 20 | 10 | string | UP | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row2.Driver.FanSpeed | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row2.Driver.Temperature | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row2.Passenger.AirDistribution | 20 | 10 | string | UP | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row2.Passenger.FanSpeed | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row2.Passenger.Temperature | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row3.Driver.AirDistribution | 20 | 10 | string | UP | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row3.Driver.FanSpeed | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row3.Driver.Temperature | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row3.Passenger.AirDistribution | 20 | 10 | string | UP | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row3.Passenger.FanSpeed | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row3.Passenger.Temperature | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row4.Driver.AirDistribution | 20 | 10 | string | UP | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row4.Driver.FanSpeed | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row4.Driver.Temperature | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row4.Passenger.AirDistribution | 20 | 10 | string | UP | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row4.Passenger.FanSpeed | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row4.Passenger.Temperature | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.IsAutoPowerOptimize | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.IsWindowChildLockEngaged | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Light.DomeLight.Color | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.DomeLight.Intensity | 20 | 10 | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.DomeLight.IsLightOn | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.Color | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.Intensity | 20 | 10 | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.IsLightOn | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.Color | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.Intensity | 20 | 10 | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.IsLightOn | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.Color | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.Intensity | 20 | 10 | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.IsLightOn | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.Color | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.Intensity | 20 | 10 | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.IsLightOn | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.Color | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.Intensity | 20 | 10 | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.IsLightOn | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.Color | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.Intensity | 20 | 10 | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.IsLightOn | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.Color | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.Intensity | 20 | 10 | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.IsLightOn | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.Color | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.Intensity | 20 | 10 | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.IsLightOn | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Light.IsGloveBoxOn | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.Color | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.Intensity | 20 | 10 | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.IsLightOn | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.Color | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.Intensity | 20 | 10 | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.IsLightOn | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.Color | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.Intensity | 20 | 10 | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.IsLightOn | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.Color | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.Intensity | 20 | 10 | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.IsLightOn | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.Color | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.Intensity | 20 | 10 | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.IsLightOn | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.Color | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.Intensity | 20 | 10 | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.IsLightOn | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.Color | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.Intensity | 20 | 10 | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.IsLightOn | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.Color | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.Intensity | 20 | 10 | uint8 | 1 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.IsLightOn | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.PowerOptimizeLevel | 20 | 10 | uint8 | 0 | 10 |
        | Vehicle.Cabin.RearShade.IsOpen | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.RearShade.Position | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.RearviewMirror.DimmingLevel | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Lumbar.Height | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Lumbar.Support | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Recline | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.SideBolster.Support | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Headrest.Angle | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Headrest.Height | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Heater | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | 20 | 10 | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Massage | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Position | 20 | 10 | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.SeatBeltHeight | 20 | 10 | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Seating.Length | 20 | 10 | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Tilt | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Ventilator | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.Lumbar.Height | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.Lumbar.Support | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.Recline | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.SideBolster.Support | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Headrest.Angle | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Headrest.Height | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Heater | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Height | 20 | 10 | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Massage | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Position | 20 | 10 | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.SeatBeltHeight | 20 | 10 | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Seating.Length | 20 | 10 | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Tilt | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Ventilator | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Lumbar.Height | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Lumbar.Support | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Recline | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.SideBolster.Support | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Headrest.Angle | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Headrest.Height | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Heater | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Height | 20 | 10 | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Massage | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Position | 20 | 10 | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.SeatBeltHeight | 20 | 10 | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Seating.Length | 20 | 10 | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Tilt | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Ventilator | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Lumbar.Height | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Lumbar.Support | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Recline | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.SideBolster.Support | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Headrest.Angle | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Headrest.Height | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Heater | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Height | 20 | 10 | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Massage | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Position | 20 | 10 | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.SeatBeltHeight | 20 | 10 | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Seating.Length | 20 | 10 | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Tilt | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Ventilator | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.Lumbar.Height | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.Lumbar.Support | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.Recline | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.SideBolster.Support | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Headrest.Angle | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Headrest.Height | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Heater | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Height | 20 | 10 | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Massage | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Position | 20 | 10 | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.SeatBeltHeight | 20 | 10 | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Seating.Length | 20 | 10 | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Tilt | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Ventilator | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Lumbar.Height | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Lumbar.Support | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Recline | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.SideBolster.Support | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Headrest.Angle | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Headrest.Height | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Heater | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Height | 20 | 10 | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Massage | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Position | 20 | 10 | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.SeatBeltHeight | 20 | 10 | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Seating.Length | 20 | 10 | uint16 | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Tilt | 20 | 10 | float | 0 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Ventilator | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Sunroof.Shade.IsOpen | 20 | 10 | bool | true | false |
        | Vehicle.Cabin.Sunroof.Shade.Position | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Sunroof.Slide | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Cabin.Sunroof.Tilt | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Chassis.ParkingBrake.IsAutoApplyEnabled | 20 | 10 | bool | true | false |
        | Vehicle.Chassis.ParkingBrake.IsEngaged | 20 | 10 | bool | true | false |
        | Vehicle.Chassis.SteeringWheel.Extension | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Chassis.SteeringWheel.Heating | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.Chassis.SteeringWheel.Tilt | 20 | 10 | uint8 | 0 | 100 |
        | Vehicle.IsAutoPowerOptimize | 20 | 10 | bool | true | false |
        | Vehicle.PowerOptimizeLevel | 20 | 10 | uint8 | 0 | 10 |
        | Vehicle.Powertrain.FuelSystem.IsFuelPortFlapOpen | 20 | 10 | bool | true | false |
        | Vehicle.Powertrain.IsAutoPowerOptimize | 20 | 10 | bool | true | false |
        | Vehicle.Powertrain.PowerOptimizeLevel | 20 | 10 | uint8 | 0 | 10 |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargeLimit | 20 | 10 | uint8 | 100 | 100 |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.AnyPosition.IsChargingCableLocked | 20 | 10 | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.AnyPosition.IsFlapOpen | 20 | 10 | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontLeft.IsChargingCableLocked | 20 | 10 | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontLeft.IsFlapOpen | 20 | 10 | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontMiddle.IsChargingCableLocked | 20 | 10 | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontMiddle.IsFlapOpen | 20 | 10 | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontRight.IsChargingCableLocked | 20 | 10 | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontRight.IsFlapOpen | 20 | 10 | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearLeft.IsChargingCableLocked | 20 | 10 | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearLeft.IsFlapOpen | 20 | 10 | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearMiddle.IsChargingCableLocked | 20 | 10 | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearMiddle.IsFlapOpen | 20 | 10 | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearRight.IsChargingCableLocked | 20 | 10 | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearRight.IsFlapOpen | 20 | 10 | bool | true | false |
        | Vehicle.Powertrain.TractionBattery.Charging.StartStopCharging | 20 | 10 | string | START | STOP |
        | Vehicle.Powertrain.TractionBattery.Charging.Timer.Mode | 20 | 10 | string | INACTIVE | START_TIME |
        | Vehicle.Powertrain.TractionBattery.Charging.Timer.Time | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.RequestedMode | 20 | 10 | string | INACTIVE | FAST_CHARGING_PREPARATION |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.StartTime | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.TargetTemperature | 20 | 10 | float | 0 | 100 |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.TargetTime | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.RequestedMode | 20 | 10 | string | INACTIVE | FAST_CHARGING_PREPARATION |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.StartTime | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.TargetTemperature | 20 | 10 | float | 0 | 100 |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.TargetTime | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.RequestedMode | 20 | 10 | string | INACTIVE | FAST_CHARGING_PREPARATION |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.StartTime | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.TargetTemperature | 20 | 10 | float | 0 | 100 |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.TargetTime | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.RequestedMode | 20 | 10 | string | INACTIVE | FAST_CHARGING_PREPARATION |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.StartTime | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.TargetTemperature | 20 | 10 | float | 0 | 100 |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.TargetTime | 20 | 10 | string | THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.Transmission.ClutchEngagement | 20 | 10 | float | 0 | 100 |
        | Vehicle.Powertrain.Transmission.DiffLockCenterEngagement | 20 | 10 | float | 0 | 100 |
        | Vehicle.Powertrain.Transmission.DiffLockFrontEngagement | 20 | 10 | float | 0 | 100 |
        | Vehicle.Powertrain.Transmission.DiffLockRearEngagement | 20 | 10 | float | 0 | 100 |
        | Vehicle.Powertrain.Transmission.GearChangeMode | 20 | 10 | string | MANUAL | AUTOMATIC |
        | Vehicle.Powertrain.Transmission.IsElectricalPowertrainEngaged | 20 | 10 | bool | true | false |
        | Vehicle.Powertrain.Transmission.IsLowRangeEngaged | 20 | 10 | bool | true | false |
        | Vehicle.Powertrain.Transmission.IsParkLockEngaged | 20 | 10 | bool | true | false |
        | Vehicle.Powertrain.Transmission.PerformanceMode | 20 | 10 | string | NORMAL | SPORT |
        | Vehicle.Powertrain.Transmission.SelectedGear | 20 | 10 | int8 | 0 | -100 |
        | Vehicle.Powertrain.Transmission.TorqueDistribution | 20 | 10 | float | 0 | 100 |
        | Vehicle.TripMeterReading | 20 | 10 | float | 0 | 100 |

    @CleanupRestoreServerforSet
    Scenario Outline: Set requests are failed when the server is stopped
        When the server is stopped for set
        Then an attempt to set the actuator signal <path> to <datatype> <checked_value> is failed

    Examples:
        | path                                                     | datatype      | checked_value       |
        | Vehicle.ADAS.ABS.IsEnabled | bool | true |
        | Vehicle.ADAS.AdaptiveCruiseControl.DistanceSet | string | DIST_2 |
        | Vehicle.ADAS.AdaptiveCruiseControl.IsActive | bool | true |
        | Vehicle.ADAS.AdaptiveCruiseControl.IsEnabled | bool | true |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | 100 |
        | Vehicle.ADAS.DMS.IsEnabled | bool | true |
        | Vehicle.ADAS.EBA.IsEnabled | bool | true |
        | Vehicle.ADAS.EBD.IsEnabled | bool | true |
        | Vehicle.ADAS.ESC.IsEnabled | bool | true |
        | Vehicle.ADAS.IsAutoPowerOptimize | bool | true |
        | Vehicle.ADAS.LaneDepartureDetection.IsEnabled | bool | true |
        | Vehicle.ADAS.ObstacleDetection.IsEnabled | bool | true |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 10 |
        | Vehicle.ADAS.TCS.IsEnabled | bool | true |
        | Vehicle.Body.Hood.IsLocked | bool | true |
        | Vehicle.Body.Hood.IsOpen | bool | true |
        | Vehicle.Body.Hood.Position | uint8 | 100 |
        | Vehicle.Body.Horn.IsActive | bool | true |
        | Vehicle.Body.IsAutoPowerOptimize | bool | true |
        | Vehicle.Body.Lights.Backup.IsOn | bool | true |
        | Vehicle.Body.Lights.Beam.High.IsOn | bool | true |
        | Vehicle.Body.Lights.Beam.Low.IsOn | bool | true |
        | Vehicle.Body.Lights.Brake.IsActive | string | ACTIVE |
        | Vehicle.Body.Lights.DirectionIndicator.Left.IsSignaling | bool | true |
        | Vehicle.Body.Lights.DirectionIndicator.Right.IsSignaling | bool | true |
        | Vehicle.Body.Lights.Fog.Front.IsOn | bool | true |
        | Vehicle.Body.Lights.Fog.Rear.IsOn | bool | true |
        | Vehicle.Body.Lights.Hazard.IsSignaling | bool | true |
        | Vehicle.Body.Lights.LicensePlate.IsOn | bool | true |
        | Vehicle.Body.Lights.Parking.IsOn | bool | true |
        | Vehicle.Body.Lights.Running.IsOn | bool | true |
        | Vehicle.Body.Mirrors.DriverSide.IsFolded | bool | true |
        | Vehicle.Body.Mirrors.DriverSide.IsHeatingOn | bool | true |
        | Vehicle.Body.Mirrors.DriverSide.IsLocked | bool | true |
        | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | -100 |
        | Vehicle.Body.Mirrors.DriverSide.Tilt | int8 | -100 |
        | Vehicle.Body.Mirrors.PassengerSide.IsFolded | bool | true |
        | Vehicle.Body.Mirrors.PassengerSide.IsHeatingOn | bool | true |
        | Vehicle.Body.Mirrors.PassengerSide.IsLocked | bool | true |
        | Vehicle.Body.Mirrors.PassengerSide.Pan | int8 | -100 |
        | Vehicle.Body.Mirrors.PassengerSide.Tilt | int8 | -100 |
        | Vehicle.Body.PowerOptimizeLevel | uint8 | 10 |
        | Vehicle.Body.RearMainSpoilerPosition | float | 100 |
        | Vehicle.Body.Trunk.Front.IsLightOn | bool | true |
        | Vehicle.Body.Trunk.Front.IsLocked | bool | true |
        | Vehicle.Body.Trunk.Front.IsOpen | bool | true |
        | Vehicle.Body.Trunk.Front.Position | uint8 | 100 |
        | Vehicle.Body.Trunk.Rear.IsLightOn | bool | true |
        | Vehicle.Body.Trunk.Rear.IsLocked | bool | true |
        | Vehicle.Body.Trunk.Rear.IsOpen | bool | true |
        | Vehicle.Body.Trunk.Rear.Position | uint8 | 100 |
        | Vehicle.Body.Windshield.Front.IsHeatingOn | bool | true |
        | Vehicle.Body.Windshield.Front.Wiping.Intensity | uint8 | 100 |
        | Vehicle.Body.Windshield.Front.Wiping.Mode | string | SLOW |
        | Vehicle.Body.Windshield.Front.Wiping.System.Frequency | uint8 | 100 |
        | Vehicle.Body.Windshield.Front.Wiping.System.Mode | string | WIPE |
        | Vehicle.Body.Windshield.Front.Wiping.System.Position | uint8 | 100 |
        | Vehicle.Body.Windshield.Rear.IsHeatingOn | bool | true |
        | Vehicle.Body.Windshield.Rear.Wiping.Intensity | uint8 | 100 |
        | Vehicle.Body.Windshield.Rear.Wiping.Mode | string | SLOW |
        | Vehicle.Body.Windshield.Rear.Wiping.System.Frequency | uint8 | 100 |
        | Vehicle.Body.Windshield.Rear.Wiping.System.Mode | string | WIPE |
        | Vehicle.Body.Windshield.Rear.Wiping.System.Position | uint8 | 100 |
        | Vehicle.Cabin.Convertible.IsOpen | bool | true |
        | Vehicle.Cabin.Convertible.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row1.DriverSide.IsLocked | bool | true |
        | Vehicle.Cabin.Door.Row1.DriverSide.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row1.DriverSide.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row1.DriverSide.Shade.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row1.DriverSide.Shade.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row1.DriverSide.Window.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row1.DriverSide.Window.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row1.PassengerSide.IsLocked | bool | true |
        | Vehicle.Cabin.Door.Row1.PassengerSide.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Shade.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Shade.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Window.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Window.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row2.DriverSide.IsLocked | bool | true |
        | Vehicle.Cabin.Door.Row2.DriverSide.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row2.DriverSide.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row2.DriverSide.Shade.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row2.DriverSide.Shade.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row2.DriverSide.Window.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row2.DriverSide.Window.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row2.PassengerSide.IsLocked | bool | true |
        | Vehicle.Cabin.Door.Row2.PassengerSide.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Shade.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Shade.Position | uint8 | 100 |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Window.IsOpen | bool | true |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Window.Position | uint8 | 100 |
        | Vehicle.Cabin.HVAC.IsAirConditioningActive | bool | true |
        | Vehicle.Cabin.HVAC.IsAutoPowerOptimize | bool | true |
        | Vehicle.Cabin.HVAC.IsFrontDefrosterActive | bool | true |
        | Vehicle.Cabin.HVAC.IsRearDefrosterActive | bool | true |
        | Vehicle.Cabin.HVAC.IsRecirculationActive | bool | true |
        | Vehicle.Cabin.HVAC.PowerOptimizeLevel | uint8 | 10 |
        | Vehicle.Cabin.HVAC.Station.Row1.Driver.AirDistribution | string | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row1.Driver.FanSpeed | uint8 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row1.Driver.Temperature | float | 100 |
        | Vehicle.Cabin.HVAC.Station.Row1.Passenger.AirDistribution | string | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row1.Passenger.FanSpeed | uint8 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row1.Passenger.Temperature | float | 100 |
        | Vehicle.Cabin.HVAC.Station.Row2.Driver.AirDistribution | string | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row2.Driver.FanSpeed | uint8 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row2.Driver.Temperature | float | 100 |
        | Vehicle.Cabin.HVAC.Station.Row2.Passenger.AirDistribution | string | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row2.Passenger.FanSpeed | uint8 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row2.Passenger.Temperature | float | 100 |
        | Vehicle.Cabin.HVAC.Station.Row3.Driver.AirDistribution | string | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row3.Driver.FanSpeed | uint8 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row3.Driver.Temperature | float | 100 |
        | Vehicle.Cabin.HVAC.Station.Row3.Passenger.AirDistribution | string | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row3.Passenger.FanSpeed | uint8 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row3.Passenger.Temperature | float | 100 |
        | Vehicle.Cabin.HVAC.Station.Row4.Driver.AirDistribution | string | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row4.Driver.FanSpeed | uint8 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row4.Driver.Temperature | float | 100 |
        | Vehicle.Cabin.HVAC.Station.Row4.Passenger.AirDistribution | string | MIDDLE |
        | Vehicle.Cabin.HVAC.Station.Row4.Passenger.FanSpeed | uint8 | 100 |
        | Vehicle.Cabin.HVAC.Station.Row4.Passenger.Temperature | float | 100 |
        | Vehicle.Cabin.IsAutoPowerOptimize | bool | true |
        | Vehicle.Cabin.IsWindowChildLockEngaged | bool | true |
        | Vehicle.Cabin.Light.DomeLight.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.DomeLight.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.DomeLight.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.IsGloveBoxOn | bool | true |
        | Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.IsLightOn | bool | true |
        | Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.Color | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.Intensity | uint8 | 100 |
        | Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.IsLightOn | bool | true |
        | Vehicle.Cabin.PowerOptimizeLevel | uint8 | 10 |
        | Vehicle.Cabin.RearShade.IsOpen | bool | true |
        | Vehicle.Cabin.RearShade.Position | uint8 | 100 |
        | Vehicle.Cabin.RearviewMirror.DimmingLevel | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Lumbar.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Lumbar.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Recline | float | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.SideBolster.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Headrest.Angle | float | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Headrest.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Heater | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Massage | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Position | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.SeatBeltHeight | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Seating.Length | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Tilt | float | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Ventilator | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.Lumbar.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.Lumbar.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.Recline | float | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.SideBolster.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Headrest.Angle | float | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Headrest.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Heater | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Height | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Massage | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Position | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.SeatBeltHeight | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Seating.Length | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Tilt | float | 100 |
        | Vehicle.Cabin.Seat.Row1.Middle.Ventilator | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Lumbar.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Lumbar.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Recline | float | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.SideBolster.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Headrest.Angle | float | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Headrest.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Heater | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Height | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Massage | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Position | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.SeatBeltHeight | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Seating.Length | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Tilt | float | 100 |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Ventilator | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Lumbar.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Lumbar.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Recline | float | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.SideBolster.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Headrest.Angle | float | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Headrest.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Heater | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Height | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Massage | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Position | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.SeatBeltHeight | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Seating.Length | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Tilt | float | 100 |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Ventilator | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.Lumbar.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.Lumbar.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.Recline | float | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.SideBolster.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Headrest.Angle | float | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Headrest.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Heater | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Height | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Massage | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Position | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.SeatBeltHeight | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Seating.Length | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Tilt | float | 100 |
        | Vehicle.Cabin.Seat.Row2.Middle.Ventilator | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Lumbar.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Lumbar.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Recline | float | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.SideBolster.Support | float | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Headrest.Angle | float | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Headrest.Height | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Heater | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Height | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Massage | uint8 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Position | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.SeatBeltHeight | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Seating.Length | uint16 | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Tilt | float | 100 |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Ventilator | uint8 | 100 |
        | Vehicle.Cabin.Sunroof.Shade.IsOpen | bool | true |
        | Vehicle.Cabin.Sunroof.Shade.Position | uint8 | 100 |
        | Vehicle.Cabin.Sunroof.Slide | uint8 | 100 |
        | Vehicle.Cabin.Sunroof.Tilt | uint8 | 100 |
        | Vehicle.Chassis.ParkingBrake.IsAutoApplyEnabled | bool | true |
        | Vehicle.Chassis.ParkingBrake.IsEngaged | bool | true |
        | Vehicle.Chassis.SteeringWheel.Extension | uint8 | 100 |
        | Vehicle.Chassis.SteeringWheel.Heating | uint8 | 100 |
        | Vehicle.Chassis.SteeringWheel.Tilt | uint8 | 100 |
        | Vehicle.IsAutoPowerOptimize | bool | true |
        | Vehicle.PowerOptimizeLevel | uint8 | 10 |
        | Vehicle.Powertrain.FuelSystem.IsFuelPortFlapOpen | bool | true |
        | Vehicle.Powertrain.IsAutoPowerOptimize | bool | true |
        | Vehicle.Powertrain.PowerOptimizeLevel | uint8 | 10 |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargeLimit | uint8 | 100 |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.AnyPosition.IsChargingCableLocked | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.AnyPosition.IsFlapOpen | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontLeft.IsChargingCableLocked | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontLeft.IsFlapOpen | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontMiddle.IsChargingCableLocked | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontMiddle.IsFlapOpen | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontRight.IsChargingCableLocked | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontRight.IsFlapOpen | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearLeft.IsChargingCableLocked | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearLeft.IsFlapOpen | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearMiddle.IsChargingCableLocked | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearMiddle.IsFlapOpen | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearRight.IsChargingCableLocked | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearRight.IsFlapOpen | bool | true |
        | Vehicle.Powertrain.TractionBattery.Charging.StartStopCharging | string | STOP |
        | Vehicle.Powertrain.TractionBattery.Charging.Timer.Mode | string | START_TIME |
        | Vehicle.Powertrain.TractionBattery.Charging.Timer.Time | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.RequestedMode | string | FAST_CHARGING_PREPARATION |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.StartTime | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.TargetTemperature | float | 100 |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.TargetTime | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.RequestedMode | string | FAST_CHARGING_PREPARATION |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.StartTime | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.TargetTemperature | float | 100 |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.TargetTime | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.RequestedMode | string | FAST_CHARGING_PREPARATION |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.StartTime | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.TargetTemperature | float | 100 |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.TargetTime | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.RequestedMode | string | FAST_CHARGING_PREPARATION |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.StartTime | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.TargetTemperature | float | 100 |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.TargetTime | string | THIS_IS_B_TEST_STRING |
        | Vehicle.Powertrain.Transmission.ClutchEngagement | float | 100 |
        | Vehicle.Powertrain.Transmission.DiffLockCenterEngagement | float | 100 |
        | Vehicle.Powertrain.Transmission.DiffLockFrontEngagement | float | 100 |
        | Vehicle.Powertrain.Transmission.DiffLockRearEngagement | float | 100 |
        | Vehicle.Powertrain.Transmission.GearChangeMode | string | AUTOMATIC |
        | Vehicle.Powertrain.Transmission.IsElectricalPowertrainEngaged | bool | true |
        | Vehicle.Powertrain.Transmission.IsLowRangeEngaged | bool | true |
        | Vehicle.Powertrain.Transmission.IsParkLockEngaged | bool | true |
        | Vehicle.Powertrain.Transmission.PerformanceMode | string | SPORT |
        | Vehicle.Powertrain.Transmission.SelectedGear | int8 | -100 |
        | Vehicle.Powertrain.Transmission.TorqueDistribution | float | 100 |
        | Vehicle.TripMeterReading | float | 100 |

    @CleanupRestoreNetworkforSet
    Scenario Outline: Set requests are failed when the network communication failure
        When network failure of <network_failure> is injected for set
        Then an attempt to set the actuator signal <path> to <datatype> <checked_value> is failed

    Examples:
        | path                                                     | datatype      | checked_value       | network_failure       |
        | Vehicle.ADAS.ABS.IsEnabled | bool | true | timeout |
        | Vehicle.ADAS.ABS.IsEnabled | bool | true | reject  |
        | Vehicle.ADAS.AdaptiveCruiseControl.DistanceSet | string | DIST_2 | timeout |
        | Vehicle.ADAS.AdaptiveCruiseControl.DistanceSet | string | DIST_2 | reject  |
        | Vehicle.ADAS.AdaptiveCruiseControl.IsActive | bool | true | timeout |
        | Vehicle.ADAS.AdaptiveCruiseControl.IsActive | bool | true | reject  |
        | Vehicle.ADAS.AdaptiveCruiseControl.IsEnabled | bool | true | timeout |
        | Vehicle.ADAS.AdaptiveCruiseControl.IsEnabled | bool | true | reject  |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | 100 | timeout |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | 100 | reject  |
        | Vehicle.ADAS.DMS.IsEnabled | bool | true | timeout |
        | Vehicle.ADAS.DMS.IsEnabled | bool | true | reject  |
        | Vehicle.ADAS.EBA.IsEnabled | bool | true | timeout |
        | Vehicle.ADAS.EBA.IsEnabled | bool | true | reject  |
        | Vehicle.ADAS.EBD.IsEnabled | bool | true | timeout |
        | Vehicle.ADAS.EBD.IsEnabled | bool | true | reject  |
        | Vehicle.ADAS.ESC.IsEnabled | bool | true | timeout |
        | Vehicle.ADAS.ESC.IsEnabled | bool | true | reject  |
        | Vehicle.ADAS.IsAutoPowerOptimize | bool | true | timeout |
        | Vehicle.ADAS.IsAutoPowerOptimize | bool | true | reject  |
        | Vehicle.ADAS.LaneDepartureDetection.IsEnabled | bool | true | timeout |
        | Vehicle.ADAS.LaneDepartureDetection.IsEnabled | bool | true | reject  |
        | Vehicle.ADAS.ObstacleDetection.IsEnabled | bool | true | timeout |
        | Vehicle.ADAS.ObstacleDetection.IsEnabled | bool | true | reject  |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 10 | timeout |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 10 | reject  |
        | Vehicle.ADAS.TCS.IsEnabled | bool | true | timeout |
        | Vehicle.ADAS.TCS.IsEnabled | bool | true | reject  |
        | Vehicle.Body.Hood.IsLocked | bool | true | timeout |
        | Vehicle.Body.Hood.IsLocked | bool | true | reject  |
        | Vehicle.Body.Hood.IsOpen | bool | true | timeout |
        | Vehicle.Body.Hood.IsOpen | bool | true | reject  |
        | Vehicle.Body.Hood.Position | uint8 | 100 | timeout |
        | Vehicle.Body.Hood.Position | uint8 | 100 | reject  |
        | Vehicle.Body.Horn.IsActive | bool | true | timeout |
        | Vehicle.Body.Horn.IsActive | bool | true | reject  |
        | Vehicle.Body.IsAutoPowerOptimize | bool | true | timeout |
        | Vehicle.Body.IsAutoPowerOptimize | bool | true | reject  |
        | Vehicle.Body.Lights.Backup.IsOn | bool | true | timeout |
        | Vehicle.Body.Lights.Backup.IsOn | bool | true | reject  |
        | Vehicle.Body.Lights.Beam.High.IsOn | bool | true | timeout |
        | Vehicle.Body.Lights.Beam.High.IsOn | bool | true | reject  |
        | Vehicle.Body.Lights.Beam.Low.IsOn | bool | true | timeout |
        | Vehicle.Body.Lights.Beam.Low.IsOn | bool | true | reject  |
        | Vehicle.Body.Lights.Brake.IsActive | string | ACTIVE | timeout |
        | Vehicle.Body.Lights.Brake.IsActive | string | ACTIVE | reject  |
        | Vehicle.Body.Lights.DirectionIndicator.Left.IsSignaling | bool | true | timeout |
        | Vehicle.Body.Lights.DirectionIndicator.Left.IsSignaling | bool | true | reject  |
        | Vehicle.Body.Lights.DirectionIndicator.Right.IsSignaling | bool | true | timeout |
        | Vehicle.Body.Lights.DirectionIndicator.Right.IsSignaling | bool | true | reject  |
        | Vehicle.Body.Lights.Fog.Front.IsOn | bool | true | timeout |
        | Vehicle.Body.Lights.Fog.Front.IsOn | bool | true | reject  |
        | Vehicle.Body.Lights.Fog.Rear.IsOn | bool | true | timeout |
        | Vehicle.Body.Lights.Fog.Rear.IsOn | bool | true | reject  |
        | Vehicle.Body.Lights.Hazard.IsSignaling | bool | true | timeout |
        | Vehicle.Body.Lights.Hazard.IsSignaling | bool | true | reject  |
        | Vehicle.Body.Lights.LicensePlate.IsOn | bool | true | timeout |
        | Vehicle.Body.Lights.LicensePlate.IsOn | bool | true | reject  |
        | Vehicle.Body.Lights.Parking.IsOn | bool | true | timeout |
        | Vehicle.Body.Lights.Parking.IsOn | bool | true | reject  |
        | Vehicle.Body.Lights.Running.IsOn | bool | true | timeout |
        | Vehicle.Body.Lights.Running.IsOn | bool | true | reject  |
        | Vehicle.Body.Mirrors.DriverSide.IsFolded | bool | true | timeout |
        | Vehicle.Body.Mirrors.DriverSide.IsFolded | bool | true | reject  |
        | Vehicle.Body.Mirrors.DriverSide.IsHeatingOn | bool | true | timeout |
        | Vehicle.Body.Mirrors.DriverSide.IsHeatingOn | bool | true | reject  |
        | Vehicle.Body.Mirrors.DriverSide.IsLocked | bool | true | timeout |
        | Vehicle.Body.Mirrors.DriverSide.IsLocked | bool | true | reject  |
        | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | -100 | timeout |
        | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | -100 | reject  |
        | Vehicle.Body.Mirrors.DriverSide.Tilt | int8 | -100 | timeout |
        | Vehicle.Body.Mirrors.DriverSide.Tilt | int8 | -100 | reject  |
        | Vehicle.Body.Mirrors.PassengerSide.IsFolded | bool | true | timeout |
        | Vehicle.Body.Mirrors.PassengerSide.IsFolded | bool | true | reject  |
        | Vehicle.Body.Mirrors.PassengerSide.IsHeatingOn | bool | true | timeout |
        | Vehicle.Body.Mirrors.PassengerSide.IsHeatingOn | bool | true | reject  |
        | Vehicle.Body.Mirrors.PassengerSide.IsLocked | bool | true | timeout |
        | Vehicle.Body.Mirrors.PassengerSide.IsLocked | bool | true | reject  |
        | Vehicle.Body.Mirrors.PassengerSide.Pan | int8 | -100 | timeout |
        | Vehicle.Body.Mirrors.PassengerSide.Pan | int8 | -100 | reject  |
        | Vehicle.Body.Mirrors.PassengerSide.Tilt | int8 | -100 | timeout |
        | Vehicle.Body.Mirrors.PassengerSide.Tilt | int8 | -100 | reject  |
        | Vehicle.Body.PowerOptimizeLevel | uint8 | 10 | timeout |
        | Vehicle.Body.PowerOptimizeLevel | uint8 | 10 | reject  |
        | Vehicle.Body.RearMainSpoilerPosition | float | 100 | timeout |
        | Vehicle.Body.RearMainSpoilerPosition | float | 100 | reject  |
        | Vehicle.Body.Trunk.Front.IsLightOn | bool | true | timeout |
        | Vehicle.Body.Trunk.Front.IsLightOn | bool | true | reject  |
        | Vehicle.Body.Trunk.Front.IsLocked | bool | true | timeout |
        | Vehicle.Body.Trunk.Front.IsLocked | bool | true | reject  |
        | Vehicle.Body.Trunk.Front.IsOpen | bool | true | timeout |
        | Vehicle.Body.Trunk.Front.IsOpen | bool | true | reject  |
        | Vehicle.Body.Trunk.Front.Position | uint8 | 100 | timeout |
        | Vehicle.Body.Trunk.Front.Position | uint8 | 100 | reject  |
        | Vehicle.Body.Trunk.Rear.IsLightOn | bool | true | timeout |
        | Vehicle.Body.Trunk.Rear.IsLightOn | bool | true | reject  |
        | Vehicle.Body.Trunk.Rear.IsLocked | bool | true | timeout |
        | Vehicle.Body.Trunk.Rear.IsLocked | bool | true | reject  |
        | Vehicle.Body.Trunk.Rear.IsOpen | bool | true | timeout |
        | Vehicle.Body.Trunk.Rear.IsOpen | bool | true | reject  |
        | Vehicle.Body.Trunk.Rear.Position | uint8 | 100 | timeout |
        | Vehicle.Body.Trunk.Rear.Position | uint8 | 100 | reject  |
        | Vehicle.Body.Windshield.Front.IsHeatingOn | bool | true | timeout |
        | Vehicle.Body.Windshield.Front.IsHeatingOn | bool | true | reject  |
        | Vehicle.Body.Windshield.Front.Wiping.Intensity | uint8 | 100 | timeout |
        | Vehicle.Body.Windshield.Front.Wiping.Intensity | uint8 | 100 | reject  |
        | Vehicle.Body.Windshield.Front.Wiping.Mode | string | SLOW | timeout |
        | Vehicle.Body.Windshield.Front.Wiping.Mode | string | SLOW | reject  |
        | Vehicle.Body.Windshield.Front.Wiping.System.Frequency | uint8 | 100 | timeout |
        | Vehicle.Body.Windshield.Front.Wiping.System.Frequency | uint8 | 100 | reject  |
        | Vehicle.Body.Windshield.Front.Wiping.System.Mode | string | WIPE | timeout |
        | Vehicle.Body.Windshield.Front.Wiping.System.Mode | string | WIPE | reject  |
        | Vehicle.Body.Windshield.Front.Wiping.System.Position | uint8 | 100 | timeout |
        | Vehicle.Body.Windshield.Front.Wiping.System.Position | uint8 | 100 | reject  |
        | Vehicle.Body.Windshield.Rear.IsHeatingOn | bool | true | timeout |
        | Vehicle.Body.Windshield.Rear.IsHeatingOn | bool | true | reject  |
        | Vehicle.Body.Windshield.Rear.Wiping.Intensity | uint8 | 100 | timeout |
        | Vehicle.Body.Windshield.Rear.Wiping.Intensity | uint8 | 100 | reject  |
        | Vehicle.Body.Windshield.Rear.Wiping.Mode | string | SLOW | timeout |
        | Vehicle.Body.Windshield.Rear.Wiping.Mode | string | SLOW | reject  |
        | Vehicle.Body.Windshield.Rear.Wiping.System.Frequency | uint8 | 100 | timeout |
        | Vehicle.Body.Windshield.Rear.Wiping.System.Frequency | uint8 | 100 | reject  |
        | Vehicle.Body.Windshield.Rear.Wiping.System.Mode | string | WIPE | timeout |
        | Vehicle.Body.Windshield.Rear.Wiping.System.Mode | string | WIPE | reject  |
        | Vehicle.Body.Windshield.Rear.Wiping.System.Position | uint8 | 100 | timeout |
        | Vehicle.Body.Windshield.Rear.Wiping.System.Position | uint8 | 100 | reject  |
        | Vehicle.Cabin.Convertible.IsOpen | bool | true | timeout |
        | Vehicle.Cabin.Convertible.IsOpen | bool | true | reject  |
        | Vehicle.Cabin.Convertible.Position | uint8 | 100 | timeout |
        | Vehicle.Cabin.Convertible.Position | uint8 | 100 | reject  |
        | Vehicle.Cabin.Door.Row1.DriverSide.IsLocked | bool | true | timeout |
        | Vehicle.Cabin.Door.Row1.DriverSide.IsLocked | bool | true | reject  |
        | Vehicle.Cabin.Door.Row1.DriverSide.IsOpen | bool | true | timeout |
        | Vehicle.Cabin.Door.Row1.DriverSide.IsOpen | bool | true | reject  |
        | Vehicle.Cabin.Door.Row1.DriverSide.Position | uint8 | 100 | timeout |
        | Vehicle.Cabin.Door.Row1.DriverSide.Position | uint8 | 100 | reject  |
        | Vehicle.Cabin.Door.Row1.DriverSide.Shade.IsOpen | bool | true | timeout |
        | Vehicle.Cabin.Door.Row1.DriverSide.Shade.IsOpen | bool | true | reject  |
        | Vehicle.Cabin.Door.Row1.DriverSide.Shade.Position | uint8 | 100 | timeout |
        | Vehicle.Cabin.Door.Row1.DriverSide.Shade.Position | uint8 | 100 | reject  |
        | Vehicle.Cabin.Door.Row1.DriverSide.Window.IsOpen | bool | true | timeout |
        | Vehicle.Cabin.Door.Row1.DriverSide.Window.IsOpen | bool | true | reject  |
        | Vehicle.Cabin.Door.Row1.DriverSide.Window.Position | uint8 | 100 | timeout |
        | Vehicle.Cabin.Door.Row1.DriverSide.Window.Position | uint8 | 100 | reject  |
        | Vehicle.Cabin.Door.Row1.PassengerSide.IsLocked | bool | true | timeout |
        | Vehicle.Cabin.Door.Row1.PassengerSide.IsLocked | bool | true | reject  |
        | Vehicle.Cabin.Door.Row1.PassengerSide.IsOpen | bool | true | timeout |
        | Vehicle.Cabin.Door.Row1.PassengerSide.IsOpen | bool | true | reject  |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Position | uint8 | 100 | timeout |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Position | uint8 | 100 | reject  |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Shade.IsOpen | bool | true | timeout |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Shade.IsOpen | bool | true | reject  |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Shade.Position | uint8 | 100 | timeout |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Shade.Position | uint8 | 100 | reject  |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Window.IsOpen | bool | true | timeout |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Window.IsOpen | bool | true | reject  |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Window.Position | uint8 | 100 | timeout |
        | Vehicle.Cabin.Door.Row1.PassengerSide.Window.Position | uint8 | 100 | reject  |
        | Vehicle.Cabin.Door.Row2.DriverSide.IsLocked | bool | true | timeout |
        | Vehicle.Cabin.Door.Row2.DriverSide.IsLocked | bool | true | reject  |
        | Vehicle.Cabin.Door.Row2.DriverSide.IsOpen | bool | true | timeout |
        | Vehicle.Cabin.Door.Row2.DriverSide.IsOpen | bool | true | reject  |
        | Vehicle.Cabin.Door.Row2.DriverSide.Position | uint8 | 100 | timeout |
        | Vehicle.Cabin.Door.Row2.DriverSide.Position | uint8 | 100 | reject  |
        | Vehicle.Cabin.Door.Row2.DriverSide.Shade.IsOpen | bool | true | timeout |
        | Vehicle.Cabin.Door.Row2.DriverSide.Shade.IsOpen | bool | true | reject  |
        | Vehicle.Cabin.Door.Row2.DriverSide.Shade.Position | uint8 | 100 | timeout |
        | Vehicle.Cabin.Door.Row2.DriverSide.Shade.Position | uint8 | 100 | reject  |
        | Vehicle.Cabin.Door.Row2.DriverSide.Window.IsOpen | bool | true | timeout |
        | Vehicle.Cabin.Door.Row2.DriverSide.Window.IsOpen | bool | true | reject  |
        | Vehicle.Cabin.Door.Row2.DriverSide.Window.Position | uint8 | 100 | timeout |
        | Vehicle.Cabin.Door.Row2.DriverSide.Window.Position | uint8 | 100 | reject  |
        | Vehicle.Cabin.Door.Row2.PassengerSide.IsLocked | bool | true | timeout |
        | Vehicle.Cabin.Door.Row2.PassengerSide.IsLocked | bool | true | reject  |
        | Vehicle.Cabin.Door.Row2.PassengerSide.IsOpen | bool | true | timeout |
        | Vehicle.Cabin.Door.Row2.PassengerSide.IsOpen | bool | true | reject  |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Position | uint8 | 100 | timeout |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Position | uint8 | 100 | reject  |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Shade.IsOpen | bool | true | timeout |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Shade.IsOpen | bool | true | reject  |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Shade.Position | uint8 | 100 | timeout |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Shade.Position | uint8 | 100 | reject  |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Window.IsOpen | bool | true | timeout |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Window.IsOpen | bool | true | reject  |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Window.Position | uint8 | 100 | timeout |
        | Vehicle.Cabin.Door.Row2.PassengerSide.Window.Position | uint8 | 100 | reject  |
        | Vehicle.Cabin.HVAC.IsAirConditioningActive | bool | true | timeout |
        | Vehicle.Cabin.HVAC.IsAirConditioningActive | bool | true | reject  |
        | Vehicle.Cabin.HVAC.IsAutoPowerOptimize | bool | true | timeout |
        | Vehicle.Cabin.HVAC.IsAutoPowerOptimize | bool | true | reject  |
        | Vehicle.Cabin.HVAC.IsFrontDefrosterActive | bool | true | timeout |
        | Vehicle.Cabin.HVAC.IsFrontDefrosterActive | bool | true | reject  |
        | Vehicle.Cabin.HVAC.IsRearDefrosterActive | bool | true | timeout |
        | Vehicle.Cabin.HVAC.IsRearDefrosterActive | bool | true | reject  |
        | Vehicle.Cabin.HVAC.IsRecirculationActive | bool | true | timeout |
        | Vehicle.Cabin.HVAC.IsRecirculationActive | bool | true | reject  |
        | Vehicle.Cabin.HVAC.PowerOptimizeLevel | uint8 | 10 | timeout |
        | Vehicle.Cabin.HVAC.PowerOptimizeLevel | uint8 | 10 | reject  |
        | Vehicle.Cabin.HVAC.Station.Row1.Driver.AirDistribution | string | MIDDLE | timeout |
        | Vehicle.Cabin.HVAC.Station.Row1.Driver.AirDistribution | string | MIDDLE | reject  |
        | Vehicle.Cabin.HVAC.Station.Row1.Driver.FanSpeed | uint8 | 100 | timeout |
        | Vehicle.Cabin.HVAC.Station.Row1.Driver.FanSpeed | uint8 | 100 | reject  |
        | Vehicle.Cabin.HVAC.Station.Row1.Driver.Temperature | float | 100 | timeout |
        | Vehicle.Cabin.HVAC.Station.Row1.Driver.Temperature | float | 100 | reject  |
        | Vehicle.Cabin.HVAC.Station.Row1.Passenger.AirDistribution | string | MIDDLE | timeout |
        | Vehicle.Cabin.HVAC.Station.Row1.Passenger.AirDistribution | string | MIDDLE | reject  |
        | Vehicle.Cabin.HVAC.Station.Row1.Passenger.FanSpeed | uint8 | 100 | timeout |
        | Vehicle.Cabin.HVAC.Station.Row1.Passenger.FanSpeed | uint8 | 100 | reject  |
        | Vehicle.Cabin.HVAC.Station.Row1.Passenger.Temperature | float | 100 | timeout |
        | Vehicle.Cabin.HVAC.Station.Row1.Passenger.Temperature | float | 100 | reject  |
        | Vehicle.Cabin.HVAC.Station.Row2.Driver.AirDistribution | string | MIDDLE | timeout |
        | Vehicle.Cabin.HVAC.Station.Row2.Driver.AirDistribution | string | MIDDLE | reject  |
        | Vehicle.Cabin.HVAC.Station.Row2.Driver.FanSpeed | uint8 | 100 | timeout |
        | Vehicle.Cabin.HVAC.Station.Row2.Driver.FanSpeed | uint8 | 100 | reject  |
        | Vehicle.Cabin.HVAC.Station.Row2.Driver.Temperature | float | 100 | timeout |
        | Vehicle.Cabin.HVAC.Station.Row2.Driver.Temperature | float | 100 | reject  |
        | Vehicle.Cabin.HVAC.Station.Row2.Passenger.AirDistribution | string | MIDDLE | timeout |
        | Vehicle.Cabin.HVAC.Station.Row2.Passenger.AirDistribution | string | MIDDLE | reject  |
        | Vehicle.Cabin.HVAC.Station.Row2.Passenger.FanSpeed | uint8 | 100 | timeout |
        | Vehicle.Cabin.HVAC.Station.Row2.Passenger.FanSpeed | uint8 | 100 | reject  |
        | Vehicle.Cabin.HVAC.Station.Row2.Passenger.Temperature | float | 100 | timeout |
        | Vehicle.Cabin.HVAC.Station.Row2.Passenger.Temperature | float | 100 | reject  |
        | Vehicle.Cabin.HVAC.Station.Row3.Driver.AirDistribution | string | MIDDLE | timeout |
        | Vehicle.Cabin.HVAC.Station.Row3.Driver.AirDistribution | string | MIDDLE | reject  |
        | Vehicle.Cabin.HVAC.Station.Row3.Driver.FanSpeed | uint8 | 100 | timeout |
        | Vehicle.Cabin.HVAC.Station.Row3.Driver.FanSpeed | uint8 | 100 | reject  |
        | Vehicle.Cabin.HVAC.Station.Row3.Driver.Temperature | float | 100 | timeout |
        | Vehicle.Cabin.HVAC.Station.Row3.Driver.Temperature | float | 100 | reject  |
        | Vehicle.Cabin.HVAC.Station.Row3.Passenger.AirDistribution | string | MIDDLE | timeout |
        | Vehicle.Cabin.HVAC.Station.Row3.Passenger.AirDistribution | string | MIDDLE | reject  |
        | Vehicle.Cabin.HVAC.Station.Row3.Passenger.FanSpeed | uint8 | 100 | timeout |
        | Vehicle.Cabin.HVAC.Station.Row3.Passenger.FanSpeed | uint8 | 100 | reject  |
        | Vehicle.Cabin.HVAC.Station.Row3.Passenger.Temperature | float | 100 | timeout |
        | Vehicle.Cabin.HVAC.Station.Row3.Passenger.Temperature | float | 100 | reject  |
        | Vehicle.Cabin.HVAC.Station.Row4.Driver.AirDistribution | string | MIDDLE | timeout |
        | Vehicle.Cabin.HVAC.Station.Row4.Driver.AirDistribution | string | MIDDLE | reject  |
        | Vehicle.Cabin.HVAC.Station.Row4.Driver.FanSpeed | uint8 | 100 | timeout |
        | Vehicle.Cabin.HVAC.Station.Row4.Driver.FanSpeed | uint8 | 100 | reject  |
        | Vehicle.Cabin.HVAC.Station.Row4.Driver.Temperature | float | 100 | timeout |
        | Vehicle.Cabin.HVAC.Station.Row4.Driver.Temperature | float | 100 | reject  |
        | Vehicle.Cabin.HVAC.Station.Row4.Passenger.AirDistribution | string | MIDDLE | timeout |
        | Vehicle.Cabin.HVAC.Station.Row4.Passenger.AirDistribution | string | MIDDLE | reject  |
        | Vehicle.Cabin.HVAC.Station.Row4.Passenger.FanSpeed | uint8 | 100 | timeout |
        | Vehicle.Cabin.HVAC.Station.Row4.Passenger.FanSpeed | uint8 | 100 | reject  |
        | Vehicle.Cabin.HVAC.Station.Row4.Passenger.Temperature | float | 100 | timeout |
        | Vehicle.Cabin.HVAC.Station.Row4.Passenger.Temperature | float | 100 | reject  |
        | Vehicle.Cabin.IsAutoPowerOptimize | bool | true | timeout |
        | Vehicle.Cabin.IsAutoPowerOptimize | bool | true | reject  |
        | Vehicle.Cabin.IsWindowChildLockEngaged | bool | true | timeout |
        | Vehicle.Cabin.IsWindowChildLockEngaged | bool | true | reject  |
        | Vehicle.Cabin.Light.DomeLight.Color | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Cabin.Light.DomeLight.Color | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Cabin.Light.DomeLight.Intensity | uint8 | 100 | timeout |
        | Vehicle.Cabin.Light.DomeLight.Intensity | uint8 | 100 | reject  |
        | Vehicle.Cabin.Light.DomeLight.IsLightOn | bool | true | timeout |
        | Vehicle.Cabin.Light.DomeLight.IsLightOn | bool | true | reject  |
        | Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.Color | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.Color | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.Intensity | uint8 | 100 | timeout |
        | Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.Intensity | uint8 | 100 | reject  |
        | Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.IsLightOn | bool | true | timeout |
        | Vehicle.Cabin.Light.FootwellLight.Row1.DriverSide.IsLightOn | bool | true | reject  |
        | Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.Color | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.Color | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.Intensity | uint8 | 100 | timeout |
        | Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.Intensity | uint8 | 100 | reject  |
        | Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.IsLightOn | bool | true | timeout |
        | Vehicle.Cabin.Light.FootwellLight.Row1.PassengerSide.IsLightOn | bool | true | reject  |
        | Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.Color | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.Color | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.Intensity | uint8 | 100 | timeout |
        | Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.Intensity | uint8 | 100 | reject  |
        | Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.IsLightOn | bool | true | timeout |
        | Vehicle.Cabin.Light.FootwellLight.Row2.DriverSide.IsLightOn | bool | true | reject  |
        | Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.Color | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.Color | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.Intensity | uint8 | 100 | timeout |
        | Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.Intensity | uint8 | 100 | reject  |
        | Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.IsLightOn | bool | true | timeout |
        | Vehicle.Cabin.Light.FootwellLight.Row2.PassengerSide.IsLightOn | bool | true | reject  |
        | Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.Color | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.Color | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.Intensity | uint8 | 100 | timeout |
        | Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.Intensity | uint8 | 100 | reject  |
        | Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.IsLightOn | bool | true | timeout |
        | Vehicle.Cabin.Light.FootwellLight.Row3.DriverSide.IsLightOn | bool | true | reject  |
        | Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.Color | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.Color | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.Intensity | uint8 | 100 | timeout |
        | Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.Intensity | uint8 | 100 | reject  |
        | Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.IsLightOn | bool | true | timeout |
        | Vehicle.Cabin.Light.FootwellLight.Row3.PassengerSide.IsLightOn | bool | true | reject  |
        | Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.Color | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.Color | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.Intensity | uint8 | 100 | timeout |
        | Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.Intensity | uint8 | 100 | reject  |
        | Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.IsLightOn | bool | true | timeout |
        | Vehicle.Cabin.Light.FootwellLight.Row4.DriverSide.IsLightOn | bool | true | reject  |
        | Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.Color | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.Color | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.Intensity | uint8 | 100 | timeout |
        | Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.Intensity | uint8 | 100 | reject  |
        | Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.IsLightOn | bool | true | timeout |
        | Vehicle.Cabin.Light.FootwellLight.Row4.PassengerSide.IsLightOn | bool | true | reject  |
        | Vehicle.Cabin.Light.IsGloveBoxOn | bool | true | timeout |
        | Vehicle.Cabin.Light.IsGloveBoxOn | bool | true | reject  |
        | Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.Color | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.Color | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.Intensity | uint8 | 100 | timeout |
        | Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.Intensity | uint8 | 100 | reject  |
        | Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.IsLightOn | bool | true | timeout |
        | Vehicle.Cabin.Light.Spotlight.Row1.DriverSide.IsLightOn | bool | true | reject  |
        | Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.Color | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.Color | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.Intensity | uint8 | 100 | timeout |
        | Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.Intensity | uint8 | 100 | reject  |
        | Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.IsLightOn | bool | true | timeout |
        | Vehicle.Cabin.Light.Spotlight.Row1.PassengerSide.IsLightOn | bool | true | reject  |
        | Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.Color | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.Color | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.Intensity | uint8 | 100 | timeout |
        | Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.Intensity | uint8 | 100 | reject  |
        | Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.IsLightOn | bool | true | timeout |
        | Vehicle.Cabin.Light.Spotlight.Row2.DriverSide.IsLightOn | bool | true | reject  |
        | Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.Color | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.Color | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.Intensity | uint8 | 100 | timeout |
        | Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.Intensity | uint8 | 100 | reject  |
        | Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.IsLightOn | bool | true | timeout |
        | Vehicle.Cabin.Light.Spotlight.Row2.PassengerSide.IsLightOn | bool | true | reject  |
        | Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.Color | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.Color | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.Intensity | uint8 | 100 | timeout |
        | Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.Intensity | uint8 | 100 | reject  |
        | Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.IsLightOn | bool | true | timeout |
        | Vehicle.Cabin.Light.Spotlight.Row3.DriverSide.IsLightOn | bool | true | reject  |
        | Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.Color | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.Color | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.Intensity | uint8 | 100 | timeout |
        | Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.Intensity | uint8 | 100 | reject  |
        | Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.IsLightOn | bool | true | timeout |
        | Vehicle.Cabin.Light.Spotlight.Row3.PassengerSide.IsLightOn | bool | true | reject  |
        | Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.Color | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.Color | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.Intensity | uint8 | 100 | timeout |
        | Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.Intensity | uint8 | 100 | reject  |
        | Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.IsLightOn | bool | true | timeout |
        | Vehicle.Cabin.Light.Spotlight.Row4.DriverSide.IsLightOn | bool | true | reject  |
        | Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.Color | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.Color | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.Intensity | uint8 | 100 | timeout |
        | Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.Intensity | uint8 | 100 | reject  |
        | Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.IsLightOn | bool | true | timeout |
        | Vehicle.Cabin.Light.Spotlight.Row4.PassengerSide.IsLightOn | bool | true | reject  |
        | Vehicle.Cabin.PowerOptimizeLevel | uint8 | 10 | timeout |
        | Vehicle.Cabin.PowerOptimizeLevel | uint8 | 10 | reject  |
        | Vehicle.Cabin.RearShade.IsOpen | bool | true | timeout |
        | Vehicle.Cabin.RearShade.IsOpen | bool | true | reject  |
        | Vehicle.Cabin.RearShade.Position | uint8 | 100 | timeout |
        | Vehicle.Cabin.RearShade.Position | uint8 | 100 | reject  |
        | Vehicle.Cabin.RearviewMirror.DimmingLevel | uint8 | 100 | timeout |
        | Vehicle.Cabin.RearviewMirror.DimmingLevel | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Lumbar.Height | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Lumbar.Height | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Lumbar.Support | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Lumbar.Support | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Recline | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.Recline | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.SideBolster.Support | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Backrest.SideBolster.Support | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Headrest.Angle | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Headrest.Angle | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Headrest.Height | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Headrest.Height | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Heater | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Heater | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Massage | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Massage | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Position | uint16 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Position | uint16 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.DriverSide.SeatBeltHeight | uint16 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.DriverSide.SeatBeltHeight | uint16 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Seating.Length | uint16 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Seating.Length | uint16 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Tilt | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Tilt | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Ventilator | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Ventilator | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.Lumbar.Height | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.Lumbar.Height | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.Lumbar.Support | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.Lumbar.Support | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.Recline | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.Recline | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.SideBolster.Support | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.Middle.Backrest.SideBolster.Support | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.Middle.Headrest.Angle | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.Middle.Headrest.Angle | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.Middle.Headrest.Height | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.Middle.Headrest.Height | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.Middle.Heater | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.Middle.Heater | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.Middle.Height | uint16 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.Middle.Height | uint16 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.Middle.Massage | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.Middle.Massage | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.Middle.Position | uint16 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.Middle.Position | uint16 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.Middle.SeatBeltHeight | uint16 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.Middle.SeatBeltHeight | uint16 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.Middle.Seating.Length | uint16 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.Middle.Seating.Length | uint16 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.Middle.Tilt | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.Middle.Tilt | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.Middle.Ventilator | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.Middle.Ventilator | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Lumbar.Height | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Lumbar.Height | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Lumbar.Support | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Lumbar.Support | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Recline | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.Recline | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.SideBolster.Support | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Backrest.SideBolster.Support | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Headrest.Angle | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Headrest.Angle | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Headrest.Height | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Headrest.Height | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Heater | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Heater | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Height | uint16 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Height | uint16 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Massage | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Massage | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Position | uint16 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Position | uint16 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.SeatBeltHeight | uint16 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.SeatBeltHeight | uint16 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Seating.Length | uint16 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Seating.Length | uint16 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Tilt | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Tilt | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Ventilator | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.PassengerSide.Ventilator | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Lumbar.Height | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Lumbar.Height | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Lumbar.Support | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Lumbar.Support | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Recline | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.Recline | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.SideBolster.Support | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Backrest.SideBolster.Support | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Headrest.Angle | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Headrest.Angle | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Headrest.Height | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Headrest.Height | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Heater | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Heater | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Height | uint16 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Height | uint16 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Massage | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Massage | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Position | uint16 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Position | uint16 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.DriverSide.SeatBeltHeight | uint16 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.DriverSide.SeatBeltHeight | uint16 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Seating.Length | uint16 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Seating.Length | uint16 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Tilt | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Tilt | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Ventilator | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.DriverSide.Ventilator | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.Lumbar.Height | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.Lumbar.Height | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.Lumbar.Support | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.Lumbar.Support | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.Recline | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.Recline | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.SideBolster.Support | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.Middle.Backrest.SideBolster.Support | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.Middle.Headrest.Angle | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.Middle.Headrest.Angle | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.Middle.Headrest.Height | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.Middle.Headrest.Height | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.Middle.Heater | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.Middle.Heater | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.Middle.Height | uint16 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.Middle.Height | uint16 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.Middle.Massage | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.Middle.Massage | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.Middle.Position | uint16 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.Middle.Position | uint16 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.Middle.SeatBeltHeight | uint16 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.Middle.SeatBeltHeight | uint16 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.Middle.Seating.Length | uint16 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.Middle.Seating.Length | uint16 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.Middle.Tilt | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.Middle.Tilt | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.Middle.Ventilator | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.Middle.Ventilator | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Lumbar.Height | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Lumbar.Height | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Lumbar.Support | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Lumbar.Support | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Recline | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.Recline | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.SideBolster.Support | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Backrest.SideBolster.Support | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Headrest.Angle | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Headrest.Angle | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Headrest.Height | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Headrest.Height | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Heater | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Heater | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Height | uint16 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Height | uint16 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Massage | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Massage | uint8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Position | uint16 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Position | uint16 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.SeatBeltHeight | uint16 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.SeatBeltHeight | uint16 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Seating.Length | uint16 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Seating.Length | uint16 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Tilt | float | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Tilt | float | 100 | reject  |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Ventilator | uint8 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row2.PassengerSide.Ventilator | uint8 | 100 | reject  |
        | Vehicle.Cabin.Sunroof.Shade.IsOpen | bool | true | timeout |
        | Vehicle.Cabin.Sunroof.Shade.IsOpen | bool | true | reject  |
        | Vehicle.Cabin.Sunroof.Shade.Position | uint8 | 100 | timeout |
        | Vehicle.Cabin.Sunroof.Shade.Position | uint8 | 100 | reject  |
        | Vehicle.Cabin.Sunroof.Slide | uint8 | 100 | timeout |
        | Vehicle.Cabin.Sunroof.Slide | uint8 | 100 | reject  |
        | Vehicle.Cabin.Sunroof.Tilt | uint8 | 100 | timeout |
        | Vehicle.Cabin.Sunroof.Tilt | uint8 | 100 | reject  |
        | Vehicle.Chassis.ParkingBrake.IsAutoApplyEnabled | bool | true | timeout |
        | Vehicle.Chassis.ParkingBrake.IsAutoApplyEnabled | bool | true | reject  |
        | Vehicle.Chassis.ParkingBrake.IsEngaged | bool | true | timeout |
        | Vehicle.Chassis.ParkingBrake.IsEngaged | bool | true | reject  |
        | Vehicle.Chassis.SteeringWheel.Extension | uint8 | 100 | timeout |
        | Vehicle.Chassis.SteeringWheel.Extension | uint8 | 100 | reject  |
        | Vehicle.Chassis.SteeringWheel.Heating | uint8 | 100 | timeout |
        | Vehicle.Chassis.SteeringWheel.Heating | uint8 | 100 | reject  |
        | Vehicle.Chassis.SteeringWheel.Tilt | uint8 | 100 | timeout |
        | Vehicle.Chassis.SteeringWheel.Tilt | uint8 | 100 | reject  |
        | Vehicle.IsAutoPowerOptimize | bool | true | timeout |
        | Vehicle.IsAutoPowerOptimize | bool | true | reject  |
        | Vehicle.PowerOptimizeLevel | uint8 | 10 | timeout |
        | Vehicle.PowerOptimizeLevel | uint8 | 10 | reject  |
        | Vehicle.Powertrain.FuelSystem.IsFuelPortFlapOpen | bool | true | timeout |
        | Vehicle.Powertrain.FuelSystem.IsFuelPortFlapOpen | bool | true | reject  |
        | Vehicle.Powertrain.IsAutoPowerOptimize | bool | true | timeout |
        | Vehicle.Powertrain.IsAutoPowerOptimize | bool | true | reject  |
        | Vehicle.Powertrain.PowerOptimizeLevel | uint8 | 10 | timeout |
        | Vehicle.Powertrain.PowerOptimizeLevel | uint8 | 10 | reject  |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargeLimit | uint8 | 100 | timeout |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargeLimit | uint8 | 100 | reject  |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.AnyPosition.IsChargingCableLocked | bool | true | timeout |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.AnyPosition.IsChargingCableLocked | bool | true | reject  |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.AnyPosition.IsFlapOpen | bool | true | timeout |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.AnyPosition.IsFlapOpen | bool | true | reject  |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontLeft.IsChargingCableLocked | bool | true | timeout |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontLeft.IsChargingCableLocked | bool | true | reject  |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontLeft.IsFlapOpen | bool | true | timeout |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontLeft.IsFlapOpen | bool | true | reject  |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontMiddle.IsChargingCableLocked | bool | true | timeout |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontMiddle.IsChargingCableLocked | bool | true | reject  |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontMiddle.IsFlapOpen | bool | true | timeout |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontMiddle.IsFlapOpen | bool | true | reject  |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontRight.IsChargingCableLocked | bool | true | timeout |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontRight.IsChargingCableLocked | bool | true | reject  |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontRight.IsFlapOpen | bool | true | timeout |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.FrontRight.IsFlapOpen | bool | true | reject  |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearLeft.IsChargingCableLocked | bool | true | timeout |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearLeft.IsChargingCableLocked | bool | true | reject  |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearLeft.IsFlapOpen | bool | true | timeout |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearLeft.IsFlapOpen | bool | true | reject  |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearMiddle.IsChargingCableLocked | bool | true | timeout |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearMiddle.IsChargingCableLocked | bool | true | reject  |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearMiddle.IsFlapOpen | bool | true | timeout |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearMiddle.IsFlapOpen | bool | true | reject  |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearRight.IsChargingCableLocked | bool | true | timeout |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearRight.IsChargingCableLocked | bool | true | reject  |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearRight.IsFlapOpen | bool | true | timeout |
        | Vehicle.Powertrain.TractionBattery.Charging.ChargingPort.RearRight.IsFlapOpen | bool | true | reject  |
        | Vehicle.Powertrain.TractionBattery.Charging.StartStopCharging | string | STOP | timeout |
        | Vehicle.Powertrain.TractionBattery.Charging.StartStopCharging | string | STOP | reject  |
        | Vehicle.Powertrain.TractionBattery.Charging.Timer.Mode | string | START_TIME | timeout |
        | Vehicle.Powertrain.TractionBattery.Charging.Timer.Mode | string | START_TIME | reject  |
        | Vehicle.Powertrain.TractionBattery.Charging.Timer.Time | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Powertrain.TractionBattery.Charging.Timer.Time | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.RequestedMode | string | FAST_CHARGING_PREPARATION | timeout |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.RequestedMode | string | FAST_CHARGING_PREPARATION | reject  |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.StartTime | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.StartTime | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.TargetTemperature | float | 100 | timeout |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.TargetTemperature | float | 100 | reject  |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.TargetTime | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Powertrain.TractionBattery.Number1.BatteryConditioning.TargetTime | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.RequestedMode | string | FAST_CHARGING_PREPARATION | timeout |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.RequestedMode | string | FAST_CHARGING_PREPARATION | reject  |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.StartTime | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.StartTime | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.TargetTemperature | float | 100 | timeout |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.TargetTemperature | float | 100 | reject  |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.TargetTime | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Powertrain.TractionBattery.Number2.BatteryConditioning.TargetTime | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.RequestedMode | string | FAST_CHARGING_PREPARATION | timeout |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.RequestedMode | string | FAST_CHARGING_PREPARATION | reject  |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.StartTime | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.StartTime | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.TargetTemperature | float | 100 | timeout |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.TargetTemperature | float | 100 | reject  |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.TargetTime | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Powertrain.TractionBattery.Number3.BatteryConditioning.TargetTime | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.RequestedMode | string | FAST_CHARGING_PREPARATION | timeout |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.RequestedMode | string | FAST_CHARGING_PREPARATION | reject  |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.StartTime | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.StartTime | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.TargetTemperature | float | 100 | timeout |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.TargetTemperature | float | 100 | reject  |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.TargetTime | string | THIS_IS_B_TEST_STRING | timeout |
        | Vehicle.Powertrain.TractionBattery.Number4.BatteryConditioning.TargetTime | string | THIS_IS_B_TEST_STRING | reject  |
        | Vehicle.Powertrain.Transmission.ClutchEngagement | float | 100 | timeout |
        | Vehicle.Powertrain.Transmission.ClutchEngagement | float | 100 | reject  |
        | Vehicle.Powertrain.Transmission.DiffLockCenterEngagement | float | 100 | timeout |
        | Vehicle.Powertrain.Transmission.DiffLockCenterEngagement | float | 100 | reject  |
        | Vehicle.Powertrain.Transmission.DiffLockFrontEngagement | float | 100 | timeout |
        | Vehicle.Powertrain.Transmission.DiffLockFrontEngagement | float | 100 | reject  |
        | Vehicle.Powertrain.Transmission.DiffLockRearEngagement | float | 100 | timeout |
        | Vehicle.Powertrain.Transmission.DiffLockRearEngagement | float | 100 | reject  |
        | Vehicle.Powertrain.Transmission.GearChangeMode | string | AUTOMATIC | timeout |
        | Vehicle.Powertrain.Transmission.GearChangeMode | string | AUTOMATIC | reject  |
        | Vehicle.Powertrain.Transmission.IsElectricalPowertrainEngaged | bool | true | timeout |
        | Vehicle.Powertrain.Transmission.IsElectricalPowertrainEngaged | bool | true | reject  |
        | Vehicle.Powertrain.Transmission.IsLowRangeEngaged | bool | true | timeout |
        | Vehicle.Powertrain.Transmission.IsLowRangeEngaged | bool | true | reject  |
        | Vehicle.Powertrain.Transmission.IsParkLockEngaged | bool | true | timeout |
        | Vehicle.Powertrain.Transmission.IsParkLockEngaged | bool | true | reject  |
        | Vehicle.Powertrain.Transmission.PerformanceMode | string | SPORT | timeout |
        | Vehicle.Powertrain.Transmission.PerformanceMode | string | SPORT | reject  |
        | Vehicle.Powertrain.Transmission.SelectedGear | int8 | -100 | timeout |
        | Vehicle.Powertrain.Transmission.SelectedGear | int8 | -100 | reject  |
        | Vehicle.Powertrain.Transmission.TorqueDistribution | float | 100 | timeout |
        | Vehicle.Powertrain.Transmission.TorqueDistribution | float | 100 | reject  |
        | Vehicle.TripMeterReading | float | 100 | timeout |
        | Vehicle.TripMeterReading | float | 100 | reject  |

