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
#include <vector>

#include "databroker/databroker_consumer.h"
#include "databroker/filter/get_filter.h"
// #include "databroker/get_request.h"
#include "result.h"

TEST(TestDataBrokerGetFilter, Normal) {
  yoriito::databroker::filter::GetFilter request(
      {"/api/data", "/api/settings", "/api/config"});
  auto tmp =
      std::vector<std::string>{"/api/data", "/api/settings", "/api/config"};
  ASSERT_EQ(request.GetPaths(), tmp);
}
TEST(TestDataBrokerGetFilter2, Normal) {
  yoriito::databroker::filter::GetFilter request({"sample"});
  auto tmp = std::vector<std::string>{"sample"};
  ASSERT_EQ(request.GetPaths(), tmp);
}
