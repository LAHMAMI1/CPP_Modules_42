# Module 00: Foundations of C++

This module introduces the very basics of C++ programming: compilation, basic input/output, string manipulation, and creating simple classes.

## Learning Objectives

- Understand compilation with `g++` and makefiles
- Use standard input/output streams (`std::cout`, `std::cin`)
- Iterate over strings and manipulate characters
- Define and use simple classes and header files

## Exercises

### ex00: megaphone
- File: `megaphone.cpp`
- Objective: Read command-line arguments, convert all letters to uppercase, and print them. Introduces command-line arguments and basic string operations.

### ex01: PhoneBook
- Files: `Contact.cpp`, `Contact.hpp`, `PhoneBook.cpp`, `PhoneBook.hpp`, `main.cpp`
- Objective: Build a simple phonebook application. Implements a `Contact` class and a `PhoneBook` class to store up to 8 contacts. Teaches class design, encapsulation, and array-based storage.

## Compilation and Usage

Each exercise has its own `Makefile`. To build and run:

```bash
cd CPP_00/exXX
make
./exXX   # or specified executable name
to return to module root
cd ../../..
```

Clean object files with:

```bash
make clean
```
