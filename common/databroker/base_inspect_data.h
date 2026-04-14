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

#ifndef YORIITO_VEHICLE_API_UTILITY_INC_DATABROKER_BASE_INSPECT_DATA_H_
#define YORIITO_VEHICLE_API_UTILITY_INC_DATABROKER_BASE_INSPECT_DATA_H_

#include <map>
#include <optional>
#include <string>
#include <utility>
#include <vector>

#include "databroker_type.h"

/**
 * @ingroup common
 * @namespace yoriito::databroker
 * @brief Namespace for DataBroker common interfaces and types.
 */
namespace yoriito::databroker {

/**
 * @ingroup common
 * @class BaseInspectData
 * @brief Base class for inspecting datapoint metadata in the DataBroker.
 */
class BaseInspectData {
 public:
  enum class EntryType {
    ENTRY_TYPE_UNSPECIFIED = 0,
    ENTRY_TYPE_ATTRIBUTE = 1,
    ENTRY_TYPE_SENSOR = 2,
    ENTRY_TYPE_ACTUATOR = 3,
  };
  enum class DataType {
    DATA_TYPE_UNSPECIFIED = 0,
    DATA_TYPE_STRING = 1,
    DATA_TYPE_BOOLEAN = 2,
    DATA_TYPE_INT8 = 3,
    DATA_TYPE_INT16 = 4,
    DATA_TYPE_INT32 = 5,
    DATA_TYPE_INT64 = 6,
    DATA_TYPE_UINT8 = 7,
    DATA_TYPE_UINT16 = 8,
    DATA_TYPE_UINT32 = 9,
    DATA_TYPE_UINT64 = 10,
    DATA_TYPE_FLOAT = 11,
    DATA_TYPE_DOUBLE = 12,
    DATA_TYPE_TIMESTAMP = 13,  // Not exist in VSS
    DATA_TYPE_STRING_ARRAY = 20,
    DATA_TYPE_BOOLEAN_ARRAY = 21,
    DATA_TYPE_INT8_ARRAY = 22,
    DATA_TYPE_INT16_ARRAY = 23,
    DATA_TYPE_INT32_ARRAY = 24,
    DATA_TYPE_INT64_ARRAY = 25,
    DATA_TYPE_UINT8_ARRAY = 26,
    DATA_TYPE_UINT16_ARRAY = 27,
    DATA_TYPE_UINT32_ARRAY = 28,
    DATA_TYPE_UINT64_ARRAY = 29,
    DATA_TYPE_FLOAT_ARRAY = 30,
    DATA_TYPE_DOUBLE_ARRAY = 31
  };
  /**
   * @ingroup common
   * @fn BaseInspectData::BaseInspectData()
   * @brief Deleted default constructor.
   * @deprecated -
   * @pre -
   * @param -
   * @retval -
   * @note -
   * @code -
   * @endcode -
   */
  BaseInspectData() = delete;

  /**
   * @ingroup common
   * @fn BaseInspectData::BaseInspectData(std::string path, DataType data_type,
   * EntryType entry_type, std::string deprecation, std::string unit, ValueType
   * min, ValueType max, std::string comment, std::vector<std::string> allowed,
   * ValueType default_value, std::string description, uint32_t arraysize,
   * std::string pattern, std::map<std::string, std::string> custom_attributes)
   * @brief Construct a BaseInspectData object with all attributes.
   * @deprecated -
   * @pre -
   * @param path Datapoint path.
   * @param data_type Data type.
   * @param entry_type Entry type.
   * @param deprecation Deprecation string.
   * @param unit Unit string.
   * @param min Minimum value.
   * @param max Maximum value.
   * @param comment Comment string.
   * @param allowed Allowed values.
   * @param default_value Default value.
   * @param description Description string.
   * @param arraysize Array size.
   * @param pattern Pattern string.
   * @param custom_attributes Custom attributes map.
   * @retval -
   * @note -
   * @code -
   * @endcode -
   */
  explicit BaseInspectData(std::string path, DataType data_type,
                           EntryType entry_type, std::string deprecation,
                           std::string unit, ValueType min, ValueType max,
                           std::string comment,
                           std::vector<std::string> allowed,
                           ValueType default_value, std::string description,
                           uint32_t arraysize, std::string pattern,
                           std::map<std::string, std::string> custom_attributes)
      : path(path),
        data_type(data_type),
        entry_type(entry_type),
        deprecation(deprecation),
        unit(unit),
        min(min),
        max(max),
        comment(comment),
        allowed(allowed),
        default_value(default_value),
        description(description),
        arraysize(arraysize),
        pattern(pattern),
        custom_attributes(custom_attributes) {}

