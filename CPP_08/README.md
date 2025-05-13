# Module 08: Standard Library & Iterators

This module emphasizes usage of the C++ Standard Library algorithms, containers, and custom iterator patterns.

## Learning Objectives

- Utilize STL containers: `vector`, `list`, `stack`, etc.
- Implement and apply generic algorithms (`find`, `sort`, `for_each`)
- Create custom iterators and adaptors to extend container behavior

## Exercises

### ex00: easyfind
- Files: `easyfind.hpp`, `main.cpp`, `Makefile`
- Objective: Implement a template function `easyfind` that searches a container for a given value and returns an iterator or throws an exception if not found. Demonstrate on `vector` and `list`.

### ex01: Span
- Files: `Span.hpp`, `Span.cpp`, `main.cpp`, `Makefile`
- Objective: Create a `Span` class storing a collection of integers. Provide methods to add numbers and compute shortest and longest span (differences) using STL algorithms.

### ex02: MutantStack
- Files: `MutantStack.hpp`, `main.cpp`, `Makefile`
- Objective: Inherit from `std::stack` to implement `MutantStack`, exposing iterator support. Combine LIFO behavior with iterate-over functionality.

## Compilation & Usage

```bash
cd CPP_08/ex0X
make
./ex0X
```
