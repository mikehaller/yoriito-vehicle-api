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
#include <cucumber-cpp/internal/Table.hpp>

// ----- set -----

using namespace std::chrono_literals;

namespace {
/*
    Scenario Outline: Cold start once and seed initial actuator values
        Given Kura service is cleanly restarted
        When HeadlessApp sets the following actuator signals
        Then PAL should report the following actuator signals
*/
GIVEN(
    "^Kura service is cleanly restarted$"
) {
    OperateKura(KuraOperation::kReset);
}

WHEN(
    "^HeadlessApp sets the following actuator signals$"
) {
    const auto& table = getArgs()->getTableArg();
    const auto rows = table.hashes();

    for (const auto& r : rows) {
        const std::string path     = r.at("path");
        const std::string datatype = r.at("datatype");
        const std::string value    = r.at("value");

        auto t = WrapRttrGetTypeByName(datatype);
        rttr::variant v = std::string(value);
        std::string target_path = path;

        DispatchByRttrType(t, v, target_path, []<class T>(rttr::variant& var, std::string& p) {
            auto target_value = var.get_value<T>();

            // Headless App
            auto target = Registry<T>::Create(p);
            auto resp = target.Set(target_value);
            EXPECT_TRUE(resp.IsOk());
        });
    }
}

THEN(
    "^PAL should report the following actuator signals$"
) {
    const auto& table = getArgs()->getTableArg();
    const auto rows = table.hashes();

    for (const auto& r : rows) {
        const std::string path     = r.at("path");
        const std::string datatype = r.at("datatype");
        const std::string value    = r.at("value");

        auto t = WrapRttrGetTypeByName(datatype);
        rttr::variant v = std::string(value);
        std::string target_path = path;

        DispatchByRttrType(t, v, target_path, []<class T>(rttr::variant& var, std::string& p) {
            auto expected_value = var.get_value<T>();

            ScenarioScope<ScenarioCtx> context;
            // PAL
            auto *client = yoriito::databroker::DataBrokerProducerFactory::GetInstance();
            yoriito::databroker::ProducerGetRequest req{std::move(p)};
            yoriito::Result<yoriito::databroker::ProducerGetResponse> result = client->Get(req);

            if (!result.IsOk()) {
                EXPECT_EQ(false, true);
            }
            auto data = std::get<T>(result.TakeOk().value().GetDataPoints().front().GetData());
            EXPECT_EQ(data, expected_value);

        });
    }
}

/*
    Scenario Outline: Overwrite/confirm after cold start (no restart)
        Given Set the actuator signal <path> to <datatype> <default_value>
        When HeadlessApp set the actuator signal <path> to <datatype> <checked_value>
        Then the result obtained from the actuator signal by PAL should be <datatype> <checked_value> on <path>
*/
GIVEN(
    "^Set the actuator signal (\\S+) to (\\S+) (\\S+)$"
) {
    REGEX_PARAM(std::string, signal_name);
    REGEX_PARAM(std::string, datatype_str);
    REGEX_PARAM(std::string, value_str);

    auto t = WrapRttrGetTypeByName(datatype_str);
    rttr::variant v = std::string(std::string(value_str));
    std::string target_path = signal_name;

    DispatchByRttrType(t, v, target_path, []<class T>(rttr::variant& var, std::string& p) {
        auto target_value = var.get_value<T>();

        // Headless App
        auto target = Registry<T>::Create(p);
        auto resp = target.Set(target_value);
        EXPECT_TRUE(resp.IsOk());
    });
}

WHEN(
    "^HeadlessApp set the actuator signal (\\S+) to (\\S+) (\\S+)$"
) {
    REGEX_PARAM(std::string, signal_name);
    REGEX_PARAM(std::string, datatype_str);
    REGEX_PARAM(std::string, value_str);

    auto t = WrapRttrGetTypeByName(datatype_str);
    rttr::variant v = std::string(std::string(value_str));
    std::string target_path = signal_name;

    DispatchByRttrType(t, v, target_path, []<class T>(rttr::variant& var, std::string& p) {
        auto target_value = var.get_value<T>();

        // Headless App
        auto target = Registry<T>::Create(p);
        auto resp = target.Set(target_value);
        EXPECT_TRUE(resp.IsOk());
    });
}

THEN(
    "^the result obtained from the actuator signal by PAL should be (\\S+) (\\S+) on (\\S+)$"
) {
    REGEX_PARAM(std::string, datatype_str);
    REGEX_PARAM(std::string, value_str);
    REGEX_PARAM(std::string, signal_name);

    auto t = WrapRttrGetTypeByName(datatype_str);
    rttr::variant v = std::string(std::string(value_str));
    std::string target_path = signal_name;

    DispatchByRttrType(t, v, target_path, []<class T>(rttr::variant& var, std::string& p) {
        auto expected_value = var.get_value<T>();

        ScenarioScope<ScenarioCtx> context;
        // PAL
        auto *client = yoriito::databroker::DataBrokerProducerFactory::GetInstance();
        yoriito::databroker::ProducerGetRequest req{std::move(p)};
        yoriito::Result<yoriito::databroker::ProducerGetResponse> result = client->Get(req);

        if (!result.IsOk()) {
            EXPECT_EQ(false, true);
        }
        auto data = std::get<T>(result.TakeOk().value().GetDataPoints().front().GetData());
        EXPECT_EQ(data, expected_value);
    });
}

/*
    Scenario Outline: Millions of set requests do not kill kura server & values remain consistent
        When HeadlessApp set the signal <path> to <datatype> <checked_value> <count> times with duplex <duplex>
        Then the result obtained from the actuator signal by PAL should be <datatype> <checked_value> on <path>
*/
WHEN("^HeadlessApp set the signal (\\S+) to (\\S+) (\\S+) ([0-9]+) times with duplex ([0-9]+)$") {
  REGEX_PARAM(std::string, signal_name);
  REGEX_PARAM(std::string, datatype_str);
  REGEX_PARAM(std::string, value_str);
  REGEX_PARAM(int, set_times);
  REGEX_PARAM(int, num_threads);

  const auto t = WrapRttrGetTypeByName(datatype_str);

  std::atomic<int> ok{0}, ng{0};
  std::vector<std::thread> ths(num_threads);

  for (auto& th : ths) {
    th = std::thread([&, t, signal_name, value_str, set_times] {

      for (int i = 0; i < set_times; ++i) {
        std::string target_path = signal_name;
        rttr::variant v = value_str;
        DispatchByRttrType(t, v, target_path, [&]<class T>(rttr::variant& var, std::string& p) {
            const T target_value = var.get_value<T>();

            auto target = Registry<T>::Create(p);
            auto resp   = target.Set(target_value);

            if (resp.IsOk()) ok.fetch_add(1, std::memory_order_relaxed);
            else             ng.fetch_add(1, std::memory_order_relaxed);
          }
        );
      }
    });
  }
  for (auto& th : ths) th.join();

  EXPECT_EQ(ok.load(), set_times * num_threads) << "Insufficient simultaneous set call successes";
  EXPECT_EQ(ng.load(), 0) << "Some Set() failed under concurrency";
}
// THEN is same as the above

/*
    @CleanupRestoreServer
    Scenario Outline: Subscribe requests are failed when the server is stopped
        Given a signal at <path> is set to <value_0> of datatype <datatype>
        When the server is stopped
        Then an attempt to subscribe the signal at <path> of datatype <datatype> is failed
*/
WHEN("^the server is stopped for set$") { EXPECT_TRUE(OperateKura(KuraOperation::kStop)); }
THEN("^an attempt to set the actuator signal (\\S+) to (\\S+) (\\S+) is failed$") {
    REGEX_PARAM(std::string, signal_name);
    REGEX_PARAM(std::string, datatype_str);
    REGEX_PARAM(std::string, value_str);

    auto t = WrapRttrGetTypeByName(datatype_str);
    rttr::variant v = std::string(std::string(value_str));
    std::string target_path = signal_name;

    DispatchByRttrType(t, v, target_path, []<class T>(rttr::variant& var, std::string& p) {
        auto target_value = var.get_value<T>();

        // Headless App
        auto target = Registry<T>::Create(p);
        auto result = target.Set(target_value);
    if (result.IsOk()) { EXPECT_EQ(false, true); }
    });
}

AFTER("@CleanupRestoreServerforSet") { OperateKura(KuraOperation::kReset); }
AFTER("@CleanupRestoreNetworkforSet") { OperateNetwork(NetworkOperation::kCleanup); }

/*
    Scenario Outline: Set requests are failed when the network communication failure
        When network failure of <network_failure> is injected
        Then an attempt to set the actuator signal <path> to <datatype> <checked_value> is failed
*/
WHEN("^network failure of (\\S+) is injected for set$") {
  REGEX_PARAM(std::string, network_failure);
  if (network_failure == "timeout") {
    EXPECT_TRUE(OperateNetwork(NetworkOperation::kTimeout));
  } else if (network_failure == "reject") {
    EXPECT_TRUE(OperateNetwork(NetworkOperation::kReject));
  } else {
    EXPECT_STREQ(network_failure.c_str(), "network_failure should be either timeout or reject");
  }
}
// THEN is same as the above
}
