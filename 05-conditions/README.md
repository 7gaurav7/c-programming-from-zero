# Module 05: Conditions

## Learning Objectives
Use if, else-if, nested conditions, switch, break, and default to make decisions.

## Prerequisites
Modules 02–04

## Concept Explanation
Conditional control flow chooses which statements execute based on expressions that evaluate to true or false.

## Syntax
```c
if (score >= 90) { ... } else if (score >= 75) { ... } else { ... }
```

## Example
See `example.c` in this module.

## How It Works
switch is useful when comparing one integral expression against several constant cases. break prevents fall-through.

## Common Mistakes
- Using = instead of ==; missing braces; forgetting break; incomplete input validation.
- Ignoring compiler warnings.
- Testing only the happy path.

## Practice Problems
1. Classify a number as positive, negative, or zero.
2. Write a second version using a function where appropriate.
3. Test at least one boundary or invalid case.

## Challenge Problems
- Build a grade classifier with invalid-score handling.
- Combine this module with the previous module in a small program.

## Mini Exercise
Create a simple menu using switch.

## Summary
Conditions are where programs begin to respond intelligently to data.

## What To Learn Next
[Next module](../06-loops/README.md)

## Exercises
See `../exercises/05-exercises.md`. Solutions are intentionally separated under `solutions/`.

