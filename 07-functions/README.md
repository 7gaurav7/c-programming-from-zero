# Module 07: Functions

## Learning Objectives
Decompose programs using declarations, parameters, return values, scope, and recursion basics.

## Prerequisites
Modules 04–06

## Concept Explanation
Functions create reusable units. Parameters communicate inputs; return values communicate results. Local variables have block scope.

## Syntax
```c
int add(int a, int b) { return a + b; }
```

## Example
See `example.c` in this module.

## How It Works
A function declaration tells the compiler a function exists before a call. Recursion needs a base case and progress toward it.

## Common Mistakes
- Using uninitialized return values; confusing parameter variables with caller variables; recursive functions without a base case.
- Ignoring compiler warnings.
- Testing only the happy path.

## Practice Problems
1. Write a function that returns the larger of two integers.
2. Write a second version using a function where appropriate.
3. Test at least one boundary or invalid case.

## Challenge Problems
- Refactor a repeated calculation into a function.
- Combine this module with the previous module in a small program.

## Mini Exercise
Implement factorial recursively and iteratively, then compare them.

## Summary
Good functions reduce cognitive load. They are not decorative boxes around code.

## What To Learn Next
[Next module](../08-arrays/README.md)

## Exercises
See `../exercises/07-exercises.md`. Solutions are intentionally separated under `solutions/`.

