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

#ifndef YORIITO_VEHICLE_API_UTILITY_COMMON_LOGGER_BASE_LOGBACKEND_H_
#define YORIITO_VEHICLE_API_UTILITY_COMMON_LOGGER_BASE_LOGBACKEND_H_

#include "yoriito_log.h"
#include <string_view>
#include <memory>

namespace yoriito {

class ILogBackend {
public:
  virtual ~ILogBackend() = default;
  virtual void Initialize(const char* name) = 0;
  virtual void Finalize() = 0;
  virtual void Output(std::string_view tag, std::string_view msg, LogLevel level) = 0;
  virtual bool IsInitialized() const = 0;

  virtual void SetLogLevel(LogLevel level) = 0;

  static std::shared_ptr<ILogBackend> GetLogBackend();
};

class BaseLogBackend : public ILogBackend {
public:
  void Initialize(const char* name) final;

  void Finalize() final;

  void Output(std::string_view tag, std::string_view msg, LogLevel level) final;

  bool IsInitialized() const final;
  void SetLogLevel(LogLevel level) final;

protected:
  virtual void DoInitialize(const char* name) = 0;
  virtual void DoFinalize() = 0;
  virtual void DoOutput(std::string_view tag, std::string_view msg, LogLevel level) = 0;
  virtual void DoSetLogLevel(LogLevel level) = 0;

  LogLevel log_level_threshold_ = LogLevel::kInfo;

private:
  bool initialized_ = false;
};

}
#endif  // YORIITO_VEHICLE_API_UTILITY_COMMON_LOGGER_BASE_LOGBACKEND_H_
