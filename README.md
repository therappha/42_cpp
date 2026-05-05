# 42 — C++ Modules

> A progressive series of C++ projects from the 42 curriculum, designed to introduce and deepen understanding of Object-Oriented Programming from the ground up.

---

## 📚 Overview

The C++ modules at 42 are a structured path through the core concepts of C++ and OOP. Each module builds upon the previous one, gradually introducing more advanced features of the language. The goal is not just to learn C++ syntax, but to understand *why* OOP exists and how to apply its principles to write clean, maintainable, and extensible code.

All modules follow the **C++98 standard**.

---

## 🗂️ Modules

### CPP00 — Namespaces, Classes & I/O
Introduction to the very basics of C++: namespaces, classes, member functions, and the standard I/O streams (`std::cout`, `std::cin`). Also covers initialization lists and `static` members.

### CPP01 — Memory Allocation, References & Pointers
Explores memory management in C++ — stack vs heap allocation with `new`/`delete`, references vs pointers, and file streams. Introduces the concept of `switch` statements.

### CPP02 — Ad-hoc Polymorphism & Operator Overloading
Covers ad-hoc polymorphism through function overloading and operator overloading. Introduces the Orthodox Canonical Form (default constructor, copy constructor, copy assignment operator, destructor).

### CPP03 — Inheritance
Dives into class inheritance, base/derived class relationships, and constructor chaining. Explores how derived classes extend or override base class behavior.

### CPP04 — Subtype Polymorphism, Abstract Classes & Interfaces
Introduces virtual functions, pure virtual functions, and abstract classes. Covers the concept of interfaces in C++ and the dangers of memory leaks with polymorphic classes (virtual destructors).

### CPP05 — Repetition & Exceptions
Exception handling with `try`, `catch`, and `throw`. Covers creating custom exception classes and understanding the exception safety guarantees.

### CPP06 — C++ Casts
In-depth exploration of C++ type casting: `static_cast`, `dynamic_cast`, `reinterpret_cast`, and `const_cast`. Understanding when and why to use each.

### CPP07 — Templates
Introduction to C++ templates — function templates and class templates. Covers template specialization and the concept of generic programming.

### CPP08 — Templated Containers, Iterators & Algorithms
Working with the STL (Standard Template Library): containers (`vector`, `list`, `map`, etc.), iterators, and algorithms (`std::find`, `std::sort`, etc.).

### CPP09 — STL
A deeper dive into the STL, applying containers and algorithms to solve more complex problems. Reinforces choosing the right data structure for a given problem.
Also implementation of Ford Johnson Algoritm. Here's a 'simple' diagram of how the algorithm works:

<img width="403" height="350" alt="image" src="https://github.com/user-attachments/assets/570594eb-0845-433b-9862-cc526a562dfc" />
<img width="1884" height="894" alt="image" src="https://github.com/user-attachments/assets/b8fa759e-5911-49fb-8a44-fa020cf56b94" />


---

##  Key Concepts Covered

| Concept | Modules |
|---|---|
| Classes & encapsulation | 00, 01 |
| Orthodox Canonical Form | 02+ |
| Operator overloading | 02 |
| Inheritance | 03, 04 |
| Polymorphism & virtual functions | 04 |
| Abstract classes & interfaces | 04 |
| Exception handling | 05 |
| Type casting | 06 |
| Templates & generics | 07, 08 |
| STL containers & algorithms | 08, 09 |

---

## ⚙️ Compilation

All modules are compiled with:

```bash
c++ -Wall -Wextra -Werror -std=c++98
```

Each exercise includes a `Makefile` with the standard rules: `all`, `clean`, `fclean`, `re`.

---

## 📌 Notes

- No STL containers or algorithms are allowed before **CPP08** (unless stated otherwise).
- No use of C-style functions like `printf` or `malloc` — C++ equivalents are preferred.
- All memory must be properly managed — **no leaks**.

---

