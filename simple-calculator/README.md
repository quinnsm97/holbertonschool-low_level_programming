# Simple Calculator

## Overview
A simple command-line calculator written in C. The program displays a menu that allows users to perform basic arithmetic operations and continues running until the user chooses to quit.

## Compile command
Use the following command to compile the calculator.c file:
```c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c
```

## Run instructions
Once compiled use the following command to run the program:
```c
./a.out
```

## Supported Operations
The calculator supports the following operations:

* Addition (1): Adds two numbers.
* Subtraction (2): Subtracts the second number from the first.
* Multiplication (3): Multiplies two numbers.
* Division (4): Divides the first number by the second.
* Quit (0): Exits the calculator.

The menu repeats after each operation, allowing users to perform multiple calculations without restarting the program.

## Numeric Behaviour
* User inputs are currently handled as integers.
* Addition, subtraction and multiplication return integer results.
* Division uses a double return type to support decimal results.
* Division by zero is checked and displays an error message.
* Decimal input values are not supported while operands are stored as integers.

## Known limitations
* Non-numeric input validation is limited. Entering letters or other invalid characters may cause input handling issues.
* Decimal numbers cannot currently be entered as operands.
* Division by zero is handled, but the calculator does not currently provide a dedicated error status separate from the numerical result.
* The calculator only supports the four basic arithmetic operations.