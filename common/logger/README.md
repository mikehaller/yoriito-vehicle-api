# Yoriito Vehicle API Logging System

## Overview

The Yoriito Vehicle API Logging System is a software system that provides logging functions for C++ applications.

A process that incorporates the Yoriito Vehicle API Logging System can record logs by calling the log API within the program.

Logs can be output according to the log level.
There are five log levels: "FATAL", "ERROR", "WARN", "INFO", and "DEBUG", listed in descending order of urgency.

A process that incorporates the Yoriito Vehicle API Logging System is configured with a current log level and outputs messages with a log level equal to or higher than that configured level.

For example, if the current log level is "INFO":

- Output: "FATAL", "ERROR", "WARN", "INFO"
- Not output: "DEBUG"

The current log level default is "INFO".

The Yoriito Vehicle API Logging System allows you to select whether to use COVESA DLT as its backend or not at build time.

- For configurations using COVESA DLT:
  - Logs are saved to a file. These files can be visualized with a viewer tool.
  - The output destination and file name of the log file are: `/tmp/dlt_offlinetrace_yyyyMMdd_HHmmss.dlt`. The date and time of file creation are automatically added to the `yyyyMMdd_HHmmss` part.

- For configurations that do not use COVESA DLT:
  - Logs are output to the console as standard.

The specifications of COVESA DLT used by the Yoriito Vehicle API Logging System refer to the following.

