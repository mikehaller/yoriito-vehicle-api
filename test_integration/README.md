# Yoriito Vehicle API Integration Test

## Overview

This directory provides an integration testing environment for verifying the interaction between the **API** and **DataBroker (middleware)** in the Yoriito project.  
The purpose of these tests is to ensure that data is exchanged correctly between the components and that the expected behavior is achieved.  
The integration tests are implemented using **Cucumber**, a Behavior-Driven Development (BDD) tool.  
  
For more information about Cucumber, please refer to the following URL:https://cucumber.io/docs/

## Architecture

![Architecture Diagram](./TestArchitecture.drawio.svg)

## Directory Structure
```bash
test_integration/                        # Integration test suite
  ├── features/                          # Cucumber feature files
  │     ├── step_definitions/            # Step definitions for API–DataBroker integration scenarios
  │     │     ├── step.h                 # Step definition header file
  │     │     ├── step_autogen.cc        # Signal API function definitions
  │     │     ├── step_get.cc            # Step definitions for the "Get" method
  │     │     ├── step_set.cc            # Step definitions for the "Set" method
  │     │     ├── step_subscribe.cc      # Step definitions for the "Subscribe" method
  │     │     ├── step_unsubscribe.cc    # Step definitions for the "Unsubscribe" method
  │     │     ├── step_inspect.cc        # Step definitions for the "Inspect" method
  │     │     └── cucumber.wire          # Cucumber wire server configuration
  │     │
  │     ├── get.feature                  # Feature file for "Get" scenarios
  │     ├── set.feature                  # Feature file for "Set" scenarios
  │     ├── subscribe.feature            # Feature file for "Subscribe" scenarios
  │     ├── unsubscribe.feature          # Feature file for "Unsubscribe" scenarios
  │     └── inspection.feature           # Feature file for "Inspect" scenarios
  │
  └── README.md                          # Instructions and documentation for integration tests
```

## Prerequisites
The following environment is required to run the integration tests:

- **OS**  
  - Windows (with WSL2: Ubuntu)  
  - Ubuntu 22.04 LTS  
  - Ubuntu 24.04 LTS

- **Editor / Tools**  
  - Visual Studio Code (with **Dev Containers** extension)

## Installation
The steps to set up the environment for the integration tests are as follows:

1. Clone the repository from GitHub:
   ```bash
   git clone https://github.com/yoriito/vehicle-api.git
   ```
1. Open the project in Visual Studio Code and run it inside a Dev Container.

   - Start Visual Studio Code.
   - Open the directory you cloned in the previous step.
   - Open the Command Palette (**F1** or **Ctrl + Shift + P**).
   - Choose **Dev Containers: Reopen in Container**.
     This will build and launch the development environment inside a container.

## Usage
The steps to build and execute the integration tests are as follows:
1. Create a build directory and move into it:
   ```bash
   mkdir build
   cd build
   ```
1. Configure the project with CMake and enable the test modules:
   ```bash
   cmake .. -D ENABLE_INTEGRATION_TESTS=ON
   ```
1. Build the project using parallel jobs (this significantly reduces build time):
   ```bash
   make -j$(nproc)
   ```
   *Alternatively, specify the number of jobs explicitly (e.g., make -j4).*
1. Start the wire server in the background:
   ```bash
   ./test_integration/test_integration &
   ```
1. Run Cucumber by specifying the feature file:
   ```bash
   cd ../test_integration/
   cucumber ./features/set.feature   # For the Set method
   ```
## Test Specification for the Get Method
### Scenario: HeadlessApp_Get_Sensor_Value
| Step | Description |
|--|--|
| **Given**: Preconditions     | PAL set sensor signal \<path> to \<datatype> \<value> |
| **When**: Action or trigger  | HeadlessApp get the sensor signal \<path> of \<datatype> |
| **Then**: Expected outcome   | the result should be \<datatype> \<value> on \<path> |

#### Placeholders
| Placeholder | Description |
|-------------|-------------|
| \<path>     | VSS path    |
| \<datatype> | Data type of the target VSS signal |
| \<value>    | Test value used for validation of the target VSS signal |

#### Test Cases
| datatype | value |
|----------|-------|
| boolean	| true, false |
| string	| THIS_IS_A_TEST_STRING |
| int8, int16, int32, int64	| -100 |
| uint8, uint16, uint32, uint64	| 80, 100 |
| float, double	| 0.99999999999, 99.9999999999 |
| boolean[]	| [true,false] |
| string[]	| ["THIS_IS_B_TEST_STRING","THIS_IS_A_TEST_STRING"] |
| int8[], int16[], int32[], int64[]	| [-100, -80, 0, 80, 100] |
| uint8[], uint16[], uint32[], uint64[]	| [0, 80, 100] |
| float[], double[]	| [-99.9999999999, -0.99999999999, 0, 0.99999999999, 99.9999999999] |

> **Note:**
> When the allowed constraint is present, scalar types use the first allowed value, while array types use the entire set of allowed values.

## Test Specification for the Set Method
### Scenario: Cold start once and seed initial actuator values
| Step | Description |
|------|------|
| **Given**: Preconditions    | Kura service is cleanly restarted |
| **When**: Action or trigger    | HeadlessApp sets the following actuator signals |
| **Then**: Expected outcome   | PAL should report the following actuator signals |

#### Placeholders
| Placeholder | Description |
|------|----------|
| -    | -        |
> **Note:**
> In this scenario, there are no placeholders because all signals of interest are tested at once.

