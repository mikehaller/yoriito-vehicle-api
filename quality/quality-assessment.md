# Quality Assessment

## vehicle-api v0.1.0
### Signal API
All target items passed. See below for details.

| Category | Result | Reference |
| :------------------ | :-------------- | :------------------ |
| Unit Test | All 17,067 normal and 23,205 abnormal test cases passed. | [unit-test-results.zip](./assets/unit-test-results.zip) |
| Integration Test | All 171 normal and 98 abnormal test cases passed. | [integration-test-results.zip](./assets/integration-test-results.zip) |
| Linter | Checked by cpplint. No critical issue found. | [cpplint_summary](./assets/cpplint_summary.md) |
| Code Metrics | Checked by lizard. No critical issue found. | [lizard-result.zip](./assets/lizard-result.zip) |
| SAST | Checked by Coverity. No critical issue found. | [coverity-result.zip](./assets/coverity-result.zip) |

### Logger
All target items passed. See below for details.

| Category | Result | Reference |
| :------------------ | :-------------- | :----- |
| Unit Test | Successful DLT logging <br> [build option: ENABLE_LOG_BACKEND_DLT = ON]   | [TestResult_dlt](./assets/TestResult_dlt.txt) |
|           | Successful stdout logging <br> [build option: ENABLE_LOG_BACKEND_DLT = OFF]   | [TestResult_stdout](./assets/TestResult_stdout.txt) |
| Linter | Checked by cpplint. No critical issue found. | [cpplint_summary](./assets/cpplint_summary.md) |
| Code Metrics | Checked by lizard. No critical issue found. | [lizard-result.zip](./assets/lizard-result.zip) |
| SAST | Checked by Coverity. No critical issue found. | [coverity-result.zip](./assets/coverity-result.zip)  |
