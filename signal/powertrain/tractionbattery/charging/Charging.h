/*
 * SPDX-License-Identifier: Apache-2.0
 *
 * Copyright 2026 JASPAR
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef VEHICLE_POWERTRAIN_TRACTIONBATTERY_CHARGING_H
#define VEHICLE_POWERTRAIN_TRACTIONBATTERY_CHARGING_H

#include "Signal_AveragePower.h"
#include "Signal_AveragePower_Availability_Sensor.h"
#include "Signal_ChargeLimit.h"
#include "Signal_ChargeLimit_Availability_Actuator.h"
#include "Signal_ChargeLimit_Availability_Sensor.h"
#include "Signal_ChargeRate.h"
#include "Signal_ChargeRate_Availability_Sensor.h"
#include "Signal_EvseId.h"
#include "Signal_EvseId_Availability_Sensor.h"
#include "Signal_IsCharging.h"
#include "Signal_IsCharging_Availability_Sensor.h"
#include "Signal_IsDischarging.h"
#include "Signal_IsDischarging_Availability_Sensor.h"
#include "Signal_MaxPower.h"
#include "Signal_MaxPower_Availability_Sensor.h"
#include "Signal_PowerLoss.h"
#include "Signal_PowerLoss_Availability_Sensor.h"
#include "Signal_StartStopCharging.h"
#include "Signal_StartStopCharging_Availability_Actuator.h"
#include "Signal_StartStopCharging_Availability_Sensor.h"
#include "Signal_Temperature.h"
#include "Signal_Temperature_Availability_Sensor.h"
#include "Signal_TimeToComplete.h"
#include "Signal_TimeToComplete_Availability_Sensor.h"
#include "chargecurrent/ChargeCurrent.h"
#include "chargevoltage/ChargeVoltage.h"
#include "chargingport/ChargingPort.h"
#include "location/Location.h"
#include "maximumchargingcurrent/MaximumChargingCurrent.h"
#include "timer/Timer.h"

#endif  // VEHICLE_POWERTRAIN_TRACTIONBATTERY_CHARGING_H