#### Test Cases
| datatype | value |
|----------|-------|
| boolean	| true |
| string	| THIS_IS_B_TEST_STRING |
| int8, int16, int32, int64	| -100 \(*1) |
| uint8, uint16, uint32, uint64	| 100 \(*2) |
| float, double	| 99.9999999999 \(*2) |
| boolean[]	| [true,false] |
| string[]	| ["THIS_IS_B_TEST_STRING","THIS_IS_A_TEST_STRING"] |
| int8[], int16[], int32[], int64[]	| [-100,-50,0,50,100] \(*3)　|
| uint8[], uint16[], uint32[], uint64[]	| [0,25,50,75,100] \(*3) |
| float[], double[]	| [-99.9999999999,-49.99999999995,0,49.99999999995,99.9999999999] \(*3) |

> **Note: 1**
> When the min constraint is present and the table value < min, min is used.

> **Note: 2**
> When the max constraint is present and max < the table value, max is used.

> **Note: 3**
> Five values are used, defined by dividing the range from the minimum array value (Low) to the maximum array value (High) into four equal intervals.  
> - When the min constraint is present and Low < min, Low is replaced with min.
> - When the max constraint is present and max < High, High is replaced with max.

> **Note:** 	When the allowed constraint is present, scalar types use one of the allowed values, while array types use all of the allowed values.
   

### Scenario: Overwrite/confirm after cold start (no restart)
| Step | Description |
|------|------|
| **Given**: Preconditions    | Set the actuator signal \<path> to \<datatype> \<default_value> |
| **When**: Action or trigger    | HeadlessApp set the actuator signal \<path> to \<datatype> \<checked_value> |
| **Then**: Expected outcome   | the result obtained from the actuator signal by PAL should be \<datatype> \<checked_value> on \<path> |

#### Placeholders
| Placeholder | Description |
|------|----------|
| \<path>          | VSS path |
| \<datatype>      | Data type of the target VSS signal |
| \<default_value> | Default value of the target VSS signal |
| \<checked_value> | Test value used for validation of the target VSS signal |

#### Test Cases
| datatype | default_value | checked_value |
|----------|---------|---------|
| boolean	| true | false |
| string	| THIS_IS_A_TEST_STRING \(*3) | THIS_IS_B_TEST_STRING |
| int8, int16, int32, int64	| 0 \(*1)\(*3) | -100 \(*1) |
| uint8, uint16, uint32, uint64	| 0 \(*1)\(*3) | 100 \(*2) |
| float, double	| 0 \(*3) | -99.9999999999 \(*2) |
| boolean[]	| [true,false] | [false,true] |
| string[]	| ["THIS_IS_A_TEST_STRING","THIS_IS_B_TEST_STRING"] \(*3) | ["THIS_IS_B_TEST_STRING","THIS_IS_A_TEST_STRING"] \(*3) |
| int8[], int16[], int32[], int64[]	| [-100,-50,0,50,100] \(*4)　| [100,50,0,-50,-100] \(*4) |
| uint8[], uint16[], uint32[], uint64[]	| [0,25,50,75,100] \(*4) | [100,75,50,25,0] \(*4) |
| float[], double[]	| [-99.9999999999,-49.99999999995,0,49.99999999995,99.9999999999] \(*4) | [99.9999999999,49.99999999995,0,-49.99999999995,-99.9999999999] \(*4) |

> **Note: 1**
> When the min constraint is present and the table value < min, min is used.

> **Note: 2**
> When the max constraint is present and max < the table value, max is used.

> **Note: 3**
>	When a default value is present,
> - For scalar types, the default value is used (taking precedence over the min and max constraints).
> - For string[] types, the default value is inserted at the beginning of "default_value" and at the end of "checked_value".

> **Note: 4**
> default_value: Five values are used, defined by dividing the range from the minimum array value (Low) to the maximum array value (High) into four equal intervals.  
> - When the min constraint is present and Low < min, Low is replaced with min.  
> - When the max constraint is present and max < High, High is replaced with max.    
>
> checked_value: The reverse of "default_value"  

> **Note:**
> When the allowed constraint is present:
>
> Scalar types:  
> - If there is only one allowed value, both "default_value" and "checked_value" use that first element.  
> - If there are two or more allowed values, "default_value" uses the first element, and "checked_value" uses the next element.
>
> Array types:
>     "default_value" uses all allowed values, and "checked_value" uses them in reverse order.

### Scenario: Millions of set requests do not kill kura server & values remain consistent
| Step | Description |
|------|------|
| **When**: Action or trigger    | HeadlessApp set the signal \<path> to \<datatype> \<checked_value> \<count> times with duplex \<duplex> |
| **Then**: Expected outcome   | the result obtained from the actuator signal by PAL should be \<datatype> \<checked_value> on \<path> |

#### Placeholders
| Placeholder | Description |
|------|----------|
| \<path>          | VSS path |
| \<count> | The number of attempts to update the target VSS signal |
| \<duplex> | The multiplicity for updating the target VSS signal  |
| \<datatype>      | Data type of the target VSS signal |
| \<default_value> | Default value of the target VSS signal |
| \<checked_value> | Test value used for validation of the target VSS signal |

#### Test Cases
| datatype | default_value | checked_value |
|----------|---------|---------|
| boolean	| true | false |
| string	| THIS_IS_A_TEST_STRING \(*3) | THIS_IS_B_TEST_STRING |
| int8, int16, int32, int64	| 0 \(*1)\(*3) | -100 \(*1) |
| uint8, uint16, uint32, uint64	| 0 \(*1)\(*3) | 100 \(*2) |
| float, double	| 0 \(*3) | -99.9999999999 \(*2) |
| boolean[]	| [true,false] | [false,true] |
| string[]	| ["THIS_IS_A_TEST_STRING","THIS_IS_B_TEST_STRING"] \(*3) | ["THIS_IS_B_TEST_STRING","THIS_IS_A_TEST_STRING"] \(*3) |
| int8[], int16[], int32[], int64[]	| [-100,-50,0,50,100] \(*4)　| [100,50,0,-50,-100] \(*4) |
| uint8[], uint16[], uint32[], uint64[]	| [0,25,50,75,100] \(*4) | [100,75,50,25,0] \(*4) |
| float[], double[]	| [-99.9999999999,-49.99999999995,0,49.99999999995,99.9999999999] \(*4) | [99.9999999999,49.99999999995,0,-49.99999999995,-99.9999999999] \(*4) |

