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

#ifndef __BODY_STEP_HPP__
#define __BODY_STEP_HPP__

#include <gtest/gtest.h>

#include <chrono>
#include <cucumber-cpp/autodetect.hpp>
#include <functional>
#include <nlohmann/json.hpp>
#include <rttr/registration>
#include <rttr/type>
#include <shared_mutex>
#include <thread>
#include <unordered_map>

#include "base_inspect_data.h"
#include "databroker_consumer.h"
#include "databroker_consumer_factory.h"
#include "databroker_producer.h"
#include "databroker_producer_factory.h"
#include "databroker_type.h"
#include "result.h"

using cucumber::ScenarioScope;
using namespace std::chrono_literals;

// ----- helper -----
// try {
//  auto v = parseArray<bool>(s);
// } catch (const nlohmann::json::parse_error&  e) {
// } catch (const nlohmann::json::type_error&   e) {
// } catch (const nlohmann::json::out_of_range& e) {
// }
template <typename T>
static std::vector<T> ParseArray(const std::string& s) {
  auto j = nlohmann::json::parse(s);

  if (!j.is_array()) { throw std::runtime_error("Invalid type: expected an array"); }

  return j.get<std::vector<T>>();
}

// Shared scenario state
struct ScenarioCtx {
  std::unique_ptr<yoriito::ValueType> get_value;
  std::unique_ptr<yoriito::databroker::ConsumerInspectData> inspect_value;
  std::vector<std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>> subscribe_context;
  std::vector<yoriito::ValueType> subscribe_actual;
  std::vector<yoriito::ValueType> subscribe_expect;
};

enum SignalType {
  kActuator,
  kSensor,
  kAttribute,
  kBranch,
};

template <typename T>
struct SignalHandle {
  std::function<yoriito::Result<T>()> Get;
  std::function<yoriito::Result<std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>>()> Subscribe;
  std::function<yoriito::Result<void>(std::unique_ptr<yoriito::databroker::ConsumerSubscribeContext>)> UnSubscribe;
  std::function<yoriito::Result<void>(const T&)> Set;
  std::function<yoriito::Result<yoriito::databroker::ConsumerInspectResponse>()> Inspect;
  std::function<SignalType()> GetSignalType;
};

template <typename T>
class Registry {
 public:
  using Handle = SignalHandle<T>;
  using SignalCreator = std::function<Handle()>;

  static void Register(const std::string& name, SignalCreator c) {
    std::unique_lock lk(Mtx());
    Map()[name] = std::move(c);
  }

  static Handle Create(const std::string& name) {
    std::shared_lock lk(Mtx());
    auto& m = Map();
    auto it = m.find(name);
    if (it == Map().end()) { throw std::runtime_error("Unknown type: " + name); }
    return it->second();
  }

 private:
  static std::unordered_map<std::string, SignalCreator>& Map() {
    static std::unordered_map<std::string, SignalCreator> m;
    return m;
  }

  static std::shared_mutex& Mtx() {
    static std::shared_mutex mx;
    return mx;
  }
};
#define RETURN_HANDLE_ACTUATOR(NS, T) return SignalHandle<T>{NS::Get, NS::Subscribe, NS::UnSubscribe, NS::Set, NS::Inspect, [] { return SignalType::kActuator; }};
#define RETURN_HANDLE_SENSOR(NS, T) return SignalHandle<T>{NS::Get, NS::Subscribe, NS::UnSubscribe, nullptr, NS::Inspect, [] { return SignalType::kSensor; }};
#define RETURN_HANDLE_ATTRIBUTE(NS, T) return SignalHandle<T>{NS::Get, nullptr, nullptr, nullptr, NS::Inspect, [] { return SignalType::kAttribute; }};

static std::unordered_map<std::string, rttr::type> datatype_map = {
    {"bool", rttr::type::get<bool>()},
    {"string", rttr::type::get<std::string>()},
    {"float", rttr::type::get<float>()},
    {"double", rttr::type::get<double>()},
    {"int8", rttr::type::get<int8_t>()},
    {"int16", rttr::type::get<int16_t>()},
    {"int32", rttr::type::get<int32_t>()},
    {"int64", rttr::type::get<int64_t>()},
    {"uint8", rttr::type::get<uint8_t>()},
    {"uint16", rttr::type::get<uint16_t>()},
    {"uint32", rttr::type::get<uint32_t>()},
    {"uint64", rttr::type::get<uint64_t>()},
    {"bool[]", rttr::type::get<std::vector<bool>>()},
    {"string[]", rttr::type::get<std::vector<std::string>>()},
    {"float[]", rttr::type::get<std::vector<float>>()},
    {"double[]", rttr::type::get<std::vector<double>>()},
    {"int8[]", rttr::type::get<std::vector<int8_t>>()},
    {"int16[]", rttr::type::get<std::vector<int16_t>>()},
    {"int32[]", rttr::type::get<std::vector<int32_t>>()},
    {"int64[]", rttr::type::get<std::vector<int64_t>>()},
    {"uint8[]", rttr::type::get<std::vector<uint8_t>>()},
    {"uint16[]", rttr::type::get<std::vector<uint16_t>>()},
    {"uint32[]", rttr::type::get<std::vector<uint32_t>>()},
    {"uint64[]", rttr::type::get<std::vector<uint64_t>>()},
};
inline rttr::type WrapRttrGetTypeByName(const std::string& typename_str) {
  // throw exception if matched key exists
  return datatype_map.at(typename_str);
}

