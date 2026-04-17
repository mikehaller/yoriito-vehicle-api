// SPDX-License-Identifier: Apache-2.0
//
// Copyright 2026 JASPAR
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "Signal_Position.h"

//-------------------------------------------------------------------------------------
// VSS Signal: Vehicle.Cabin.Seat.Row1.DriverSide.Position
// Type      : actuator
// DataType  : uint16
// Unit      : mm
//-------------------------------------------------------------------------------------
namespace yoriito::vehicle::cabin::seat::row1::driverside::position {

  yoriito::Result<uint16_t> Get() {
    YORIITO_LOG_DEBUG("SAPI_SignalAPI", "Entering function [Get].");
    yoriito::databroker::DataBrokerConsumer* consumer =
      yoriito::databroker::DataBrokerConsumerFactory::GetInstance();
    yoriito::databroker::ConsumerGetRequest get_request(
      VEHICLE_CABIN_SEAT_ROW1_DRIVERSIDE_POSITION);
    yoriito::Result<yoriito::databroker::ConsumerGetResponse> ret =
      consumer->Get(get_request);
    if (!ret.IsOk()) {
      std::unique_ptr<yoriito::ErrorType> err_ptr = ret.TakeErr();
      YORIITO_LOG_ERROR("SAPI_SignalAPI", err_ptr->Message());
      return yoriito::Result<uint16_t>::Err(std::move(err_ptr));
    }
    auto response = ret.TakeOk().value();
    if (response.GetDataPoints().empty()) {
      YORIITO_LOG_ERROR("SAPI_SignalAPI",
                        std::string(yoriito::ErrorType::to_msg(
                          yoriito::ErrorCode::ERROR_NODATA)));
      return yoriito::Result<uint16_t>::Err(
        std::make_unique<yoriito::CommonError>(
          yoriito::ErrorCode::ERROR_NODATA));
    }
    const auto& data_point = response.GetDataPoints().front();
    if (!data_point.IsAvailableSensor()) {
      YORIITO_LOG_ERROR("SAPI_SignalAPI",
                        std::string(yoriito::ErrorType::to_msg(
                          yoriito::ErrorCode::ERROR_UNAVAILABLE)));
      return yoriito::Result<uint16_t>::Err(
        std::make_unique<yoriito::CommonError>(
          yoriito::ErrorCode::ERROR_UNAVAILABLE));
    }

    auto data = data_point.GetData();
    YORIITO_LOG_DEBUG("SAPI_SignalAPI", "Exiting function [Get].");
    return yoriito::Result<uint16_t>::Ok(std::get<uint16_t>(data));
  }

  yoriito::Result<void> Set(const uint16_t& value) {
    YORIITO_LOG_DEBUG("SAPI_SignalAPI", "Entering function [Set].");

    // we can't use std::format because based on c++17
    // example: return yoriito::Result<void>::Err(std::make_unique<yoriito::CommonError>(yoriito::ErrorCode::ERROR_INVAL, std::format("Invalid value: {}", value)));
    yoriito::databroker::DataBrokerConsumer* consumer =
      yoriito::databroker::DataBrokerConsumerFactory::GetInstance();
    yoriito::databroker::ConsumerInspectRequest inspect_request(
      VEHICLE_CABIN_SEAT_ROW1_DRIVERSIDE_POSITION);
    yoriito::Result<yoriito::databroker::ConsumerInspectResponse> inspect_ret =
      consumer->Inspect(inspect_request);
    if (!inspect_ret.IsOk()) {
      std::unique_ptr<yoriito::ErrorType> err_ptr = inspect_ret.TakeErr();
      YORIITO_LOG_ERROR("SAPI_SignalAPI", err_ptr->Message());
      return yoriito::Result<void>::Err(std::move(err_ptr));
    }
    auto inspect_response = inspect_ret.TakeOk().value();
    if (inspect_response.GetDataPoints().empty()) {
      YORIITO_LOG_ERROR("SAPI_SignalAPI",
                        std::string(yoriito::ErrorType::to_msg(
                          yoriito::ErrorCode::ERROR_NODATA)));
      return yoriito::Result<void>::Err(std::make_unique<yoriito::CommonError>(
        yoriito::ErrorCode::ERROR_NODATA));
    }
    const auto& inspect_data = inspect_response.GetDataPoints().front();
    const auto& min_data = inspect_data.GetMin();
    const auto& min_value = std::get<uint16_t>(min_data);
    if (value < min_value) {
      std::string err_msg = std::string(yoriito::ErrorType::to_msg(
                              yoriito::ErrorCode::ERROR_INVAL)) +
                            std::to_string(value);
      YORIITO_LOG_ERROR("SAPI_SignalAPI", err_msg);
      return yoriito::Result<void>::Err(std::make_unique<yoriito::CommonError>(
        yoriito::ErrorCode::ERROR_INVAL, err_msg));
    }

    yoriito::databroker::ConsumerSetDataPoint request_data(
      {VEHICLE_CABIN_SEAT_ROW1_DRIVERSIDE_POSITION, value});
    yoriito::databroker::ConsumerSetRequest set_request({request_data});
    YORIITO_LOG_DEBUG("SAPI_SignalAPI", "Exiting function [Set].");
    return consumer->Set(set_request);
  }

