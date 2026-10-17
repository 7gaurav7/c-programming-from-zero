# Module 16: Preprocessor and Header Files

## Learning Objectives
Use includes, macros, conditional compilation, custom headers, and multiple source files.

## Prerequisites
Modules 07 and 13

## Concept Explanation
The preprocessor transforms source before compilation. Headers expose declarations and interfaces; source files contain implementations.

## Syntax
```c
// math_utils.h
int square(int x);
```

## Example
See `example.c` in this module.

## How It Works
Include guards prevent duplicate inclusion. Macros are textual substitutions, so parenthesize macro parameters carefully.

## Common Mistakes
- Macros with side effects; missing include guards; putting definitions in headers unnecessarily.
- Ignoring compiler warnings.
- Testing only the happy path.

## Practice Problems
1. Create a header for two math functions.
2. Write a second version using a function where appropriate.
3. Test at least one boundary or invalid case.

## Challenge Problems
- Split a small program into main.c, functions.c, and functions.h.
- Combine this module with the previous module in a small program.

## Mini Exercise
Build a reusable utility module.

## Summary
Modularity is not extra paperwork. It is how larger programs stay comprehensible.

## What To Learn Next
[Next module](../17-debugging-and-error-handling/README.md)

## Exercises
See `../exercises/16-exercises.md`. Solutions are intentionally separated under `solutions/`.

