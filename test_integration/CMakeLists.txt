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

project(test_integration)
set(EXECUTABLE_NAME test_integration)

include(FetchContent)

# cucumber-cpp
FetchContent_Declare(
    cucumber_cpp
    GIT_REPOSITORY https://github.com/cucumber/cucumber-cpp.git
    GIT_TAG main
)

set(CUKE_ENABLE_GTEST ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(cucumber_cpp)

# google test
find_package(GTest REQUIRED)

# nlohmann-json
find_package(nlohmann_json REQUIRED)

# rttr
find_package(RTTR QUIET CONFIG)

if(TARGET GTest::gtest)
    add_executable(${EXECUTABLE_NAME}
        features/step_definitions/step_autogen.cc
        features/step_definitions/step_get.cc
        features/step_definitions/step_set.cc
        features/step_definitions/step_subscribe.cc
        features/step_definitions/step_unsubscribe.cc
        features/step_definitions/step_inspect.cc
    )
    target_link_options(${EXECUTABLE_NAME} PRIVATE "-Wl,--no-as-needed")

    target_include_directories(
        ${EXECUTABLE_NAME} AFTER
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/../signal              # include signal/
        ${CMAKE_CURRENT_SOURCE_DIR}/../common              # include common/
        ${CMAKE_CURRENT_SOURCE_DIR}/../common/databroker   # include common/databroker/
    )

    target_link_directories(
        ${EXECUTABLE_NAME}
        PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
        ${INTERFACE_LIBRARY_DIR}
    )

    target_link_libraries(
        ${EXECUTABLE_NAME} PRIVATE
        cucumber-cpp
        GTest::gtest
        nlohmann_json::nlohmann_json
        RTTR::Core
        yoriito_vehicle_api_vehicle
        yoriito_vehicle_api_powertrain
        yoriito_vehicle_api_body
        yoriito_vehicle_api_cabin
        yoriito_vehicle_api_adas
        yoriito_vehicle_api_chassis
        yoriito_vehicle_api_driver
        yoriito_vehicle_api_occupant
        yoriito_vehicle_api_exterior
        yoriito_vehicle_api_versionvss
        yoriito_vehicle_api_vehicleidentification
        yoriito_vehicle_api_lowvoltagebattery
        yoriito_vehicle_api_acceleration
        yoriito_vehicle_api_angularvelocity
        yoriito_vehicle_api_trailer
        yoriito_vehicle_api_currentlocation
        yoriito_vehicle_api_versionyoriitovss
        logger
        databroker_producer
        databroker_common
        databroker_consumer
    )
endif()