  /**
   * @ingroup common
   * @fn bool operator==(const BaseInspectData& lhs, const BaseInspectData& rhs)
   * @brief Compare two BaseInspectData objects for equality.
   * @deprecated -
   * @pre -
   * @param lhs Left-hand side object.
   * @param rhs Right-hand side object.
   * @retval true Objects are equal
   * @retval false Objects are not equal
   * @note -
   * @code -
   * @endcode -
   */
  friend bool operator==(const BaseInspectData& lhs,
                         const BaseInspectData& rhs) {
    return lhs.path == rhs.path &&                    //
           lhs.data_type == rhs.data_type &&          //
           lhs.entry_type == rhs.entry_type &&        //
           lhs.arraysize == rhs.arraysize &&          //
           lhs.min == rhs.min &&                      //
           lhs.max == rhs.max &&                      //
           lhs.default_value == rhs.default_value &&  //
           lhs.unit == rhs.unit &&                    //
           lhs.deprecation == rhs.deprecation &&      //
           lhs.comment == rhs.comment &&              //
           lhs.pattern == rhs.pattern &&              //
           lhs.description == rhs.description &&      //
           lhs.allowed == rhs.allowed &&              //
           lhs.custom_attributes == rhs.custom_attributes;
  }

  DataType GetDataType() const { return data_type; }
  EntryType GetEntryType() const { return static_cast<EntryType>(entry_type); }
  const std::string& GetPath() const { return path; }
  const std::string& GetDescription() const { return description; }
  const std::string& GetComment() const { return comment; }
  const std::string& GetDeprecation() const { return deprecation; }
  const std::string& GetUnit() const { return unit; }
  const ValueType& GetMin() const { return min; }
  const ValueType& GetMax() const { return max; }
  const std::vector<std::string>& GetAllowed() const { return allowed; }
  const ValueType& GetDefaultValue() const { return default_value; }
  uint32_t GetArraySize() const { return arraysize; }
  const std::string& GetPattern() const { return pattern; }
  const std::map<std::string, std::string>& GetCustomAttributes() const {
    return custom_attributes;
  }
  /**
   * @ingroup common
   * @brief Builder class for constructing BaseInspectData objects.
   * @deprecated -
   * @pre -
   * @param -
   * @retval -
   * @note -
   * @code -
   * @endcode -
   */
  class Builder {
   private:
    std::string path;
    DataType data_type;
    EntryType entry_type;
    std::string deprecation;
    std::string unit;
    ValueType min;
    ValueType max;
    std::string comment;
    std::vector<std::string> allowed;
    ValueType default_value;
    std::string description;
    uint32_t arraysize;
    std::string pattern;
    std::map<std::string, std::string> custom_attributes;

