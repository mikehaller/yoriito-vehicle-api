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

cmake_minimum_required(VERSION 3.28)
project(example CXX C)

# Set output directory to workspace out/
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/out")

# Include yoriito_common.cmake
include("${CMAKE_SOURCE_DIR}/cmake/yoriito_common.cmake")

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/../../../common/
    ${INTERFACE_INCLUDE_DIR}
)

add_executable(example test_log.cc test_module.cc)

target_link_libraries(example
  GTest::gtest_main
  logger
)


target_compile_features(example PRIVATE cxx_std_17)
