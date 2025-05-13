# Module 03: Inheritance & Polymorphism

This module covers fundamental object-oriented concepts: inheritance, polymorphism, and virtual functions.

## Learning Objectives

- Define base and derived classes
- Use of `virtual` functions to achieve polymorphic behavior
- Understand object slicing and pointers/references to base classes
- Override methods and use abstract base classes

## Exercises

### ex00: ClapTrap
- Files: `ClapTrap.cpp`, `ClapTrap.hpp`, `main.cpp`, `Makefile`
- Objective: Implement a `ClapTrap` class with hit points, energy points, and attack damage. Practice class design and encapsulation.

### ex01: ScavTrap
- Files: adds `ScavTrap.cpp`, `ScavTrap.hpp`
- Objective: Inherit from `ClapTrap` to create `ScavTrap`. Override attack behavior and add guard mode.

### ex02: FragTrap
- Files: adds `FragTrap.cpp`, `FragTrap.hpp`
- Objective: Further inheritance: `FragTrap` inherits from `ClapTrap`. Introduce `highFivesGuys` method. Combine with `ScavTrap` to create a multi-level hierarchy.

## Compilation & Usage

Build each exercise:

```bash
cd CPP_03/exXX
make
./exXX
```
