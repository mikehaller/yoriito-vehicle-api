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
#include <vector>

#include "databroker/filter/range_condition_array.h"
#include "result.h"
namespace dbf = yoriito::databroker::filter;

TEST(TestRangeFilterArray, Normal) {
  using OperatorType = dbf::OperatorType;
  using LogicalOperatorType = dbf::LogicalOperatorType;
  using RangeConditionWithOp = dbf::RangeConditionWithOp;

  RangeConditionWithOp condition1(OperatorType::OPERATOR_GT, 50,
                                  LogicalOperatorType::LOGICAL_OPERATOR_AND);
  RangeConditionWithOp condition2(OperatorType::OPERATOR_LT, 100,
                                  LogicalOperatorType::LOGICAL_OPERATOR_OR);
  std::vector<RangeConditionWithOp> conditions = {condition1, condition2};

  yoriito::databroker::filter::RangeConditionArray range_filter_array(
      conditions);
}
