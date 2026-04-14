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

#include "signal/cabin/door/row2/driverside/Signal_IsChildLockActive_Availability_Sensor.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <memory>
#include <string>

#include "consumer_get_response.h"
#include "error.h"
#include "mock_consumer_subscribe_context.h"
#include "mock_databroker_consumer.h"
#include "mock_databroker_consumer_factory.h"
#include "result.h"

namespace vss = yoriito::vehicle::cabin::door::row2::driverside::
  ischildlockactive_availability_sensor;
using ::testing::Return;

namespace {
  yoriito::databroker::MockDataBrokerConsumer* mock_consumer;

  class
    GetNormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR
      : public ::testing::TestWithParam<bool> {
    protected:
      void SetUp() override {
        mock_consumer = new yoriito::databroker::MockDataBrokerConsumer();
        yoriito::databroker::MockDataBrokerConsumerFactory::instance =
          mock_consumer;
      }

      void TearDown() override {
        delete mock_consumer;
        yoriito::databroker::MockDataBrokerConsumerFactory::instance = nullptr;
      }
  };
  class
    SubscribeNormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR
      : public ::testing::TestWithParam<bool> {
    protected:
      void SetUp() override {
        mock_consumer = new yoriito::databroker::MockDataBrokerConsumer();
        yoriito::databroker::MockDataBrokerConsumerFactory::instance =
          mock_consumer;
      }

      void TearDown() override {
        delete mock_consumer;
        yoriito::databroker::MockDataBrokerConsumerFactory::instance = nullptr;
      }
  };
  class
    UnSubscribeNormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR
      : public ::testing::TestWithParam<bool> {
    protected:
      void SetUp() override {
        mock_consumer = new yoriito::databroker::MockDataBrokerConsumer();
        yoriito::databroker::MockDataBrokerConsumerFactory::instance =
          mock_consumer;
      }

      void TearDown() override {
        delete mock_consumer;
        yoriito::databroker::MockDataBrokerConsumerFactory::instance = nullptr;
      }
  };
  class
    InspectNormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR
      : public ::testing::Test {
    protected:
      void SetUp() override {
        mock_consumer = new yoriito::databroker::MockDataBrokerConsumer();
        yoriito::databroker::MockDataBrokerConsumerFactory::instance =
          mock_consumer;
      }

      void TearDown() override {
        delete mock_consumer;
        yoriito::databroker::MockDataBrokerConsumerFactory::instance = nullptr;
      }
  };
}  // namespace

TEST_P(
  GetNormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR,
  GetNormalTest_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR) {
  bool expected_value = GetParam();

  // mock request
  std::string current_path = vss::
    VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR;
  auto request = yoriito::databroker::ConsumerGetRequest(
    std::move(std::string(current_path)));

  // mock response
  double timestamp = 0.0;
  bool is_available_sensor = true;
  bool is_available_actuator = true;
  auto dp = yoriito::databroker::ConsumerGetDataPoint(
    current_path, expected_value, is_available_sensor, is_available_actuator,
    timestamp);
  std::vector<yoriito::databroker::ConsumerGetDataPoint> dps = {dp};
  auto response = yoriito::databroker::ConsumerGetResponse(std::move(dps));

  // setup mock
  EXPECT_CALL(*mock_consumer, Get(request))
    .WillOnce(Return(
      yoriito::Result<yoriito::databroker::ConsumerGetResponse>::Ok(response)));

  // execute
  auto result = vss::Get();

  // post_condition
  EXPECT_TRUE(result.IsOk());
  EXPECT_EQ(result.TakeOk(), expected_value);
};

INSTANTIATE_TEST_SUITE_P(
  VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR_Sensor,
  GetNormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR,
  ::testing::Values(true, false));

