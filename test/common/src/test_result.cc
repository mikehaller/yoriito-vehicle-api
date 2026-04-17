// SPDX-License-Identifier: Apache-2.0
//
// Copyright 2026 JASPAR
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <gtest/gtest.h>

#include <memory>
#include <utility>

#include "result.h"

TEST(TestResult, Result_Normal_void) {
  yoriito::Result<void> ret = yoriito::Result<void>::Ok();
  ASSERT_EQ(ret.IsOk(), true);
}
TEST(TestResult, Result_Normal_uint8_t) {
  uint8_t result = 255;
  yoriito::Result<uint8_t> ret = yoriito::Result<uint8_t>::Ok(result);
  ASSERT_EQ(ret.IsOk(), true);
  ASSERT_EQ(ret.TakeOk(), result);
}
TEST(TestResult, Result_Normal_obj) {
  uint8_t expected = 255;
  std::unique_ptr<uint8_t> result = std::make_unique<uint8_t>(expected);
  yoriito::Result<std::unique_ptr<uint8_t>> ret =
      yoriito::Result<std::unique_ptr<uint8_t>>::Ok(std::move(result));
  ASSERT_EQ(ret.IsOk(), true);
  auto opt = ret.TakeOk();
  uint8_t actual = *opt.value().get();
  ASSERT_EQ(actual, expected);
}

TEST(TestResult, Result_Error_void) {
  uint8_t val = 100;
  yoriito::Result<void> ret = yoriito::Result<void>::Err(
      std::make_unique<yoriito::CommonError>(
        yoriito::ErrorCode::ERROR_INVAL,
        std::string( yoriito::ErrorType::to_msg(yoriito::ErrorCode::ERROR_INVAL) ) + std::to_string(val)
      ));
  ASSERT_EQ(ret.IsOk(), false);
  ASSERT_EQ(ret.IsErr(), true);
  auto err = ret.TakeErr();
  ASSERT_EQ(err->ErrorCode(), static_cast<uint32_t>(yoriito::ErrorCode::ERROR_INVAL));
  ASSERT_EQ(err->Message(), "Invalid value:100");
}
TEST(TestResult, Result_Error_uint8) {
  yoriito::Result<uint8_t> ret = yoriito::Result<uint8_t>::Err(
      std::make_unique<yoriito::CommonError>(yoriito::ErrorCode::ERROR_NOMEM));
  ASSERT_EQ(ret.IsOk(), false);
  ASSERT_EQ(ret.IsErr(), true);
  auto err = ret.TakeErr();
  ASSERT_EQ(err->ErrorCode(), static_cast<uint32_t>(yoriito::ErrorCode::ERROR_NOMEM));
  ASSERT_EQ(err->Message(), "Insufficient free memory space.");
}

TEST(TestResult, Result_Error_ERROR_PERM) {
  yoriito::Result<uint8_t> ret = yoriito::Result<uint8_t>::Err(
      std::make_unique<yoriito::CommonError>(yoriito::ErrorCode::ERROR_PERM));
  ASSERT_EQ(ret.IsOk(), false);
  ASSERT_EQ(ret.IsErr(), true);
  auto err = ret.TakeErr();
  ASSERT_EQ(err->ErrorCode(), static_cast<uint32_t>(yoriito::ErrorCode::ERROR_PERM));
  ASSERT_EQ(err->Message(), "Operation not permitted.");
}

TEST(TestResult, Result_Error_ERROR_NOMEM) {
  yoriito::Result<uint8_t> ret = yoriito::Result<uint8_t>::Err(
      std::make_unique<yoriito::CommonError>(yoriito::ErrorCode::ERROR_NOMEM));
  ASSERT_EQ(ret.IsOk(), false);
  ASSERT_EQ(ret.IsErr(), true);
  auto err = ret.TakeErr();
  ASSERT_EQ(err->ErrorCode(), static_cast<uint32_t>(yoriito::ErrorCode::ERROR_NOMEM));
  ASSERT_EQ(err->Message(), "Insufficient free memory space.");
}

