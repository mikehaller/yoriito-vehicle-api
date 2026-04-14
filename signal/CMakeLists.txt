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


# ---- Common include settings for all signal-domain libraries ----
add_library(yoriito_vehicle_api_includes INTERFACE)

target_include_directories(yoriito_vehicle_api_includes INTERFACE ${PROJECT_SOURCE_DIR}/common)

# ---- vehicle (signal root) library ----
file(GLOB VEHICLE_SRC CONFIGURE_DEPENDS "*.cc")

add_library(yoriito_vehicle_api_vehicle SHARED ${VEHICLE_SRC})
target_include_directories(yoriito_vehicle_api_vehicle PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")
target_link_libraries(yoriito_vehicle_api_vehicle PRIVATE yoriito_vehicle_api_includes)
install(
  TARGETS yoriito_vehicle_api_vehicle LIBRARY DESTINATION ${LIBRARY_INSTALL_DIR}
)

# ---- subdomains ----
add_subdirectory(powertrain)
add_subdirectory(body)
add_subdirectory(cabin)
add_subdirectory(adas)
add_subdirectory(chassis)
add_subdirectory(driver)
add_subdirectory(occupant)
add_subdirectory(exterior)
add_subdirectory(versionvss)
add_subdirectory(vehicleidentification)
add_subdirectory(lowvoltagebattery)
add_subdirectory(acceleration)
add_subdirectory(angularvelocity)
add_subdirectory(trailer)
add_subdirectory(currentlocation)
add_subdirectory(versionyoriitovss)

# Link common include dirs to all domain targets (created in subdirectories)
set(YORIITO_VEHICLE_API_DOMAIN_TARGETS
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
)

foreach(t IN LISTS YORIITO_VEHICLE_API_DOMAIN_TARGETS)
  if(TARGET ${t})
    target_link_libraries(${t} PRIVATE yoriito_vehicle_api_includes)
  endif()
endforeach()

# ---- install headers (keep directory structure) ----
install(DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/"
  DESTINATION "${INCLUDE_INSTALL_DIR}/signal"
  FILES_MATCHING PATTERN "*.h"
)
