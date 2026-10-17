# Module 18: Bitwise Operators

## Learning Objectives
Manipulate bits with AND, OR, XOR, NOT, shifts, masks, and practical flag operations.

## Prerequisites
Modules 02 and 04

## Concept Explanation
Bitwise operators act on integer representations. Masks let you inspect or modify selected bits.

## Syntax
```c
unsigned flags = 0u;
flags |= (1u << 2);
if (flags & (1u << 2)) { ... }
```

## Example
See `example.c` in this module.

## How It Works
Prefer unsigned integer types for bit manipulation. Shifts must respect the width and signedness rules of the type.

## Common Mistakes
- Shifting by an invalid amount; relying on signed representation details; confusing logical and bitwise operators.
- Ignoring compiler warnings.
- Testing only the happy path.

## Practice Problems
1. Set, clear, and test a bit.
2. Write a second version using a function where appropriate.
3. Test at least one boundary or invalid case.

## Challenge Problems
- Encode four Boolean flags into one integer.
- Combine this module with the previous module in a small program.

## Mini Exercise
Build a permissions-mask example.

## Summary
Bitwise code is compact. Compact code is not automatically readable, so name masks clearly.

## What To Learn Next
[Next module](../19-command-line-arguments/README.md)

## Exercises
See `../exercises/18-exercises.md`. Solutions are intentionally separated under `solutions/`.

