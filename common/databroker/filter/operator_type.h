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

#ifndef YORIITO_VEHICLE_API_UTILITY_INC_DATABROKER_FILTER_OPERATOR_TYPE_H_
#define YORIITO_VEHICLE_API_UTILITY_INC_DATABROKER_FILTER_OPERATOR_TYPE_H_

/**
 * @ingroup common
 * @namespace yoriito::databroker::filter
 * @brief Namespace for DataBroker common interfaces and types.
 */
namespace yoriito::databroker::filter {

/**
 * @ingroup common
 * @enum OperatorType
 * @brief Enumeration for comparison operators used in filters.
 * @deprecated -
 * @pre -
 * @param -
 * @retval -
 * @note -
 * @code -
 * @endcode -
 */
enum class OperatorType {
  OPERATOR_UNDEFINED = 0,
  OPERATOR_EQ = 1,   // equal
  OPERATOR_NE = 2,   // not equal
  OPERATOR_GT = 3,   // greater than
  OPERATOR_GTE = 4,  // greater than or equal
  OPERATOR_LT = 5,   // less than
  OPERATOR_LTE = 6   // less than equal
};

/**
 * @ingroup common
 * @enum LogicalOperatorType
 * @brief Enumeration for logical operators used in filters.
 * @deprecated -
 * @pre -
 * @param -
 * @retval -
 * @note -
 * @code -
 * @endcode -
 */
enum class LogicalOperatorType {
  LOGICAL_OPERATOR_UNDEFINED = 0,
  LOGICAL_OPERATOR_AND = 1,  // AND
  LOGICAL_OPERATOR_OR = 2    // OR
};

}  // namespace yoriito::databroker::filter
#endif  // YORIITO_VEHICLE_API_UTILITY_INC_DATABROKER_FILTER_OPERATOR_TYPE_H_
