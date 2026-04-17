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

#ifndef YORIITO_VEHICLE_API_UTILITY_INC_DATABROKER_BASE_GET_DATAPOINT_H_
#define YORIITO_VEHICLE_API_UTILITY_INC_DATABROKER_BASE_GET_DATAPOINT_H_

#include <string>

#include "databroker_type.h"

/**
 * @ingroup common
 * @namespace yoriito::databroker
 * @brief Namespace for DataBroker common interfaces and types.
 */
namespace yoriito::databroker {
/**
 * @ingroup common
 * @class BaseGetDataPoint
 * @brief Base class for getting datapoint values from the DataBroker.
 */
class BaseGetDataPoint {
 public:
  /**
   * @ingroup common
   * @fn BaseGetDataPoint::BaseGetDataPoint(const std::string& path, const
   * ValueType& data)
   * @brief Construct a BaseGetDataPoint object.
   * @deprecated -
   * @pre -
   * @param path The datapoint path.
   * @param data The datapoint value.
   * @retval -
   * @note -
   * @code -
   * @endcode -
   */
  BaseGetDataPoint(const std::string& path, const ValueType& data)
      : path_(path), data_(data) {}
  /**
   * @ingroup common
   * @fn BaseGetDataPoint::BaseGetDataPoint()
   * @brief Deleted default constructor.
   * @deprecated -
   * @pre -
   * @param -
   * @retval -
   * @note -
   * @code -
   * @endcode -
   */
  BaseGetDataPoint() = delete;
  /**
   * @ingroup common
   * @fn const std::string& BaseGetDataPoint::GetPath() const
   * @brief Get the datapoint path.
   * @deprecated -
   * @pre -
   * @param -
   * @retval std::string Datapoint path
   * @note -
   * @code -
   * @endcode -
   */
  const std::string& GetPath() const { return path_; }
  /**
   * @ingroup common
   * @fn const ValueType& BaseGetDataPoint::GetData() const
   * @brief Get the datapoint value.
   * @deprecated -
   * @pre -
   * @param -
   * @retval ValueType Datapoint value
   * @note -
   * @code -
   * @endcode -
   */
  const ValueType& GetData() const { return data_; }

 protected:
  std::string path_;
  ValueType data_;
};
}  // namespace yoriito::databroker
#endif  // YORIITO_VEHICLE_API_UTILITY_INC_DATABROKER_BASE_GET_DATAPOINT_H_