TEST_P(
  SubscribeNormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR,
  SubscribeNormalTest_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR) {
  bool expected_value = GetParam();

  // mock request for Subscribe
  std::string current_path = vss::
    VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR;
  auto request = yoriito::databroker::ConsumerSubscribeRequest(current_path);

  // mock response for Subscribe
  std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>
    expect_context =
      std::make_unique<yoriito::databroker::MockConsumerSubscribeContext>();
  auto raw_ptr = expect_context.get();

  // setup mock for Subscribe
  EXPECT_CALL(*mock_consumer, Subscribe(testing::_))
    .WillOnce(
      Return(yoriito::Result<
             std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>>::
               Ok(std::move(expect_context))));

  // mock request for Get
  auto get_request = yoriito::databroker::ConsumerGetRequest(
    std::move(std::string(current_path)));

  // mock response for Get
  double timestamp = 0.0;
  bool is_available_sensor = true;
  bool is_available_actuator = true;
  yoriito::ValueType value = expected_value;
  auto dp = yoriito::databroker::ConsumerGetDataPoint(
    current_path, std::move(value), is_available_sensor, is_available_actuator,
    timestamp);
  std::vector<yoriito::databroker::ConsumerGetDataPoint> dps = {dp};
  auto get_response = yoriito::databroker::ConsumerGetResponse(std::move(dps));

  // setup mock for Get
  EXPECT_CALL(*mock_consumer, Get(get_request))
    .WillOnce(
      Return(yoriito::Result<yoriito::databroker::ConsumerGetResponse>::Ok(
        get_response)));

  // execute
  auto result = vss::Subscribe();

  // post_condition
  EXPECT_TRUE(result.IsOk());
  EXPECT_EQ(result.TakeOk().value().get(), raw_ptr);
}

INSTANTIATE_TEST_SUITE_P(
  VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR_Sensor,
  SubscribeNormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR,
  ::testing::Values(true, false));

TEST_P(
  UnSubscribeNormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR,
  UnSubscribeNormalTest_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR) {
  bool expected_value = GetParam();

  // mock request for Subscribe
  std::string current_path = vss::
    VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR;
  auto request = yoriito::databroker::ConsumerSubscribeRequest(current_path);

  // mock response for Subscribe
  std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>
    expect_context =
      std::make_unique<yoriito::databroker::MockConsumerSubscribeContext>();
  auto raw_ptr = expect_context.get();

  // setup mock for Subscribe and UnSubscribe
  EXPECT_CALL(*mock_consumer, Subscribe(testing::_))
    .WillOnce(
      Return(yoriito::Result<
             std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>>::
               Ok(std::move(expect_context))));
  EXPECT_CALL(*mock_consumer, UnSubscribe(testing::_))
    .WillOnce(Return(yoriito::Result<void>::Ok()));

  // mock request for Get
  auto get_request = yoriito::databroker::ConsumerGetRequest(
    std::move(std::string(current_path)));

  // mock response for Get
  double timestamp = 0.0;
  bool is_available_sensor = true;
  bool is_available_actuator = true;
  yoriito::ValueType value = expected_value;
  auto dp = yoriito::databroker::ConsumerGetDataPoint(
    current_path, std::move(value), is_available_sensor, is_available_actuator,
    timestamp);
  std::vector<yoriito::databroker::ConsumerGetDataPoint> dps = {dp};
  auto get_response = yoriito::databroker::ConsumerGetResponse(std::move(dps));

  // setup mock for Get
  EXPECT_CALL(*mock_consumer, Get(get_request))
    .WillOnce(
      Return(yoriito::Result<yoriito::databroker::ConsumerGetResponse>::Ok(
        get_response)));

  // execute
  auto subscribe_ret = vss::Subscribe();

  // post_condition
  EXPECT_TRUE(subscribe_ret.IsOk());
  auto context = subscribe_ret.TakeOk().value();
  EXPECT_EQ(context.get(), raw_ptr);

  // execute
  auto result = vss::UnSubscribe(std::move(context));
  EXPECT_TRUE(result.IsOk());
}

INSTANTIATE_TEST_SUITE_P(
  VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR_Sensor,
  UnSubscribeNormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR,
  ::testing::Values(true, false));

TEST_F(
  InspectNormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR,
  InspectNormalTest_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR) {
  // mock request for Inspect
  std::string current_path = vss::
    VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR;
  auto inspect_request =
    yoriito::databroker::ConsumerInspectRequest(std::move(current_path));

  // mock response for Inspect
  auto builder = yoriito::databroker::ConsumerInspectData::CreateBuilder();
  auto data =
    yoriito::databroker::ConsumerInspectData::CreateFromBuilder(builder);
  std::vector<yoriito::databroker::ConsumerInspectData> data_ = {data};
  auto inspect_response =
    yoriito::databroker::ConsumerInspectResponse(std::move(data_));

  // setup mock for Inspect
  EXPECT_CALL(*mock_consumer, Inspect(inspect_request))
    .WillOnce(
      Return(yoriito::Result<yoriito::databroker::ConsumerInspectResponse>::Ok(
        inspect_response)));

  // execute
  auto inspect_ret = vss::Inspect();

  // post_condition
  EXPECT_TRUE(inspect_ret.IsOk());
}

