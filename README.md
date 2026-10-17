# C Programming From Zero

A structured, hands-on course that takes a complete beginner from their first C program to an intermediate understanding of memory, pointers, modular programs, and DSA prerequisites.

> **Goal:** finish this repository able to read and write C confidently, reason about memory, solve progressively harder problems, and begin Data Structures & Algorithms without treating pointers like ancient wizardry.

## Who this is for

- Students with no programming background
- Learners who know a little programming but want a strong C foundation
- Anyone preparing for DSA and wanting to understand memory rather than merely memorize APIs

## Prerequisites

No prior programming knowledge is required. You need a computer, a C compiler, and patience for the first few compiler errors humanity has apparently decided are a rite of passage.

## Course map

| # | Module | Main outcome |
|---|---|---|
| 00 | Getting Started | Install tools and understand the workflow |
| 01 | First C Program | Compile, run, and read a basic program |
| 02 | Variables & Data Types | Represent and convert data |
| 03 | Input & Output | Read and display user data safely |
| 04 | Operators | Build expressions correctly |
| 05 | Conditions | Make decisions |
| 06 | Loops | Repeat work and solve patterns |
| 07 | Functions | Decompose programs |
| 08 | Arrays | Process collections and matrices |
| 09 | Strings | Work with C character arrays |
| 10 | Pointers | Understand addresses and indirection |
| 11 | Pointers & Arrays | Connect arrays, pointers, and functions |
| 12 | Dynamic Memory | Manage heap memory safely |
| 13 | Structures | Model related data |
| 14 | Unions & Enums | Understand alternate storage and named constants |
| 15 | File Handling | Persist data in files |
| 16 | Preprocessor & Headers | Build reusable multi-file programs |
| 17 | Debugging & Errors | Diagnose failures systematically |
| 18 | Bitwise Operators | Manipulate individual bits |
| 19 | Command-Line Arguments | Build CLI programs |
| 20 | Intermediate C | Function pointers, storage, modular design |
| DSA | DSA Preparation | Transition from syntax to algorithmic thinking |

## Recommended learning order

1. Read the lesson's concept explanation.
2. Type the examples yourself instead of copy-pasting them.
3. Compile with warnings enabled.
4. Solve Level 1 exercises without looking at solutions.
5. Move through Levels 2–4 only when the previous level feels manageable.
6. Build the related mini-project.
7. Revisit mistakes and write down the rule you missed.
8. Complete `CHECKLIST.md` before moving to the next module.

## Setup

See [`SETUP.md`](SETUP.md) for GCC installation and editor guidance.

A recommended compile command is:

```bash
gcc -std=c17 -Wall -Wextra -Wpedantic -Wconversion -Wshadow -Wformat=2 program.c -o program
```

Run:

```bash
./program
```

On Windows PowerShell, the executable may be `program.exe`.

## Exercise workflow

Exercises live in [`exercises/`](exercises/). Each module has four levels. **Do not open the matching solution first.** When stuck, identify the input, output, state, and algorithm before searching for syntax.

Solutions live in [`solutions/`](solutions/) and use matching IDs such as `01-L1-01`.

## Project workflow

Each project contains a problem statement, requirements, milestones, starter code, tests, and a separate solution. Build the starter yourself first. The solution is a reference, not a shortcut.

## DSA path

After Modules 01–09, you can begin basic algorithmic thinking. After Modules 10–13, you have the memory and pointer foundation needed to understand linked structures. [`dsa-preparation/README.md`](dsa-preparation/README.md) provides the bridge to DSA without pretending that a few sorting loops constitute an entire DSA course.

## Progress tracking

Use [`CHECKLIST.md`](CHECKLIST.md) to track modules, exercises, and projects. Use [`ROADMAP.md`](ROADMAP.md) when you want the big picture.

## Repository structure

```text
c-programming-from-zero/
├── 00-getting-started/ ... 20-intermediate-c/
├── exercises/
├── solutions/
├── mini-projects/
├── final-projects/
└── dsa-preparation/
```

## Code-quality rules

- Standard C, preferably C17.
- Compile with warnings enabled.
- Never rely on undefined behavior.
- Check allocation results before use.
- Free every successful dynamic allocation.
- Close every opened file.
- Keep functions focused and names meaningful.
- Prefer explicit, readable code over clever tricks.

## Contributing

See [`CONTRIBUTING.md`](CONTRIBUTING.md). Improvements should preserve the learning progression and include tests or documentation where appropriate.

## License

This educational repository is intended for learning. Add your preferred open-source license before publishing it publicly.

