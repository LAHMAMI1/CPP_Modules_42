# Module 02: Operator Overloading & Fixed-point Arithmetic

This module introduces operator overloading in C++ and implements a fixed-point number class.

## Learning Objectives

- Overload arithmetic, comparison, and increment/decrement operators
- Implement conversion constructors and copy operations
- Understand fixed-point representation and precision handling
- Apply const-correctness and reference returns when appropriate

## Exercises

### ex00: Fixed Basics
- Files: `Fixed.cpp`, `Fixed.hpp`, `main.cpp`, `Makefile`
- Objective: Create a `Fixed` class to represent fixed-point numbers. Overload the insertion (`<<`) operator for easy output, and basic arithmetic.

### ex01: Comparison & Arithmetic
- Files: `Fixed.cpp`, `Fixed.hpp`, `main.cpp`, `Makefile`
- Objective: Expand `Fixed` to overload comparison operators (`>`, `<`, `>=`, `<=`, `==`, `!=`) and arithmetic (`+`, `-`, `*`, `/`).

### ex02: Increment/Decrement
- Files: `Fixed.cpp`, `Fixed.hpp`, `main.cpp`, `Makefile`
- Objective: Further extend `Fixed` to overload pre- and post-increment/decrement operators. Return values by reference or by new object as needed.

## Compilation & Usage

Build and run with:

```bash
cd CPP_02/exXX
make
./exXX
```