> **Note: 1**
> When the min constraint is present and the table value < min, min is used.

> **Note: 2**
> When the max constraint is present and max < the table value, max is used.

> **Note: 3**
>	When a default value is present,
> - For scalar types, the default value is used (taking precedence over the min and max constraints).
> - For string[] types, the default value is inserted at the beginning of "default_value" and at the end of "checked_value".

> **Note: 4**
> default_value: Five values are used, defined by dividing the range from the minimum array value (Low) to the maximum array value (High) into four equal intervals.  
> - When the min constraint is present and Low < min, Low is replaced with min.  
> - When the max constraint is present and max < High, High is replaced with max.    
>
> checked_value: The reverse of "default_value"  

> **Note:**
> When the allowed constraint is present:
>
> Scalar types:  
> - If there is only one allowed value, both "default_value" and "checked_value" use that first element.  
> - If there are two or more allowed values, "default_value" uses the first element, and "checked_value" uses the next element.
>
> Array types:
>     "default_value" uses all allowed values, and "checked_value" uses them in reverse order.

#### Placeholders
| Placeholder | Description |
|------|----------|
| \<path>          | VSS path |
| \<datatype>      | Data type of the target VSS signal |
| \<checked_value> | Test value used for validation of the target VSS signal |

#### Test Cases
| datatype | checked_value |
|----------|-------|
| boolean	| true |
| string	| THIS_IS_B_TEST_STRING |
| int8, int16, int32, int64	| -100 \(*1) |
| uint8, uint16, uint32, uint64	| 100 \(*2) |
| float, double	| 99.9999999999 \(*2) |
| boolean[]	| [true,false] |
| string[]	| ["THIS_IS_B_TEST_STRING","THIS_IS_A_TEST_STRING"] |
| int8[], int16[], int32[], int64[]	| [-100,-50,0,50,100] \(*3)　|
| uint8[], uint16[], uint32[], uint64[]	| [0,25,50,75,100] \(*3) |
| float[], double[]	| [-99.9999999999,-49.99999999995,0,49.99999999995,99.9999999999] \(*3) |

> **Note: 1**
> When the min constraint is present and the table value < min, min is used.

> **Note: 2**
> When the max constraint is present and max < the table value, max is used.

> **Note: 3**
> Five values are used, defined by dividing the range from the minimum array value (Low) to the maximum array value (High) into four equal intervals.  
> - When the min constraint is present and Low < min, Low is replaced with min.
> - When the max constraint is present and max < High, High is replaced with max.

> **Note:** 	When the allowed constraint is present, scalar types use one of the allowed values, while array types use all of the allowed values.
   
### Scenario: Set requests are failed when the network communication failure
| Step | Description |
|------|------|
| **When**: Action or trigger    | network failure of \<network_failure> is injected for set |
| **Then**: Expected outcome   | an attempt to set the actuator signal \<path> to \<datatype> /<checked_value> is failed |

#### Placeholders
| Placeholder | Description |
|------|----------|
| \<path>          | VSS path |
| \<datatype>      | Data type of the target VSS signal |
| \<checked_value> | Test value used for validation of the target VSS signal |
| \<network_failure> | Network failure |

#### Test Cases
| datatype | checked_value |
|----------|-------|
| boolean	| true |
| string	| THIS_IS_B_TEST_STRING |
| int8, int16, int32, int64	| -100 \(*1) |
| uint8, uint16, uint32, uint64	| 100 \(*2) |
| float, double	| 99.9999999999 \(*2) |
| boolean[]	| [true,false] |
| string[]	| ["THIS_IS_B_TEST_STRING","THIS_IS_A_TEST_STRING"] |
| int8[], int16[], int32[], int64[]	| [-100,-50,0,50,100] \(*3)　|
| uint8[], uint16[], uint32[], uint64[]	| [0,25,50,75,100] \(*3) |
| float[], double[]	| [-99.9999999999,-49.99999999995,0,49.99999999995,99.9999999999] \(*3) |

> **Note: 1**
> When the min constraint is present and the table value < min, min is used.

> **Note: 2**
> When the max constraint is present and max < the table value, max is used.

> **Note: 3**
> Five values are used, defined by dividing the range from the minimum array value (Low) to the maximum array value (High) into four equal intervals.  
> - When the min constraint is present and Low < min, Low is replaced with min.
> - When the max constraint is present and max < High, High is replaced with max.

> **Note:** 	When the allowed constraint is present, scalar types use one of the allowed values, while array types use all of the allowed values.
   
## Test Specification for the Subscribe Method
### Scenario: HeadlessApp_Subscribe_Sensor_Value
| Step | Description |
|------|------|
| **Given**: Preconditions    | PAL set sensor signal \<path> to \<datatype> \<value> |
| **Given**: Preconditions    | HeadlessApp subscribe the sensor signal \<path> of \<datatype> |
| **Then**: Expected outcome   | PAL set the signal at \<path> of \<datatype> to \<values> by order, subscribe stream receive the same data |
|    | And HeadlessApp unsubscribe the sensor signal \<path> of \<datatype> to close connections |

#### Placeholders
| Placeholder | Description |
|------|----------|
| \<path>     | VSS path    |
| \<datatype> | Data type of the target VSS signal |
| \<value>    | Initial value for the target VSS signal |
| \<values>   | Test values used for validation of the target VSS signal |

