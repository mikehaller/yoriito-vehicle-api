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


file(GLOB_RECURSE VERSIONVSS_SRC LIST_DIRECTORIES false *.cc)
file(GLOB_RECURSE PUBLIC_VERSIONVSS_HEADERS LIST_DIRECTORIES false *.h)

add_library(yoriito_vehicle_api_versionvss SHARED ${VERSIONVSS_SRC})
target_include_directories(yoriito_vehicle_api_versionvss PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_precompile_headers(yoriito_vehicle_api_versionvss PRIVATE
  <vector>
  <algorithm>
  <cstdint>
  <memory>
  <set>
  <string>
  <variant>
  <databroker/databroker_consumer.h>
  <databroker/databroker_consumer_factory.h>
  <result.h>
)

install(DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/"
 DESTINATION "${INCLUDE_INSTALL_DIR}/signal/versionvss"
 FILES_MATCHING PATTERN "*.h"
)

install(
  TARGETS yoriito_vehicle_api_versionvss LIBRARY DESTINATION ${LIBRARY_INSTALL_DIR}
)
