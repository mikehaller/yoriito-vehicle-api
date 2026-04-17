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

#include "databroker/consumer_subscribe_request.h"
#include "databroker/databroker_consumer.h"
#include "databroker/filter/subscribe_filter.h"
#include "result.h"

TEST(TestDataBrokerConsumerSubscribe_NoFilter, Normal) {
  yoriito::databroker::ConsumerSubscribeRequest subscribe_request("Vehicle");
  ASSERT_EQ(subscribe_request.GetPath(), "Vehicle");
}
TEST(TestDataBrokerConsumerSubscribe_WithPathFilter, Normal) {
  yoriito::databroker::ConsumerSubscribeRequest subscribe_request(
      "Vehicle", yoriito::databroker::filter::SubscribeFilter(
                     yoriito::databroker::filter::PathsFilter(
                         {"/api/data", "/api/settings", "/api/config"})));
  ASSERT_EQ(subscribe_request.GetPath(), "Vehicle");
}

TEST(TestDataBrokerConsumerSubscribe_WithRangeFilter, Normal) {
  yoriito::databroker::ConsumerSubscribeRequest subscribe_request(
      "Vehicle",
      yoriito::databroker::filter::SubscribeFilter(
          yoriito::databroker::filter::PathsFilter(
              {"/api/data", "/api/settings", "/api/config"}),
          yoriito::databroker::filter::RangeFilter(
              yoriito::databroker::filter::OperatorType::OPERATOR_GT, 100)));
  ASSERT_EQ(subscribe_request.GetPath(), "Vehicle");
}
TEST(TestDataBrokerConsumerSubscribe_WithChangeFilter, Normal) {
  yoriito::databroker::ConsumerSubscribeRequest subscribe_request(
      "Vehicle",
      yoriito::databroker::filter::SubscribeFilter(
          yoriito::databroker::filter::PathsFilter(
              {"/api/data", "/api/settings", "/api/config"}),
          yoriito::databroker::filter::ChangeFilter(
              yoriito::databroker::filter::OperatorType::OPERATOR_EQ, 50)));
  ASSERT_EQ(subscribe_request.GetPath(), "Vehicle");
}
TEST(TestDataBrokerConsumerSubscribe_WithTimeBasedFilter, Normal) {
  yoriito::databroker::ConsumerSubscribeRequest subscribe_request(
      "Vehicle", yoriito::databroker::filter::SubscribeFilter(
                     yoriito::databroker::filter::PathsFilter(
                         {"/api/data", "/api/settings", "/api/config"}),
                     yoriito::databroker::filter::TimeBasedFilter(30)));
  ASSERT_EQ(subscribe_request.GetPath(), "Vehicle");
}

TEST(TestDataBrokerConsumerSubscribe_WithNoPathFilter_RangeFilter, Normal) {
  yoriito::databroker::ConsumerSubscribeRequest subscribe_request(
      "Vehicle",
      yoriito::databroker::filter::SubscribeFilter(
          yoriito::databroker::filter::RangeFilter(
              yoriito::databroker::filter::OperatorType::OPERATOR_GT, 100)));
  ASSERT_EQ(subscribe_request.GetPath(), "Vehicle");
}
