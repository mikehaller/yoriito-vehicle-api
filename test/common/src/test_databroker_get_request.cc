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
#include <utility>

#include "databroker/consumer_get_request.h"
#include "databroker/databroker_consumer.h"
#include "databroker/filter/get_filter.h"
#include "result.h"

TEST(TestDataBrokerConsumerGetRequest_NoFilter, Normal) {
  yoriito::databroker::ConsumerGetRequest get_request(std::string("Vehicle"));
  ASSERT_EQ(get_request.GetPath(), "Vehicle");
  ASSERT_EQ(get_request.GetFilter().has_value(), false);
}

TEST(TestDataBrokerConsumerGetRequest_WithFilter, Normal) {
  yoriito::databroker::ConsumerGetRequest get_request(
      std::string("Vehicle"),
      yoriito::databroker::filter::GetFilter(
          {"/api/data", "/api/settings", "/api/config"}));
  ASSERT_EQ(get_request.GetPath(), "Vehicle");
  ASSERT_EQ(get_request.GetFilter().has_value(), true);
  ASSERT_EQ(
      get_request.GetFilter().value().GetPaths(),
      (std::vector<std::string>{"/api/data", "/api/settings", "/api/config"}));
}

TEST(TestDataBrokerConsumerGetRequest_WithFilter2, Normal) {
  yoriito::databroker::filter::GetFilter filter(
      {"/api/data", "/api/settings", "/api/config"});
  yoriito::databroker::ConsumerGetRequest get_request(std::string("Vehicle"),
                                                     std::move(filter));
  ASSERT_EQ(get_request.GetPath(), "Vehicle");
}
