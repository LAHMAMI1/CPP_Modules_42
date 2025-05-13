# Module 06: Advanced Conversions & Serialization

This module covers type casting, reinterpretation, and simple serialization techniques in C++.

## Learning Objectives

- Implement type conversion and casting with static, dynamic, and reinterpret casts
- Understand object representation and binary data handling
- Serialize and deserialize objects to and from raw memory addresses
- Use templates and operator overloading for generic code

## Exercises

### ex00: Scalar Conversion
- Files: `ScalarConverter.hpp/cpp`, `main.cpp`, `Makefile`
- Objective: Build a `ScalarConverter` class to convert and print literal strings to literal C++ types (`char`, `int`, `float`, `double`). Handle special values (`nan`, `inf`) and detect impossible conversions.

### ex01: Serializer
- Files: `Serializer.hpp/cpp`, `main.cpp`, `Makefile`
- Objective: Implement a `Serializer` class converting a pointer to a raw integer (`uintptr_t`) and back. Demonstrate `reinterpret_cast` and round-trip integrity.

### ex02: Polymorphic Identification
- Files: `Base.cpp/hpp`, `A.hpp`, `B.hpp`, `C.hpp`, `functions.hpp/cpp`, `main.cpp`, `Makefile`
- Objective: Given a `Base*` pointing to derived (`A`, `B`, `C`), implement functions to identify the real derived type via dynamic cast or exception-driven casting. Illustrate runtime type identification (RTTI).

## Compilation & Usage

```bash
cd CPP_06/ex0X
make
./ex0X
```
