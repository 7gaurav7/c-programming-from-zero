# Module 01: First C Program

## Learning Objectives
Read the structure of a basic C program and understand main, includes, printf, comments, and compilation.

## Prerequisites
Module 00

## Concept Explanation
A C program starts execution in main. Headers provide declarations for library facilities. printf is declared by stdio.h.

## Syntax
```c
#include <stdio.h>
int main(void) {
    printf("Hello, C!\n");
    return 0;
}
```

## Example
See `example.c` in this module.

## How It Works
The preprocessor handles includes, the compiler checks and translates C, and the linker connects required library code.

## Common Mistakes
- Forgetting the newline; missing semicolons; using main() instead of explicitly writing main(void) in teaching examples.
- Ignoring compiler warnings.
- Testing only the happy path.

## Practice Problems
1. Change the output text and compile it yourself.
2. Write a second version using a function where appropriate.
3. Test at least one boundary or invalid case.

## Challenge Problems
- Write three print statements and inspect the difference between one statement and several.
- Combine this module with the previous module in a small program.

## Mini Exercise
Print a three-line introduction about yourself.

## Summary
Keep the first programs small. Complexity has plenty of time to arrive later.

## What To Learn Next
[Next module](../02-variables-and-data-types/README.md)

## Exercises
See `../exercises/01-exercises.md`. Solutions are intentionally separated under `solutions/`.

