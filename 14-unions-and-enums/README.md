# Module 14: Unions and Enums

## Learning Objectives
Understand shared storage with unions and named integer constants with enums.

## Prerequisites
Module 13

## Concept Explanation
A union's members share the same storage. An enum gives names to integer constants.

## Syntax
```c
enum Status { STATUS_OK, STATUS_ERROR };
union Value { int i; double d; };
```

## Example
See `example.c` in this module.

## How It Works
Only the most recently written union member is generally the meaningful value. Enumerations improve readability when a variable has a finite set of states.

## Common Mistakes
- Treating all union members as simultaneously valid values; assuming enum size or representation is fixed.
- Ignoring compiler warnings.
- Testing only the happy path.

## Practice Problems
1. Create a traffic-light enum.
2. Write a second version using a function where appropriate.
3. Test at least one boundary or invalid case.

## Challenge Problems
- Use a tagged union pattern with an enum indicating the active member.
- Combine this module with the previous module in a small program.

## Mini Exercise
Model a small command result type.

## Summary
Use unions when shared storage is actually useful, not because the syntax looks clever.

## What To Learn Next
[Next module](../15-file-handling/README.md)

## Exercises
See `../exercises/14-exercises.md`. Solutions are intentionally separated under `solutions/`.

