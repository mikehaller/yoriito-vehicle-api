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

#include "base_inspect_data.h"
#include "consumer_inspect_data.h"
#include "consumer_inspect_response.h"

// ----- inspect -----

namespace {

GIVEN(
    "^PAL set a signal (\\S+) to (\\S+) (\\S+)$"
) {
    REGEX_PARAM(std::string, signal_name);
    REGEX_PARAM(std::string, datatype_str);
    REGEX_PARAM(std::string, value_str);

    auto t = WrapRttrGetTypeByName(datatype_str);
    rttr::variant v = std::string(std::string(value_str));

    DispatchByRttrType(t, v, const_cast<std::string&>(signal_name), []<class T>(rttr::variant& var, std::string& p) {
        auto target_value = yoriito::ValueType{std::in_place_type<T>, var.get_value<T>()};
        auto *client = yoriito::databroker::DataBrokerProducerFactory::GetInstance();
        yoriito::databroker::ProducerSetDataPoint data_point{p, target_value, false, false};
        std::vector<yoriito::databroker::ProducerSetDataPoint> data_points{data_point};
        yoriito::databroker::ProducerSetRequest actuate_value{data_points};
        auto result = client->Set(actuate_value);
        if (!result.IsOk()) {
            EXPECT_EQ(false, true);
        }
    });
}

yoriito::databroker::BaseInspectData::EntryType Signaltype2Entrytype(SignalType st) {
    switch(st) {
        case kActuator:
            return yoriito::databroker::BaseInspectData::EntryType::ENTRY_TYPE_ACTUATOR;
        case kSensor:
            return yoriito::databroker::BaseInspectData::EntryType::ENTRY_TYPE_SENSOR;
        case kAttribute:
            return yoriito::databroker::BaseInspectData::EntryType::ENTRY_TYPE_ATTRIBUTE;
        default:
            return yoriito::databroker::BaseInspectData::EntryType::ENTRY_TYPE_UNSPECIFIED;
    }
}
yoriito::databroker::BaseInspectData::DataType DatatypeStr2Datatype (const std::string& s) {
    if(s == "bool") return yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_BOOLEAN;
    if(s == "string") return yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_STRING;
    if(s == "float") return yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_FLOAT;
    if(s == "double") return yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_DOUBLE;
    if(s == "int8") return yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_INT8;
    if(s == "int16") return yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_INT16;
    if(s == "int32") return yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_INT32;
    if(s == "int64") return yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_INT64;
    if(s == "uint8") return yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_UINT8;
    if(s == "uint16") return yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_UINT16;
    if(s == "uint32") return yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_UINT32;
    if(s == "uint64") return yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_UINT64;
    if(s == "bool[]") return yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_BOOLEAN_ARRAY;
    if(s == "string[]") return yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_STRING_ARRAY;
    if(s == "float[]") return yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_FLOAT_ARRAY;
    if(s == "double[]") return yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_DOUBLE_ARRAY;
    if(s == "int8[]") return yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_INT8_ARRAY;
    if(s == "int16[]") return yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_INT16_ARRAY;
    if(s == "int32[]") return yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_INT32_ARRAY;
    if(s == "int64[]") return yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_INT64_ARRAY;
    if(s == "uint8[]") return yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_UINT8_ARRAY;
    if(s == "uint16[]") return yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_UINT16_ARRAY;
    if(s == "uint32[]") return yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_UINT32_ARRAY;
    if(s == "uint64[]") return yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_UINT64_ARRAY;

    return yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_UNSPECIFIED;
}

THEN(
    "^HeadlessApp can inspect the signal (\\S+) of (\\S+)$"
) {
    REGEX_PARAM(std::string, signal_name);
    REGEX_PARAM(std::string, datatype_str);

    auto t = WrapRttrGetTypeByName(datatype_str);

    DispatchRttrType(t, const_cast<std::string&>(signal_name), []<class T>(std::string& p) {
        ScenarioScope<ScenarioCtx> context;
        auto target = Registry<T>::Create(p);
        SignalType sig_type = target.GetSignalType();

        yoriito::Result<yoriito::databroker::ConsumerInspectResponse> result = target.Inspect();
        if(!result.IsOk()) {
            EXPECT_EQ(false, true);
        }
        auto resp = result.TakeOk().value();
        auto metadata = resp.GetDataPoints().front();
        EXPECT_EQ(metadata.GetEntryType(), Signaltype2Entrytype(sig_type));

        context->inspect_value = std::make_unique<yoriito::databroker::ConsumerInspectData>(std::move(metadata));
    });
    ScenarioScope<ScenarioCtx> context;
    EXPECT_EQ(context->inspect_value->GetPath(), signal_name);
    EXPECT_EQ(context->inspect_value->GetDataType(), DatatypeStr2Datatype(datatype_str));
}

}
