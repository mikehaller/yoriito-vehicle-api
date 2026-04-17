/*
 * SPDX-License-Identifier: Apache-2.0
 *
 * Copyright 2026 JASPAR
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef YORIITO_VEHICLE_API_UTILITY_INC_DATABROKER_FILTER_RANGE_CONDITION_H_
#define YORIITO_VEHICLE_API_UTILITY_INC_DATABROKER_FILTER_RANGE_CONDITION_H_

#include "databroker/filter/operator_type.h"

/**
 * @ingroup common
 * @namespace yoriito::databroker::filter
 * @brief Namespace for DataBroker common interfaces and types.
 */
namespace yoriito::databroker::filter {

/**
 * @ingroup common
 * @class RangeCondition
 * @brief Class representing a range condition for filtering datapoints.
 */
class RangeCondition {
 public:
  /**
   * @ingroup common
   * @fn explicit RangeCondition(OperatorType boundary_op, double boundary)
   * @brief Constructs a RangeCondition with the specified boundary operator and
   * value.
   * @deprecated -
   * @pre -
   * @param boundary_op The boundary operator type.
   * @param boundary The boundary value (double).
   * @retval -
   * @note -
   * @code -
   * @endcode -
   */
  explicit RangeCondition(OperatorType boundary_op, double boundary)
      : boundary_op_(boundary_op), boundary_(boundary) {}

  /**
   * @ingroup common
   * @fn virtual ~RangeCondition()
   * @brief Destructor for RangeCondition.
   * @deprecated -
   * @pre -
   * @param -
   * @retval -
   * @note -
   * @code -
   * @endcode -
   */
  virtual ~RangeCondition() = default;

  /**
   * @ingroup common
   * @fn double GetBoundary() const
   * @brief Gets the boundary value for this condition.
   * @deprecated -
   * @pre -
   * @param -
   * @retval The boundary value (double).
   * @note -
   * @code -
   * @endcode -
   */
  double GetBoundary() const { return boundary_; }

  /**
   * @ingroup common
   * @fn OperatorType GetBoundaryOperator() const
   * @brief Gets the boundary operator type for this condition.
   * @deprecated -
   * @pre -
   * @param -
   * @retval The boundary operator type.
   * @note -
   * @code -
   * @endcode -
   */
  OperatorType GetBoundaryOperator() const { return boundary_op_; }

  /**
   * @ingroup common
   * @fn friend bool operator==(const RangeCondition& lhs, const RangeCondition&
   * rhs)
   * @brief Compares two RangeCondition objects for equality.
   * @deprecated -
   * @pre -
   * @param lhs The left-hand side RangeCondition.
   * @param rhs The right-hand side RangeCondition.
   * @retval true if both boundary_op and boundary are equal; false otherwise.
   * @note -
   * @code -
   * @endcode -
   */
  friend bool operator==(const RangeCondition& lhs, const RangeCondition& rhs) {
    return lhs.boundary_op_ == rhs.boundary_op_ &&
           lhs.boundary_ == rhs.boundary_;
  }

 private:
  OperatorType boundary_op_;
  double boundary_;
};

}  // namespace yoriito::databroker::filter

#endif  // YORIITO_VEHICLE_API_UTILITY_INC_DATABROKER_FILTER_RANGE_CONDITION_H_