  yoriito::Result<
    std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>>
  Subscribe() {
    YORIITO_LOG_DEBUG("SAPI_SignalAPI", "Entering function [Subscribe].");
    yoriito::databroker::DataBrokerConsumer* consumer =
      yoriito::databroker::DataBrokerConsumerFactory::GetInstance();
    yoriito::databroker::ConsumerGetRequest get_request(
      VEHICLE_CABIN_SEAT_ROW1_DRIVERSIDE_POSITION);
    yoriito::Result<yoriito::databroker::ConsumerGetResponse> get_ret =
      consumer->Get(get_request);
    if (!get_ret.IsOk()) {
      std::unique_ptr<yoriito::ErrorType> err_ptr = get_ret.TakeErr();
      YORIITO_LOG_ERROR("SAPI_SignalAPI", err_ptr->Message());
      return yoriito::Result<
        std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>>::
        Err(std::move(err_ptr));
    }
    auto get_response = get_ret.TakeOk().value();
    if (get_response.GetDataPoints().empty()) {
      YORIITO_LOG_ERROR("SAPI_SignalAPI",
                        std::string(yoriito::ErrorType::to_msg(
                          yoriito::ErrorCode::ERROR_NODATA)));
      return yoriito::Result<
        std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>>::
        Err(std::make_unique<yoriito::CommonError>(
          yoriito::ErrorCode::ERROR_NODATA));
    }
    const auto& data_point = get_response.GetDataPoints().front();
    if (!data_point.IsAvailableSensor()) {
      YORIITO_LOG_ERROR("SAPI_SignalAPI",
                        std::string(yoriito::ErrorType::to_msg(
                          yoriito::ErrorCode::ERROR_UNAVAILABLE)));
      return yoriito::Result<
        std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>>::
        Err(std::make_unique<yoriito::CommonError>(
          yoriito::ErrorCode::ERROR_UNAVAILABLE));
    }

    yoriito::databroker::ConsumerSubscribeRequest subscribe_request(
      VEHICLE_CABIN_SEAT_ROW1_DRIVERSIDE_POSITION);
    auto subscribe_ret = consumer->Subscribe(subscribe_request);
    if (!subscribe_ret.IsOk()) {
      std::unique_ptr<yoriito::ErrorType> err_ptr = subscribe_ret.TakeErr();
      YORIITO_LOG_ERROR("SAPI_SignalAPI", err_ptr->Message());
      return yoriito::Result<
        std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>>::
        Err(std::move(err_ptr));
    }
    auto subscription_context = subscribe_ret.TakeOk().value();
    YORIITO_LOG_DEBUG("SAPI_SignalAPI", "Exiting function [Subscribe].");
    return yoriito::Result<
      std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>>::
      Ok(std::move(subscription_context));
  }

  yoriito::Result<void> UnSubscribe(
    std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>
      subscription_context) {
    YORIITO_LOG_DEBUG("SAPI_SignalAPI", "Entering function [UnSubscribe].");
    yoriito::databroker::DataBrokerConsumer* consumer =
      yoriito::databroker::DataBrokerConsumerFactory::GetInstance();
    if (!subscription_context) {
      YORIITO_LOG_ERROR("SAPI_SignalAPI",
                        std::string(yoriito::ErrorType::to_msg(
                          yoriito::ErrorCode::ERROR_UNSUBSCRIBE)));
      return yoriito::Result<void>::Err(std::make_unique<yoriito::CommonError>(
        yoriito::ErrorCode::ERROR_UNSUBSCRIBE));
    }
    auto ret = consumer->UnSubscribe(std::move(subscription_context));
    if (!ret.IsOk()) {
      std::unique_ptr<yoriito::ErrorType> err_ptr = ret.TakeErr();
      YORIITO_LOG_ERROR("SAPI_SignalAPI", err_ptr->Message());
      return yoriito::Result<void>::Err(std::move(err_ptr));
    }
    subscription_context.reset();
    YORIITO_LOG_DEBUG("SAPI_SignalAPI", "Exiting function [UnSubscribe].");
    return ret;
  }

  yoriito::Result<yoriito::databroker::ConsumerInspectResponse> Inspect() {
    YORIITO_LOG_DEBUG("SAPI_SignalAPI", "Entering function [Inspect].");
    yoriito::databroker::DataBrokerConsumer* consumer =
      yoriito::databroker::DataBrokerConsumerFactory::GetInstance();
    yoriito::databroker::ConsumerInspectRequest inspect_request(
      VEHICLE_CABIN_SEAT_ROW1_DRIVERSIDE_POSITION);
    yoriito::Result<yoriito::databroker::ConsumerInspectResponse> inspect_ret =
      consumer->Inspect(inspect_request);
    if (!inspect_ret.IsOk()) {
      std::unique_ptr<yoriito::ErrorType> err_ptr = inspect_ret.TakeErr();
      YORIITO_LOG_ERROR("SAPI_SignalAPI", err_ptr->Message());
      return yoriito::Result<yoriito::databroker::ConsumerInspectResponse>::Err(
        std::move(err_ptr));
    }
    YORIITO_LOG_DEBUG("SAPI_SignalAPI", "Exiting function [Inspect].");
    return inspect_ret;
  }

}  // namespace yoriito::vehicle::cabin::seat::row1::driverside::position
