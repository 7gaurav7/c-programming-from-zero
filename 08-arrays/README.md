# Module 08: Arrays

## Learning Objectives
Store and process collections, search and sort basic data, and work with 2D arrays and matrices.

## Prerequisites
Modules 02–07

## Concept Explanation
An array stores elements of the same type contiguously. Indexing starts at zero and valid indices are 0 through length-1.

## Syntax
```c
int values[5] = {4, 8, 15, 16, 23};
```

## Example
See `example.c` in this module.

## How It Works
Traversal uses an index. Passing an array to a function passes information that lets the function access its elements; the array is not copied as a whole.

## Common Mistakes
- Out-of-bounds access; using an incorrect length; confusing index with value.
- Ignoring compiler warnings.
- Testing only the happy path.

## Practice Problems
1. Find the maximum element.
2. Write a second version using a function where appropriate.
3. Test at least one boundary or invalid case.

## Challenge Problems
- Implement linear search and bubble sort.
- Combine this module with the previous module in a small program.

## Mini Exercise
Add two matrices and calculate a transpose.

## Summary
Bounds are not optional. C will not politely stop you from walking past an array.

## What To Learn Next
[Next module](../09-strings/README.md)

## Exercises
See `../exercises/08-exercises.md`. Solutions are intentionally separated under `solutions/`.