TEST(TestResult, Result_Error_ERROR_ACCES) {
  yoriito::Result<uint8_t> ret = yoriito::Result<uint8_t>::Err(
      std::make_unique<yoriito::CommonError>(yoriito::ErrorCode::ERROR_ACCES));
  ASSERT_EQ(ret.IsOk(), false);
  ASSERT_EQ(ret.IsErr(), true);
  auto err = ret.TakeErr();
  ASSERT_EQ(err->ErrorCode(), static_cast<uint32_t>(yoriito::ErrorCode::ERROR_ACCES));
  ASSERT_EQ(err->Message(), "Permission denied.");
}

TEST(TestResult, Result_Error_ERROR_INVAL) {
  yoriito::Result<uint8_t> ret = yoriito::Result<uint8_t>::Err(
      std::make_unique<yoriito::CommonError>(yoriito::ErrorCode::ERROR_INVAL));
  ASSERT_EQ(ret.IsOk(), false);
  ASSERT_EQ(ret.IsErr(), true);
  auto err = ret.TakeErr();
  ASSERT_EQ(err->ErrorCode(), static_cast<uint32_t>(yoriito::ErrorCode::ERROR_INVAL));
  ASSERT_EQ(err->Message(), "Invalid value:");
}

TEST(TestResult, Result_Error_ERROR_NODATA) {
  yoriito::Result<uint8_t> ret = yoriito::Result<uint8_t>::Err(
      std::make_unique<yoriito::CommonError>(yoriito::ErrorCode::ERROR_NODATA));
  ASSERT_EQ(ret.IsOk(), false);
  ASSERT_EQ(ret.IsErr(), true);
  auto err = ret.TakeErr();
  ASSERT_EQ(err->ErrorCode(), static_cast<uint32_t>(yoriito::ErrorCode::ERROR_NODATA));
  ASSERT_EQ(err->Message(), "No data.");
}

TEST(TestResult, Result_Error_ERROR_TIMEDOUT) {
  yoriito::Result<uint8_t> ret = yoriito::Result<uint8_t>::Err(
      std::make_unique<yoriito::CommonError>(yoriito::ErrorCode::ERROR_TIMEDOUT));
  ASSERT_EQ(ret.IsOk(), false);
  ASSERT_EQ(ret.IsErr(), true);
  auto err = ret.TakeErr();
  ASSERT_EQ(err->ErrorCode(), static_cast<uint32_t>(yoriito::ErrorCode::ERROR_TIMEDOUT));
  ASSERT_EQ(err->Message(), "Operation timed out.");
}

TEST(TestResult, Result_Error_ERROR_CONNREFUSED) {
  yoriito::Result<uint8_t> ret = yoriito::Result<uint8_t>::Err(
      std::make_unique<yoriito::CommonError>(yoriito::ErrorCode::ERROR_CONNREFUSED));
  ASSERT_EQ(ret.IsOk(), false);
  ASSERT_EQ(ret.IsErr(), true);
  auto err = ret.TakeErr();
  ASSERT_EQ(err->ErrorCode(), static_cast<uint32_t>(yoriito::ErrorCode::ERROR_CONNREFUSED));
  ASSERT_EQ(err->Message(), "Connection refused.");
}

TEST(TestResult, Result_Error_ERROR_CANCELED) {
  yoriito::Result<uint8_t> ret = yoriito::Result<uint8_t>::Err(
      std::make_unique<yoriito::CommonError>(yoriito::ErrorCode::ERROR_CANCELED));
  ASSERT_EQ(ret.IsOk(), false);
  ASSERT_EQ(ret.IsErr(), true);
  auto err = ret.TakeErr();
  ASSERT_EQ(err->ErrorCode(), static_cast<uint32_t>(yoriito::ErrorCode::ERROR_CANCELED));
  ASSERT_EQ(err->Message(), "Operation canceled.");
}

TEST(TestResult, Result_Error_ERROR_UNAVAILABLE) {
  yoriito::Result<uint8_t> ret = yoriito::Result<uint8_t>::Err(
      std::make_unique<yoriito::CommonError>(yoriito::ErrorCode::ERROR_UNAVAILABLE));
  ASSERT_EQ(ret.IsOk(), false);
  ASSERT_EQ(ret.IsErr(), true);
  auto err = ret.TakeErr();
  ASSERT_EQ(err->ErrorCode(), static_cast<uint32_t>(yoriito::ErrorCode::ERROR_UNAVAILABLE));
  ASSERT_EQ(err->Message(), "Data is unavailable.");
}

