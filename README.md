# Morse Programming Language

A toy programming language inspired by Morse code, developed as the final project for a Compiler Design course.

The project implements the complete compilation pipeline, from lexical analysis to program execution, demonstrating the core concepts behind compiler construction and language design.

---

## Features

* Custom programming language based on Morse code syntax.
* Lexical analysis (Lexer).
* Syntax analysis (Parser).
* Semantic validation.
* Abstract Syntax Tree (AST) generation.
* Program interpretation and execution.
* Error detection with descriptive messages.

---

## Compiler Pipeline

```
Source Code
      │
      ▼
   Lexer
      │
      ▼
   Parser
      │
      ▼
 Abstract Syntax Tree
      │
      ▼
Semantic Analysis
      │
      ▼
 Interpreter
      │
      ▼
 Program Output
```

---

## Technologies

* C
* CMake
* Docker
* Linux

---

## Project Structure

```
.
├── src/          # Compiler source code
├── include/      # Header files
├── examples/     # Example programs
├── docs/         # Documentation
└── CMakeLists.txt
```

---

## Build

```bash
git clone <repository-url>
cd Morse-Programming-Language

mkdir build
cd build

cmake ..
make
```

---

## Running

```bash
./morse <source_file>
```

Example:

```bash
./morse examples/hello_world.morse
```

---

## Learning Outcomes

This project provided practical experience with:

* Compiler architecture
* Language design
* Lexical and syntactic analysis
* Abstract Syntax Trees (AST)
* Semantic analysis
* Interpreter implementation
* Error handling

---

## Future Improvements

* Static type checking
* Language functions and modules
* Optimizations
* Bytecode generation
* Improved diagnostics

---

## Authors

Developed as the final project for the Compiler Design course at the Faculty of Sciences, UNAM.
