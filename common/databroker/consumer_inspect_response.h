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

#ifndef YORIITO_VEHICLE_API_UTILITY_INC_DATABROKER_CONSUMER_INSPECT_RESPONSE_H_
#define YORIITO_VEHICLE_API_UTILITY_INC_DATABROKER_CONSUMER_INSPECT_RESPONSE_H_

#include <iostream>
#include <optional>
#include <string>
#include <utility>
#include <vector>

#include "databroker/consumer_inspect_data.h"

/**
 * @ingroup common
 * @namespace yoriito::databroker
 * @brief Namespace for DataBroker common interfaces and types.
 */

namespace yoriito::databroker {

/**
 * @ingroup consumer
 * @class ConsumerInspectResponse
 * @brief Response class for inspecting datapoint metadata in the DataBroker.
 */
class ConsumerInspectResponse {
 public:
  /**
   * @ingroup consumer
   * @fn ConsumerInspectResponse::ConsumerInspectResponse()
   * @brief Deleted default constructor.
   * @deprecated -
   * @pre -
   * @param -
   * @retval -
   * @note -
   * @code -
   * @endcode -
   */
  ConsumerInspectResponse() = delete;

  /**
   * @ingroup consumer
   * @fn
   * ConsumerInspectResponse::ConsumerInspectResponse(std::vector<ConsumerInspectData>&&
   * datas)
   * @brief Construct a ConsumerInspectResponse object with data points.
   * @deprecated -
   * @pre -
   * @param datas Vector of ConsumerInspectData objects.
   * @retval -
   * @note -
   * @code -
   * @endcode -
   */
  explicit ConsumerInspectResponse(std::vector<ConsumerInspectData>&& datas)
      : datas_(std::move(datas)) {}

  /**
   * @ingroup consumer
   * @fn const std::vector<ConsumerInspectData>&
   * ConsumerInspectResponse::GetDataPoints() const
   * @brief Get the vector of ConsumerInspectData objects.
   * @deprecated -
   * @pre -
   * @param -
   * @retval std::vector<ConsumerInspectData> Vector of data points
   * @note -
   * @code -
   * @endcode -
   */
  const std::vector<ConsumerInspectData>& GetDataPoints() const {
    return datas_;
  }

 private:
  std::vector<ConsumerInspectData> datas_;
};

}  // namespace yoriito::databroker

#endif  // YORIITO_VEHICLE_API_UTILITY_INC_DATABROKER_CONSUMER_INSPECT_RESPONSE_H_
