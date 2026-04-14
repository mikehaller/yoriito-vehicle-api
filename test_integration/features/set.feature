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
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | 100 |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 10 |
        | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | -100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 100 |
        Then PAL should report the following actuator signals
        | path                                                     | datatype | value         |
        | Vehicle.ADAS.ABS.IsEnabled | bool | true |
        | Vehicle.ADAS.AdaptiveCruiseControl.DistanceSet | string | DIST_2 |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | 100 |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 10 |
        | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | -100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 100 |

    @warm @serial
    Scenario Outline: Overwrite/confirm after cold start (no restart)
        Given Set the actuator signal <path> to <datatype> <default_value>
        When HeadlessApp set the actuator signal <path> to <datatype> <checked_value>
        Then the result obtained from the actuator signal by PAL should be <datatype> <checked_value> on <path>

    Examples:
        | path                                                     | datatype | default_value | checked_value |
        | Vehicle.ADAS.ABS.IsEnabled | bool | true | false |
        | Vehicle.ADAS.AdaptiveCruiseControl.DistanceSet | string | DIST_1 | DIST_2 |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | 0 | 100 |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 0 | 10 |
        | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | 0 | -100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 0 | 100 |

    Scenario Outline: Millions of set requests do not kill kura server & values remain consistent
        When HeadlessApp set the signal <path> to <datatype> <checked_value> <count> times with duplex <duplex>
        Then the result obtained from the actuator signal by PAL should be <datatype> <checked_value> on <path>

    Examples:
        | path                                                     | count            | duplex           | datatype      | default_value | checked_value |
        | Vehicle.ADAS.ABS.IsEnabled | 20 | 10 | bool | true | false |
        | Vehicle.ADAS.AdaptiveCruiseControl.DistanceSet | 20 | 10 | string | DIST_1 | DIST_2 |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | 20 | 10 | float | 0 | 100 |
        | Vehicle.ADAS.PowerOptimizeLevel | 20 | 10 | uint8 | 0 | 10 |
        | Vehicle.Body.Mirrors.DriverSide.Pan | 20 | 10 | int8 | 0 | -100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | 20 | 10 | uint16 | 0 | 100 |

    @CleanupRestoreServerforSet
    Scenario Outline: Set requests are failed when the server is stopped
        When the server is stopped for set
        Then an attempt to set the actuator signal <path> to <datatype> <checked_value> is failed

    Examples:
        | path                                                     | datatype      | checked_value       |
        | Vehicle.ADAS.ABS.IsEnabled | bool | true |
        | Vehicle.ADAS.AdaptiveCruiseControl.DistanceSet | string | DIST_2 |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | 100 |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 10 |
        | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | -100 |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 100 |

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
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | 100 | timeout |
        | Vehicle.ADAS.AdaptiveCruiseControl.SpeedSet | float | 100 | reject  |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 10 | timeout |
        | Vehicle.ADAS.PowerOptimizeLevel | uint8 | 10 | reject  |
        | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | -100 | timeout |
        | Vehicle.Body.Mirrors.DriverSide.Pan | int8 | -100 | reject  |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 100 | timeout |
        | Vehicle.Cabin.Seat.Row1.DriverSide.Height | uint16 | 100 | reject  |

