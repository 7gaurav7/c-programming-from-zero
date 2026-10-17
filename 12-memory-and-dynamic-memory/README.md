# Module 12: Memory and Dynamic Memory

## Learning Objectives
Understand stack versus heap, allocate with malloc/calloc/realloc, free memory, and recognize leaks/dangling pointers/double free.

## Prerequisites
Modules 10–11

## Concept Explanation
Automatic storage is commonly associated with local variables, while dynamic storage is requested from the heap using allocation functions. The exact implementation is platform-dependent, but the ownership model is the important part.

## Syntax
```c
int *a = malloc(n * sizeof *a);
if (a == NULL) { /* handle failure */ }
...
free(a);
a = NULL;
```

## Example
See `example.c` in this module.

## How It Works
malloc allocates uninitialized storage, calloc allocates zero-initialized bytes, realloc changes an allocation's size with important ownership rules, and free releases an allocation.

## Common Mistakes
- Using memory after free; double free; losing the original pointer during realloc failure; integer overflow in allocation sizes.
- Ignoring compiler warnings.
- Testing only the happy path.

## Practice Problems
1. Allocate an integer array and initialize it.
2. Write a second version using a function where appropriate.
3. Test at least one boundary or invalid case.

## Challenge Problems
- Grow a dynamic array with realloc while preserving data safely.
- Combine this module with the previous module in a small program.

## Mini Exercise
Write a dynamic list that appends integers and frees all memory.

## Summary
Dynamic memory is powerful because you control lifetime. That also means you own the mistakes.

## What To Learn Next
[Next module](../13-structures/README.md)

## Exercises
See `../exercises/12-exercises.md`. Solutions are intentionally separated under `solutions/`.

