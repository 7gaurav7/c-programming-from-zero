# Module 15: File Handling

## Learning Objectives
Read, write, append, and validate text files using stdio file streams.

## Prerequisites
Modules 09 and 13

## Concept Explanation
Files are external state. fopen returns a stream or NULL. Every successful fopen should have a matching fclose.

## Syntax
```c
FILE *fp = fopen("data.txt", "r");
if (fp == NULL) { perror("data.txt"); }
```

## Example
See `example.c` in this module.

## How It Works
Modes such as r, w, and a determine how a stream is opened. fgets is useful for line-oriented text. fprintf writes formatted text.

## Common Mistakes
- Using a NULL FILE*; assuming a file exists; ignoring fclose; mixing input assumptions with file format assumptions.
- Ignoring compiler warnings.
- Testing only the happy path.

## Practice Problems
1. Write three lines to a file.
2. Write a second version using a function where appropriate.
3. Test at least one boundary or invalid case.

## Challenge Problems
- Read a file line by line and count lines.
- Combine this module with the previous module in a small program.

## Mini Exercise
Create a file-backed contact or inventory record system.

## Summary
File handling becomes much safer when every failure path is considered.

## What To Learn Next
[Next module](../16-preprocessor-and-header-files/README.md)

## Exercises
See `../exercises/15-exercises.md`. Solutions are intentionally separated under `solutions/`.

