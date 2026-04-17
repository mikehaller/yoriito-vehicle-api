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

#include "databroker/consumer_get_datapoint.h"
#include "databroker_type.h"
#include "result.h"

TEST(TestDataBrokerConsumerGetDataPoint, Normal) {
  yoriito::databroker::ConsumerGetDataPoint get_datapoint(
      "Vehicle", yoriito::ValueType(), true, false, 0);

  ASSERT_EQ(get_datapoint.GetPath(), "Vehicle");
  ASSERT_EQ(std::holds_alternative<std::monostate>(get_datapoint.GetData()),
            true);
  ASSERT_EQ(get_datapoint.IsAvailableSensor(), true);
  ASSERT_EQ(get_datapoint.IsAvailableActuator(), false);
  ASSERT_EQ(get_datapoint.GetStoredTimestamp(), 0);
  ASSERT_EQ(get_datapoint.GetProducedTimestamp().has_value(), false);
}

TEST(TestDataBrokerConsumerGetDataPoint_with_source_timestamp, Normal) {
  yoriito::databroker::ConsumerGetDataPoint get_datapoint(
      "Vehicle", yoriito::ValueType(), true, false, 0, 1234567890);

  ASSERT_EQ(get_datapoint.GetPath(), "Vehicle");
  ASSERT_EQ(std::holds_alternative<std::monostate>(get_datapoint.GetData()),
            true);
  ASSERT_EQ(get_datapoint.IsAvailableSensor(), true);
  ASSERT_EQ(get_datapoint.IsAvailableActuator(), false);
  ASSERT_EQ(get_datapoint.GetStoredTimestamp(), 0);
  ASSERT_EQ(get_datapoint.GetProducedTimestamp().has_value(), true);
  ASSERT_EQ(get_datapoint.GetProducedTimestamp().value(), 1234567890);
}