- COVESA Diagnostic Log and Trace (DLT) [v3.0.0](https://github.com/COVESA/dlt-daemon/tree/v3.0.0)

  However, the Yoriito Vehicle API Logging System supports Protocol Version 1 (V1). Protocol Version 2 (V2) is not supported.

## Getting started

### Prerequisites

- Development environment
  - Using DevContainer. For details, refer to the "Prerequisites" section described in the [README](../../README.md) of the Yoriito Vehicle API.
  - You have completed the "Build Instructions" section described in the [README](../../README.md) of the Yoriito Vehicle API.

### Build and install

In the prerequisite development environment, the Yoriito Vehicle API Logging System is already built and installed using the COVESA DLT configuration (Case 1 below).

#### Case 1: For configurations using COVESA DLT

```bash
cd /work/build
cmake -DENABLE_LOG_BACKEND_DLT=ON ..
make logger
make -C common install && make -C common/logger install
```

#### Case 2: For configurations that do not use COVESA DLT

```bash
cd /work/build
cmake -DENABLE_LOG_BACKEND_DLT=OFF ..
make logger
make -C common install && make -C common/logger install
```

### Run example application

#### Case 1: For configurations using COVESA DLT

The Yoriito Vehicle API Logging System is built and installed using COVESA DLT.

As an example, we will use dlt-receive and dlt-convert as viewer tools. These tools are included in the prerequisite development environment.

- Build the example application

  ```bash
  cd /work/build
  cmake -DENABLE_LOG_BACKEND_DLT=ON -DENABLE_TESTS=ON ..
  make example
  ```

- Run the example application

  **Terminal 1: The viewer tool execution side**

  Make sure the dlt-daemon is working. If it is not working, start it with the following command.

  ```bash
  ps ax|grep dlt-daemon
  start-dlt-daemon
  ```

  Start dlt-receive. Any logs already sent to dlt-daemon will be displayed. Subsequently, new logs will be displayed as they are sent to dlt-daemon.

  ```bash
  dlt-receive -a localhost
  ```

  **Terminal 2: Example application execution side**

  ```bash
  /work/out/example
  ```

- Log output

  **Terminal 1: The viewer tool execution side**

  Immediately after dlt-receive startup, logs that were already sent are displayed.

  ```text
  2026/03/05 10:50:31.749955   40955463 000 ECU1 DA1- DC1- control response N 1 [service(3842), ok, 02 00 00 00 00]
  2026/03/05 10:50:31.750118   39035980 000 ECU1 DLTD INTM log info V 1 [Daemon launched. Starting to output traces...]
  2026/03/05 10:50:31.750153   40955464 001 ECU1 DLTD INTM log info V 1 [New client connection #8 established, Total Clients : 1]
  ```

  The logs displayed after executing the example application are as follows.

  ```text
  2026/03/05 10:50:58.199466   41219957 002 ECU1 DLTD INTM log info V 1 [ApplicationID 'APP1' registered for PID 9375, Description=]
  2026/03/05 10:50:58.199550   41219958 000 ECU1 DA1- DC1- control response N 1 [get_log_info, 07, 01 00 41 50 50 31 01 00 54 41 47 31 04 00 04 00 54 41 47 31 00 00 72 65 6d 6f]
  2026/03/05 10:50:58.199569   41219958 000 ECU1 APP1 TAG1 log info V 5 [9375 123684657891136 APP1 TAG1 This message will be printed with tag TAG1]
  2026/03/05 10:50:58.199588   41219958 000 ECU1 DA1- DC1- control response N 1 [get_log_info, 07, 01 00 41 50 50 31 01 00 54 41 47 32 04 00 0b 00 54 41 47 32 5f 73 61 6d 70 6c 65 00 00 72 65 6d 6f]
  2026/03/05 10:50:58.199602   41219958 000 ECU1 APP1 TAG2 log warn V 5 [9375 123684657891136 APP1 TAG2_sample Test message with long tag]
  2026/03/05 10:50:58.199612   41219959 000 ECU1 DA1- DC1- control response N 1 [get_log_info, 07, 01 00 41 50 50 31 01 00 54 00 00 00 04 00 01 00 54 00 00 72 65 6d 6f]
  2026/03/05 10:50:58.199624   41219958 000 ECU1 APP1 T--- log error V 5 [9375 123684657891136 APP1 T short tag test]
  2026/03/05 10:50:58.199644   41219959 000 ECU1 DA1- DC1- control response N 1 [get_log_info, 07, 01 00 41 50 50 31 01 00 54 41 47 33 04 00 04 00 54 41 47 33 00 00 72 65 6d 6f]
  2026/03/05 10:50:58.199660   41219958 000 ECU1 APP1 TAG3 log fatal V 5 [9375 123684657891136 APP1 TAG3 Message: 9375]
  2026/03/05 10:50:58.199670   41219960 000 ECU1 DA1- DC1- control response N 1 [get_log_info, 07, 01 00 41 50 50 31 01 00 2d 2d 2d 2d 04 00 00 00 00 00 72 65 6d 6f]
  2026/03/05 10:50:58.199684   41219959 000 ECU1 APP1 ---- log warn V 5 [9375 123684657891136 APP1  No Tag Test]
  2026/03/05 10:50:58.199901   41219962 000 ECU1 DA1- DC1- control response N 1 [get_log_info, 07, 01 00 41 50 50 31 01 00 4d 4f 44 00 04 00 03 00 4d 4f 44 00 00 72 65 6d 6f]
  2026/03/05 10:50:58.199954   41219961 000 ECU1 APP1 MOD- log error V 5 [9375 123684640933568 APP1 MOD module Function!]
  ... (rest omitted)
  ```

  Enter `Ctrl+C` to exit dlt-receive.

  dlt-convert displays the contents of the DLT-formatted file in ASCII.

  ```bash
  dlt-convert -a /tmp/dlt_offlinetrace_20260305_104719.dlt
  ```

  It is displayed as follows.

  ```text
  0 2026/03/05 10:47:19.801548   39035980 000 ECU1 DLTD INTM log info V 1 [Daemon launched. Starting to output traces...]
  1 2026/03/05 10:50:31.749905   40955464 001 ECU1 DLTD INTM log info V 1 [New client connection #8 established, Total Clients : 1]
  2 2026/03/05 10:50:58.199216   41219957 002 ECU1 DLTD INTM log info V 1 [ApplicationID 'APP1' registered for PID 9375, Description=]
  3 2026/03/05 10:50:58.199343   41219958 000 ECU1 DA1- DC1- control response N 1 [get_log_info, 07, 01 00 41 50 50 31 01 00 54 41 47 31 04 00 04 00 54 41 47 31 00 00 72 65 6d 6f]
  4 2026/03/05 10:50:58.199369   41219958 000 ECU1 APP1 TAG1 log info V 5 [9375 123684657891136 APP1 TAG1 This message will be printed with tag TAG1]
  5 2026/03/05 10:50:58.199386   41219958 000 ECU1 DA1- DC1- control response N 1 [get_log_info, 07, 01 00 41 50 50 31 01 00 54 41 47 32 04 00 0b 00 54 41 47 32 5f 73 61 6d 70 6c 65 00 00 72 65 6d 6f]
  6 2026/03/05 10:50:58.199397   41219958 000 ECU1 APP1 TAG2 log warn V 5 [9375 123684657891136 APP1 TAG2_sample Test message with long tag]
  7 2026/03/05 10:50:58.199413   41219959 000 ECU1 DA1- DC1- control response N 1 [get_log_info, 07, 01 00 41 50 50 31 01 00 54 00 00 00 04 00 01 00 54 00 00 72 65 6d 6f]
  8 2026/03/05 10:50:58.199431   41219958 000 ECU1 APP1 T--- log error V 5 [9375 123684657891136 APP1 T short tag test]
  9 2026/03/05 10:50:58.199449   41219959 000 ECU1 DA1- DC1- control response N 1 [get_log_info, 07, 01 00 41 50 50 31 01 00 54 41 47 33 04 00 04 00 54 41 47 33 00 00 72 65 6d 6f]
  10 2026/03/05 10:50:58.199474   41219958 000 ECU1 APP1 TAG3 log fatal V 5 [9375 123684657891136 APP1 TAG3 Message: 9375]
  11 2026/03/05 10:50:58.199518   41219960 000 ECU1 DA1- DC1- control response N 1 [get_log_info, 07, 01 00 41 50 50 31 01 00 2d 2d 2d 2d 04 00 00 00 00 00 72 65 6d 6f]
  12 2026/03/05 10:50:58.199539   41219959 000 ECU1 APP1 ---- log warn V 5 [9375 123684657891136 APP1  No Tag Test]
  13 2026/03/05 10:50:58.199725   41219962 000 ECU1 DA1- DC1- control response N 1 [get_log_info, 07, 01 00 41 50 50 31 01 00 4d 4f 44 00 04 00 03 00 4d 4f 44 00 00 72 65 6d 6f]
  14 2026/03/05 10:50:58.199798   41219961 000 ECU1 APP1 MOD- log error V 5 [9375 123684640933568 APP1 MOD module Function!]
  ... (rest omitted)
  ```

#### Case 2: For configurations that do not use COVESA DLT

The Yoriito Vehicle API Logging System is built and installed in a configuration that does not use COVESA DLT.

- Build the example application

  ```bash
  cd /work/build
  cmake -DENABLE_LOG_BACKEND_DLT=OFF -DENABLE_TESTS=ON ..
  make example
  ```

- Run the example application

  ```bash
  /work/out/example
  ```

- Log output

  ```text
  2026-03-05T10:55:19.215Z,9521,135684393768768,INFO,APP1,TAG1,This message will be printed with tag TAG1
  2026-03-05T10:55:19.215Z,9521,135684393768768,WARN,APP1,TAG2_sample,Test message with long tag
  2026-03-05T10:55:19.215Z,9521,135684393768768,ERROR,APP1,T,short tag test
  2026-03-05T10:55:19.215Z,9521,135684393768768,FATAL,APP1,TAG3,Message: 9521
  2026-03-05T10:55:19.215Z,9521,135684393768768,WARN,APP1,,No Tag Test
  2026-03-05T10:55:19.215Z,9521,135684393764544,ERROR,APP1,MOD,module Function!
  ... (rest omitted)
  ```

### CMake build options

- ENABLE_LOG_BACKEND_DLT
  - Type: BOOL
  - Default: ON
  - Description:
    Enable the use of COVESA DLT in the backend of the Yoriito Vehicle API Logging System.

- ENABLE_TESTS
  - Type: BOOL
  - Default: OFF
  - Description:
    Enable unit test generation.
    The example application of the Yoriito Vehicle API Logging System is the target of the build by enabling this option.

## Implementation example

```cpp
#include "yoriito/yoriito_log.h"
int main() {
  YORIITO_LOG_INITIALIZE("MyApplication");
  YORIITO_LOG_SET_LEVEL(yoriito::LogLevel::kDebug);
  YORIITO_LOG_INFO("TAG_Sample", "This is a sample message.");
  YORIITO_LOG_FINALIZE();
  return 0;
}
```

## Learn more

### API References

#### Macros

Definition at `yoriito_log.h`.

|Macro|Description|Precondition|Parameter|Return value|Note
|-----|-----------|------------|---------|------------|----
|YORIITO_LOG_INITIALIZE(name)|Declare the start of using the Yoriito Vehicle API Logging System for the process. Logging output will be enabled from this point.|-|`name` Process identifier name. Any string with at least one character.|void|If name is an empty string, "----" will be used as the DLT Application ID.
|YORIITO_LOG_FINALIZE()|Declare the end of using the Yoriito Vehicle API Logging System for the process. Logging output will be disabled from this point.|-|-|void|-
|YORIITO_LOG_FATAL(tag, msg)|Output a fatal level log message|Effective between Initialize and Finalize|`tag` Tag information. Any string with at least one character.<br>`msg` Message content. Any string with at least one character.|void|If tag is an empty string, "----" will be used as the DLT Context ID.
|YORIITO_LOG_ERROR(tag, msg)|Output an error level log message|Effective between Initialize and Finalize|`tag` Tag information. Any string with at least one character.<br>`msg` Message content. Any string with at least one character.|void|If tag is an empty string, "----" will be used as the DLT Context ID.
|YORIITO_LOG_WARN(tag, msg)|Output a warning level log message|Effective between Initialize and Finalize|`tag` Tag information. Any string with at least one character.<br>`msg` Message content. Any string with at least one character.|void|If tag is an empty string, "----" will be used as the DLT Context ID.
|YORIITO_LOG_INFO(tag, msg)|Output an info level log message|Effective between Initialize and Finalize|`tag` Tag information. Any string with at least one character.<br>`msg` Message content. Any string with at least one character.|void|If tag is an empty string, "----" will be used as the DLT Context ID.
|YORIITO_LOG_DEBUG(tag, msg)|Output a debug level log message|Effective between Initialize and Finalize|`tag` Tag information. Any string with at least one character.<br>`msg` Message content. Any string with at least one character.|void|If tag is an empty string, "----" will be used as the DLT Context ID.
|YORIITO_LOG_SET_LEVEL(level)|Set the current log level. If not set, the default current log level is "INFO".|Effective between Initialize and Finalize|`level` Log level to set|void|-

### Viewer Tools

Here are some examples of DLT viewer tools.

- [dlt-receive](https://github.com/COVESA/dlt-daemon/blob/v3.0.0/doc/dlt-receive.1.md)
- [dlt-convert](https://github.com/COVESA/dlt-daemon/blob/v3.0.0/doc/dlt-convert.1.md)
- [dlt-viewer](https://github.com/COVESA/dlt-viewer)

## Licenses

- Yoriito Vehicle API Logging System
  - [Apache-2.0](http://www.apache.org/licenses/LICENSE-2.0)
- COVESA Diagnostic Log and Trace (DLT) [v3.0.0](https://github.com/COVESA/dlt-daemon/tree/v3.0.0)
  - [Mozilla Public License 2.0](https://github.com/COVESA/dlt-daemon/blob/v3.0.0/LICENSE)
