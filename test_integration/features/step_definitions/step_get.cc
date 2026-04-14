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

// ----- get -----

namespace {

GIVEN(
    "^PAL set sensor signal (\\S+) to (\\S+) (\\S+)$"
) {
    REGEX_PARAM(std::string, signal_name);
    REGEX_PARAM(std::string, datatype_str);
    REGEX_PARAM(std::string, value_str);

    //
    auto t = WrapRttrGetTypeByName(datatype_str);
    rttr::variant v = std::string(std::string(value_str));
    std::string target_path = signal_name;

    DispatchByRttrType(t, v, target_path, []<class T>(rttr::variant& var, std::string& p) {
        auto target_value = yoriito::ValueType{std::in_place_type<T>, var.get_value<T>()};
        SignalType sig_type = Registry<T>::Create(p).GetSignalType();
        auto *client = yoriito::databroker::DataBrokerProducerFactory::GetInstance();
        yoriito::databroker::ProducerSetDataPoint data_point{p, target_value, sig_type == SignalType::kActuator || sig_type == SignalType::kSensor || sig_type == SignalType::kAttribute, sig_type == SignalType::kActuator};
        std::vector<yoriito::databroker::ProducerSetDataPoint> data_points{data_point};
        yoriito::databroker::ProducerSetRequest actuate_value{data_points};
        auto result = client->Set(actuate_value);
        if (!result.IsOk()) {
            EXPECT_EQ(false, true);
        }
    });
}

WHEN(
    "^HeadlessApp get the sensor signal (\\S+) of (\\S+)$"
) {
    REGEX_PARAM(std::string, signal_name);
    REGEX_PARAM(std::string, datatype_str);

    auto t = WrapRttrGetTypeByName(datatype_str);
    std::string target_path = signal_name;

    DispatchRttrType(t, target_path, []<class T>(std::string& p) {

        ScenarioScope<ScenarioCtx> context;
        // Headless App
        auto target = Registry<T>::Create(p);
        yoriito::Result<T> result = target.Get();

        if(!result.IsOk()) {
            EXPECT_EQ(false, true);
        }
        auto resp = result.TakeOk().value();
        context->get_value = std::make_unique<yoriito::ValueType>(std::move(resp));

    });
}

THEN(
    "^the result should be (\\S+) (\\S+) on (\\S+)$"
) {
    REGEX_PARAM(std::string, datatype_str);
    REGEX_PARAM(std::string, value_str);
    REGEX_PARAM(std::string, signal_name);

    auto t = WrapRttrGetTypeByName(datatype_str);
    rttr::variant v = std::string(std::string(value_str));
    std::string target_path = signal_name;

    DispatchByRttrType(t, v, target_path, []<class T>(rttr::variant& var, std::string& p) {
        auto expected_value = var.get_value<T>();

        ScenarioScope<ScenarioCtx> context;

        auto data = std::get_if<T>(context->get_value.get());
        EXPECT_EQ(*data, expected_value);
    });
}
}