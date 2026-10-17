# Module 20: Intermediate C

## Learning Objectives
Use function pointers, callbacks, const, static, extern, volatile basics, storage classes, typedef patterns, modular programs, and basic build concepts.

## Prerequisites
Modules 07, 12, 13, 16–19

## Concept Explanation
Intermediate C is less about memorizing syntax and more about controlling interfaces, lifetime, linkage, and indirection.

## Syntax
```c
int apply(int x, int (*fn)(int)) { return fn(x); }
```

## Example
See `example.c` in this module.

## How It Works
Function pointers store addresses of functions and enable callbacks. static can limit linkage or extend an object's lifetime depending on context. extern declares an object/function defined elsewhere. const expresses read-only intent through a type qualifier.

## Common Mistakes
- Using extern without a matching definition; misunderstanding static; casting function pointers; treating volatile as a thread-safety mechanism.
- Ignoring compiler warnings.
- Testing only the happy path.

## Practice Problems
1. Pass a function as a callback.
2. Write a second version using a function where appropriate.
3. Test at least one boundary or invalid case.

## Challenge Problems
- Split a program into modules with a clean header interface.
- Combine this module with the previous module in a small program.

## Mini Exercise
Build a small command dispatcher using function pointers.

## Summary
Do not use advanced features merely because they exist. Use them when they make the design clearer.

## What To Learn Next
[Next module](../dsa-preparation/README.md)

## Exercises
See `../exercises/20-exercises.md`. Solutions are intentionally separated under `solutions/`.

