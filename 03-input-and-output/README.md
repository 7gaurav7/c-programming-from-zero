# Module 03: Input and Output

## Learning Objectives
Read values with printf, scanf, getchar, and putchar while avoiding common input mistakes.

## Prerequisites
Module 02

## Concept Explanation
Input is external data. Treat it as potentially invalid. scanf returns the number of successfully assigned fields, which makes it useful for basic validation.

## Syntax
```c
int x;
if (scanf("%d", &x) == 1) { ... }
```

## Example
See `example.c` in this module.

## How It Works
For scanf, scalar variables usually receive their address using &. Character input functions operate one character at a time.

## Common Mistakes
- Forgetting & for scanf; leaving unexpected input in stdin; using unsafe line-input patterns.
- Ignoring compiler warnings.
- Testing only the happy path.

## Practice Problems
1. Read an integer and print it back.
2. Write a second version using a function where appropriate.
3. Test at least one boundary or invalid case.

## Challenge Problems
- Handle a failed integer read without continuing with an uninitialized value.
- Combine this module with the previous module in a small program.

## Mini Exercise
Build a small profile input program.

## Summary
Never use a variable as if input succeeded when the input operation was not checked.

## What To Learn Next
[Next module](../04-operators/README.md)

## Exercises
See `../exercises/03-exercises.md`. Solutions are intentionally separated under `solutions/`.

