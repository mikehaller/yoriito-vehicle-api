# SPDX-License-Identifier: Apache-2.0
#
# Copyright 2026 JASPAR
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

cmake_minimum_required(VERSION 3.28)
set(EXECUTABLE_NAME "test_powertrain_tractionbattery_number3_cells_number7")

set(YORIITO "yoriito")

set(LOCAL_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/inc)
file(GLOB SRC_FILES LIST_DIRECTORIES false ${CMAKE_CURRENT_SOURCE_DIR}/*.cc  )

include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/heads/main.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  ${EXECUTABLE_NAME}
  ${SRC_FILES}
  ${PROJECT_SOURCE_DIR}/mock/databroker/src/mock_databroker_consumer_factory.cc
)

FetchContent_MakeAvailable(googletest)
enable_testing()

target_compile_options(${EXECUTABLE_NAME} PRIVATE -fno-pie)
target_link_options(${EXECUTABLE_NAME} PRIVATE -no-pie)
if(CCACHE_PROGRAM)
  set_property(
    TARGET ${EXECUTABLE_NAME}
    PROPERTY RULE_LAUNCH_COMPILE
    "CCACHE_SLOPPINESS=pch_defines,time_macros ${CCACHE_PROGRAM}"
  )
endif()

target_link_libraries(${EXECUTABLE_NAME}
  GTest::gtest_main
  gmock
  yoriito_vehicle_api
)

target_link_directories(${EXECUTABLE_NAME}
  PRIVATE ${INTERFACE_LIBRARY_DIR}
)

target_include_directories(
    ${EXECUTABLE_NAME} AFTER
    PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
    ${PROJECT_SOURCE_DIR}
    ${PROJECT_SOURCE_DIR}/inc
    ${PROJECT_SOURCE_DIR}/mock/databroker/inc
)

include(GoogleTest)
#gtest_discover_tests(${EXECUTABLE_NAME})
add_test(
  NAME test_powertrain_tractionbattery_number3_cells_number7
  COMMAND ${CMAKE_CURRENT_BINARY_DIR}/test_powertrain_tractionbattery_number3_cells_number7
)

message(STATUS "SRC_FILES = ${SRC_FILES}")


