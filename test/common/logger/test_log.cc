// SPDX-License-Identifier: Apache-2.0
//
// Copyright 2026 JASPAR
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <unistd.h>

#include <string>
#include <thread>

#include "yoriito_log.h"

extern void moduleTestFunc();

int main() {
  // Initialize once at startup of application
  YORIITO_LOG_INITIALIZE("APP1");
  int num = ::getpid();
  // YORIITO_LOG_XXX("<Tag>", "<Message>")
  YORIITO_LOG_DEBUG("TAG1", "This will not be printed because default log level is INFO");
  YORIITO_LOG_INFO("TAG1", "This message will be printed with tag TAG1");
  // In DLT, when a tag exceeds 4 ASCII characters, only the first 4 characters are used as the ContextID.
  YORIITO_LOG_WARN("TAG2_sample", "Test message with long tag");
  YORIITO_LOG_ERROR("T", "short tag test");
  // Convert non-string message to string before logging
  YORIITO_LOG_FATAL("TAG3", "Message: " + std::to_string(num));
  // In DLT, when the tag is empty, the default ContextID "----" is assigned.
  YORIITO_LOG_WARN("", "No Tag Test");
  
  // Test logging from another module and thread
  std::thread module_thread(moduleTestFunc);
  module_thread.join();

  YORIITO_LOG_FINALIZE();

  // Re-initialize logger
  // In DLT, when a name exceeds 4 ASCII characters, only the first 4 characters are used as the APID.
  YORIITO_LOG_INITIALIZE("APP2_sample");
  YORIITO_LOG_INITIALIZE("APP3"); // This will not re-initialize because it's already initialized
  YORIITO_LOG_INFO("TAG1", "ReInitialize");
  YORIITO_LOG_SET_LEVEL(yoriito::LogLevel::kWarn);
  YORIITO_LOG_DEBUG("TAG1", "disappear DEBUG");
  YORIITO_LOG_INFO("TAG1", "disappear INFO");
  YORIITO_LOG_INFO("TAG2", "disappear INFO_newTag TAG2");
  YORIITO_LOG_WARN("TAG1", "appear WARN");
  YORIITO_LOG_WARN("TAG3", "appear WARN newTag TAG3");
  YORIITO_LOG_SET_LEVEL(yoriito::LogLevel::kInfo);
  YORIITO_LOG_DEBUG("TAG1", "disappear DEBUG");
  YORIITO_LOG_INFO("TAG1", "appear INFO again");
  YORIITO_LOG_INFO("TAG2", "appear INFO again oldTag TAG2");
  YORIITO_LOG_INFO("TAG4", "appear INFO newTag TAG4");
  YORIITO_LOG_FINALIZE();

  // Logger does not work without initialization.
  YORIITO_LOG_SET_LEVEL(yoriito::LogLevel::kWarn);
  YORIITO_LOG_INFO("TAG1", "disappear INFO");
  YORIITO_LOG_ERROR("TAG1", "disappear ERROR");
  YORIITO_LOG_FINALIZE();

  return 0;
}
