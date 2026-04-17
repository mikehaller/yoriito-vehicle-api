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

#ifndef VEHICLE_CABIN_SEAT_ROW1_DRIVERSIDE_VENTILATOR_H
#define VEHICLE_CABIN_SEAT_ROW1_DRIVERSIDE_VENTILATOR_H

#include <cstdint>
#include <memory>
#include <string>
#include <variant>

#include "databroker/databroker_consumer.h"
#include "databroker/databroker_consumer_factory.h"
#include "error.h"
#include "result.h"
#include "yoriito_log.h"

/**
 * @ingroup Cabin
 * @namespace yoriito::vehicle::cabin::seat::row1::driverside::ventilator
 * @brief Indicates the Vehicle.Cabin.Seat.Row1.DriverSide.Ventilator signal.
 * @deprecated -
 * @version main
 */
namespace yoriito::vehicle::cabin::seat::row1::driverside::ventilator {

  constexpr const char* VEHICLE_CABIN_SEAT_ROW1_DRIVERSIDE_VENTILATOR =
    "Vehicle.Cabin.Seat.Row1.DriverSide.Ventilator";

  /**
   * @ingroup Get
   * @fn yoriito::Result<uint8_t> Get()
   * @brief Retrieves the current value for Vehicle.Cabin.Seat.Row1.DriverSide.Ventilator
   * @deprecated -
   * @pre Vehicle.Cabin.Seat.Row1.DriverSide.Ventilator is available.
   * @param -
   * @retval Ok(<uint8_t>): The result indicates success and the value.
   * @retval Err(UnsetValueError): The result indicates the value has been not set.
   * @retval Err(NotAvailableError): The result indicates an unavailable value.
   * @retval Err(UnknownError): The result indicates an unknown error.
   * @note Thread safe.
   * @code
   * -
   * @endcode
   */
  yoriito::Result<uint8_t> Get();

  /**
   * @ingroup Set
   * @fn yoriito::Result<void> Set(const uint8_t& value)
   * @brief Sets the target value for Vehicle.Cabin.Seat.Row1.DriverSide.Ventilator.
   * @deprecated -
   * @pre Vehicle.Cabin.Seat.Row1.DriverSide.Ventilator is available.
   * @param value: The value to set.
   * @retval Ok(): The result indicates success.
   * @retval Err(ParameterError): The result indicates a parameter error.
   * @retval Err(InvalidValueError): The result indicates an invalid value.
   * @retval Err(NotAvailableError): The result indicates an unavailable value.
   * @retval Err(UnknownError): The result indicates an unknown error.
   * @note Thread safe. Last-come, first-served.
   * @code
   * -
   * @endcode
   */
  yoriito::Result<void> Set(const uint8_t& value);

  /**
   * @ingroup Subscribe
   * @fn yoriito::Result<std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>> Subscribe()
   * @brief Subscribes to changes in the current value for Vehicle.Cabin.Seat.Row1.DriverSide.Ventilator.
   * @deprecated -
   * @pre Vehicle.Cabin.Seat.Row1.DriverSide.Ventilator is available.
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
   * @brief UnSubscribes from the current value for Vehicle.Cabin.Seat.Row1.DriverSide.Ventilator.
   * @deprecated -
   * @pre The subscription to Vehicle.Cabin.Seat.Row1.DriverSide.Ventilator has already been called.
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
   * @brief Retrieves the metadata for Vehicle.Cabin.Seat.Row1.DriverSide.Ventilator
   * @deprecated -
   * @pre Vehicle.Cabin.Seat.Row1.DriverSide.Ventilator is available.
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

}  // namespace yoriito::vehicle::cabin::seat::row1::driverside::ventilator
#endif  // VEHICLE_CABIN_SEAT_ROW1_DRIVERSIDE_VENTILATOR_H
