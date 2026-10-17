# Module 19: Command-Line Arguments

## Learning Objectives
Use argc and argv to build simple command-line tools.

## Prerequisites
Modules 03, 09, 15

## Concept Explanation
main can receive the number of arguments and an array of strings. Arguments arrive as text and need validation/conversion.

## Syntax
```c
int main(int argc, char *argv[]) { ... }
```

## Example
See `example.c` in this module.

## How It Works
argc counts arguments, including the program name. argv[0] is conventionally the program name.

## Common Mistakes
- Accessing argv without checking argc; assuming numeric input is valid; unsafe conversions without validation.
- Ignoring compiler warnings.
- Testing only the happy path.

## Practice Problems
1. Print every command-line argument.
2. Write a second version using a function where appropriate.
3. Test at least one boundary or invalid case.

## Challenge Problems
- Build a simple add command with validated integer arguments.
- Combine this module with the previous module in a small program.

## Mini Exercise
Create a line-count command for a text file.

## Summary
A CLI program is simply a program whose input arrives through its process arguments.

## What To Learn Next
[Next module](../20-intermediate-c/README.md)

## Exercises
See `../exercises/19-exercises.md`. Solutions are intentionally separated under `solutions/`.

