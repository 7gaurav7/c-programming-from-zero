# Module 02: Variables and Data Types

## Learning Objectives
Represent integers, floating-point values, characters, constants, and understand sizeof and conversions.

## Prerequisites
Module 01

## Concept Explanation
A variable has a type, name, and stored value. Types determine representation, range, and operations. sizeof reports the size in bytes of a type or object.

## Syntax
```c
int age = 20;
double price = 19.99;
char grade = 'A';
const int DAYS = 7;
```

## Example
See `example.c` in this module.

## How It Works
Conversions may happen implicitly, but explicit casts make intent clearer. Integer division discards the fractional part.

## Common Mistakes
- Using the wrong format specifier; assuming all integer types have the same range; accidental integer division.
- Ignoring compiler warnings.
- Testing only the happy path.

## Practice Problems
1. Print the sizes of several types.
2. Write a second version using a function where appropriate.
3. Test at least one boundary or invalid case.

## Challenge Problems
- Write a program that demonstrates integer division versus floating-point division.
- Combine this module with the previous module in a small program.

## Mini Exercise
Convert Celsius to Fahrenheit using doubles.

## Summary
Always match a printf/scanf format specifier to the corresponding type.

## What To Learn Next
[Next module](../03-input-and-output/README.md)

## Exercises
See `../exercises/02-exercises.md`. Solutions are intentionally separated under `solutions/`.

