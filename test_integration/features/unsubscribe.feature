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

Feature: Unsubscribe

    Scenario Outline: The unsubscribe request for a signal that is currently subscribed has been successfully processed
        Given a signal at <path> is set to <value_0> of datatype <datatype>
        And attempts to subscribe the signal at <path> of datatype <datatype> is succeeded
        Then attempts to unsubscribe the signal at <path> of datatype <datatype> is succeeded

    Examples:
        | path                                                     | datatype  | value_0     |
        | Vehicle.ADAS.ABS.IsEnabled | bool | false |
        | Vehicle.ADAS.ActiveAutonomyLevel | string | SAE_1 |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | -340282350000000000000000000000000000000 |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 0 |
        | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | -100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 0 |
        | Vehicle.Chassis.SteeringWheel.Angle | int16 | -32768 |
        | Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Altitude | double | -179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
        | Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Range | uint32 | 0 |
        | Vehicle.Powertrain.CombustionEngine.EngineCoolant.LifeRemaining | int32 | -2147483648 |

    Scenario Outline: The unsubscribe request for a signal that is currently not subscribed has been failed processed
        Given a signal at <path> is set to <value_0> of datatype <datatype> and doesn't attempt to subscribe the signal
        Then attempts to unsubscribe the signal at <path> of datatype <datatype> is failed

    Examples:
        | path                                                     | datatype  | value_0     |
        | Vehicle.ADAS.ABS.IsEnabled | bool | false |
        | Vehicle.ADAS.ActiveAutonomyLevel | string | SAE_1 |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | -340282350000000000000000000000000000000 |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 0 |
        | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | -100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 0 |
        | Vehicle.Chassis.SteeringWheel.Angle | int16 | -32768 |
        | Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Altitude | double | -179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
        | Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Range | uint32 | 0 |
        | Vehicle.Powertrain.CombustionEngine.EngineCoolant.LifeRemaining | int32 | -2147483648 |

    Scenario Outline: After the unsubscribe request succeeds, no update information will arrive in the stream
        Given a signal at <path> is set to <value_0> of datatype <datatype>
        And attempts to subscribe the signal at <path> of datatype <datatype> is succeeded
        When attempts to unsubscribe the signal at <path> of datatype <datatype> is succeeded
        And the value of signal at <path> changes to <value_1> of datatype <datatype>
        Then The subscribe stream doesn't return <datatype> <value_1> on <path>.

    Examples:
        | path                                                     | datatype      | value_0      | value_1    |
        | Vehicle.ADAS.ABS.IsEnabled | bool | true  | false |
        | Vehicle.ADAS.ActiveAutonomyLevel | string | SAE_0  | SAE_1 |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | 340282350000000000000000000000000000000  | -340282350000000000000000000000000000000 |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 10  | 0 |
        | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | 100  | -100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 65535  | 0 |
        | Vehicle.Chassis.SteeringWheel.Angle | int16 | 32767  | -32768 |
        | Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Altitude | double | 179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000  | -179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
        | Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Range | uint32 | 4294967295  | 0 |
        | Vehicle.Powertrain.CombustionEngine.EngineCoolant.LifeRemaining | int32 | 2147483647  | -2147483648 |

    Scenario Outline: Unsubscribe of one subscription_id does not hinder other subscription_ids
        Given a signal at <path> is set to <value_0> of datatype <datatype>
        And attempts to subscribe the signal at <path> of datatype <datatype> for <count> times with duplex <duplex> are all succeeded
        When attempts to unsubscribe the signal at <path> of datatype <datatype> is succeeded
        And the value of signal at <path> changes to <value_1> of datatype <datatype>
        Then The other subscription_ids stream returns <datatype> <value_1> on <path>

    Examples:
        | path                                                     | count         | duplex        | datatype      | value_0       | value_1       |
        | Vehicle.ADAS.ABS.IsEnabled | 2 | 1 | bool | true | false |
        | Vehicle.ADAS.ActiveAutonomyLevel | 2 | 1 | string | SAE_0 | SAE_1 |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | 2 | 1 | float | 340282350000000000000000000000000000000 | -340282350000000000000000000000000000000 |
        | Vehicle.ADAS.PowerOptimizeLevel | 2 | 1 | uint8 | 10 | 0 |
        | Vehicle.Body.Mirrors.DriverSide.Pan | 2 | 1 | int8 | 100 | -100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | 2 | 1 | uint16 | 65535 | 0 |
        | Vehicle.Chassis.SteeringWheel.Angle | 2 | 1 | int16 | 32767 | -32768 |
        | Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Altitude | 2 | 1 | double | 179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | -179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
        | Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Range | 2 | 1 | uint32 | 4294967295 | 0 |
        | Vehicle.Powertrain.CombustionEngine.EngineCoolant.LifeRemaining | 2 | 1 | int32 | 2147483647 | -2147483648 |


    Scenario Outline: Millions of unsubscribe requests do not kill kura server
        Given a signal at <path> is set to <value_0> of datatype <datatype>
        When attempts to subscribe the signal at <path> of datatype <datatype> for <count> times with duplex <duplex> are all succeeded
        Then HeadlessApp unsubscribe the sensor signal <path> of <datatype> to close connections with duplex <duplex> are all succeeded

    Examples:
        | path                                                     | count            | duplex           | datatype      | value_0       | value_1       |
        | Vehicle.ADAS.ABS.IsEnabled | 100 | 10 | bool | true | false |
        | Vehicle.ADAS.ActiveAutonomyLevel | 100 | 10 | string | SAE_0 | SAE_1 |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | 100 | 10 | float | 340282350000000000000000000000000000000 | -340282350000000000000000000000000000000 |
        | Vehicle.ADAS.PowerOptimizeLevel | 100 | 10 | uint8 | 10 | 0 |
        | Vehicle.Body.Mirrors.DriverSide.Pan | 100 | 10 | int8 | 100 | -100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | 100 | 10 | uint16 | 65535 | 0 |
        | Vehicle.Chassis.SteeringWheel.Angle | 100 | 10 | int16 | 32767 | -32768 |
        | Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Altitude | 100 | 10 | double | 179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | -179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
        | Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Range | 100 | 10 | uint32 | 4294967295 | 0 |
        | Vehicle.Powertrain.CombustionEngine.EngineCoolant.LifeRemaining | 100 | 10 | int32 | 2147483647 | -2147483648 |


    @CleanupRestoreNetwork
    Scenario Outline: Unsubscribe requests during network failure result in client error
        Given HeadlessApp subscribe the sensor signal <path> which is initialized <value> of datatype <datatype>
        When network failure of <network_failure> is injected
        Then attempts to unsubscribe the subscription to <path> of <datatype> are failed

    Examples:
        | path                                          | network_failure | datatype  | value     |
        | Vehicle.ADAS.ABS.IsEnabled | reject  | bool | false |
        | Vehicle.ADAS.ABS.IsEnabled | timeout | bool | false |
        | Vehicle.ADAS.ActiveAutonomyLevel | reject  | string | SAE_1 |
        | Vehicle.ADAS.ActiveAutonomyLevel | timeout | string | SAE_1 |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | reject  | float | -340282350000000000000000000000000000000 |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | timeout | float | -340282350000000000000000000000000000000 |
        | Vehicle.ADAS.PowerOptimizeLevel | reject  | uint8 | 0 |
        | Vehicle.ADAS.PowerOptimizeLevel | timeout | uint8 | 0 |
        | Vehicle.Body.Mirrors.DriverSide.Pan | reject  | int8 | -100 |
        | Vehicle.Body.Mirrors.DriverSide.Pan | timeout | int8 | -100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | reject  | uint16 | 0 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | timeout | uint16 | 0 |
        | Vehicle.Chassis.SteeringWheel.Angle | reject  | int16 | -32768 |
        | Vehicle.Chassis.SteeringWheel.Angle | timeout | int16 | -32768 |
        | Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Altitude | reject  | double | -179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
        | Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Altitude | timeout | double | -179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
        | Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Range | reject  | uint32 | 0 |
        | Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Range | timeout | uint32 | 0 |
        | Vehicle.Powertrain.CombustionEngine.EngineCoolant.LifeRemaining | reject  | int32 | -2147483648 |
        | Vehicle.Powertrain.CombustionEngine.EngineCoolant.LifeRemaining | timeout | int32 | -2147483648 |


    Scenario Outline: Unsubscribe requests after recovery from network failure are succeeded
        Given HeadlessApp subscribe the sensor signal <path> which is initialized <value> of datatype <datatype>
        When network failure of <network_failure> is injected
        And network is restored from the failure
        Then attempts to unsubscribe the subscription to <path> of <datatype> are succeeded

    Examples:
        | path                                          | network_failure | datatype  | value     |
        | Vehicle.ADAS.ABS.IsEnabled | reject  | bool | false |
        | Vehicle.ADAS.ABS.IsEnabled | timeout | bool | false |
        | Vehicle.ADAS.ActiveAutonomyLevel | reject  | string | SAE_1 |
        | Vehicle.ADAS.ActiveAutonomyLevel | timeout | string | SAE_1 |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | reject  | float | -340282350000000000000000000000000000000 |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | timeout | float | -340282350000000000000000000000000000000 |
        | Vehicle.ADAS.PowerOptimizeLevel | reject  | uint8 | 0 |
        | Vehicle.ADAS.PowerOptimizeLevel | timeout | uint8 | 0 |
        | Vehicle.Body.Mirrors.DriverSide.Pan | reject  | int8 | -100 |
        | Vehicle.Body.Mirrors.DriverSide.Pan | timeout | int8 | -100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | reject  | uint16 | 0 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | timeout | uint16 | 0 |
        | Vehicle.Chassis.SteeringWheel.Angle | reject  | int16 | -32768 |
        | Vehicle.Chassis.SteeringWheel.Angle | timeout | int16 | -32768 |
        | Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Altitude | reject  | double | -179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
        | Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Altitude | timeout | double | -179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
        | Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Range | reject  | uint32 | 0 |
        | Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Range | timeout | uint32 | 0 |
        | Vehicle.Powertrain.CombustionEngine.EngineCoolant.LifeRemaining | reject  | int32 | -2147483648 |
        | Vehicle.Powertrain.CombustionEngine.EngineCoolant.LifeRemaining | timeout | int32 | -2147483648 |


    @CleanupRestoreServer
    Scenario Outline: Unsubscribe requests during server down result in client error
        Given HeadlessApp subscribe the sensor signal <path> which is initialized <value> of datatype <datatype>
        When the server is stopped
        Then attempts to unsubscribe the subscription to <path> of <datatype> are failed

    Examples:
        | path                                          | datatype  | value   |
        | Vehicle.ADAS.ABS.IsEnabled | bool | false |
        | Vehicle.ADAS.ActiveAutonomyLevel | string | SAE_1 |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | -340282350000000000000000000000000000000 |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 0 |
        | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | -100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 0 |
        | Vehicle.Chassis.SteeringWheel.Angle | int16 | -32768 |
        | Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Altitude | double | -179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
        | Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Range | uint32 | 0 |
        | Vehicle.Powertrain.CombustionEngine.EngineCoolant.LifeRemaining | int32 | -2147483648 |


    @CleanupRestoreServer
    Scenario Outline: Unsubscribe requests after server reset are succeeded
        Given HeadlessApp subscribe the sensor signal <path> which is initialized <value> of datatype <datatype>
        When the server is reset
        Then attempts to unsubscribe the subscription to <path> of <datatype> are succeeded

    Examples:
        | path                                          | datatype  | value   |
        | Vehicle.ADAS.ABS.IsEnabled | bool | false |
        | Vehicle.ADAS.ActiveAutonomyLevel | string | SAE_1 |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | -340282350000000000000000000000000000000 |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 0 |
        | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | -100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 0 |
        | Vehicle.Chassis.SteeringWheel.Angle | int16 | -32768 |
        | Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Altitude | double | -179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
        | Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Range | uint32 | 0 |
        | Vehicle.Powertrain.CombustionEngine.EngineCoolant.LifeRemaining | int32 | -2147483648 |