#### Test Cases
| datatype | value | values |
|----------|-------|--------|
| boolean	| false | ["true","false"] |
| int8, int16, int32, int64	| (*1) | (*2) |
| uint8, uint16, uint32, uint64	| (*1) | (*2) |
| float, double	| (*1) | (*2) |
| string	| THIS_IS_A_TEST_STRING | ["THIS_IS_B_TEST_STRING","THIS_IS_A_TEST_STRING"] |
| string[]	| ["THIS_IS_B_TEST_STRING","THIS_IS_A_TEST_STRING"] | ["["THIS_IS_A_TEST_STRING","THIS_IS_B_TEST_STRING"]","["THIS_IS_B_TEST_STRING","THIS_IS_A_TEST_STRING"]"] |

> **Note: 1**
> When the max constraint is present, that value is used; otherwise, the datatype’s inherent maximum value is used.

> **Note: 2**
> To test multiple candidate values, an array MUST be used. The array should include the following elements:
> - The minimum value: when the min constraint is defined, that value is used; otherwise, use the datatype’s inherent minimum value.
> - The maximum value: when the max constraint is defined, that value is used; otherwise, use the datatype’s inherent maximum value.
> - The default value: when the default constraint is defined, that value is used.
> - An intermediate value between the minimum and maximum is used.

> **Note:**
> When the allowed constraint is present, "value" uses one of the allowed values, and "values" uses all of the allowed values as an array.

### Scenario: Notification of subscribed signals
| Step | Description |
|------|------|
| **Given**: Preconditions    | a signal at \<path> is set to \<value_0> of datatype \<datatype>    |
|     | And attempts to subscribe the signal at \<path> of datatype \<datatype> is succeeded    |
| **When**: Action or trigger    | the value of signal at \<path> changes to \<value_1> of datatype \<datatype>    |
| **Then**: Expected outcome   | the subscribe stream returns \<datatype> \<value_1> on \<path>    |
|    | And HeadlessApp unsubscribe the sensor signal \<path> of \<datatype> to close connections    |
       

#### Placeholders
| Placeholder | Description |
|------|----------|
| \<path> | VSS path |
| \<datatype> | Data type of the target VSS signal |
| \<value_0> | Initial value for the target VSS signal |
| \<value_1> | Updated value for the target VSS signal |

#### Test Cases
| datatype | value_0 | value_1 |
|----------|---------|---------|
| boolean	| true | false |
| int8, int16, int32, int64 | (*1) | (*2) |
| uint8, uint16, uint32, uint64	| (*1) | (*2) |
| float, double	| (*1) | (*2) |
| string	| THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
| string[] | ["THIS_IS_A_TEST_STRING","THIS_IS_B_TEST_STRING"] | ["THIS_IS_B_TEST_STRING","THIS_IS_A_TEST_STRING"] |

> **Note: 1**
> When the max constraint is present, that value is used; otherwise, the datatype’s inherent maximum value is used.

> **Note: 2**
> When the min constraint is present, that value is used; otherwise, the datatype’s inherent minimum value is used.

> **Note:**
> When the allowed constraint is present:
> - For scalar types, "value_0" uses one of the allowed values, and "value_1" uses a different allowed value.
> - For array types, "value_0" uses all of the allowed values, and "value_1" uses all of the allowed values in reverse order.

### Scenario: Multiple subscriptions to a signal
| Step | Description |
|------|------|
| **Given**: Preconditions    | a signal at \<path> is set to \<value_0> of datatype \<datatype>    |
|     | And attempts to subscribe the signal at \<path> of datatype \<datatype> for \<count> times with duplex \<duplex> are all succeeded    |
| **When**: Action or trigger    | the value of signal at \<path> changes to \<value_1> of datatype \<datatype>    |
| **Then**: Expected outcome   | the subscribe stream returns \<datatype> \<value_1> on \<path>    |
|    | And HeadlessApp unsubscribe the sensor signal \<path> of \<datatype> to close connections    |

#### Placeholders
| Placeholder | Description |
|------|----------|
| \<path> | VSS path |
| \<datatype> | Data type of the target VSS signal |
| \<value_0> | Initial value for the target VSS signal |
| \<value_1> | Updated value for the target VSS signal |
| \<count> | The number of attempts to update the target VSS signal |
| \<duplex> | The multiplicity for updating the target VSS signal  |

#### Test Cases
| datatype | value_0 | value_1 |
|----------|---------|---------|
| boolean	| true | false |
| int8, int16, int32, int64 | (*1) | (*2) |
| uint8, uint16, uint32, uint64	| (*1) | (*2) |
| float, double	| (*1) | (*2) |
| string	| THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
| string[] | ["THIS_IS_A_TEST_STRING","THIS_IS_B_TEST_STRING"] | ["THIS_IS_B_TEST_STRING","THIS_IS_A_TEST_STRING"] |

> **Note: 1**
> When the max constraint is present, that value is used; otherwise, the datatype’s inherent maximum value is used.

> **Note: 2**
> When the min constraint is present, that value is used; otherwise, the datatype’s inherent minimum value is used.

> **Note:**
> When the allowed constraint is present:
> - For scalar types, "value_0" uses one of the allowed values, and "value_1" uses a different allowed value.
> - For array types, "value_0" uses all of the allowed values, and "value_1" uses all of the allowed values in reverse order.

### Scenario: Notification issued even if signal value being changed
| Step | Description |
|------|------|
| **Given**: Preconditions    | a signal at \<path> is set to \<value_0> of datatype \<datatype>    |
|     | And attempts to subscribe the signal at \<path> of datatype \<datatype> is succeeded    |
| **When**: Action or trigger    | the value of signal at \<path> changes to \<value_1> of datatype \<datatype>, which is equal to the current value    |
| **Then**: Expected outcome   | the subscribe stream returns \<datatype> \<value_1> on \<path>    |
|    | And HeadlessApp unsubscribe the sensor signal \<path> of \<datatype> to close connections    |

