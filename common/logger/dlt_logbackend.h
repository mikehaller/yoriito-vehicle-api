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

#ifndef YORIITO_VEHICLE_API_UTILITY_COMMON_LOGGER_DLT_LOGBACKEND_H_
#define YORIITO_VEHICLE_API_UTILITY_COMMON_LOGGER_DLT_LOGBACKEND_H_

#include <dlt/dlt.h>
#include <unistd.h>
#include <unordered_map>
#include <memory>
#include <sstream>
#include <string>
#include <string_view>
#include <thread>

#include "logger/base_logbackend.h"

namespace yoriito {
constexpr int kDltIdMaxLength = 4; // Max length for DLT IDs
constexpr std::string_view kDefaultDltID = "----"; // Default DLT ID

// Backend that outputs logs to DLT.
class DltLogBackend final : public BaseLogBackend {
public:
  DltLogBackend() = default;
  ~DltLogBackend() {
    // Safe cleanup in destructor
    try {
      // Avoid finalization if not initialized
      if (IsInitialized()) {
        DoFinalize();
      }
    } catch (...) {
      // Suppress exceptions in destructor
    }
  }
protected:
  std::string name_ = "";
  void DoInitialize(const char* name) override {
    name_ = name ? std::string(name) : "";
    // Adjusts the APID to fit DLT's size restrictions
    std::string standardized_app_id = ConvertToDltId(name_);
    DLT_REGISTER_APP(standardized_app_id.c_str(), name_.c_str());
  }

  void DoFinalize() override {
    name_ = "";
    for (auto& context_entry : context_map_) {
      DLT_UNREGISTER_CONTEXT(*(context_entry.second));
    }
    context_map_.clear();
    DLT_UNREGISTER_APP();
  }

  void DoOutput(std::string_view tag, std::string_view msg, LogLevel level) override {
    DltContext& context = EnsureContext(std::string(tag));
    
    pid_t pid = getpid();
    std::ostringstream tid_stream;
    tid_stream << std::this_thread::get_id();
    std::string tid_str = tid_stream.str();
    
    DLT_LOG(context, ConvertToDltLevel(level),
            DLT_UINT32(pid),
            DLT_CSTRING(tid_str.c_str()),
            DLT_CSTRING(name_.c_str()),
            DLT_SIZED_CSTRING(tag.data(), tag.size()),
            DLT_SIZED_CSTRING(msg.data(), msg.size()));
  }

  void DoSetLogLevel(LogLevel level) override {
    log_level_threshold_ = level;
    DLT_SET_APPLICATION_LL_TS_LIMIT(ConvertToDltLevel(level), DLT_TRACE_STATUS_OFF);
  }
private:
  // Convert LogLevel to DltLogLevelType
  static DltLogLevelType ConvertToDltLevel(LogLevel level) {
    switch (level) {
      case LogLevel::kFatal:   return DLT_LOG_FATAL;
      case LogLevel::kError:   return DLT_LOG_ERROR;
      case LogLevel::kWarn:    return DLT_LOG_WARN;
      case LogLevel::kInfo:    return DLT_LOG_INFO;
      case LogLevel::kDebug:   return DLT_LOG_DEBUG;
      default:                      return DLT_LOG_INFO;
    }
  }

  // DLT requires context ID and APID to be max characters
  static std::string ConvertToDltId(const std::string& input_id) {
    // Return default ID for empty string as-is
    if (input_id.empty()) return std::string(kDefaultDltID);
    if (input_id.size() <= kDltIdMaxLength) return input_id;
    return input_id.substr(0, kDltIdMaxLength);
  }

  DltContext& EnsureContext(const std::string& tag) {
    const std::string context_id = ConvertToDltId(tag);
    auto it = context_map_.find(context_id);
    if (it != context_map_.end()) return *(it->second);

    // Insert before registration to ensure cleanup on exception
    auto context = std::make_unique<DltContext>();
    auto [iter, inserted] = context_map_.try_emplace(context_id, std::move(context));
    if (!inserted) return *(iter->second);

    DLT_REGISTER_CONTEXT_LL_TS(*(iter->second), context_id.c_str(), tag.c_str(), ConvertToDltLevel(log_level_threshold_), DLT_TRACE_STATUS_OFF); // Full tag in description
    return *(iter->second);
  }

  std::unordered_map<std::string, std::unique_ptr<DltContext>> context_map_;
};

} // namespace yoriito
#endif  // YORIITO_VEHICLE_API_UTILITY_COMMON_LOGGER_DLT_LOGBACKEND_H_