template <class Fn>
void DispatchByRttrType(const rttr::type& t, rttr::variant& v, std::string& p, Fn&& fn) {
  if (v.get_type() != t) {
    // rttr::variable::convert can convert 5 patterns except for string -> vector<T>.
    if (t.get_name().to_string().find("vector") == std::string::npos) { ASSERT_TRUE(v.convert(t)); }
  }

  if (t == rttr::type::get<bool>()) return fn.template operator()<bool>(v, p);
  if (t == rttr::type::get<std::string>()) return fn.template operator()<std::string>(v, p);
  if (t == rttr::type::get<float>()) return fn.template operator()<float>(v, p);
  if (t == rttr::type::get<double>()) return fn.template operator()<double>(v, p);
  if (t == rttr::type::get<int8_t>()) return fn.template operator()<int8_t>(v, p);
  if (t == rttr::type::get<int16_t>()) return fn.template operator()<int16_t>(v, p);
  if (t == rttr::type::get<int32_t>()) return fn.template operator()<int32_t>(v, p);
  if (t == rttr::type::get<int64_t>()) return fn.template operator()<int64_t>(v, p);
  if (t == rttr::type::get<uint8_t>()) return fn.template operator()<uint8_t>(v, p);
  if (t == rttr::type::get<uint16_t>()) return fn.template operator()<uint16_t>(v, p);
  if (t == rttr::type::get<uint32_t>()) return fn.template operator()<uint32_t>(v, p);
  if (t == rttr::type::get<uint64_t>()) return fn.template operator()<uint64_t>(v, p);

  if (t == rttr::type::get<std::vector<bool>>()) {
    // expected v: R"("[true,false]")"
    rttr::variant var = ParseArray<bool>(v.get_value<std::string>());
    return fn.template operator()<std::vector<bool>>(var, p);
  }
  if (t == rttr::type::get<std::vector<std::string>>()) {
    // expected v: R"("["foo","bar"]")"
    rttr::variant var = ParseArray<std::string>(v.get_value<std::string>());
    return fn.template operator()<std::vector<std::string>>(var, p);
  }
  if (t == rttr::type::get<std::vector<float>>()) {
    // expected v: R"("[1.234,4.567]")"
    rttr::variant var = ParseArray<float>(v.get_value<std::string>());
    return fn.template operator()<std::vector<float>>(var, p);
  }
  if (t == rttr::type::get<std::vector<double>>()) {
    rttr::variant var = ParseArray<double>(v.get_value<std::string>());
    return fn.template operator()<std::vector<double>>(var, p);
  }
  if (t == rttr::type::get<std::vector<int8_t>>()) {
    // expected v: R"("[1,-128, 127]")"
    rttr::variant var = ParseArray<int8_t>(v.get_value<std::string>());
    return fn.template operator()<std::vector<int8_t>>(var, p);
  }
  if (t == rttr::type::get<std::vector<int16_t>>()) {
    rttr::variant var = ParseArray<int16_t>(v.get_value<std::string>());
    return fn.template operator()<std::vector<int16_t>>(var, p);
  }
  if (t == rttr::type::get<std::vector<int32_t>>()) {
    rttr::variant var = ParseArray<int32_t>(v.get_value<std::string>());
    return fn.template operator()<std::vector<int32_t>>(var, p);
  }
  if (t == rttr::type::get<std::vector<int64_t>>()) {
    rttr::variant var = ParseArray<int64_t>(v.get_value<std::string>());
    return fn.template operator()<std::vector<int64_t>>(var, p);
  }
  if (t == rttr::type::get<std::vector<uint8_t>>()) {
    rttr::variant var = ParseArray<uint8_t>(v.get_value<std::string>());
    return fn.template operator()<std::vector<uint8_t>>(var, p);
  }
  if (t == rttr::type::get<std::vector<uint16_t>>()) {
    rttr::variant var = ParseArray<uint16_t>(v.get_value<std::string>());
    return fn.template operator()<std::vector<uint16_t>>(var, p);
  }
  if (t == rttr::type::get<std::vector<uint32_t>>()) {
    rttr::variant var = ParseArray<uint32_t>(v.get_value<std::string>());
    return fn.template operator()<std::vector<uint32_t>>(var, p);
  }
  if (t == rttr::type::get<std::vector<uint64_t>>()) {
    rttr::variant var = ParseArray<uint64_t>(v.get_value<std::string>());
    return fn.template operator()<std::vector<uint64_t>>(var, p);
  }
  ASSERT_STREQ(t.get_name().to_string().c_str(), "dispatch_by_rttr_type failed due to invalid type");
}

