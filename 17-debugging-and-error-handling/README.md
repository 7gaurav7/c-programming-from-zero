# Module 17: Debugging and Error Handling

## Learning Objectives
Classify errors, read diagnostics, debug systematically, and use assertions and defensive checks.

## Prerequisites
All previous modules

## Concept Explanation
Syntax errors stop compilation. Runtime errors happen during execution. Logical errors produce incorrect results while the program may appear healthy.

## Syntax
```c
assert(pointer != NULL);
```

## Example
See `example.c` in this module.

## How It Works
Debugging is a process: reproduce, isolate, inspect state, form a hypothesis, change one thing, retest. Compiler warnings are evidence, not insults.

## Common Mistakes
- Changing many things at once; ignoring the first compiler diagnostic; adding random print statements without a hypothesis.
- Ignoring compiler warnings.
- Testing only the happy path.

## Practice Problems
1. Fix intentionally broken snippets.
2. Write a second version using a function where appropriate.
3. Test at least one boundary or invalid case.

## Challenge Problems
- Use a debugger or sanitizer to locate an out-of-bounds access.
- Combine this module with the previous module in a small program.

## Mini Exercise
Create a small validation layer for a project.

## Summary
The fastest debugger is often a careful reading of the code you just wrote five minutes ago.

## What To Learn Next
[Next module](../18-bitwise-operators/README.md)

## Exercises
See `../exercises/17-exercises.md`. Solutions are intentionally separated under `solutions/`.

