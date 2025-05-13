# Module 04: Polymorphism, Abstract Classes & Deep Copy

This module introduces abstract classes, deep copy semantics, and continues exploring polymorphism with interfaces.

## Learning Objectives

- Create and use abstract base classes with pure virtual methods
- Implement deep vs shallow copy in copy constructors and assignment
- Use interfaces (`ICharacter`, `IMateriaSource`) and factory patterns
- Manage dynamic memory and prevent leaks in complex hierarchies

## Exercises

### ex00: Animal & WrongAnimal
- Files: `Animal.cpp`, `Animal.hpp`, `Cat.cpp`, `Cat.hpp`, `Dog.cpp`, `Dog.hpp`, `WrongAnimal.cpp`, `WrongAnimal.hpp`, `WrongCat.cpp`, `WrongCat.hpp`, `main.cpp`, `Makefile`
- Objective: Base `Animal` class with virtual destructor and `makeSound`. Demonstrate polymorphism and pitfalls of missing `virtual` keyword (`WrongAnimal`).

### ex01: Animal with Brain
- Files: adds `Brain.cpp`, `Brain.hpp`
- Objective: Introduce a `Brain` member requiring deep copy in copy constructor and assignment operator. Test copying of `Cat`/`Dog` with brains.

### ex02: Full Deep Copy with Brain
- Same files as ex01 with more thorough tests in `main.cpp`

### ex03: Materia System
- Files: `AMateria.cpp`, `ICharacter.hpp`, `Character.cpp`, `Cure.cpp`, `Ice.cpp`, `MateriaSource.cpp`, `MateriaSource.hpp`, `main.cpp`, `Makefile`
- Objective: Implement a simplified Materia system inspired by Final Fantasy VII. Use abstract `AMateria`, concrete `Ice` and `Cure`, and `IMateriaSource` as factory. Practice cloning, dynamic memory, and polymorphism.

## Compilation & Usage

```bash
cd CPP_04/exXX
make
./exXX
```