// Abnormal Test
// Fixture
namespace {
  class
    GetAbnormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR
      : public ::testing::Test {
    protected:
      void SetUp() override {
        mock_consumer = new yoriito::databroker::MockDataBrokerConsumer();
        yoriito::databroker::MockDataBrokerConsumerFactory::instance =
          mock_consumer;
      }
      void TearDown() override {
        delete mock_consumer;
        yoriito::databroker::MockDataBrokerConsumerFactory::instance = nullptr;
      }
  };
  class
    SubscribeAbnormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR
      : public ::testing::Test {
    protected:
      void SetUp() override {
        mock_consumer = new yoriito::databroker::MockDataBrokerConsumer();
        yoriito::databroker::MockDataBrokerConsumerFactory::instance =
          mock_consumer;
      }
      void TearDown() override {
        delete mock_consumer;
        yoriito::databroker::MockDataBrokerConsumerFactory::instance = nullptr;
      }
  };
  class
    UnSubscribeAbnormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR
      : public ::testing::Test {
    protected:
      void SetUp() override {
        mock_consumer = new yoriito::databroker::MockDataBrokerConsumer();
        yoriito::databroker::MockDataBrokerConsumerFactory::instance =
          mock_consumer;
      }
      void TearDown() override {
        delete mock_consumer;
        yoriito::databroker::MockDataBrokerConsumerFactory::instance = nullptr;
      }
  };
  class
    InspectAbnormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR
      : public ::testing::Test {
    protected:
      void SetUp() override {
        mock_consumer = new yoriito::databroker::MockDataBrokerConsumer();
        yoriito::databroker::MockDataBrokerConsumerFactory::instance =
          mock_consumer;
      }
      void TearDown() override {
        delete mock_consumer;
        yoriito::databroker::MockDataBrokerConsumerFactory::instance = nullptr;
      }
  };
}  // namespace
// Get
TEST_F(
  GetAbnormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR,
  Get_ReturnsErr_WhenConsumerGetFails) {
  // mock request
  std::string current_path = vss::
    VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR;
  auto request = yoriito::databroker::ConsumerGetRequest(
    std::move(std::string(current_path)));
  // setup mock
  EXPECT_CALL(*mock_consumer, Get(request))
    .WillOnce(
      Return(yoriito::Result<yoriito::databroker::ConsumerGetResponse>::Err(
        std::make_unique<yoriito::CommonError>(
          yoriito::ErrorCode::ERROR_UNKNOWN))));
  // execute
  auto result = vss::Get();
  // post_condition
  EXPECT_TRUE(result.IsErr());
}
TEST_F(
  GetAbnormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR,
  Get_ReturnsErr_WhenDataPointsEmpty) {
  // mock request
  std::string current_path = vss::
    VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR;
  auto request = yoriito::databroker::ConsumerGetRequest(
    std::move(std::string(current_path)));
  std::vector<yoriito::databroker::ConsumerGetDataPoint> dps;
  auto response = yoriito::databroker::ConsumerGetResponse(std::move(dps));
  // setup mock
  EXPECT_CALL(*mock_consumer, Get(request))
    .WillOnce(Return(
      yoriito::Result<yoriito::databroker::ConsumerGetResponse>::Ok(response)));
  // execute
  auto result = vss::Get();
  // post_condition
  EXPECT_TRUE(result.IsErr());
}
TEST_F(
  GetAbnormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR,
  Get_ReturnsErr_WhenSensorUnavailable) {
  std::string current_path = vss::
    VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR;
  auto request = yoriito::databroker::ConsumerGetRequest(
    std::move(std::string(current_path)));
  double timestamp = 0.0;
  bool is_available_sensor = false;
  bool is_available_actuator = true;
  int8_t value = 1;
  auto dp = yoriito::databroker::ConsumerGetDataPoint(
    current_path, value, is_available_sensor, is_available_actuator, timestamp);
  std::vector<yoriito::databroker::ConsumerGetDataPoint> dps = {dp};
  auto response = yoriito::databroker::ConsumerGetResponse(std::move(dps));
  EXPECT_CALL(*mock_consumer, Get(request))
    .WillOnce(Return(
      yoriito::Result<yoriito::databroker::ConsumerGetResponse>::Ok(response)));
  auto result = vss::Get();
  EXPECT_TRUE(result.IsErr());
}

