# Module 07: Templates & Generic Programming

This module deepens understanding of C++ templates, generic algorithms, and container abstractions.

## Learning Objectives

- Write function templates for generic operations
- Use class templates to create type-safe containers
- Explore iterator-based algorithms and template specialization

## Exercises

### ex00: Whatever Template
- Files: `whatever.hpp`, `main.cpp`, `Makefile`
- Objective: Implement `swap`, `min`, and `max` as function templates for any type. Validate with built-in and user-defined types.

### ex01: Iterator Function (iter)
- Files: `iter.hpp`, `main.cpp`, `Makefile`
- Objective: Create a template function `iter` that applies a function pointer or functor to each element of an array. Practice pointers to functions and template parameter packs.

### ex02: Array Class Template
- Files: `Array.hpp`, `main.cpp`, `Makefile`
- Objective: Define a `Array<T>` class template mimicking a static array with dynamic allocation. Provide deep copy, bounds checking (throw exceptions), and `size()` method.

## Compilation & Usage

```bash
cd CPP_07/ex0X
make
./ex0X
```
