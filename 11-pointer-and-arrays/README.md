# Module 11: Pointers and Arrays

## Learning Objectives
Connect array names, pointer traversal, function arguments, and strings represented as pointers.

## Prerequisites
Module 10

## Concept Explanation
In most expressions an array name converts to a pointer to its first element. This is why pointer arithmetic can traverse an array.

## Syntax
```c
int a[] = {10, 20, 30};
int *p = a;
for (size_t i = 0; i < 3; ++i) printf("%d ", p[i]);
```

## Example
See `example.c` in this module.

## How It Works
a[i] and *(a + i) refer to the same element when a is an array expression. Function parameters can use pointer syntax with a separate length parameter.

## Common Mistakes
- Assuming pointer and array are identical in every context; losing the array length; pointer arithmetic outside the array object.
- Ignoring compiler warnings.
- Testing only the happy path.

## Practice Problems
1. Traverse an array using only a pointer.
2. Write a second version using a function where appropriate.
3. Test at least one boundary or invalid case.

## Challenge Problems
- Write a sum function taking pointer plus length.
- Combine this module with the previous module in a small program.

## Mini Exercise
Reverse an array in place using two pointers.

## Summary
The array length is information. A pointer alone does not magically know it.

## What To Learn Next
[Next module](../12-memory-and-dynamic-memory/README.md)

## Exercises
See `../exercises/11-exercises.md`. Solutions are intentionally separated under `solutions/`.

