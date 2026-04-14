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
#include <utility>
#include <vector>

#include "databroker/consumer_get_datapoint.h"
#include "databroker/consumer_get_response.h"
#include "databroker_type.h"
#include "result.h"

TEST(TestDataBrokerGetResponse, Normal) {
  auto datapoints = std::vector<yoriito::databroker::ConsumerGetDataPoint>{
      yoriito::databroker::ConsumerGetDataPoint("Vehicle.TraveledDistance",
                                               yoriito::ValueType(123.45f), true,
                                               false, 1622547800)};
  yoriito::databroker::ConsumerGetResponse get_response(std::move(datapoints));
  ASSERT_EQ(get_response.GetDataPoints().size(), 1);
  auto dp = get_response.GetDataPoints();
  ASSERT_EQ(dp.size(), 1);
  ASSERT_EQ(dp[0].GetPath(), "Vehicle.TraveledDistance");
  ASSERT_EQ(std::get<float>(dp[0].GetData()), 123.45f);
  ASSERT_EQ(dp[0].IsAvailableSensor(), true);
  ASSERT_EQ(dp[0].IsAvailableActuator(), false);
  ASSERT_EQ(dp[0].GetStoredTimestamp(), 1622547800);
}

TEST(TestDataBrokerGetResponse_Multi, Normal) {
  auto datapoints = std::vector<yoriito::databroker::ConsumerGetDataPoint>{
      yoriito::databroker::ConsumerGetDataPoint("Vehicle.TraveledDistance",
                                               yoriito::ValueType(123.45f), true,
                                               false, 1622547800),
      yoriito::databroker::ConsumerGetDataPoint(
          "Vehicle.Speed", yoriito::ValueType(0.45f), true, false, 1622547800)};
  yoriito::databroker::ConsumerGetResponse get_response(std::move(datapoints));
  auto dp = get_response.GetDataPoints();
  ASSERT_EQ(dp.size(), 2);
  ASSERT_EQ(dp[0].GetPath(), "Vehicle.TraveledDistance");
  ASSERT_EQ(std::get<float>(dp[0].GetData()), 123.45f);
  ASSERT_EQ(dp[0].IsAvailableSensor(), true);
  ASSERT_EQ(dp[0].IsAvailableActuator(), false);
  ASSERT_EQ(dp[0].GetStoredTimestamp(), 1622547800);
  ASSERT_EQ(dp[1].GetPath(), "Vehicle.Speed");
  ASSERT_EQ(std::get<float>(dp[1].GetData()), 0.45f);
  ASSERT_EQ(dp[1].IsAvailableSensor(), true);
  ASSERT_EQ(dp[1].IsAvailableActuator(), false);
  ASSERT_EQ(dp[1].GetStoredTimestamp(), 1622547800);
}
