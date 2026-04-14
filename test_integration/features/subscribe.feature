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

Feature: Subscribe

    Scenario Outline: HeadlessApp_Subscribe_Sensor_Value
        Given PAL set sensor signal <path> to <datatype> <value>
        Given HeadlessApp subscribe the sensor signal <path> of <datatype>
        Then PAL set the signal at <path> of <datatype> to <values> by order, subscribe stream receive the same data
        And HeadlessApp unsubscribe the sensor signal <path> of <datatype> to close connections

    Examples:
        | path                                         | datatype  | value            | values            |
        | Vehicle.ADAS.ABS.IsEnabled | bool | false | ["true","false"] |
        | Vehicle.ADAS.ActiveAutonomyLevel | string | SAE_0 | ["SAE_0","SAE_1","SAE_2_DISENGAGING","SAE_2","SAE_3_DISENGAGING","SAE_3","SAE_4_DISENGAGING","SAE_4","SAE_5_DISENGAGING","SAE_5"] |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | 340282350000000000000000000000000000000 | ["340282350000000000000000000000000000000","-340282350000000000000000000000000000000","0"] |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 10 | ["10","0","5"] |
        | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | 100 | ["100","-100","0"] |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 65535 | ["65535","0","32767"] |
        | Vehicle.Chassis.SteeringWheel.Angle | int16 | 32767 | ["32767","-32768","-1"] |
        | Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Altitude | double | 179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | ["179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000","-179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000","0"] |
        | Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Range | uint32 | 4294967295 | ["4294967295","0","2147483647"] |
        | Vehicle.Powertrain.CombustionEngine.EngineCoolant.LifeRemaining | int32 | 2147483647 | ["2147483647","-2147483648","-1"] |

    Scenario Outline: Notification of subscribed signals
        Given a signal at <path> is set to <value_0> of datatype <datatype>
        And attempts to subscribe the signal at <path> of datatype <datatype> is succeeded
        When the value of signal at <path> changes to <value_1> of datatype <datatype>
        Then the subscribe stream returns <datatype> <value_1> on <path>
        And HeadlessApp unsubscribe the sensor signal <path> of <datatype> to close connections

    Examples:
        | path                                                     | datatype      | value_0       | value_1       |
        | Vehicle.ADAS.ABS.IsEnabled | bool | true | false |
        | Vehicle.ADAS.ActiveAutonomyLevel | string | SAE_0 | SAE_1 |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | 340282350000000000000000000000000000000 | -340282350000000000000000000000000000000 |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 10 | 0 |
        | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | 100 | -100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 65535 | 0 |
        | Vehicle.Chassis.SteeringWheel.Angle | int16 | 32767 | -32768 |
        | Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Altitude | double | 179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | -179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
        | Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Range | uint32 | 4294967295 | 0 |
        | Vehicle.Powertrain.CombustionEngine.EngineCoolant.LifeRemaining | int32 | 2147483647 | -2147483648 |

    Scenario Outline: Multiple subscriptions to a signal
        Given a signal at <path> is set to <value_0> of datatype <datatype>
        And attempts to subscribe the signal at <path> of datatype <datatype> for <count> times with duplex <duplex> are all succeeded
        When the value of signal at <path> changes to <value_1> of datatype <datatype>
        Then the subscribe stream returns <datatype> <value_1> on <path>
        And HeadlessApp unsubscribe the sensor signal <path> of <datatype> to close connections

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

    Scenario Outline: Notification issued even if signal value being changed
        Given a signal at <path> is set to <value_0> of datatype <datatype>
        And attempts to subscribe the signal at <path> of datatype <datatype> is succeeded
        When the value of signal at <path> changes to <value_1> of datatype <datatype>, which is equal to the current value
        Then the subscribe stream returns <datatype> <value_1> on <path>
        And HeadlessApp unsubscribe the sensor signal <path> of <datatype> to close connections

    Examples:
        | path                                                     | datatype      | value_0       | value_1       |
        | Vehicle.ADAS.ABS.IsEnabled | bool | true | false |
        | Vehicle.ADAS.ActiveAutonomyLevel | string | SAE_0 | SAE_1 |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | 340282350000000000000000000000000000000 | -340282350000000000000000000000000000000 |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 10 | 0 |
        | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | 100 | -100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 65535 | 0 |
        | Vehicle.Chassis.SteeringWheel.Angle | int16 | 32767 | -32768 |
        | Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Altitude | double | 179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | -179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
        | Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Range | uint32 | 4294967295 | 0 |
        | Vehicle.Powertrain.CombustionEngine.EngineCoolant.LifeRemaining | int32 | 2147483647 | -2147483648 |

    Scenario Outline: Millions of subscribe requests do not kill kura server & subscription_ids are correctly returned
        Given a signal at <path> is set to <value_0> of datatype <datatype>
        And attempts to subscribe the signal at <path> of datatype <datatype> for <count> times with duplex <duplex> are all succeeded
        When the value of signal at <path> changes to <value_1> of datatype <datatype>
        Then the subscribe stream returns <datatype> <value_1> on <path>
        And HeadlessApp unsubscribe the sensor signal <path> of <datatype> to close connections

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

    @CleanupRestoreServer
    Scenario Outline: Subscribe requests are failed when the server is stopped
        Given a signal at <path> is set to <value_0> of datatype <datatype>
        When the server is stopped
        Then an attempt to subscribe the signal at <path> of datatype <datatype> is failed

    Examples:
        | path                                                     | datatype      | value_0       |
        | Vehicle.ADAS.ABS.IsEnabled | bool | true |
        | Vehicle.ADAS.ActiveAutonomyLevel | string | SAE_0 |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | 340282350000000000000000000000000000000 |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 10 |
        | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 65535 |
        | Vehicle.Chassis.SteeringWheel.Angle | int16 | 32767 |
        | Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Altitude | double | 179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
        | Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Range | uint32 | 4294967295 |
        | Vehicle.Powertrain.CombustionEngine.EngineCoolant.LifeRemaining | int32 | 2147483647 |

    @CleanupRestoreNetwork
    Scenario Outline: Subscribe requests are failed when the network communication failure
        Given a signal at <path> is set to <value_0> of datatype <datatype>
        When network failure of <network_failure> is injected
        Then an attempt to subscribe the signal at <path> of datatype <datatype> is failed

    Examples:
        | path                                                     | datatype      | value_0       | network_failure       |
        | Vehicle.ADAS.ABS.IsEnabled | bool | true | timeout |
        | Vehicle.ADAS.ABS.IsEnabled | bool | true | reject  |
        | Vehicle.ADAS.ActiveAutonomyLevel | string | SAE_0 | timeout |
        | Vehicle.ADAS.ActiveAutonomyLevel | string | SAE_0 | reject  |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | 340282350000000000000000000000000000000 | timeout |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | 340282350000000000000000000000000000000 | reject  |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 10 | timeout |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 10 | reject  |
        | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | 100 | timeout |
        | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | 100 | reject  |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 65535 | timeout |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 65535 | reject  |
        | Vehicle.Chassis.SteeringWheel.Angle | int16 | 32767 | timeout |
        | Vehicle.Chassis.SteeringWheel.Angle | int16 | 32767 | reject  |
        | Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Altitude | double | 179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | timeout |
        | Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Altitude | double | 179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | reject  |
        | Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Range | uint32 | 4294967295 | timeout |
        | Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Range | uint32 | 4294967295 | reject  |
        | Vehicle.Powertrain.CombustionEngine.EngineCoolant.LifeRemaining | int32 | 2147483647 | timeout |
        | Vehicle.Powertrain.CombustionEngine.EngineCoolant.LifeRemaining | int32 | 2147483647 | reject  |

    Scenario Outline: Subscribe contexts are no longer available after the server is reset
        Given a signal at <path> is set to <value_0> of datatype <datatype>
        And attempts to subscribe the signal at <path> of datatype <datatype> is succeeded
        When the server is reset
        And the value of signal at <path> changes to <value_1> of datatype <datatype>
        Then the subscribe stream returns no data
        And HeadlessApp unsubscribe the sensor signal <path> of <datatype> to close connections

    Examples:
        | path                                                     | datatype      | value_0       | value_1       |
        | Vehicle.ADAS.ABS.IsEnabled | bool | true | false |
        | Vehicle.ADAS.ActiveAutonomyLevel | string | SAE_0 | SAE_1 |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | 340282350000000000000000000000000000000 | -340282350000000000000000000000000000000 |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 10 | 0 |
        | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | 100 | -100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 65535 | 0 |
        | Vehicle.Chassis.SteeringWheel.Angle | int16 | 32767 | -32768 |
        | Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Altitude | double | 179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | -179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
        | Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Range | uint32 | 4294967295 | 0 |
        | Vehicle.Powertrain.CombustionEngine.EngineCoolant.LifeRemaining | int32 | 2147483647 | -2147483648 |

    Scenario Outline: All updates are notified to subscriptions without any drops even large burden on server or network
        Given a signal at <path> is set to <value_0> of datatype <datatype>
        And attempts to subscribe the signal at <path> of datatype <datatype> is succeeded
        When the signal at <path> of numeric datatype <datatype> is updated <count> times, any updates are captured from subscribe stream
        Then HeadlessApp unsubscribe the sensor signal <path> of <datatype> to close connections

    Examples:
        | path                                                     | count            | datatype      | value_0       |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | 10 | float | 340282350000000000000000000000000000000 |
        | Vehicle.ADAS.PowerOptimizeLevel | 10 | uint8 | 10 |
        | Vehicle.Body.Mirrors.DriverSide.Pan | 10 | int8 | 100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | 10 | uint16 | 65535 |
        | Vehicle.Chassis.SteeringWheel.Angle | 10 | int16 | 32767 |
        | Vehicle.CurrentLocation.GNSSReceiver.GNSSLocationType.Altitude | 10 | double | 179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
        | Vehicle.Powertrain.CombustionEngine.DieselExhaustFluid.Range | 10 | uint32 | 4294967295 |
        | Vehicle.Powertrain.CombustionEngine.EngineCoolant.LifeRemaining | 10 | int32 | 2147483647 |

