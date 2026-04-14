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

#include <string>

#include "databroker_type.h"

TEST(Test_DataBroker_Type, monostate) {
  yoriito::ValueType test = std::monostate{};
  ASSERT_TRUE(std::holds_alternative<std::monostate>(test));
}
TEST(Test_DataBroker_Type, monostate_override) {
  yoriito::ValueType test = static_cast<bool>(true);
  test = std::monostate{};
  ASSERT_TRUE(std::holds_alternative<std::monostate>(test));
}

TEST(Test_DataBroker_Type, bool_type) {
  yoriito::ValueType test = static_cast<bool>(true);

  bool b = std::get<bool>(test);
  ASSERT_TRUE(std::holds_alternative<bool>(test));
  ASSERT_TRUE(b);
}

TEST(Test_DataBroker_Type, string_type) {
  yoriito::ValueType test = static_cast<std::string>("TEST");

  std::string b = std::get<std::string>(test);
  ASSERT_TRUE(std::holds_alternative<std::string>(test));
  ASSERT_EQ(b, "TEST");
}
