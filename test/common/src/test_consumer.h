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


#ifndef YORIITO_VEHICLE_API_UTILITY_TEST_SRC_TEST_CONSUMER_H_
#define YORIITO_VEHICLE_API_UTILITY_TEST_SRC_TEST_CONSUMER_H_

#include <memory>

#include "databroker/databroker_consumer.h"
#include "error.h"
#include "result.h"

class TestConsumer : public yoriito::databroker::DataBrokerConsumer {
 public:
  TestConsumer() {}
  ~TestConsumer() = default;

  yoriito::Result<yoriito::databroker::ConsumerGetResponse> Get(
      const yoriito::databroker::ConsumerGetRequest& request) override {
    request_ = request;
    return yoriito::Result<yoriito::databroker::ConsumerGetResponse>::Err(
        std::make_unique<yoriito::CommonError>(
            yoriito::ErrorCode::ERROR_NOT_FOUND));
  };
  yoriito::Result<yoriito::databroker::ConsumerInspectResponse> Inspect(
      const yoriito::databroker::ConsumerInspectRequest& request) override {
    return yoriito::Result<yoriito::databroker::ConsumerInspectResponse>::Err(
        std::make_unique<yoriito::CommonError>(
            yoriito::ErrorCode::ERROR_NOT_FOUND));
  };

  yoriito::Result<void> Set(
      const yoriito::databroker::ConsumerSetRequest& data) override {
    return yoriito::Result<void>::Err(std::make_unique<yoriito::CommonError>(
        yoriito::ErrorCode::ERROR_NOT_FOUND));
  };
  yoriito::Result<std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>>
  Subscribe(
      const yoriito::databroker::ConsumerSubscribeRequest& request) override {
    return yoriito::Result<
        std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>>::
        Err(std::make_unique<yoriito::CommonError>(
            yoriito::ErrorCode::ERROR_NOT_FOUND));
  };

  yoriito::Result<void> UnSubscribe(
      std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>
          subscription_id) override {
    return yoriito::Result<void>::Err(std::make_unique<yoriito::CommonError>(
        yoriito::ErrorCode::ERROR_NOT_FOUND));
  };

  std::optional<yoriito::databroker::ConsumerGetRequest> request_;
};

#endif  // YORIITO_VEHICLE_API_UTILITY_TEST_SRC_TEST_CONSUMER_H_
