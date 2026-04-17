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

#include "step.h"

// ----- unsubscribe -----

namespace {
/*
    Scenario: The unsubscribe request for a signal that is currently subscribed has been successfully processed
        Given a signal at <path> is set to <value_0> of datatype <datatype>
        And attempts to subscribe the signal at <path> of datatype <datatype> is succeeded
        Then attempts to unsubscribe the signal at <path> of datatype <datatype> is succeeded
*/
// GIVEN is same as the step in step_subscribe.cpp
THEN("^attempts to unsubscribe the signal at (\\S+) of datatype (\\S+) is succeeded$") {
    REGEX_PARAM(std::string, signal_name);
    REGEX_PARAM(std::string, datatype_str);

    auto t = WrapRttrGetTypeByName(datatype_str);

    DispatchRttrType(t, const_cast<std::string&>(signal_name), []<class T>(std::string& p) {
        ScenarioScope<ScenarioCtx> context;
        auto target = Registry<T>::Create(p);
        auto result = target.UnSubscribe(std::move(context->subscribe_context.front()));
        if(!result.IsOk()) {
            EXPECT_EQ(false, true);
        }
    });

}
/*
    Scenario Outline: The unsubscribe request for a signal that is currently not subscribed has been failed processed
        Given a signal at <path> is set to <value_0> of datatype <datatype> and doesn't attempt to subscribe the signal
        Then attempts to unsubscribe the signal at <path> of datatype <datatype> is failed
*/

GIVEN("^a signal at (\\S+) is set to (\\S+) of datatype (\\S+) and doesn't attempt to subscribe the signal$") {
  REGEX_PARAM(std::string, signal_name);
  REGEX_PARAM(std::string, datavalue_str);
  REGEX_PARAM(std::string, datatype_str);

  auto t = WrapRttrGetTypeByName(datatype_str);
  rttr::variant v = datavalue_str;

  // set the signal
  DispatchByRttrType(t, v, const_cast<std::string&>(signal_name), []<class T>(rttr::variant& var, std::string& p) {
    auto target_value = yoriito::ValueType{std::in_place_type<T>, var.get_value<T>()};
    SignalType sig_type = Registry<T>::Create(p).GetSignalType();
    auto *client = yoriito::databroker::DataBrokerProducerFactory::GetInstance();
    yoriito::databroker::ProducerSetDataPoint data_point{p, target_value, sig_type == SignalType::kActuator || sig_type == SignalType::kSensor, sig_type == SignalType::kActuator};
    std::vector<yoriito::databroker::ProducerSetDataPoint> data_points{data_point};
    yoriito::databroker::ProducerSetRequest actuate_value{data_points};
    auto result = client->Set(actuate_value);
    if (!result.IsOk()) { EXPECT_EQ(false, true); }
  });
}

THEN("^attempts to unsubscribe the signal at (\\S+) of datatype (\\S+) is failed$") {
    REGEX_PARAM(std::string, signal_name);
    REGEX_PARAM(std::string, datatype_str);

  auto t = WrapRttrGetTypeByName(datatype_str);

  // subscribe the signal
  DispatchRttrType(t, const_cast<std::string&>(signal_name), []<class T>(std::string& p) {
    auto target = Registry<T>::Create(p);
    auto result = target.Subscribe();
    if (!result.IsOk()) { EXPECT_EQ(false, true); }
    auto resp = result.TakeOk().value();

    // Headless App
    // first unsubscribe
    auto result_1 = target.UnSubscribe(std::move(resp));
    if (!result_1.IsOk()) { EXPECT_EQ(false, true); }
    // second unsubscribe
    auto result_2 = target.UnSubscribe(std::move(resp));
    if (result_2.IsOk()) { EXPECT_EQ(false, true); }
});
}

/*
    Scenario Outline: After the unsubscribe request succeeds, no update information will arrive in the stream
        Given a signal at <path> is set to <value_0> of datatype <datatype>
        And attempts to subscribe the signal at <path> of datatype <datatype> is succeeded
        When attempts to unsubscribe the signal at <path> of datatype <datatype> is succeeded
        And the value of signal at <path> changes to <value_1> of datatype <datatype>
        Then The subscribe stream doesn't return <datatype> <value_1> on <path>.
*/

// GIVEN is same as the step in step_subscribe.cpp

// WHEN is same as the above
// WHEN is same as the step in step_subscribe.cpp

THEN("^The subscribe stream doesn't return (\\S+) (\\S+) on (\\S+)$") {
  REGEX_PARAM(std::string, datatype_str);
  REGEX_PARAM(std::string, value_str);
  REGEX_PARAM(std::string, signal_name);

  auto t = WrapRttrGetTypeByName(datatype_str);
  rttr::variant v = value_str;

  DispatchByRttrType(t, v, const_cast<std::string&>(signal_name), []<class T>(rttr::variant& var, std::string& p) {
    //auto expected = var.get_value<T>();
    ScenarioScope<ScenarioCtx> context;

    auto* subscription = context->subscribe_context.front().get();
    EXPECT_EQ(subscription, nullptr);
  });
}

/*
    Scenario Outline: Unsubscribe of one subscription_id does not hinder other subscription_ids
        Given a signal at <path> is set to <value_0> of datatype <datatype>
        And attempts to subscribe the signal at <path> of datatype <datatype> for <count> times with duplex <duplex> are all succeeded
        When attempts to unsubscribe the signal at <path> of datatype <datatype> is succeeded
        And the value of signal at <path> changes to <value_1> of datatype <datatype>
        Then The other subscription_ids stream returns <datatype> <value_1> on <path>
*/
// GIVEN is same as the step in step_subscribe.cpp

// WHEN is same as the above
THEN("^The other subscription_ids stream returns (\\S+) (\\S+) on (\\S+)$") {
  REGEX_PARAM(std::string, datatype_str);
  REGEX_PARAM(std::string, value_str);
  REGEX_PARAM(std::string, signal_name);

  auto t = WrapRttrGetTypeByName(datatype_str);
  rttr::variant v = value_str;

  DispatchByRttrType(t, v, const_cast<std::string&>(signal_name), []<class T>(rttr::variant& var, std::string& p) {
    auto expected = var.get_value<T>();
    ScenarioScope<ScenarioCtx> context;

    auto* subscription = context->subscribe_context[1].get();
    auto data = subscription->Messages().TakeOk().value();
    EXPECT_EQ(data.GetDataPoints()[0].GetPath(), p);
    EXPECT_EQ(std::get<T>(data.GetDataPoints()[0].GetData()), expected);
  });
}

// ----- unsubscribe non-normal -----
/*
    Scenario Outline: Millions of unsubscribe requests do not kill kura server
        Given a signal at <path> is set to <value_0> of datatype <datatype>
        When attempts to subscribe the signal at <path> of datatype <datatype> for <count> times with duplex <duplex> are all succeeded
        Then HeadlessApp unsubscribe the sensor signal <path> of <datatype> to close connections with duplex <duplex> are all succeeded

*/
// GIVEN is same as the step in step_subscribe.cpp
// WHEN is same as the step in step_subscribe.cpp
std::mutex unsubscribe_mutex;
THEN("^HeadlessApp unsubscribe the sensor signal (\\S+) of (\\S+) to close connections with duplex ([0-9]+) are all succeeded$") {
  REGEX_PARAM(std::string, signal_name);
  REGEX_PARAM(std::string, datatype_str);
  REGEX_PARAM(int, num_threads);

  auto t = WrapRttrGetTypeByName(datatype_str);

  // unsubscribe the signal and set to subscribe_context with multi-thread
  std::vector<std::thread> ths(num_threads);
  for (auto&& th : ths) {
    th = std::thread([&] {
      DispatchRttrType(t, const_cast<std::string&>(signal_name), []<class T>(std::string& p) {
        ScenarioScope<ScenarioCtx> context;
        while (true) {
          std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext> subsc_ctx;
          {
            std::lock_guard<std::mutex> lock(unsubscribe_mutex);
            if (!context->subscribe_context.empty()) {
              subsc_ctx = std::move(context->subscribe_context.back());
              context->subscribe_context.pop_back();
            } else {
              break;  // break while
            }
          }
          auto target = Registry<T>::Create(p);
          auto result = target.UnSubscribe(std::move(subsc_ctx));
          if (!result.IsOk()) { EXPECT_EQ(false, true); }
        }
      });
    });
  }
  for (auto&& th : ths) th.join();
}

/*
    @CleanupRestoreNetwork
    Scenario Outline: Unsubscribe requests during network failure result in client error
        Given HeadlessApp subscribe the sensor signal <path> which is initialized <value> of datatype <datatype>
        When network failure of <network_failure> is injected
        Then attempts to unsubscribe the subscription to <path> of <datatype> are failed
*/
GIVEN("^HeadlessApp subscribe the sensor signal (\\S+) which is initialized (\\S+) of datatype (\\S+)$") {
    REGEX_PARAM(std::string, signal_name);
    REGEX_PARAM(std::string, value_str);
    REGEX_PARAM(std::string, datatype_str);

    auto t = WrapRttrGetTypeByName(datatype_str);
    rttr::variant v = value_str;

    // set the signal
    DispatchByRttrType(t, v, const_cast<std::string&>(signal_name), []<class T>(rttr::variant& var, std::string& p) {
        auto target_value = yoriito::ValueType{std::in_place_type<T>, var.get_value<T>()};
        SignalType sig_type = Registry<T>::Create(p).GetSignalType();
        auto *client = yoriito::databroker::DataBrokerProducerFactory::GetInstance();
        yoriito::databroker::ProducerSetDataPoint data_point{p, target_value, sig_type == SignalType::kActuator || sig_type == SignalType::kSensor, sig_type == SignalType::kActuator};
        std::vector<yoriito::databroker::ProducerSetDataPoint> data_points{data_point};
        yoriito::databroker::ProducerSetRequest actuate_value{data_points};
        auto result = client->Set(actuate_value);
        if(!result.IsOk()) {
            EXPECT_EQ(false, true);
        }
    });

    DispatchRttrType(t, const_cast<std::string&>(signal_name), []<class T>(std::string& p) {
        ScenarioScope<ScenarioCtx> context;
        // Headless App
        auto target = Registry<T>::Create(p);
        auto result = target.Subscribe();
        if(!result.IsOk()) {
            EXPECT_EQ(false, true);
        }
        auto resp = result.TakeOk().value();
        context->subscribe_context.push_back(std::move(resp));
    });
}

// WHEN is same as the step in step_subscribe.cpp
THEN("^attempts to unsubscribe the subscription to (\\S+) of (\\S+) are failed$") {
  REGEX_PARAM(std::string, signal_name);
  REGEX_PARAM(std::string, datatype_str);
  auto t = WrapRttrGetTypeByName(datatype_str);
  DispatchRttrType(t, const_cast<std::string&>(signal_name), []<class T>(std::string& p) {
    ScenarioScope<ScenarioCtx> context;
    auto target = Registry<T>::Create(p);

    for (auto&& ctx : context->subscribe_context) {
      auto result = target.UnSubscribe(std::move(ctx));
      EXPECT_FALSE(result.IsOk());
    }
  });
}

/*
    Scenario Outline: Unsubscribe requests after recovery from network failure are succeeded
        Given HeadlessApp subscribe the sensor signal <path> which is initialized <value> of datatype <datatype>
        When network failure of <network_failure> is injected
        And network is restored from the failure
        Then attempts to unsubscribe the subscription to <path> of <datatype> are succeeded
*/
// GIVEN is same as the step in step_unsubscribe.cpp
// WHEN is same as the step in step_subscribe.cpp
WHEN("^network is restored from the failure$") {
  // restore network & wait for a while
  OperateNetwork(NetworkOperation::kCleanup);
}
THEN("^attempts to unsubscribe the subscription to (\\S+) of (\\S+) are succeeded$") {
  REGEX_PARAM(std::string, signal_name);
  REGEX_PARAM(std::string, datatype_str);
  auto t = WrapRttrGetTypeByName(datatype_str);
  DispatchRttrType(t, const_cast<std::string&>(signal_name), []<class T>(std::string& p) {
    ScenarioScope<ScenarioCtx> context;
    auto target = Registry<T>::Create(p);

    for (auto&& ctx : context->subscribe_context) {
      auto result = target.UnSubscribe(std::move(ctx));
      EXPECT_TRUE(result.IsOk());
    }
  });
}

/*
    @CleanupRestoreServer
    Scenario Outline: Unsubscribe requests during server down result in client error
        Given HeadlessApp subscribe the sensor signal <path> which is initialized <value> of datatype <datatype>
        When the server is stopped
        Then attempts to unsubscribe the subscription to <path> of <datatype> are failed
*/
// GIVEN is same as the step in step_subscribe.cpp
// WHEN is same as the step in step_subscribe.cpp
// THEN is same as the step in step_subscribe.cpp

/*
    @CleanupRestoreServer
    Scenario Outline: Unsubscribe requests after server reset are succeeded
        Given HeadlessApp subscribe the sensor signal <path> which is initialized <value> of datatype <datatype>
        When the server is reset
        Then attempts to unsubscribe the subscription to <path> of <datatype> are succeeded
*/
// GIVEN is same as the step in step_subscribe.cpp
// WHEN is same as the step in step_subscribe.cpp
// THEN is same as the step in step_subscribe.cpp

}  // namespace

