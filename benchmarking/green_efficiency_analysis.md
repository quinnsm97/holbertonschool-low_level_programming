# Green Efficiency Analysis

## Measurement Methodology

Three experiments were conducted using C programs compiled with GCC using the flags `-Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long`.

The baseline experiment measured the execution time of a loop performing 100 million iterations. Three runs were recorded to account for minor variations in execution time.

The algorithm comparison experiment measured two approaches to processing data: a naive algorithm and a single-pass algorithm. Each algorithm was executed three times, with execution time recorded using the C `clock()` function.

Finally, a controlled instrumentation experiment measured the execution time of three individual functions: `build_dataset()`, `process_dataset()`, and `reduce_checksum()`. The total execution time was also recorded. Start and end timestamps were captured using `clock()`, and clock ticks were converted into seconds using `CLOCKS_PER_SEC`.

## Observed Performance Differences

The baseline loop recorded the following execution times:

- Run 1: 0.123911 seconds
- Run 2: 0.127708 seconds
- Run 3: 0.130320 seconds
- Average: 0.127313 seconds

The algorithm comparison demonstrated a much larger performance difference:

**Naive algorithm:**
- Run 1: 2.188262 seconds
- Run 2: 2.193717 seconds
- Run 3: 2.185817 seconds
- Average: approximately 2.189265 seconds

**Single-pass algorithm:**
- Run 1: 0.000088 seconds
- Run 2: 0.000086 seconds
- Run 3: 0.000091 seconds
- Average: approximately 0.000088 seconds

The single-pass algorithm was approximately **24,784 times faster** than the naive implementation. This demonstrates how the choice of algorithm can have a substantially greater effect on performance than simply optimising individual lines of code.

The instrumentation experiment recorded the following results:

- Total execution time: 0.001021 seconds
- BUILD_DATA: 0.000357 seconds
- PROCESS: 0.000438 seconds
- REDUCE: 0.000219 seconds

Processing the dataset was the slowest of the three stages, accounting for the largest portion of the measured execution time. This information helps identify where optimisation efforts could be most beneficial.

## Relation Between Runtime and Energy Consumption

Execution time and energy consumption are related because a program that completes its work more quickly may require less total energy, assuming similar hardware and operating conditions.A longer runtime generally means the CPU remains active for a longer period while completing the task. This can indicate greater energy consumption, although actual energy usage also depends on processor power draw and hardware conditions.

The comparison between the naive and single-pass algorithms suggests that choosing a more efficient algorithm could reduce the time a processor spends performing a particular task. At scale, improvements like these could contribute to lower energy requirements, particularly in applications that process large datasets or execute frequently.

However, execution time alone does not establish actual energy consumption. Measuring energy would require additional tools to monitor power usage during execution.

## Limitations of the Experiment

There are a few limitations to these results:

- Each experiment was performed only three times, providing a limited sample size.
- Background processes and operating system activity may have influenced execution times.
- The experiments were conducted on one machine, meaning results may differ on other hardware configurations.
- The `clock()` function measures processor time rather than directly measuring electricity consumption.
- No dedicated energy-monitoring equipment was used, so environmental benefits cannot be quantified from these measurements.

## Practical Engineering Takeaway

The main takeaway is that algorithmic efficiency is an important part of sustainable software engineering. The comparison demonstrated that selecting a single-pass approach instead of a naive approach can produce an enormous improvement in execution time.

Software engineers should consider algorithm complexity, avoid unnecessary processing and measure performance before attempting optimisation. Instrumentation is particularly useful because it identifies which parts of a program consume the most execution time.

Writing efficient software can contribute to reduced computing resource requirements. Although this experiment did not directly measure energy consumption, it demonstrates why performance optimisation is an important consideration when developing more sustainable software.