// Subscribe
TEST_F(
  SubscribeAbnormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR,
  Subscribe_ReturnsErr_WhenPreGetFails) {
  std::string current_path = vss::
    VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR;
  auto get_request = yoriito::databroker::ConsumerGetRequest(
    std::move(std::string(current_path)));
  EXPECT_CALL(*mock_consumer, Get(get_request))
    .WillOnce(
      Return(yoriito::Result<yoriito::databroker::ConsumerGetResponse>::Err(
        std::make_unique<yoriito::CommonError>(
          yoriito::ErrorCode::ERROR_UNKNOWN))));
  auto result = vss::Subscribe();
  EXPECT_TRUE(result.IsErr());
}
TEST_F(
  SubscribeAbnormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR,
  Subscribe_ReturnsErr_WhenDataPointsEmpty) {
  std::string current_path = vss::
    VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR;
  auto get_request = yoriito::databroker::ConsumerGetRequest(
    std::move(std::string(current_path)));
  std::vector<yoriito::databroker::ConsumerGetDataPoint> dps;  // empty
  auto get_response = yoriito::databroker::ConsumerGetResponse(std::move(dps));
  EXPECT_CALL(*mock_consumer, Get(get_request))
    .WillOnce(
      Return(yoriito::Result<yoriito::databroker::ConsumerGetResponse>::Ok(
        get_response)));
  auto result = vss::Subscribe();
  EXPECT_TRUE(result.IsErr());
}
TEST_F(
  SubscribeAbnormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR,
  Subscribe_ReturnsErr_WhenSensorUnavailable) {
  std::string current_path = vss::
    VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR;
  auto get_request = yoriito::databroker::ConsumerGetRequest(
    std::move(std::string(current_path)));
  double timestamp = 0.0;
  bool is_available_sensor = false;
  bool is_available_actuator = true;
  int8_t value = 1;
  auto dp = yoriito::databroker::ConsumerGetDataPoint(
    current_path, value, is_available_sensor, is_available_actuator, timestamp);
  std::vector<yoriito::databroker::ConsumerGetDataPoint> dps = {dp};
  auto get_response = yoriito::databroker::ConsumerGetResponse(std::move(dps));
  EXPECT_CALL(*mock_consumer, Get(get_request))
    .WillOnce(
      Return(yoriito::Result<yoriito::databroker::ConsumerGetResponse>::Ok(
        get_response)));
  auto result = vss::Subscribe();
  EXPECT_TRUE(result.IsErr());
}
TEST_F(
  SubscribeAbnormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR,
  Subscribe_ReturnsErr_WhenConsumerSubscribeFails) {
  std::string current_path = vss::
    VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR;
  // Pre Get Failed
  auto get_request = yoriito::databroker::ConsumerGetRequest(
    std::move(std::string(current_path)));
  double timestamp = 0.0;
  bool is_available_sensor = true;
  bool is_available_actuator = true;
  int8_t value = 10;
  auto dp = yoriito::databroker::ConsumerGetDataPoint(
    current_path, value, is_available_sensor, is_available_actuator, timestamp);
  std::vector<yoriito::databroker::ConsumerGetDataPoint> dps = {dp};
  auto get_response = yoriito::databroker::ConsumerGetResponse(std::move(dps));
  EXPECT_CALL(*mock_consumer, Get(get_request))
    .WillOnce(
      Return(yoriito::Result<yoriito::databroker::ConsumerGetResponse>::Ok(
        get_response)));
  // Subscribe Failed
  EXPECT_CALL(*mock_consumer, Subscribe(testing::_))
    .WillOnce(
      Return(yoriito::Result<
             std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>>::
               Err(std::make_unique<yoriito::CommonError>(
                 yoriito::ErrorCode::ERROR_UNAVAILABLE))));
  auto result = vss::Subscribe();
  EXPECT_TRUE(result.IsErr());
}
// Unsubscribe
TEST_F(
  UnSubscribeAbnormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR,
  UnSubscribe_ReturnsErr_WhenContextIsNull) {
  std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext> null_ctx;
  auto result = vss::UnSubscribe(std::move(null_ctx));
  EXPECT_TRUE(result.IsErr());
}
TEST_F(
  UnSubscribeAbnormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR,
  UnSubscribe_ReturnsErr_WhenConsumerUnsubscribeFails) {
  std::string current_path = vss::
    VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR;

  auto get_request = yoriito::databroker::ConsumerGetRequest(
    std::move(std::string(current_path)));
  double timestamp = 0.0;
  bool is_available_sensor = true;
  bool is_available_actuator = true;
  int8_t value = -1;
  auto dp = yoriito::databroker::ConsumerGetDataPoint(
    current_path, value, is_available_sensor, is_available_actuator, timestamp);
  std::vector<yoriito::databroker::ConsumerGetDataPoint> dps = {dp};
  auto get_response = yoriito::databroker::ConsumerGetResponse(std::move(dps));
  EXPECT_CALL(*mock_consumer, Get(get_request))
    .WillOnce(
      Return(yoriito::Result<yoriito::databroker::ConsumerGetResponse>::Ok(
        get_response)));
  std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>
    expect_context =
      std::make_unique<yoriito::databroker::MockConsumerSubscribeContext>();
  EXPECT_CALL(*mock_consumer, Subscribe(testing::_))
    .WillOnce(
      Return(yoriito::Result<
             std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>>::
               Ok(std::move(expect_context))));
  auto sub_ret = vss::Subscribe();
  ASSERT_TRUE(sub_ret.IsOk());
  auto ctx = sub_ret.TakeOk().value();
  // UnSubscribe Failed
  EXPECT_CALL(*mock_consumer, UnSubscribe(testing::_))
    .WillOnce(
      Return(yoriito::Result<void>::Err(std::make_unique<yoriito::CommonError>(
        yoriito::ErrorCode::ERROR_UNSUBSCRIBE))));
  auto result = vss::UnSubscribe(std::move(ctx));
  EXPECT_TRUE(result.IsErr());
}
TEST_F(
  UnSubscribeAbnormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR,
  UnSubscribe_ReturnsErr_WhenCalledTwice) {
  std::string current_path = vss::
    VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR;
  auto get_request = yoriito::databroker::ConsumerGetRequest(
    std::move(std::string(current_path)));
  double timestamp = 0.0;
  bool is_available_sensor = true;
  bool is_available_actuator = true;
  int8_t value = 0;
  auto dp = yoriito::databroker::ConsumerGetDataPoint(
    current_path, value, is_available_sensor, is_available_actuator, timestamp);
  std::vector<yoriito::databroker::ConsumerGetDataPoint> dps = {dp};
  auto get_response = yoriito::databroker::ConsumerGetResponse(std::move(dps));
  EXPECT_CALL(*mock_consumer, Get(get_request))
    .WillOnce(
      Return(yoriito::Result<yoriito::databroker::ConsumerGetResponse>::Ok(
        get_response)));
  std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>
    expect_context =
      std::make_unique<yoriito::databroker::MockConsumerSubscribeContext>();
  EXPECT_CALL(*mock_consumer, Subscribe(testing::_))
    .WillOnce(
      Return(yoriito::Result<
             std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>>::
               Ok(std::move(expect_context))));
  auto sub_ret = vss::Subscribe();
  ASSERT_TRUE(sub_ret.IsOk());
  auto ctx = sub_ret.TakeOk().value();
  EXPECT_CALL(*mock_consumer, UnSubscribe(testing::_))
    .WillOnce(Return(yoriito::Result<void>::Ok()));
  auto first = vss::UnSubscribe(std::move(ctx));
  EXPECT_TRUE(first.IsOk());
  std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext> empty;
  auto second = vss::UnSubscribe(std::move(empty));
  EXPECT_TRUE(second.IsErr());
}

// Inspect
TEST_F(
  InspectAbnormalTestFixture_VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR,
  Inspect_ReturnsErr_WhenBrokerReturnsErr) {
  std::string current_path = vss::
    VEHICLE_CABIN_DOOR_ROW2_DRIVERSIDE_ISCHILDLOCKACTIVE_AVAILABILITY_SENSOR;
  yoriito::databroker::ConsumerInspectRequest inspect_request(
    std::move(current_path));
  auto broker_err =
    std::make_unique<yoriito::CommonError>(yoriito::ErrorCode::ERROR_UNKNOWN);
  EXPECT_CALL(*mock_consumer, Inspect(inspect_request))
    .WillOnce(
      Return(yoriito::Result<yoriito::databroker::ConsumerInspectResponse>::Err(
        std::move(broker_err))));
  auto ret = vss::Inspect();
  EXPECT_TRUE(ret.IsErr());
}