# Module 13: Structures

## Learning Objectives
Model related data with struct, arrays of structs, nested structs, pointers, and typedef.

## Prerequisites
Modules 08–12

## Concept Explanation
A structure groups named members that may have different types. It is useful for records such as students, products, or contacts.

## Syntax
```c
typedef struct { int id; char name[40]; double score; } Student;
```

## Example
See `example.c` in this module.

## How It Works
Use . for a structure object and -> for a pointer to a structure. Padding may make sizeof(struct) larger than the sum of member sizes.

## Common Mistakes
- Uninitialized fields; unsafe string copying; confusing . and ->.
- Ignoring compiler warnings.
- Testing only the happy path.

## Practice Problems
1. Create a Student and print its fields.
2. Write a second version using a function where appropriate.
3. Test at least one boundary or invalid case.

## Challenge Problems
- Store and search an array of students.
- Combine this module with the previous module in a small program.

## Mini Exercise
Build a contact record with nested address data.

## Summary
Structures are where C starts looking suspiciously like a language designed by someone who had paperwork to process.

## What To Learn Next
[Next module](../14-unions-and-enums/README.md)

## Exercises
See `../exercises/13-exercises.md`. Solutions are intentionally separated under `solutions/`.

