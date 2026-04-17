# Yoriito Vehicle API

## Overview

Yoriito Vehicle API is the standard implementation of the vehicle signal API defined by JASPAR (Japan Automotive Software Platform and Architecture).

This repository provides a unified access method to vehicle data based on VSS (Vehicle Signal Specification). Application developers can retrieve and set various vehicle sensor and actuator data (speed, position, body status, powertrain, ADAS functions, etc.) through a standardized API. For details on Yoriito VSS definitions, please refer to the [Yoriito VSS vspec](https://github.com/yoriito/yoriito-vss).

### Key Use Cases

- **In-Vehicle Application Development**: Building applications that utilize vehicle signals
- **Simulation & Testing**: Testing in development environments that simulate vehicle data
- **Data Broker Integration**: Subscribing to and publishing signals via Yoriito Vehicle API

For detailed API reference, please refer to the [documentation](https://potential-eureka-qj4zqq8.pages.github.io/main/apirefguide/).

# Getting Started

## Prerequisites

- CMake 3.28 or later
- C++ compiler (GCC or Clang)
- (Optional) ccache for faster rebuilds

We recommend using DevContainer as the development environment. Install the VS Code "Remote - Containers" extension and open this repository in DevContainer.

**Note**: DevContainer comes with all necessary dependencies pre-installed, including kura-client.

## Build Instructions

```bash
mkdir build && cd build
cmake ..
make
```

To install:

```bash
make install
```

## Unit Test Build & Execution

Unit tests use Google Test.

```bash
mkdir build && cd build
cmake -DENABLE_TESTS=ON ..
make
ctest
```

**Note**: Unit tests require `BUILD_COMMON=ON` and `BUILD_SIGNAL=ON` (enabled by default).

### Testing with Coverage Report

```bash
mkdir build && cd build
cmake -DENABLE_TESTS=ON -DCODE_COVERAGE=ON ..
make
ctest
# Generate coverage report (requires tools like gcovr)
```

## Integration Test Build & Execution

Integration tests are BDD-style tests using Cucumber-cpp.

**Important**: Integration tests depend on kura-client. You must build and install kura-client before building integration tests. If you are using DevContainer, kura-client is already installed.

Due to the dependency on kura-client, integration tests must be explicitly enabled separately from normal builds.

```bash
mkdir build && cd build
cmake -DENABLE_INTEGRATION_TESTS=ON ..
make

# Start the integration test server
./test_integration/test_integration &
SERVER_PID=$!

# Run Cucumber tests
cd ../test_integration
cucumber --format progress features/get.feature

# Stop the server
kill $SERVER_PID
```

# Build Options

| Option | Default | Description |
|--------|---------|-------------|
| `BUILD_COMMON` | ON | Build common library (logger, etc.) |
| `BUILD_SIGNAL` | ON | Build signal API library |
| `ENABLE_DOCS` | OFF | Generate Doxygen documentation |
| `ENABLE_TESTS` | OFF | Build unit tests (requires BUILD_COMMON and BUILD_SIGNAL) |
| `ENABLE_INTEGRATION_TESTS` | OFF | Build integration tests (requires kura-client) |
| `CODE_COVERAGE` | OFF | Enable coverage reporting (GCC/Clang only) |

API documentation is published on [GitHub Pages](https://stunning-broccoli-l12ygv6.pages.github.io/).

# Commit Message Guidelines

This project follows [Conventional Commits](https://www.conventionalcommits.org/).

# Versioning

This project follows [Semantic Versioning](https://semver.org/).

The version of vehicle-api is managed independently from the overall Yoriito version.

# Quality Assessment
 
This repository contains quality assessment results for this project.
Please refer to the [quality assessment page](./quality/quality-assessment.md).

The results are provided for transparency and reference purposes and do not constitute any warranty or guarantee of quality.

## Contents
 
- Unit Test
- Integration Test
- Coding Style
- Code Metrics
- Static Analysis
 
## Notes
 
Some files in this directory may be generated automatically by CI tools.