#### Placeholders
| Placeholder | Description |
|------|----------|
| \<path> | VSS path |
| \<datatype> | Data type of the target VSS signal |
| \<value_0> | Initial value for the target VSS signal |
| \<value_1> | Updated value for the target VSS signal |

#### Test Cases
| datatype | value_0 | value_1 |
|----------|---------|---------|
| boolean	| true | false |
| int8, int16, int32, int64 | (*1) | (*2) |
| uint8, uint16, uint32, uint64	| (*1) | (*2) |
| float, double	| (*1) | (*2) |
| string	| THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
| string[] | ["THIS_IS_A_TEST_STRING","THIS_IS_B_TEST_STRING"] | ["THIS_IS_B_TEST_STRING","THIS_IS_A_TEST_STRING"] |

> **Note: 1**
> When the max constraint is present, that value is used; otherwise, the datatype’s inherent maximum value is used.

> **Note: 2**
> When the min constraint is present, that value is used; otherwise, the datatype’s inherent minimum value is used.

> **Note:**
> When the allowed constraint is present:
> - For scalar types, "value_0" uses one of the allowed values, and "value_1" uses a different allowed value.
> - For array types, "value_0" uses all of the allowed values, and "value_1" uses all of the allowed values in reverse order.

### Scenario: Millions of subscribe requests do not kill kura server & subscription_ids are correctly returned
| Step | Description |
|------|------|
| **Given**: Preconditions    | a signal at \<path> is set to \<value_0> of datatype \<datatype> |
|     | And attempts to subscribe the signal at \<path> of datatype \<datatype> for \<count> times with duplex \<duplex> are all succeeded |
| **When**: Action or trigger    | the value of signal at \<path> changes to \<value_1> of datatype \<datatype> |
| **Then**: Expected outcome   | the subscribe stream returns \<datatype> \<value_1> on \<path> |
|    | And HeadlessApp unsubscribe the sensor signal \<path> of \<datatype> to close connections |

#### Placeholders
| Placeholder | Description |
|------|----------|
| \<path> | VSS path |
| \<datatype> | Data type of the target VSS signal |
| \<value_0> | Initial value for the target VSS signal |
| \<value_1> | Updated value for the target VSS signal |
| \<count> | The number of attempts to update the target VSS signal |
| \<duplex> | The multiplicity for updating the target VSS signal  |

#### Test Cases
| datatype | value_0 | value_1 |
|----------|---------|---------|
| boolean	| true | false |
| int8, int16, int32, int64 | (*1) | (*2) |
| uint8, uint16, uint32, uint64	| (*1) | (*2) |
| float, double	| (*1) | (*2) |
| string	| THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
| string[] | ["THIS_IS_A_TEST_STRING","THIS_IS_B_TEST_STRING"] | ["THIS_IS_B_TEST_STRING","THIS_IS_A_TEST_STRING"] |

> **Note: 1**
> When the max constraint is present, that value is used; otherwise, the datatype’s inherent maximum value is used.

> **Note: 2**
> When the min constraint is present, that value is used; otherwise, the datatype’s inherent minimum value is used.

> **Note:**
> When the allowed constraint is present:
> - For scalar types, "value_0" uses one of the allowed values, and "value_1" uses a different allowed value.
> - For array types, "value_0" uses all of the allowed values, and "value_1" uses all of the allowed values in reverse order.

### Scenario: Subscribe requests are failed when the server is stopped
| Step | Description |
|------|------|
| **Given**: Preconditions    | a signal at \<path> is set to \<value_0> of datatype \<datatype> |
| **When**: Action or trigger    | the server is stopped |
| **Then**: Expected outcome   | an attempt to subscribe the signal at \<path> of datatype \<datatype> is failed |

#### Placeholders
| Placeholder | Description |
|------|----------|
| \<path> | VSS path |
| \<datatype> | Data type of the target VSS signal |
| \<value_0> | Initial value for the target VSS signal |

#### Test Cases
| datatype | value_0 |
|----------|---------|
| boolean	| true |
| int8, int16, int32, int64 | (*1) |
| uint8, uint16, uint32, uint64	| (*1) |
| float, double	| (*1) |
| string	| THIS_IS_A_TEST_STRING |
| string[] | ["THIS_IS_A_TEST_STRING","THIS_IS_B_TEST_STRING"] |

> **Note: 1**
> When the max constraint is present, that value is used; otherwise, the datatype’s inherent maximum value is used.

> **Note:**
> When the allowed constraint is present, scalar types use one of the allowed values, while array types use all of the allowed values.

### Scenario: Subscribe requests are failed when the network communication failure
| Step | Description |
|------|------|
| **Given**: Preconditions    | a signal at \<path> is set to \<value_0> of datatype \<datatype> |
| **When**: Action or trigger    | network failure of \<network_failure> is injected |
| **Then**: Expected outcome   | an attempt to subscribe the signal at \<path> of datatype \<datatype> is failed |

#### Placeholders
| Placeholder | Description |
|------|----------|
| \<path> | VSS path |
| \<datatype> | Data type of the target VSS signal |
| \<value_0> | Initial value for the target VSS signal |
| \<network_failure> | Network failure |

#### Test Cases
| datatype | value_0 |
|----------|---------|
| boolean	| true |
| int8, int16, int32, int64 | (*1) |
| uint8, uint16, uint32, uint64	| (*1) |
| float, double	| (*1) |
| string	| THIS_IS_A_TEST_STRING |
| string[] | ["THIS_IS_A_TEST_STRING","THIS_IS_B_TEST_STRING"] |

> **Note: 1**
> When the max constraint is present, that value is used; otherwise, the datatype’s inherent maximum value is used.

> **Note:**
> When the allowed constraint is present, scalar types use one of the allowed values, while array types use all of the allowed values.

