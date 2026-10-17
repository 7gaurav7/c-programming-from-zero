# Bank Management System

**Level:** intermediate

## 1. Problem Statement
Manage simple customer accounts and safe balance-changing operations. Build a reliable command-line program around it rather than a collection of disconnected demonstrations.

## 2. Learning Objectives
- Apply struct, validation, files.
- Validate input and handle expected failures.
- Break the program into small functions.
- Test normal and edge cases.

## 3. Requirements
- Standard C17 where practical.
- Warnings enabled during compilation.
- Clear prompts and error messages.
- No undefined behavior.

## 4. Features
- Core create/read/update-style behavior appropriate to the project.
- Input validation.
- Human-readable output.
- Clean exit path.

## 5. Suggested Architecture
Keep input handling, business logic, and output responsibilities separate. For larger projects, split declarations into headers and implementations into source files.

## 6. Folder Structure
```text
bank-management-system/
├── README.md
├── starter.c
├── tests.md
└── solution/
    └── main.c
```

## 7. Development Milestones
1. Write the smallest working version.
2. Add validation.
3. Add the core feature set.
4. Test boundary cases.
5. Refactor duplicated code.
6. Compare against the reference solution only after your own attempt.

## 8. Starter Code
See `starter.c`.

## 9. Test Cases
See `tests.md`.

## 10. Expected Behavior
Valid input produces the requested result. Invalid input produces a clear message and does not corrupt program state.

## 11. Extension Challenges
- Add persistent storage if the starter does not have it.
- Add sorting or filtering.
- Improve the command-line interface.
- Split the program into multiple source files.

## 12. Separate Solution
The reference implementation is under `solution/`. Use it to review design decisions, not to skip the learning process.

