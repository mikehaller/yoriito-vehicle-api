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

#ifndef YORIITO_VEHICLE_API_UTILITY_INC_DATABROKER_TYPE_H_
#define YORIITO_VEHICLE_API_UTILITY_INC_DATABROKER_TYPE_H_
#include <cstdint>
#include <string>
#include <string_view>
#include <variant>
#include <vector>

/**
 * @ingroup common
 * @namespace yoriito
 * @brief Namespace for yoriito common interfaces and types.
 */
namespace yoriito {

using ValueType = std::variant<std::monostate,            //
                               std::string,               //
                               std::string_view,          //
                               bool,                      //
                               int8_t,                    //
                               int16_t,                   //
                               int32_t,                   //
                               int64_t,                   //
                               uint8_t,                   //
                               uint16_t,                  //
                               uint32_t,                  //
                               uint64_t,                  //
                               float,                     //
                               double,                    //
                               std::vector<std::string>,  //
                               std::vector<bool>,         //
                               std::vector<int8_t>,       //
                               std::vector<int16_t>,      //
                               std::vector<int32_t>,      //
                               std::vector<int64_t>,      //
                               std::vector<uint8_t>,      //
                               std::vector<uint16_t>,     //
                               std::vector<uint32_t>,     //
                               std::vector<uint64_t>,     //
                               std::vector<float>,        //
                               std::vector<double>        //
                               >;

static inline ValueType string_view_then_copy(const ValueType& v) {
  // string_view is just a view to a real string.
  // So, it should be stored as string.
  if (std::holds_alternative<std::string_view>(v)) {
    return std::string(std::get<std::string_view>(v));
  } else {
    return v;
  }
}

}  // namespace yoriito

#endif  // YORIITO_VEHICLE_API_UTILITY_INC_DATABROKER_TYPE_H_