TEST(TestResult, Result_Error_ERROR_UNSUBSCRIBE) {
  yoriito::Result<uint8_t> ret = yoriito::Result<uint8_t>::Err(
      std::make_unique<yoriito::CommonError>(yoriito::ErrorCode::ERROR_UNSUBSCRIBE));
  ASSERT_EQ(ret.IsOk(), false);
  ASSERT_EQ(ret.IsErr(), true);
  auto err = ret.TakeErr();
  ASSERT_EQ(err->ErrorCode(), static_cast<uint32_t>(yoriito::ErrorCode::ERROR_UNSUBSCRIBE));
  ASSERT_EQ(err->Message(), "No subscription to unsubscribe.");
}

TEST(TestResult, Result_Error_ERROR_BAD_REQUEST) {
  yoriito::Result<uint8_t> ret = yoriito::Result<uint8_t>::Err(
      std::make_unique<yoriito::CommonError>(yoriito::ErrorCode::ERROR_BAD_REQUEST));
  ASSERT_EQ(ret.IsOk(), false);
  ASSERT_EQ(ret.IsErr(), true);
  auto err = ret.TakeErr();
  ASSERT_EQ(err->ErrorCode(), static_cast<uint32_t>(yoriito::ErrorCode::ERROR_BAD_REQUEST));
  ASSERT_EQ(err->Message(), "The request is malformed.");
}

TEST(TestResult, Result_Error_ERROR_UNAUTHORIZED) {
  yoriito::Result<uint8_t> ret = yoriito::Result<uint8_t>::Err(
      std::make_unique<yoriito::CommonError>(yoriito::ErrorCode::ERROR_UNAUTHORIZED));
  ASSERT_EQ(ret.IsOk(), false);
  ASSERT_EQ(ret.IsErr(), true);
  auto err = ret.TakeErr();
  ASSERT_EQ(err->ErrorCode(), static_cast<uint32_t>(yoriito::ErrorCode::ERROR_UNAUTHORIZED));
  ASSERT_EQ(err->Message(), "Access token is invalid.");
}

TEST(TestResult, Result_Error_ERROR_FORBIDDEN) {
  yoriito::Result<uint8_t> ret = yoriito::Result<uint8_t>::Err(
      std::make_unique<yoriito::CommonError>(yoriito::ErrorCode::ERROR_FORBIDDEN));
  ASSERT_EQ(ret.IsOk(), false);
  ASSERT_EQ(ret.IsErr(), true);
  auto err = ret.TakeErr();
  ASSERT_EQ(err->ErrorCode(), static_cast<uint32_t>(yoriito::ErrorCode::ERROR_FORBIDDEN));
  ASSERT_EQ(err->Message(), "The server refuses to carry out the request.");
}

TEST(TestResult, Result_Error_ERROR_NOT_FOUND) {
  yoriito::Result<uint8_t> ret = yoriito::Result<uint8_t>::Err(
      std::make_unique<yoriito::CommonError>(yoriito::ErrorCode::ERROR_NOT_FOUND));
  ASSERT_EQ(ret.IsOk(), false);
  ASSERT_EQ(ret.IsErr(), true);
  auto err = ret.TakeErr();
  ASSERT_EQ(err->ErrorCode(), static_cast<uint32_t>(yoriito::ErrorCode::ERROR_NOT_FOUND));
  ASSERT_EQ(err->Message(), "The requested data was not found.");
}

TEST(TestResult, Result_Error_ERROR_REQUEST_TIMEOUT) {
  yoriito::Result<uint8_t> ret = yoriito::Result<uint8_t>::Err(
      std::make_unique<yoriito::CommonError>(yoriito::ErrorCode::ERROR_REQUEST_TIMEOUT));
  ASSERT_EQ(ret.IsOk(), false);
  ASSERT_EQ(ret.IsErr(), true);
  auto err = ret.TakeErr();
  ASSERT_EQ(err->ErrorCode(), static_cast<uint32_t>(yoriito::ErrorCode::ERROR_REQUEST_TIMEOUT));
  ASSERT_EQ(err->Message(), "Subscribe duration limit exceeded.");
}

