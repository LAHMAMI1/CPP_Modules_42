# Module 09: Algorithms & Performance

This module focuses on algorithmic problem solving, input parsing, and performance considerations in C++.

## Learning Objectives

- Parse and validate text input (CSV, postfix notation)
- Implement algorithmic data structures and sorting/merging
- Analyze time complexity and performance trade-offs
- Manage large datasets and edge cases robustly

## Exercises

### ex00: Bitcoin Exchange
- Files: `BitcoinExchange.hpp/cpp`, `main.cpp`, `data.csv`, `input.txt`, `Makefile`
- Objective: Read historical Bitcoin exchange rates from a CSV, parse user queries, and compute exchange values. Practice file I/O, string parsing, map lookups, and error handling.

### ex01: RPN Calculator
- Files: `RPN.hpp/cpp`, `main.cpp`, `Makefile`
- Objective: Implement a Reverse Polish Notation (RPN) calculator. Support basic operators (`+`, `-`, `*`, `/`), manage a stack for evaluation, and handle invalid expressions gracefully.

### ex02: PmergeMe
- Files: `PmergeMe.hpp/cpp`, `main.cpp`, `Makefile`
- Objective: Develop a hybrid merge-insertion sorting algorithm on sequences provided via command-line. Compare performance using `std::vector` vs. `std::deque`. Measure execution time.

## Compilation & Usage

```bash
cd CPP_09/ex0X
make
./ex0X <args>
```
