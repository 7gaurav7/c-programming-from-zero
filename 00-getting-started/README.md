# Module 00: Getting Started

## Learning Objectives
Understand what programming and C are, install a compiler, and learn the compile-run workflow.

## Prerequisites
None

## Concept Explanation
Programming is a set of precise instructions. C is a compiled, general-purpose language that exposes low-level details such as memory addresses while still providing structured control flow and functions.

## Syntax
```c
gcc -std=c17 -Wall -Wextra -Wpedantic hello.c -o hello
```

## Example
Create `hello.c` using the command shown in this module, then compile it with GCC.

## How It Works
The compiler translates source code into an executable program. You edit source, compile, fix diagnostics, then run the executable.

## Common Mistakes
- Confusing an editor with a compiler; ignoring warnings; using a compiler command you cannot explain.
- Ignoring compiler warnings.
- Testing only the happy path.

## Practice Problems
1. Create a tiny source file and compile it from the terminal.
2. Write a second version using a function where appropriate.
3. Test at least one boundary or invalid case.

## Challenge Problems
- Compile the same program with warnings and inspect the generated executable.
- Combine this module with the previous module in a small program.

## Mini Exercise
Print your name from a C program.

## Summary
A compiler turns source code into a form the machine can execute. GCC is one common C compiler.

## What To Learn Next
[Next module](../01-first-c-program/README.md)

## Exercises
See `../exercises/00-exercises.md`. Solutions are intentionally separated under `solutions/`.

