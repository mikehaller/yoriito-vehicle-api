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

set(LIBRARY_NAME "logger")
set(LIBRARY_IMPL_NAME ${LIBRARY_NAME})

include("${CMAKE_SOURCE_DIR}/cmake/yoriito_common.cmake")

file(GLOB SRC_FILES LIST_DIRECTORIES false *.cc)

add_library(${LIBRARY_IMPL_NAME} 
  SHARED 
  ${SRC_FILES}
)

target_link_libraries(${LIBRARY_IMPL_NAME}   
)

target_include_directories(
  ${LIBRARY_IMPL_NAME} AFTER 
  PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/..
)

if(ENABLE_LOG_BACKEND_DLT)
  message(STATUS "ENABLE_LOG_BACKEND_DLT is enabled")
  find_package(automotive-dlt REQUIRED)
  target_link_libraries(${LIBRARY_IMPL_NAME} PRIVATE Genivi::dlt)
  target_compile_definitions(${LIBRARY_IMPL_NAME} PRIVATE ENABLE_LOG_BACKEND_DLT)
  install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/assets/dlt.conf DESTINATION ${CMAKE_INSTALL_SYSCONFDIR})
  install(PROGRAMS ${CMAKE_CURRENT_SOURCE_DIR}/scripts/start-dlt-daemon DESTINATION ${BIN_INSTALL_DIR})
  install(PROGRAMS ${CMAKE_CURRENT_SOURCE_DIR}/scripts/stop-dlt-daemon DESTINATION ${BIN_INSTALL_DIR})
endif()

install(TARGETS  ${LIBRARY_IMPL_NAME} DESTINATION ${LIBRARY_INSTALL_DIR})

