# Cpp05 - Bureaucracy in C++

A series of C++ exercises focusing on object-oriented programming, exception handling, and advanced class design. The theme revolves around a bureaucratic system with `Bureaucrat` classes that manage forms with varying complexity levels.

## Overview

This project demonstrates progressively complex C++ concepts across four exercises:

| Exercise | Focus | Key Concepts |
|----------|-------|--------------|
| **ex00** | Basic Bureaucrat | Exceptions, custom exception classes, operator overloading |
| **ex01** | Bureaucrat & Form | Object composition, form signing workflow |
| **ex02** | Abstract Forms | Polymorphism, abstract classes, concrete form implementations |
| **ex03** | Form Factory | Factory pattern, dynamic form creation, Intern class |

---

## Exercise Details

### ex00: Bureaucrat Class
**Objective:** Create a `Bureaucrat` class with grade management and exception handling.

**Key Features:**
- Grade range: 1 (highest) to 150 (lowest)
- `IncrementGrade()` and `DecrementGrade()` methods
- Custom exceptions: `GradeTooHighException`, `GradeTooLowException`
- Stream operator overloading for display

**Files:**
- `Bureaucrat.hpp` / `Bureaucrat.cpp` - Main bureaucrat implementation
- `main.cpp` - Test program
- `Makefile` - Build configuration

---

### ex01: Bureaucrat & Form
**Objective:** Extend the system by introducing `Form` objects that bureaucrats can sign.

**Key Features:**
- `Form` class with signing and execution grades
- `beSigned()` method for bureaucrats to sign forms
- Form status tracking (signed/unsigned)
- Exception handling for grade validation

**Files:**
- `Bureaucrat.hpp` / `Bureaucrat.cpp` - Enhanced bureaucrat
- `Form.hpp` / `Form.cpp` - Form implementation
- `main.cpp` - Test program
- `Makefile` - Build configuration

---

### ex02: Abstract Forms
**Objective:** Implement polymorphic form system with specific form types.

**Key Features:**
- `AForm` abstract base class
- Three concrete form implementations:
  - **PresidentialPardonForm** - Signs form with specific target
  - **RobotomyRequestForm** - Executes robotomy with 50% success rate
  - **ShrubberyCreationForm** - Creates ASCII art shrubbery in file
- Virtual `execute()` method for form-specific behavior
- Form execution workflow with authorization checks

**Files:**
- `AForm.hpp` / `AForm.cpp` - Abstract form base class
- `PresidentialPardonForm.hpp` / `.cpp`
- `RobotomyRequestForm.hpp` / `.cpp`
- `ShrubberyCreationForm.hpp` / `.cpp`
- `Bureaucrat.hpp` / `Bureaucrat.cpp` - Enhanced with form execution
- `main.cpp` - Test program
- `Makefile` - Build configuration

---

### ex03: Intern Form Factory
**Objective:** Implement a factory pattern for dynamic form creation.

**Key Features:**
- `Intern` class that creates forms based on type and target
- Factory method `makeForm(type, target)` returns `AForm*`
- Supports three form types: "presidential pardon", "robotomy request", "shrubbery creation"
- Error handling for unknown form types

**Files:**
- `Intern.hpp` / `Intern.cpp` - Factory implementation
- All files from ex02 (inherited functionality)
- `main.cpp` - Test program demonstrating factory usage
- `Makefile` - Build configuration

---

## Building & Running

### Build All Exercises
```bash
# Build ex00
cd ex00 && make && cd ..

# Build ex01
cd ex01 && make && cd ..

# Build ex02
cd ex02 && make && cd ..

# Build ex03
cd ex03 && make && cd ..
```

### Run Individual Exercises
```bash
# ex00 - Bureaucrat grade management
cd ex00 && ./bureaucrat

# ex01 - Form signing
cd ex01 && ./form

# ex02 - Form execution
cd ex02 && ./form

# ex03 - Intern form factory
cd ex03 && ./form

---

## Compilation Notes

- **Compiler:** g++ (C++98 compatible)
- **Flags:** Standard compilation with proper error checking
- **Each exercise is independently buildable** with its own `Makefile`

---

## Key C++ Concepts Demonstrated

- **Exception Handling:** Custom exceptions, try-catch blocks
- **Object-Oriented Design:** Encapsulation, inheritance, polymorphism
- **Operator Overloading:** Stream operators (`<<`)
- **Abstract Classes:** Pure virtual methods
- **Factory Pattern:** Dynamic object creation
- **Const Correctness:** Proper use of const references and methods
- **Copy Semantics:** Copy constructors and assignment operators

---

## Learning Outcomes

Upon completing this module, you should understand:
1. How to design robust exception hierarchies
2. How to implement abstract interfaces in C++
3. How to apply the factory pattern for object creation
4. Best practices for const correctness and object lifecycle management
5. Polymorphic behavior in C++ class hierarchies