   public:
    /**
     * @ingroup common
     * @fn BaseInspectData::Builder::Builder()
     * @brief Default constructor for Builder.
     * @deprecated -
     * @pre -
     * @param -
     * @retval -
     * @note -
     * @code -
     * @endcode -
     */
    Builder() = default;
    /**
     * @ingroup common
     * @fn BaseInspectData::Builder& BaseInspectData::Builder::SetPath(const
     * std::string& path)
     * @brief Set the datapoint path.
     * @deprecated -
     * @pre -
     * @param path Datapoint path.
     * @retval Builder& Reference to this builder
     * @note -
     * @code -
     * @endcode -
     */
    Builder& SetPath(const std::string& path) {
      this->path = path;
      return *this;
    }
    /**
     * @ingroup common
     * @fn BaseInspectData::Builder&
     * BaseInspectData::Builder::SetDataType(DataType data_type)
     * @brief Set the data type.
     * @deprecated -
     * @pre -
     * @param data_type Data type.
     * @retval Builder& Reference to this builder
     * @note -
     * @code -
     * @endcode -
     */
    Builder& SetDataType(DataType data_type) {
      this->data_type = data_type;
      return *this;
    }

    /**
     * @ingroup common
     * @fn BaseInspectData::Builder&
     * BaseInspectData::Builder::SetEntryType(EntryType entry_type)
     * @brief Set the entry type.
     * @deprecated -
     * @pre -
     * @param entry_type Entry type.
     * @retval Builder& Reference to this builder
     * @note -
     * @code -
     * @endcode -
     */
    Builder& SetEntryType(EntryType entry_type) {
      this->entry_type = entry_type;
      return *this;
    }

