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

#include "Signal_DriverPosition.h"

//-------------------------------------------------------------------------------------
// VSS Signal: Vehicle.Cabin.DriverPosition
// Type      : attribute
// DataType  : string
// Unit      : None
//-------------------------------------------------------------------------------------
namespace yoriito::vehicle::cabin::driverposition {

  yoriito::Result<std::string> Get() {
    YORIITO_LOG_DEBUG("SAPI_SignalAPI", "Entering function [Get].");
    yoriito::databroker::DataBrokerConsumer* consumer =
      yoriito::databroker::DataBrokerConsumerFactory::GetInstance();
    yoriito::databroker::ConsumerGetRequest get_request(
      VEHICLE_CABIN_DRIVERPOSITION);
    yoriito::Result<yoriito::databroker::ConsumerGetResponse> ret =
      consumer->Get(get_request);
    if (!ret.IsOk()) {
      std::unique_ptr<yoriito::ErrorType> err_ptr = ret.TakeErr();
      YORIITO_LOG_ERROR("SAPI_SignalAPI", err_ptr->Message());
      return yoriito::Result<std::string>::Err(std::move(err_ptr));
    }
    auto response = ret.TakeOk().value();
    if (response.GetDataPoints().empty()) {
      YORIITO_LOG_ERROR("SAPI_SignalAPI",
                        std::string(yoriito::ErrorType::to_msg(
                          yoriito::ErrorCode::ERROR_NODATA)));
      return yoriito::Result<std::string>::Err(
        std::make_unique<yoriito::CommonError>(
          yoriito::ErrorCode::ERROR_NODATA));
    }
    const auto& data_point = response.GetDataPoints().front();
    if (!data_point.IsAvailableSensor()) {
      YORIITO_LOG_ERROR("SAPI_SignalAPI",
                        std::string(yoriito::ErrorType::to_msg(
                          yoriito::ErrorCode::ERROR_UNAVAILABLE)));
      return yoriito::Result<std::string>::Err(
        std::make_unique<yoriito::CommonError>(
          yoriito::ErrorCode::ERROR_UNAVAILABLE));
    }

    auto data = data_point.GetData();
    YORIITO_LOG_DEBUG("SAPI_SignalAPI", "Exiting function [Get].");
    return yoriito::Result<std::string>::Ok(std::get<std::string>(data));
  }

  yoriito::Result<yoriito::databroker::ConsumerInspectResponse> Inspect() {
    YORIITO_LOG_DEBUG("SAPI_SignalAPI", "Entering function [Inspect].");
    yoriito::databroker::DataBrokerConsumer* consumer =
      yoriito::databroker::DataBrokerConsumerFactory::GetInstance();
    yoriito::databroker::ConsumerInspectRequest inspect_request(
      VEHICLE_CABIN_DRIVERPOSITION);
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

}  // namespace yoriito::vehicle::cabin::driverposition
