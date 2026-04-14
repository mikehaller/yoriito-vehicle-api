/*
 * SPDX-License-Identifier: Apache-2.0
 *
 * Copyright 2026 JASPAR
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef VEHICLE_OCCUPANT_ROW1_PASSENGERSIDE_HEADPOSITION_Y_H
#define VEHICLE_OCCUPANT_ROW1_PASSENGERSIDE_HEADPOSITION_Y_H

#include <cstdint>
#include <memory>
#include <variant>

#include "databroker/databroker_consumer.h"
#include "databroker/databroker_consumer_factory.h"
#include "error.h"
#include "result.h"
#include "yoriito_log.h"

/**
 * @ingroup Occupant
 * @namespace yoriito::vehicle::occupant::row1::passengerside::headposition::y {
 * @brief Indicates the Vehicle.Occupant.Row1.PassengerSide.HeadPosition.Y signal.
 * @deprecated -
 * @version main
 */
namespace yoriito::vehicle::occupant::row1::passengerside::headposition::y {

  constexpr const char* VEHICLE_OCCUPANT_ROW1_PASSENGERSIDE_HEADPOSITION_Y =
    "Vehicle.Occupant.Row1.PassengerSide.HeadPosition.Y";

  /**
   * @ingroup Get
   * @fn yoriito::Result<int16_t> Get()
   * @brief Retrieves the current value for Vehicle.Occupant.Row1.PassengerSide.HeadPosition.Y
   * @deprecated -
   * @pre Vehicle.Occupant.Row1.PassengerSide.HeadPosition.Y is available.
   * @param -
   * @retval Ok(<int16_t>): The result indicates success and the value.
   * @retval Err(UnsetValueError): The result indicates the value has been not set.
   * @retval Err(NotAvailableError): The result indicates an unavailable value.
   * @retval Err(UnknownError): The result indicates an unknown error.
   * @note Thread safe.
   * @code
   * -
   * @endcode
   */
  yoriito::Result<int16_t> Get();

  /**
   * @ingroup Subscribe
   * @fn yoriito::Result<std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>> Subscribe()
   * @brief Subscribes to changes in the current value for Vehicle.Occupant.Row1.PassengerSide.HeadPosition.Y.
   * @deprecated -
   * @pre Vehicle.Occupant.Row1.PassengerSide.HeadPosition.Y is available.
   * @param -
   * @retval Ok(std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>): The result containing a subscription context.
   * @retval Err(NotAvailableError): The result indicates an unavailable value.
   * @retval Err(UnknownError): The result indicates an unknown error.
   * @note Thread safe.
   * @code
   * -
   * @endcode
   */
  yoriito::Result<
    std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>>
  Subscribe();

  /**
   * @ingroup UnSubscribe
   * @fn yoriito::Result<void> UnSubscribe(std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext> subscription_context)
   * @brief UnSubscribes from the current value for Vehicle.Occupant.Row1.PassengerSide.HeadPosition.Y.
   * @deprecated -
   * @pre The subscription to Vehicle.Occupant.Row1.PassengerSide.HeadPosition.Y has already been called.
   * @param -
   * @retval Ok(): The result indicates success or failure.
   * @retval Err(NotSubscribeError): The result indicates that it has not been subscribed.
   * @retval Err(NotAvailableError): The result indicates an unavailable value.
   * @retval Err(UnknownError): The result indicates an unknown error.
   * @note Thread safe.
   * @code
   * -
   * @endcode
   */
  yoriito::Result<void> UnSubscribe(
    std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>
      subscription_context);

  /**
   * @ingroup Inspect
   * @fn yoriito::Result<yoriito::databroker::ConsumerInspectResponse> Inspect()
   * @brief Retrieves the metadata for Vehicle.Occupant.Row1.PassengerSide.HeadPosition.Y
   * @deprecated -
   * @pre Vehicle.Occupant.Row1.PassengerSide.HeadPosition.Y is available.
   * @param -
   * @retval Ok(<yoriito::databroker::ConsumerInspectResponse>): The result indicates success and the inspect response.
   * @retval Err(UnsetValueError): The result indicates the value has been not set.
   * @retval Err(NotAvailableError): The result indicates an unavailable value.
   * @retval Err(UnknownError): The result indicates an unknown error.
   * @note Thread safe.
   * @code
   * yoriito::Result<yoriito::databroker::ConsumerInspectResponse> inspect_ret = Inspect();
   * yoriito::databroker::ConsumerInspectResponse inspect_response = inspect_ret.TakeOk().value();
   * if (inspect_response.GetDataPoints().empty()) {
   *   return yoriito::Result<yoriito::databroker::ConsumerInspectResponse>::Err(
   *     std::make_shared<yoriito::CommonError>(
   *       0, "No data points returned."));
   * }
   * const yoriito::databroker::ConsumerInspectData& inspect_data = response.GetDataPoints().front();
   *
   * // Returns the path of the component.
   * const auto& path = inspect_data.GetPath();
   *
   * // Returns the data type of the component.
   * const auto& data_type = inspect_data.GetDataType();
   *
   * // Returns the entry type of the component.
   * const auto& entry_type = inspect_data.GetEntryType();
   *
   * //Returns the deprecation information of the component.
   * const auto& deprecation = inspect_data.GetDeprecation();
   *
   * // Returns the unit of the component.
   * const auto& unit = inspect_data.GetUnit();
   *
   * // Returns the minimum value of the component.
   * const auto& min = inspect_data.GetMin();
   *
   * // Returns the maximum value of the component.
   * const auto& max = inspect_data.GetMax();
   *
   * // Returns the comment of the component.
   * const auto& comment = inspect_data.GetComment();
   *
   * // Returns the allowed values of the component.
   * const auto& allowed = inspect_data.GetAllowed();
   *
   * // Returns the default value of the component.
   * const auto& default_value = inspect_data.GetDefaultValue();
   *
   * // Returns the description of the component.
   * const auto& description = inspect_data.GetDescription();
   *
   * // Returns the array size of the component.
   * const auto& array_size = inspect_data.GetArraySize();
   *
   * // Returns the pattern of the component.
   * const auto& pattern = inspect_data.GetPattern();
   *
   * // Returns the custom attributes of the component.
   * const auto& custom_attributes = inspect_data.GetCustomAttributes();
   * @endcode
   */
  yoriito::Result<yoriito::databroker::ConsumerInspectResponse> Inspect();

}  // namespace yoriito::vehicle::occupant::row1::passengerside::headposition::y

#endif  // VEHICLE_OCCUPANT_ROW1_PASSENGERSIDE_HEADPOSITION_Y_H
