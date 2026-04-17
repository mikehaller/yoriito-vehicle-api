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

#include "databroker/filter/range_condition.h"
#include "databroker/filter/range_filter.h"
#include "result.h"
namespace dbf = yoriito::databroker::filter;
using OperatorType = dbf::OperatorType;
using LogicalOperatorType = dbf::LogicalOperatorType;
using RangeConditionWithOp = dbf::RangeConditionWithOp;
using RangeFilter = dbf::RangeFilter;

TEST(TestRangeFilterCondition, Normal) {
  yoriito::databroker::filter::RangeCondition range_condition(
      yoriito::databroker::filter::OperatorType::OPERATOR_GT, 100);

  ASSERT_EQ(range_condition.GetBoundaryOperator(),
            yoriito::databroker::filter::OperatorType::OPERATOR_GT);
  ASSERT_EQ(range_condition.GetBoundary(), 100);
}

TEST(TestRangeFilter, Normal) {
  yoriito::databroker::filter::RangeFilter range_filter(
      yoriito::databroker::filter::RangeCondition(
          yoriito::databroker::filter::OperatorType::OPERATOR_GT, 100));
  auto single_condition = range_filter.GetSingleCondition();
  ASSERT_NE(single_condition, nullptr);
  ASSERT_EQ(single_condition->GetBoundaryOperator(),
            yoriito::databroker::filter::OperatorType::OPERATOR_GT);
  ASSERT_EQ(single_condition->GetBoundary(), 100);
}

TEST(TestRangeFilter_Array, Normal) {
  std::vector<yoriito::databroker::filter::RangeConditionWithOp> conditions = {
      yoriito::databroker::filter::RangeConditionWithOp(
          OperatorType::OPERATOR_GT, 100,
          LogicalOperatorType::LOGICAL_OPERATOR_AND),
      yoriito::databroker::filter::RangeConditionWithOp(
          OperatorType::OPERATOR_LT, 200)};
  yoriito::databroker::filter::RangeFilter range_filter(conditions);
  auto condition_array = range_filter.GetConditionArray();
  ASSERT_NE(condition_array, nullptr);
  ASSERT_EQ(condition_array->Size(), 2);
  ASSERT_EQ(condition_array->GetConditions()[0].GetBoundaryOperator(),
            yoriito::databroker::filter::OperatorType::OPERATOR_GT);
  ASSERT_EQ(condition_array->GetConditions()[0].GetBoundary(), 100);
  ASSERT_EQ(condition_array->GetConditions()[1].GetBoundaryOperator(),
            yoriito::databroker::filter::OperatorType::OPERATOR_LT);
  ASSERT_EQ(condition_array->GetConditions()[1].GetBoundary(), 200);
}
