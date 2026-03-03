# 🚀 CXS High-Level Interface

**CXS** is a lightweight, high-level C++ interface header designed to make C++ syntax more intuitive and modern. Developed by **Cups Studio**.

> "actually i'm just a kid" — making complex code simple.

---

## ✨ Features
- **Simplified Syntax:** Use `fun`, `str`, and `nums` for cleaner code.
- **Smart Math:** Includes a safe division method `div()` with zero-check protection.
- **Easy I/O:** Simplified `print()` and `println()` functions.
- **Namespaced:** All functions are safely tucked inside the `cp::` namespace.

## 🛠️ Project Structure
This repository currently contains the core interface files:
- `CXS11.hpp`: The main interface logic and functions.
- `Cpt_t.hpp`: Type definitions and aliases.
- `LICENSE`: MIT License for open-source use.

## 📈 Roadmap & Issues
- We are actively improving the interface. Check our Issues for current bugs or feature requests:

## 💻 Quick Example
```cpp
#include "CXS11.hpp"
using namespace stdio;

fun main() -> funnm {
    println("Welcome to CXS!");

    str name;
    print("enter your name: ");
    input(name);
    println("Hello, " + name + "!");
    
    // Use the math methods
    add(10, 5);
    divs(10, 2);

    rehave 0;
}