TEST(TestResult, Result_Error_ERROR_UNSPECIFIED) {
  yoriito::Result<uint8_t> ret = yoriito::Result<uint8_t>::Err(
      std::make_unique<yoriito::CommonError>(yoriito::ErrorCode::ERROR_UNSPECIFIED));
  ASSERT_EQ(ret.IsOk(), false);
  ASSERT_EQ(ret.IsErr(), true);
  auto err = ret.TakeErr();
  ASSERT_EQ(err->ErrorCode(), static_cast<uint32_t>(yoriito::ErrorCode::ERROR_UNSPECIFIED));
  ASSERT_EQ(err->Message(), "Parameter is unspecified.");
}

TEST(TestResult, Result_Error_ERROR_TOO_MANY_REQUESTS) {
  yoriito::Result<uint8_t> ret = yoriito::Result<uint8_t>::Err(
      std::make_unique<yoriito::CommonError>(yoriito::ErrorCode::ERROR_TOO_MANY_REQUESTS));
  ASSERT_EQ(ret.IsOk(), false);
  ASSERT_EQ(ret.IsErr(), true);
  auto err = ret.TakeErr();
  ASSERT_EQ(err->ErrorCode(), static_cast<uint32_t>(yoriito::ErrorCode::ERROR_TOO_MANY_REQUESTS));
  ASSERT_EQ(err->Message(), "Rate-limiting due to too many requests.");
}

TEST(TestResult, Result_Error_ERROR_BAD_GATEWAY) {
  yoriito::Result<uint8_t> ret = yoriito::Result<uint8_t>::Err(
      std::make_unique<yoriito::CommonError>(yoriito::ErrorCode::ERROR_BAD_GATEWAY));
  ASSERT_EQ(ret.IsOk(), false);
  ASSERT_EQ(ret.IsErr(), true);
  auto err = ret.TakeErr();
  ASSERT_EQ(err->ErrorCode(), static_cast<uint32_t>(yoriito::ErrorCode::ERROR_BAD_GATEWAY));
  ASSERT_EQ(err->Message(), "The upstream server response was invalid.");
}

TEST(TestResult, Result_Error_ERROR_SERVICE_UNAVAILABLE) {
  yoriito::Result<uint8_t> ret = yoriito::Result<uint8_t>::Err(
      std::make_unique<yoriito::CommonError>(yoriito::ErrorCode::ERROR_SERVICE_UNAVAILABLE));
  ASSERT_EQ(ret.IsOk(), false);
  ASSERT_EQ(ret.IsErr(), true);
  auto err = ret.TakeErr();
  ASSERT_EQ(err->ErrorCode(), static_cast<uint32_t>(yoriito::ErrorCode::ERROR_SERVICE_UNAVAILABLE));
  ASSERT_EQ(err->Message(), "The server is temporarily unable to handle the request.");
}

TEST(TestResult, Result_Error_ERROR_GATEWAY_TIMEOUT) {
  yoriito::Result<uint8_t> ret = yoriito::Result<uint8_t>::Err(
      std::make_unique<yoriito::CommonError>(yoriito::ErrorCode::ERROR_GATEWAY_TIMEOUT));
  ASSERT_EQ(ret.IsOk(), false);
  ASSERT_EQ(ret.IsErr(), true);
  auto err = ret.TakeErr();
  ASSERT_EQ(err->ErrorCode(), static_cast<uint32_t>(yoriito::ErrorCode::ERROR_GATEWAY_TIMEOUT));
  ASSERT_EQ(err->Message(), "The upstream server took too long to respond.");
}

TEST(TestResult, Result_Error_ERROR_UNKNOWN) {
  yoriito::Result<uint8_t> ret = yoriito::Result<uint8_t>::Err(
      std::make_unique<yoriito::CommonError>(yoriito::ErrorCode::ERROR_UNKNOWN));
  ASSERT_EQ(ret.IsOk(), false);
  ASSERT_EQ(ret.IsErr(), true);
  auto err = ret.TakeErr();
  ASSERT_EQ(err->ErrorCode(), static_cast<uint32_t>(yoriito::ErrorCode::ERROR_UNKNOWN));
  ASSERT_EQ(err->Message(), "Unknown error.");
}