### Scenario: Subscribe contexts are no longer available after the server is reset
| Step | Description |
|------|------|
| **Given**: Preconditions    | a signal at \<path> is set to \<value_0> of datatype \<datatype>    |
|     | And attempts to subscribe the signal at \<path> of datatype \<datatype> is succeeded    |
| **When**: Action or trigger    | the server is reset    |
|     | And the value of signal at \<path> changes to \<value_1> of datatype \<datatype>    |
| **Then**: Expected outcome   | the subscribe stream returns no data    |
|    | And HeadlessApp unsubscribe the sensor signal \<path> of \<datatype> to close connections    |

#### Placeholders
| Placeholder | Description |
|------|----------|
| \<path> | VSS path |
| \<datatype> | Data type of the target VSS signal |
| \<value_0> | Initial value for the target VSS signal |
| \<value_1> | Updated value for the target VSS signal |

#### Test Cases
| datatype | value_0 | value_1 |
|----------|---------|---------|
| boolean	| true | false |
| int8, int16, int32, int64 | (*1) | (*2) |
| uint8, uint16, uint32, uint64	| (*1) | (*2) |
| float, double	| (*1) | (*2) |
| string	| THIS_IS_A_TEST_STRING | THIS_IS_B_TEST_STRING |
| string[] | ["THIS_IS_A_TEST_STRING","THIS_IS_B_TEST_STRING"] | ["THIS_IS_B_TEST_STRING","THIS_IS_A_TEST_STRING"] |

> **Note: 1**
> When the max constraint is present, that value is used; otherwise, the datatype’s inherent maximum value is used.

> **Note: 2**
> When the min constraint is present, that value is used; otherwise, the datatype’s inherent minimum value is used.

> **Note:**
> When the allowed constraint is present:
> - For scalar types, "value_0" uses one of the allowed values, and "value_1" uses a different allowed value.
> - For array types, "value_0" uses all of the allowed values, and "value_1" uses all of the allowed values in reverse order.

### Scenario: All updates are notified to subscriptions without any drops even large burden on server or network
| Step | Description |
|------|------|
| **Given**: Preconditions    | a signal at \<path> is set to \<value_0> of datatype \<datatype> |
|     | And attempts to subscribe the signal at \<path> of datatype \<datatype> is succeeded |
| **When**: Action or trigger    | the signal at \<path> of numeric datatype \<datatype> is updated \<count> times, any updates are captured from subscribe stream |
| **Then**: Expected outcome   | HeadlessApp unsubscribe the sensor signal \<path> of \<datatype> to close connections |

#### Placeholders
| Placeholder | Description |
|------|----------|
| \<path> | VSS path |
| \<datatype> | Data type of the target VSS signal |
| \<value_0> | Initial value for the target VSS signal |
| \<count> | The number of attempts to update the target VSS signal |

#### Test Cases
| datatype | value_0 |
|----------|---------|
| boolean	| true |
| int8, int16, int32, int64 | (*1) |
| uint8, uint16, uint32, uint64	| (*1) |
| float, double	| (*1) |
| string	| THIS_IS_A_TEST_STRING |
| string[] | ["THIS_IS_A_TEST_STRING","THIS_IS_B_TEST_STRING"] |

> **Note: 1**
> When the max constraint is present, that value is used; otherwise, the datatype’s inherent maximum value is used.

> **Note:**
> When the allowed constraint is present, scalar types use one of the allowed values, while array types use all of the allowed values.

## Test Specification for the Unsubscribe Method
### Scenario: The unsubscribe request for a signal that is currently subscribed has been successfully processed
| Step | Description |
|------|------|
| **Given**: Preconditions    | a signal at \<path> is set to \<value_0> of datatype \<datatype> |
|    | attempts to subscribe the signal at \<path> of datatype \<datatype> is succeeded |
| **Then**: Expected outcome   | attempts to unsubscribe the signal at \<path> of datatype \<datatype> is succeeded |

#### Placeholders
| Placeholder | Description |
|------|----------|
| \<path> | VSS path |
| \<datatype>  | Data type of the target VSS signal |
| \<value_0> | Initial value for the target VSS signal |

#### Test Cases
| datatype | value_0 |
|----------|-------|
| boolean	| false |
| string	| SAE_1 |
| int8	| -100 |
| int16 | -32768 |
| int32 | -2147483648 |
| uint8, uint16, uint32	| 0 |
| float	| -3.4028235e+38 | 
| double | -1.7976931348623157e+308 |
| string[] | ["THIS_IS_A_TEST_STRING","THIS_IS_B_TEST_STRING"] |

> **Note:**
> When the allowed constraint is present, scalar types use the first allowed value, while array types use the entire set of allowed values.

### Scenario: The unsubscribe request for a signal that is currently not subscribed has been failed processed
| Step | Description |
|------|------|
| **Given**: Preconditions    | a signal at \<path> is set to \<value_0> of datatype \<datatype> and doesn't attempt to subscribe the signal |
| **Then**: Expected outcome     | attempts to unsubscribe the signal at \<path> of datatype \<datatype> is failed |
|    |     |

#### Placeholders
| Placeholder | Description |
|------|----------|
| \<path> | VSS path |
| \<datatype>  | Data type of the target VSS signal |
| \<value_0> | Initial value for the target VSS signal |

#### Test Cases
| datatype | value_0 |
|----------|-------|
| boolean	| false |
| string	| SAE_1 |
| int8	| -100 |
| int16 | -32768 |
| int32 | -2147483648 |
| uint8, uint16, uint32	| 0 |
| float	| -3.4028235e+38 | 
| double | -1.7976931348623157e+308 |
| string[] | ["THIS_IS_A_TEST_STRING","THIS_IS_B_TEST_STRING"] |

> **Note:**
> When the allowed constraint is present, scalar types use the first allowed value, while array types use the entire set of allowed values.

