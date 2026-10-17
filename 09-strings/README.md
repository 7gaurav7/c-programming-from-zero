# Module 09: Strings

## Learning Objectives
Understand character arrays, null termination, standard string functions, input, and common mistakes.

## Prerequisites
Module 08

## Concept Explanation
C strings are arrays of char ending with a null character '\0'. Library functions in string.h rely on this convention.

## Syntax
```c
char name[32];
if (fgets(name, sizeof name, stdin) != NULL) { ... }
```

## Example
See `example.c` in this module.

## How It Works
strlen counts characters before the terminator. strcpy/strcat require destination capacity to be sufficient. strcmp compares strings lexicographically.

## Common Mistakes
- Forgetting space for '\0'; buffer overflow; using scanf("%s") without a width; comparing strings with ==.
- Ignoring compiler warnings.
- Testing only the happy path.

## Practice Problems
1. Measure a string and count vowels.
2. Write a second version using a function where appropriate.
3. Test at least one boundary or invalid case.

## Challenge Problems
- Write a safe line-input routine using fgets and trim its newline.
- Combine this module with the previous module in a small program.

## Mini Exercise
Build a word analyzer that counts letters, digits, spaces, and punctuation.

## Summary
In C, strings are a convention built on arrays, not a dedicated built-in string type.

## What To Learn Next
[Next module](../10-pointers/README.md)

## Exercises
See `../exercises/09-exercises.md`. Solutions are intentionally separated under `solutions/`.