    /**
     * @ingroup common
     * @fn BaseInspectData::Builder&
     * BaseInspectData::Builder::SetDescription(const std::string& description)
     * @brief Set the description string.
     * @deprecated -
     * @pre -
     * @param description Description string.
     * @retval Builder& Reference to this builder
     * @note -
     * @code -
     * @endcode -
     */
    Builder& SetDescription(const std::string& description) {
      this->description = description;
      return *this;
    }
    /**
     * @ingroup common
     * @fn BaseInspectData::Builder& BaseInspectData::Builder::SetComment(const
     * std::string& comment)
     * @brief Set the comment string.
     * @deprecated -
     * @pre -
     * @param comment Comment string.
     * @retval Builder& Reference to this builder
     * @note -
     * @code -
     * @endcode -
     */
    Builder& SetComment(const std::string& comment) {
      this->comment = comment;
      return *this;
    }
    /**
     * @ingroup common
     * @fn BaseInspectData::Builder&
     * BaseInspectData::Builder::SetDeprecation(const std::string& deprecation)
     * @brief Set the deprecation string.
     * @deprecated -
     * @pre -
     * @param deprecation Deprecation string.
     * @retval Builder& Reference to this builder
     * @note -
     * @code -
     * @endcode -
     */
    Builder& SetDeprecation(const std::string& deprecation) {
      this->deprecation = deprecation;
      return *this;
    }
    /**
     * @ingroup common
     * @fn BaseInspectData::Builder& BaseInspectData::Builder::SetUnit(const
     * std::string& unit)
     * @brief Set the unit string.
     * @deprecated -
     * @pre -
     * @param unit Unit string.
     * @retval Builder& Reference to this builder
     * @note -
     * @code -
     * @endcode -
     */
    Builder& SetUnit(const std::string& unit) {
      this->unit = unit;
      return *this;
    }
    /**
     * @ingroup common
     * @fn BaseInspectData::Builder& BaseInspectData::Builder::SetMin(const
     * ValueType& min)
     * @brief Set the minimum value.
     * @deprecated -
     * @pre -
     * @param min Minimum value.
     * @retval Builder& Reference to this builder
     * @note -
     * @code -
     * @endcode -
     */
    Builder& SetMin(const ValueType& min) {
      this->min = min;
      return *this;
    }
    /**
     * @ingroup common
     * @fn BaseInspectData::Builder& BaseInspectData::Builder::SetMax(const
     * ValueType& max)
     * @brief Set the maximum value.
     * @deprecated -
     * @pre -
     * @param max Maximum value.
     * @retval Builder& Reference to this builder
     * @note -
     * @code -
     * @endcode -
     */
    Builder& SetMax(const ValueType& max) {
      this->max = max;
      return *this;
    }
    /**
     * @ingroup common
     * @fn BaseInspectData::Builder&
     * BaseInspectData::Builder::SetAllowed(std::vector<std::string>&& allowed)
     * @brief Set the allowed values.
     * @deprecated -
     * @pre -
     * @param allowed Allowed values.
     * @retval Builder& Reference to this builder
     * @note -
     * @code -
     * @endcode -
     */
    Builder& SetAllowed(std::vector<std::string>&& allowed) {
      this->allowed = std::move(allowed);
      return *this;
    }
    /**
     * @ingroup common
     * @fn BaseInspectData::Builder&
     * BaseInspectData::Builder::SetDefaultValue(const ValueType& default_value)
     * @brief Set the default value.
     * @deprecated -
     * @pre -
     * @param default_value Default value.
     * @retval Builder& Reference to this builder
     * @note -
     * @code -
     * @endcode -
     */
    Builder& SetDefaultValue(const ValueType& default_value) {
      this->default_value = default_value;
      return *this;
    }
    /**
     * @ingroup common
     * @fn BaseInspectData::Builder&
     * BaseInspectData::Builder::SetArraySize(uint32_t arraysize)
     * @brief Set the array size.
     * @deprecated -
     * @pre -
     * @param arraysize Array size.
     * @retval Builder& Reference to this builder
     * @note -
     * @code -
     * @endcode -
     */
    Builder& SetArraySize(uint32_t arraysize) {
      this->arraysize = arraysize;
      return *this;
    }
    /**
     * @ingroup common
     * @fn BaseInspectData::Builder& BaseInspectData::Builder::SetPattern(const
     * std::string& pattern)
     * @brief Set the pattern string.
     * @deprecated -
     * @pre -
     * @param pattern Pattern string.
     * @retval Builder& Reference to this builder
     * @note -
     * @code -
     * @endcode -
     */
    Builder& SetPattern(const std::string& pattern) {
      this->pattern = pattern;
      return *this;
    }
    /**
     * @ingroup common
     * @fn BaseInspectData::Builder&
     * BaseInspectData::Builder::SetCustomAttributes(const std::map<std::string,
     * std::string>& custom_attributes)
     * @brief Set the custom attributes map.
     * @deprecated -
     * @pre -
     * @param custom_attributes Custom attributes map.
     * @retval Builder& Reference to this builder
     * @note -
     * @code -
     * @endcode -
     */
    Builder& SetCustomAttributes(
        const std::map<std::string, std::string>& custom_attributes) {
      this->custom_attributes = custom_attributes;
      return *this;
    }
    /**
     * @ingroup common
     * @fn BaseInspectData BaseInspectData::Builder::Build()
     * @brief Build a BaseInspectData object from the builder.
     * @deprecated -
     * @pre -
     * @param -
     * @retval BaseInspectData Built object
     * @note -
     * @code -
     * @endcode -
     */
    BaseInspectData Build() {
      BaseInspectData data(path, data_type, entry_type, deprecation, unit, min,
                           max, comment, allowed, default_value, description,
                           arraysize, pattern, custom_attributes);
      return data;
    }
  };
  static Builder CreateBuilder() { return Builder(); }

 protected:
  std::string path;
  DataType data_type;
  EntryType entry_type;
  std::string deprecation;
  std::string unit;
  ValueType min;
  ValueType max;
  std::string comment;
  std::vector<std::string> allowed;
  ValueType default_value;
  std::string description;
  uint32_t arraysize;
  std::string pattern;
  std::map<std::string, std::string> custom_attributes;
};

}  // namespace yoriito::databroker

#endif  // YORIITO_VEHICLE_API_UTILITY_INC_DATABROKER_BASE_INSPECT_DATA_H_