### Scenario: After the unsubscribe request succeeds, no update information will arrive in the stream
| Step | Description |
|------|------|
| **Given**: Preconditions    | a signal at \<path> is set to \<value_0> of datatype \<datatype> |
|    | attempts to subscribe the signal at \<path> of datatype \<datatype> is succeeded |
| **When**: Expected outcome   | attempts to unsubscribe the signal at \<path> of datatype \<datatype> is succeeded |
|    | the value of signal at \<path> changes to \<value_1> of datatype \<datatype> |
| **Then**: Expected outcome   | The subscribe stream doesn't return \<datatype> \<value_1> on \<path>. |

#### Placeholders
| Placeholder | Description |
|------|----------|
| \<path> | VSS path |
| \<datatype>  | Data type of the target VSS signal |
| \<value_0> | Initial value for the target VSS signal |
| \<value_1> | Updated value for the target VSS signal |

#### Test Cases
| datatype | value_0 | value_1 |
|----------|-------|-------|
| boolean | ture | false |
| string	| SAE_0 | SAE_1 |
| int8 | 100 | -100 |
| int16 | 32767| -32768 |
| int32 | 2147483647 | -2147483648 |
| uint8, uint16, uint32	| 4294967295 | 0 |
| float	| 3.4028235e+38 | -3.4028235e+38 |
| double |  1.7976931348623157e+308  | -1.7976931348623157e+308 |
| string[] | ["THIS_IS_A_TEST_STRING","THIS_IS_B_TEST_STRING"] | ["THIS_IS_B_TEST_STRING","THIS_IS_A_TEST_STRING"] |

> **Note:**
> When the allowed constraint is present, scalar types use the first allowed value, while array types use the entire set of allowed values.

### Scenario: Unsubscribe of one subscription_id does not hinder other subscription_ids
| Step | Description |
|------|------|
| **Given**: Preconditions    | a signal at \<path> is set to \<value_0> of datatype \<datatype> |
|    | attempts to subscribe the signal at \<path> of datatype \<datatype> for \<count> times with duplex \<duplex> are all succeeded |
| **When**: Expected outcome   | attempts to unsubscribe the signal at \<path> of datatype \<datatype> is succeeded |
|    | the value of signal at \<path> changes to \<value_1> of datatype \<datatype> |
| **Then**: Expected outcome   | The other subscription_ids stream returns \<datatype> \<value_1> on \<path> |

#### Placeholders
| Placeholder | Description |
|------|----------|
| \<path> | VSS path |
| \<datatype>  | Data type of the target VSS signal |
| \<value_0> | Initial value for the target VSS signal |
| \<value_1> | Updated value for the target VSS signal |
| \<count>   | The number of attempts to update the target VSS signal |
| \<duplex>	 | The multiplicity for updating the target VSS signal    |

#### Test Cases
| datatype | value_0 | value_1 |
|----------|-------|-------|
| boolean | ture | false |
| string	| SAE_0 | SAE_1 |
| int8 | 100 | -100 |
| int16 | 32767| -32768 |
| int32 | 2147483647 | -2147483648 |
| uint8, uint16, uint32	| 4294967295 | 0 |
| float	| 3.4028235e+38 | -3.4028235e+38 |
| double |  1.7976931348623157e+308  | -1.7976931348623157e+308 |
| string[] | ["THIS_IS_A_TEST_STRING","THIS_IS_B_TEST_STRING"] | ["THIS_IS_B_TEST_STRING","THIS_IS_A_TEST_STRING"] |

> **Note:**
> When the allowed constraint is present, scalar types use the first allowed value, while array types use the entire set of allowed values.

### Scenario: Millions of unsubscribe requests do not kill kura server
| Step | Description |
|------|-------------|
| **Given**: Preconditions | a signal at \<path> is set to \<value_0> of datatype \<datatype> |
| **When**: Action/Trigger | attempts to subscribe the signal at \<path> of datatype \<datatype> for \<count> times with duplex \<duplex> are all succeeded |
| **Then**: Expected outcome | HeadlessApp unsubscribe the sensor signal \<path> of \<datatype> to close connections with duplex \<duplex> are all succeeded |

#### Placeholders
| Placeholder | Description |
|-------------|-------------|
| \<path>      | VSS path |
| \<datatype>  | Data type of the target VSS signal |
| \<value_0>   | Initial value before subscribing |
| \<count>     | Number of subscription attempts (large, e.g., 100) |
| \<duplex>    | Multiplicity for subscription connections |

#### Test Cases
| datatype | value_0 |
|----------|--------|
| bool     | true |
| string   | SAE_0 |
| int8     | 100 |
| int16    | 32767 |
| int32    | 2147483647 |
| uint8    | 10 |
| uint16   | 65535 |
| uint32   | 4294967295 |
| float    | 3.4028235e+38 |
| double   | 1.7976931348623157e+308 |
| string[] | ["THIS_IS_A_TEST_STRING","THIS_IS_B_TEST_STRING"] |

> **Note:**
> When the allowed constraint is present, scalar types use the first allowed value, while array types use the entire set of allowed values.

### Scenario: Unsubscribe requests during network failure result in client error
| Step | Description |
|------|-------------|
| **Given**: Preconditions | HeadlessApp subscribe the sensor signal \<path> which is initialized \<value> of datatype \<datatype> |
| **When**: Action/Trigger | network failure of \<network_failure> is injected |
| **Then**: Expected outcome | attempts to unsubscribe the subscription to \<path> of \<datatype> are failed |

#### Placeholders
| Placeholder | Description |
|-------------|-------------|
| \<path>      | VSS path |
| \<datatype>  | Data type of the target VSS signal |
| \<value>     | Value before subscribing |
| \<network_failure> | Type of network failure: "reject" or "timeout" |

