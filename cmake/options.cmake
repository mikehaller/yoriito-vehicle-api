# SPDX-License-Identifier: Apache-2.0
#
# Copyright 2026 JASPAR
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# For common/
option(BUILD_COMMON "Build common library" ON)

# For common/logger
# Enable this option to use log output via dlt-daemon.
# If the dlt-daemon development package(automotive-dlt) is not installed, the build will fail.
# Tested with dlt-daemon version 3.0.0. See: https://github.com/COVESA/dlt-daemon
# If this option is disabled, logs will be output to standard output (stdout) without using the DLT library.
option(ENABLE_LOG_BACKEND_DLT "Enable DLT library" ON)

# For signal/
option(BUILD_SIGNAL "Build signal library" ON)

# For documentation
option(ENABLE_DOCS "Enable building documentation" OFF)

# For Unit Tests
option(ENABLE_TESTS "Enable building tests" OFF)
if(ENABLE_TESTS AND NOT BUILD_COMMON)
  message(FATAL_ERROR
          "ENABLE_TESTS requires BUILD_COMMON=ON, but, this flag is disabled.")
endif()
if(ENABLE_TESTS AND NOT BUILD_SIGNAL)
  message(FATAL_ERROR
          "ENABLE_TESTS requires BUILD_SIGNAL=ON, but, this flag is disabled.")
endif()

# For Integration Tests
# Integration tests require an additional dependency to kura-client.
# So, this cannot be built in a normal build because kura-client depends on our common library.
# To avoid circular dependencies, we disable integration tests by default.
option(ENABLE_INTEGRATION_TESTS "Enable building integration tests" OFF)
