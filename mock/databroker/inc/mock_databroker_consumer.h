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

#ifndef YORIITO_VEHICLE_API_BODY_MOCK_DATABROKER_INC_MOCK_DATABROKER_CONSUMER_H_
#define YORIITO_VEHICLE_API_BODY_MOCK_DATABROKER_INC_MOCK_DATABROKER_CONSUMER_H_

#include <string>
//
#include <gmock/gmock.h>
#include <gtest/gtest.h>
//
#include "databroker_consumer.h"
#include "databroker_consumer_factory.h"
using ::testing::Return;

namespace yoriito::databroker {

class MockDataBrokerConsumer : public DataBrokerConsumer {
  public:
    virtual ~MockDataBrokerConsumer() = default;

    MOCK_METHOD(
      Result<yoriito::databroker::ConsumerGetResponse>,
      Get,
      (const yoriito::databroker::ConsumerGetRequest& request),
      (override));
    MOCK_METHOD(
      Result<yoriito::databroker::ConsumerInspectResponse>,
      Inspect,
      (const yoriito::databroker::ConsumerInspectRequest& request),
      (override));
    MOCK_METHOD(
      Result<void>,
      Set,
      (const yoriito::databroker::ConsumerSetRequest& data),
      (override));
    MOCK_METHOD(
      Result<std::unique_ptr<ConsumerSubscribeContext>>,
      Subscribe,
      (const yoriito::databroker::ConsumerSubscribeRequest& request),
      (override));
    MOCK_METHOD(
      Result<void>,
      UnSubscribe,
      (std::unique_ptr<ConsumerSubscribeContext> subscrition_context),
      (override));
};

}  // namespace yoriito::databroker

#endif  // YORIITO_VEHICLE_API_BODY_MOCK_DATABROKER_INC_MOCK_DATABROKER_CONSUMER_H_