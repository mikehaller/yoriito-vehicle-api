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

#include "databroker/consumer_get_request.h"
#include "databroker/databroker_consumer.h"
#include "databroker/filter/get_filter.h"
#include "result.h"
#include "test_consumer.h"

TEST(TestDataBrokerGet, Normal) {
  std::unique_ptr<yoriito::databroker::DataBrokerConsumer> test_consumer =
      std::make_unique<TestConsumer>();
  auto result =
      test_consumer->Get(yoriito::databroker::ConsumerGetRequest("Vehicle"));
  ASSERT_EQ(result.IsErr(), true);
}

TEST(TestDataBrokerGetNewApi, Normal) {
  std::unique_ptr<TestConsumer> test_consumer =
      std::make_unique<TestConsumer>();

  yoriito::databroker::ConsumerGetRequest get_request("Vehicle");

  auto result = test_consumer->Get(get_request);
  ASSERT_EQ(result.IsErr(), true);

  test_consumer->request_.has_value();
  ASSERT_EQ(test_consumer->request_->GetPath(), "Vehicle");
}

TEST(TestDataBrokerGetNewApi_WithFilter, Normal) {
  std::unique_ptr<TestConsumer> test_consumer =
      std::make_unique<TestConsumer>();

  yoriito::databroker::ConsumerGetRequest get_request(
      "Vehicle", yoriito::databroker::filter::GetFilter(
                     {"/api/data", "/api/settings", "/api/config"}));

  auto result = test_consumer->Get(get_request);
  ASSERT_EQ(result.IsErr(), true);

  test_consumer->request_.has_value();
  ASSERT_EQ(test_consumer->request_->GetPath(), "Vehicle");
  ASSERT_EQ(test_consumer->request_->GetFilter().value().GetPaths().size(), 3);
  ASSERT_EQ(test_consumer->request_->GetFilter().value().GetPaths()[0],
            "/api/data");
  ASSERT_EQ(test_consumer->request_->GetFilter().value().GetPaths()[1],
            "/api/settings");
  ASSERT_EQ(test_consumer->request_->GetFilter().value().GetPaths()[2],
            "/api/config");
}

TEST(TestDataBrokerSetNewApi, Normal) {
  std::unique_ptr<TestConsumer> test_consumer =
      std::make_unique<TestConsumer>();

  yoriito::databroker::ConsumerSetRequest set_request_data({
      yoriito::databroker::ConsumerSetDataPoint("Vehicle.TraveledDistance",
                                               yoriito::ValueType(123.45f)),
      yoriito::databroker::ConsumerSetDataPoint("Vehicle.Speed",
                                               yoriito::ValueType(67.89f)),
  });

  auto result = test_consumer->Set(set_request_data);
  ASSERT_EQ(result.IsErr(), true);
}
