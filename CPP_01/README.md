# Module 01: Constructors, Destructors & Dynamic Allocation

This module builds on basic C++ knowledge by introducing dynamic memory management, constructors, destructors, and resource cleanup.

## Learning Objectives

- Allocate and deallocate memory on the heap using `new`/`delete`
- Define constructors, destructors, copy constructors, and copy assignment operators
- Understand object lifecycle and RAII (Resource Acquisition Is Initialization)
- Manage arrays of objects dynamically

## Exercises

### ex00: newZombie & randomChump
- Files: `newZombie.cpp`, `randomChump.cpp`, `Zombie.cpp`, `Zombie.hpp`, `main.cpp`
- Objective: Implement a `Zombie` class. Demonstrates allocation on the heap (`newZombie`) vs stack-created zombies (`randomChump`). Observe when destructors run.

### ex01: zombieHorde
- Files: `zombieHorde.cpp`, `Zombie.cpp`, `Zombie.hpp`, `main.cpp`, `Makefile`
- Objective: Create an array of `Zombie` objects on the heap (`zombieHorde`). Practice dynamic array allocation and proper cleanup in destructor.

### ex02: Simple Main
- Files: `main.cpp`, `Makefile`
- Objective: Basic template for exercises. No custom classes; ensures you can compile and run a minimal program.

### ex03: HumanA & HumanB
- Files: `HumanA.cpp`, `HumanA.hpp`, `HumanB.cpp`, `HumanB.hpp`, `Weapon.cpp`, `Weapon.hpp`, `main.cpp`
- Objective: Implement two classes of humans: `HumanA` holds a reference to `Weapon`, `HumanB` holds a pointer. Reinforces in-class initialization, references vs pointers, and behavior changes when weapon changes.

### ex04: sed
- Files: `sed.cpp`, `sed.hpp`, `main.cpp`, `Makefile`
- Objective: Write a program mimicking `sed` search-and-replace. Practice file I/O (`std::fstream`), string search/replace, and argument validation.

### ex05: Harl
- Files: `Harl.cpp`, `Harl.hpp`, `main.cpp`, `Makefile`
- Objective: Implement a `Harl` class with multiple complaint levels. Use function pointers or `std::map` to associate strings with member functions. Introduces advanced function dispatch.

## Compilation & Usage

Each exercise folder contains a `Makefile`. Build and run similarly to Module 00:

```bash
cd CPP_01/exXX
make
./exXX
```
