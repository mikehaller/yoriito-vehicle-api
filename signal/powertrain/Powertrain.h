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

#ifndef VEHICLE_POWERTRAIN_H
#define VEHICLE_POWERTRAIN_H

#include "Signal_AccumulatedBrakingEnergy.h"
#include "Signal_AccumulatedBrakingEnergy_Availability_Sensor.h"
#include "Signal_IsAutoPowerOptimize.h"
#include "Signal_IsAutoPowerOptimize_Availability_Actuator.h"
#include "Signal_IsAutoPowerOptimize_Availability_Sensor.h"
#include "Signal_PowerOptimizeLevel.h"
#include "Signal_PowerOptimizeLevel_Availability_Actuator.h"
#include "Signal_PowerOptimizeLevel_Availability_Sensor.h"
#include "Signal_Range.h"
#include "Signal_Range_Availability_Sensor.h"
#include "Signal_TimeRemaining.h"
#include "Signal_TimeRemaining_Availability_Sensor.h"
#include "Signal_Type.h"
#include "combustionengine/CombustionEngine.h"
#include "electricmotor/ElectricMotor.h"
#include "fuelsystem/FuelSystem.h"
#include "tractionbattery/TractionBattery.h"
#include "transmission/Transmission.h"

#endif  // VEHICLE_POWERTRAIN_H
