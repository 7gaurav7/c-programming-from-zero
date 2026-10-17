# Module 06: Loops

## Learning Objectives
Use for, while, do-while, nested loops, break, continue, and patterns.

## Prerequisites
Module 05

## Concept Explanation
Loops repeat a block while a condition remains true. A reliable loop has clear initialization, condition, and progress.

## Syntax
```c
for (int i = 0; i < n; ++i) { ... }
```

## Example
See `example.c` in this module.

## How It Works
Choose for when the iteration structure is known, while for condition-controlled repetition, and do-while when the body must run at least once.

## Common Mistakes
- Off-by-one errors; forgetting to update loop state; accidental infinite loops.
- Ignoring compiler warnings.
- Testing only the happy path.

## Practice Problems
1. Print numbers from 1 to n.
2. Write a second version using a function where appropriate.
3. Test at least one boundary or invalid case.

## Challenge Problems
- Trace nested loops by hand before executing them.
- Combine this module with the previous module in a small program.

## Mini Exercise
Generate a multiplication table and a star pattern.

## Summary
Most loop bugs are tiny boundary mistakes with surprisingly large egos.

## What To Learn Next
[Next module](../07-functions/README.md)

## Exercises
See `../exercises/06-exercises.md`. Solutions are intentionally separated under `solutions/`.

