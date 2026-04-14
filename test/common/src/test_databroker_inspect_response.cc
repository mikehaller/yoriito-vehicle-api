// SPDX-License-Identifier: Apache-2.0
//
// Copyright 2026 JASPAR
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <gtest/gtest.h>

#include <memory>
#include <string>

#include "databroker/consumer_inspect_response.h"
#include "databroker/databroker_consumer.h"
#include "result.h"

TEST(TestDataBrokerConsumerInspectResponse_Builder, Normal) {
  auto builder = yoriito::databroker::BaseInspectData::CreateBuilder();
  builder.SetPath("Vehicle.TraveledDistance")
      .SetDataType(
          yoriito::databroker::BaseInspectData::DataType::DATA_TYPE_FLOAT)
      .SetEntryType(
          yoriito::databroker::ConsumerInspectData::EntryType::ENTRY_TYPE_SENSOR)
      .SetDescription("")
      .SetComment("")
      .SetDeprecation("")
      .SetUnit("")
      .SetMin(yoriito::ValueType(0.0f))
      .SetMax(yoriito::ValueType(1000.0f))
      .SetAllowed(std::vector<std::string>{"0.0", "1.0", "2.0"})
      .SetDefaultValue(yoriito::ValueType(0.0f))
      .SetArraySize(0)
      .SetPattern("")
      .SetCustomAttributes({});
  yoriito::databroker::ConsumerInspectData data =
      yoriito::databroker::ConsumerInspectData::CreateFromBuilder(builder);
  ASSERT_EQ(data.GetPath(), "Vehicle.TraveledDistance");
}