template <class Fn>
void DispatchRttrType(const rttr::type& t, std::string& p, Fn&& fn) {
  if (t == rttr::type::get<bool>()) return fn.template operator()<bool>(p);
  if (t == rttr::type::get<std::string>()) return fn.template operator()<std::string>(p);
  if (t == rttr::type::get<float>()) return fn.template operator()<float>(p);
  if (t == rttr::type::get<double>()) return fn.template operator()<double>(p);
  if (t == rttr::type::get<int8_t>()) return fn.template operator()<int8_t>(p);
  if (t == rttr::type::get<int16_t>()) return fn.template operator()<int16_t>(p);
  if (t == rttr::type::get<int32_t>()) return fn.template operator()<int32_t>(p);
  if (t == rttr::type::get<int64_t>()) return fn.template operator()<int64_t>(p);
  if (t == rttr::type::get<uint8_t>()) return fn.template operator()<uint8_t>(p);
  if (t == rttr::type::get<uint16_t>()) return fn.template operator()<uint16_t>(p);
  if (t == rttr::type::get<uint32_t>()) return fn.template operator()<uint32_t>(p);
  if (t == rttr::type::get<uint64_t>()) return fn.template operator()<uint64_t>(p);
  if (t == rttr::type::get<std::vector<bool>>()) return fn.template operator()<std::vector<bool>>(p);
  if (t == rttr::type::get<std::vector<std::string>>()) return fn.template operator()<std::vector<std::string>>(p);
  if (t == rttr::type::get<std::vector<float>>()) return fn.template operator()<std::vector<float>>(p);
  if (t == rttr::type::get<std::vector<double>>()) return fn.template operator()<std::vector<double>>(p);
  if (t == rttr::type::get<std::vector<int8_t>>()) return fn.template operator()<std::vector<int8_t>>(p);
  if (t == rttr::type::get<std::vector<int16_t>>()) return fn.template operator()<std::vector<int16_t>>(p);
  if (t == rttr::type::get<std::vector<int32_t>>()) return fn.template operator()<std::vector<int32_t>>(p);
  if (t == rttr::type::get<std::vector<int64_t>>()) return fn.template operator()<std::vector<int64_t>>(p);
  if (t == rttr::type::get<std::vector<uint8_t>>()) return fn.template operator()<std::vector<uint8_t>>(p);
  if (t == rttr::type::get<std::vector<uint16_t>>()) return fn.template operator()<std::vector<uint16_t>>(p);
  if (t == rttr::type::get<std::vector<uint32_t>>()) return fn.template operator()<std::vector<uint32_t>>(p);
  if (t == rttr::type::get<std::vector<uint64_t>>()) return fn.template operator()<std::vector<uint64_t>>(p);
  ASSERT_STREQ(t.get_name().to_string().c_str(), "dispatch_rttr_type failed due to invalid type");
}

// start/stop/reset/status kura server
enum KuraOperation {
  kStart,
  kStop,
  kReset,
  kStatus,
};
inline bool OperateKura(KuraOperation ko) {
  bool ret = true;
  std::string start("s6-svc -u /run/service/kura/");
  std::string stop("s6-svc -d /run/service/kura/ > /dev/null 2>&1 && pkill kura > /dev/null 2>&1");
  std::string status("s6-svstat /run/service/kura/");
  switch (ko) {
    case KuraOperation::kStart: ret = std::system(start.c_str())==0; break;
    case KuraOperation::kStop:
      // finish is not registered, send sigterm after svc stop
      ret &= std::system(stop.c_str())==0;
      break;
    case KuraOperation::kReset:
      ret &= std::system(stop.c_str())==0;
      ret &= std::system(start.c_str())==0;
      std::this_thread::sleep_for(15000ms);
      break;
    case KuraOperation::kStatus:
    default: ret = false;
  }
  return ret;
}
enum NetworkOperation {
  kTimeout,
  kReject,
  kCleanup,
};
inline bool OperateNetwork(NetworkOperation no) {
  bool ret = true;
  std::string timeout("iptables -A OUTPUT -p tcp --dport 50052 -d 127.0.0.1 -j DROP");
  std::string reject("iptables -A OUTPUT -p tcp --dport 50052 -d 127.0.0.1 -j REJECT --reject-with tcp-reset");
  std::string cleanup("iptables -D OUTPUT 1 > /dev/null 2>&1");
  switch (no) {
    case NetworkOperation::kTimeout:
      ret &= std::system(timeout.c_str())==0;
      std::this_thread::sleep_for(1000ms);
      break;
    case NetworkOperation::kReject:
      ret &= std::system(reject.c_str())==0;
      std::this_thread::sleep_for(1000ms);
      break;
    case NetworkOperation::kCleanup:
      ret &= std::system(cleanup.c_str())==0;
      std::this_thread::sleep_for(2000ms);
      break;
    default: ret = false;
  }
  return ret;
}

#endif