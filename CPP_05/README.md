# Module 05: Exceptions & Office Simulation

This module explores advanced C++ features: exception handling, stream insertion, inheritance with abstract classes, and factory design patterns through a bureaucratic forms system.

## Learning Objectives

- Design custom exception classes and use `throw`/`catch` blocks
- Overload the stream insertion operator (`operator<<`) for user-friendly printing
- Implement basic class interactions: `Bureaucrat` grades and form signing
- Create abstract base classes (`AForm`) and concrete derived forms
- Apply the factory pattern with an `Intern` class to generate forms dynamically

## Exercises

### ex00: Bureaucrat
- Files: `Bureaucrat.hpp/cpp`, `main.cpp`, `Makefile`
- Objective: Implement a `Bureaucrat` class with a grade between 1 (highest) and 150 (lowest). Throw exceptions on invalid grades and overload `operator<<` to print bureaucrat details.

### ex01: Form
- Files: `Form.hpp/cpp`, `Bureaucrat.hpp/cpp`, `main.cpp`, `Makefile`
- Objective: Introduce a `Form` class that can be signed by a `Bureaucrat` if their grade is sufficient. Use exceptions to enforce signing rules and print status.

### ex02: Inheritance & Abstract Forms
- Files: `AForm.hpp/cpp`, `PresidentialPardonForm.hpp/cpp`, `RobotomyRequestForm.hpp/cpp`, `ShrubberyCreationForm.hpp/cpp`, `Bureaucrat.hpp/cpp`, `main.cpp`, `Makefile`
- Objective: Create an abstract `AForm` base class with pure virtual `execute` method. Derive three concrete forms each implementing unique behaviors (file I/O, randomization, console output).

### ex03: Intern & Factory Pattern
- Files: `Intern.hpp/cpp`, all form classes, `main.cpp`, `Makefile`
- Objective: Implement an `Intern` class that creates forms by name. Use a factory method to instantiate the correct `AForm` subclass or throw an exception if unknown.

## Compilation & Usage

Build and run each exercise:

```bash
cd CPP_05/ex0X
make
./ex0X
```

Clean generated files with:

```bash
make clean
```
