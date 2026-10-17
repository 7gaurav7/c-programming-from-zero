# Module 04: Operators

## Learning Objectives
Use arithmetic, relational, logical, assignment, increment/decrement, conditional, precedence, and associativity correctly.

## Prerequisites
Module 02–03

## Concept Explanation
Operators form expressions. Precedence determines grouping, but parentheses are often the clearest way to communicate intent.

## Syntax
```c
int result = (a + b) * c;
int even = (n % 2) == 0;
```

## Example
See `example.c` in this module.

## How It Works
Short-circuit && and || can prevent the right-hand expression from being evaluated. This matters when the right side has a precondition.

## Common Mistakes
- Assuming left-to-right evaluation; confusing = with ==; overusing clever expressions.
- Ignoring compiler warnings.
- Testing only the happy path.

## Practice Problems
1. Predict simple expressions before running them.
2. Write a second version using a function where appropriate.
3. Test at least one boundary or invalid case.

## Challenge Problems
- Rewrite ambiguous expressions with parentheses.
- Combine this module with the previous module in a small program.

## Mini Exercise
Create a menu-free bill calculator using arithmetic and the conditional operator.

## Summary
When in doubt, parenthesize. Human brains and compilers are not equally forgiving.

## What To Learn Next
[Next module](../05-conditions/README.md)

## Exercises
See `../exercises/04-exercises.md`. Solutions are intentionally separated under `solutions/`.

