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
project(yoriito_vehicle_api)

include("${CMAKE_SOURCE_DIR}/cmake/yoriito_common.cmake")
include("${CMAKE_SOURCE_DIR}/cmake/options.cmake")

if(BUILD_COMMON)
  add_subdirectory(common)
endif()

if(BUILD_SIGNAL)
  add_subdirectory(signal)

  add_library(yoriito_vehicle_api INTERFACE)
  add_library(yoriito::api ALIAS yoriito_vehicle_api)

  target_include_directories(yoriito_vehicle_api INTERFACE
      ${INTERFACE_INCLUDE_DIR}/databroker
      ${INTERFACE_INCLUDE_DIR}
      ${CMAKE_CURRENT_SOURCE_DIR}/common
      ${CMAKE_CURRENT_SOURCE_DIR}/common/databroker
  )

  target_link_libraries(yoriito_vehicle_api INTERFACE
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
  )
endif()

if(ENABLE_DOCS)
  add_subdirectory(docs)
endif()

if(ENABLE_TESTS)
  enable_testing()
  add_subdirectory(test)
endif()

if(ENABLE_INTEGRATION_TESTS)
  enable_testing()
  add_subdirectory(test_integration)
endif()
