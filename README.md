# Integer Pointers and Dynamic Memory Console Application
<div align="center">

Timothy G. Bjorklund  

Colorado State University Global  

CSC 450: Programming III  

Professor Farhad Bari  

February 2026  
</div>

---

## Module 3: Working with Integer Pointers and Dynamic Memory

This repository contains my work for **CSC450: Programming III**, Module 3 at CSU Global.  
The focus of this module is understanding pointer usage in C++, dynamic memory allocation, and safe memory management practices.

---

## Project Overview

This project includes a C++ console application that collects three integer values from a user, stores them using dynamically allocated memory, and displays both the variable values and pointer details. The program demonstrates correct use of pointers, the `new` and `delete` operators, and safe memory cleanup techniques.

The application was built and tested using **Eclipse IDE for C/C++ Developers** with the MinGW GCC toolchain.

---

## Program Description

The program performs the following actions:
- Prompts the user to enter three integer values
- Stores each value in a separate variable
- Dynamically allocates memory for each value using integer pointers
- Displays:
  - the original variable values
  - the memory addresses stored in each pointer
  - the dereferenced values stored at those addresses
- Frees all dynamically allocated memory using the `delete` operator
- Sets pointers to `nullptr` to prevent dangling references

To improve readability and structure, the program uses helper methods to separate input collection, output display, and memory cleanup. This design emphasizes clear program flow and safe memory management.

---

## File Descriptions

- **main.cpp**  
  Contains the full application logic, including:
  - helper functions for input collection and dynamic allocation
  - functions to display variable and pointer details
  - a cleanup function to safely release allocated memory  

  The program clearly demonstrates the lifecycle of dynamically allocated memory in C++.

---

## Key Concepts Demonstrated

- Pointer declaration and initialization  
- Dynamic memory allocation using `new`  
- Memory deallocation using `delete`  
- Dereferencing pointers  
- Preventing dangling pointers using `nullptr`  
- Modular program design using helper functions  
- Secure memory management practices  

---

## Author

Timothy Bjorklund  
CSC450 – Programming III  
CSU Global