#### Test Cases
| datatype | value | network_failure |
|----------|-------|----------------|
| bool | false | reject, timeout |
| string | SAE_1 | reject, timeout |
| int8 | -100 | reject, timeout |
| int16 | -32768 | reject, timeout |
| int32 | -2147483648 | reject, timeout |
| uint8 | 0 | reject, timeout |
| uint16 | 0 | reject, timeout |
| uint32 | 0 | reject, timeout |
| float | -3.4028235e+38 | reject, timeout |
| double | -1.7976931348623157e+308 | reject, timeout |
| string[] | ["THIS_IS_A_TEST_STRING","THIS_IS_B_TEST_STRING"] | reject, timeout |  

> **Note:**
> When the allowed constraint is present, scalar types use the first allowed value, while array types use the entire set of allowed values.

### Scenario: Unsubscribe requests after recovery from network failure are succeeded
| Step | Description |
|------|-------------|
| **Given**: Preconditions | HeadlessApp subscribe the sensor signal \<path> which is initialized \<value> of datatype \<datatype> |
| **When**: Action/Trigger | network failure of \<network_failure> is injected |
|      | network is restored from the failure |
| **Then**: Expected outcome | attempts to unsubscribe the subscription to \<path> of \<datatype> are succeeded |

#### Placeholders
| Placeholder | Description |
|-------------|-------------|
| \<path>      | VSS path |
| \<datatype>  | Data type of the target VSS signal |
| \<value>     | Value before subscribing |
| \<network_failure> | Type of network failure: "reject" or "timeout" |

#### Test Cases
| datatype | value | network_failure |
|----------|-------|----------------|
| bool | false | reject, timeout |
| string | SAE_1 | reject, timeout |
| int8 | -100 | reject, timeout |
| int16 | -32768 | reject, timeout |
| int32 | -2147483648 | reject, timeout |
| uint8 | 0 | reject, timeout |
| uint16 | 0 | reject, timeout |
| uint32 | 0 | reject, timeout |
| float | -3.4028235e+38 | reject, timeout |
| double | -1.7976931348623157e+308 | reject, timeout |
| string[] | ["THIS_IS_A_TEST_STRING","THIS_IS_B_TEST_STRING"] | reject, timeout |

> **Note:**
> When the allowed constraint is present, scalar types use the first allowed value, while array types use the entire set of allowed values.

### Scenario: Unsubscribe requests during server down result in client error
| Step | Description |
|------|-------------|
| **Given**: Preconditions | HeadlessApp subscribe the sensor signal \<path> which is initialized \<value> of datatype \<datatype> |
| **When**: Action/Trigger | the server is stopped |
| **Then**: Expected outcome | attempts to unsubscribe the subscription to \<path> of \<datatype> are failed |

#### Placeholders
| Placeholder | Description |
|-------------|-------------|
| \<path>      | VSS path |
| \<datatype>  | Data type of the target VSS signal |
| \<value>     | Value before subscribing |

#### Test Cases
| datatype | value |
|----------|-------|
| bool | false |
| string | SAE_1 |
| int8 | -100 |
| int16 | -32768 |
| int32 | -2147483648 |
| uint8 | 0 |
| uint16 | 0 |
| uint32 | 0 |
| float | -3.4028235e+38 |
| double | -1.7976931348623157e+308 |
| string[] | ["THIS_IS_A_TEST_STRING","THIS_IS_B_TEST_STRING"] |

> **Note:**
> When the allowed constraint is present, scalar types use the first allowed value, while array types use the entire set of allowed values.

### Scenario: Unsubscribe requests after server reset are succeeded
| Step | Description |
|------|-------------|
| **Given**: Preconditions | HeadlessApp subscribe the sensor signal \<path> which is initialized \<value> of datatype \<datatype> |
| **When**: Action/Trigger | the server is reset |
| **Then**: Expected outcome | attempts to unsubscribe the subscription to \<path> of \<datatype> are succeeded |

#### Placeholders
| Placeholder | Description |
|-------------|-------------|
| \<path>      | VSS path |
| \<datatype>  | Data type of the target VSS signal |
| \<value>     | Value before subscribing |

#### Test Cases
| datatype | value |
|----------|-------|
| bool | false |
| string | SAE_1 |
| int8 | -100 |
| int16 | -32768 |
| int32 | -2147483648 |
| uint8 | 0 |
| uint16 | 0 |
| uint32 | 0 |
| float | -3.4028235e+38 |
| double | -1.7976931348623157e+308 |
| string[] | ["THIS_IS_A_TEST_STRING","THIS_IS_B_TEST_STRING"] |

> **Note:**
> When the allowed constraint is present, scalar types use the first allowed value, while array types use the entire set of allowed values.

## Test Specification for the Inspect Method
### Scenario: HeadlessApp_Inspect_Signal
| Step | Description |
|------|------|
| **Given**: Preconditions    | PAL set a signal \<path> to \<datatype> \<value>    |
| **Then**: Expected outcome   | HeadlessApp can inspect the signal \<path> of \<datatype> |

#### Placeholders
| Placeholder | Description |
|------|----------|
| \<path>     | VSS path    |
| \<datatype> | Data type of the target VSS signal |
| \<value>    | Test value used for validation of the target VSS signal |

#### Test Cases
| datatype | value |
|----------|-------|
| boolean	| false |
| uint8[]	| [255, 127, 0] |
| int8, int16, int32, int64	| (*1) |
| uint8, uint16, uint32, uint64	| (*1) |
| float, double	| (*1) |
| string	| THIS_IS_B_TEST_STRING |
| string[]	| ["THIS_IS_A_TEST_STRING","THIS_IS_B_TEST_STRING"] |

> **Note: 1**
> When the min constraint is present, that value is used; otherwise, the datatype’s inherent minimum value is used.

> **Note:**
> When the allowed constraint is present, scalar types use one of the allowed values, while array types use all of the allowed values.
