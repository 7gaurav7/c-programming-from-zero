# Module 10: Pointers

## Learning Objectives
Build a concrete mental model of addresses, pointer variables, dereferencing, pointer arithmetic, and function arguments.

## Prerequisites
Modules 07–09

## Concept Explanation
A pointer stores an address. The unary * operator dereferences a pointer, meaning it accesses the object at that address. The & operator obtains an object's address.

## Syntax
```c
int x = 42;
int *p = &x;
printf("%d\n", *p);
```

## Example
See `example.c` in this module.

## How It Works
If p points to x, *p refers to x. Pointer arithmetic advances by units of the pointed-to type, not raw bytes.

## Common Mistakes
- Dereferencing NULL or an invalid pointer; using an uninitialized pointer; returning a pointer to a dead local object.
- Ignoring compiler warnings.
- Testing only the happy path.

## Practice Problems
1. Draw memory boxes for x and p, then explain &x and *p.
2. Write a second version using a function where appropriate.
3. Test at least one boundary or invalid case.

## Challenge Problems
- Swap two integers through pointers and explain why it changes the caller's variables.
- Combine this module with the previous module in a small program.

## Mini Exercise
Write pointer-based min/max functions.

## Summary
Pointers are not magic. They are variables whose values happen to be addresses. The consequences are simply less forgiving.

## What To Learn Next
[Next module](../11-pointer-and-arrays/README.md)

## Exercises
See `../exercises/10-exercises.md`. Solutions are intentionally separated under `solutions/`.


## Memory picture

Suppose `x` is stored at address `0x1000`:

```text
Variable x
┌──────────────┐
│     42       │  value of x
└──────────────┘
       ▲
       │ address: &x = 0x1000
       │
Pointer p
┌──────────────┐
│   0x1000     │  value stored in p
└──────────────┘

*p  ─────────────► 42
&x  ─────────────► 0x1000
```

The crucial distinction is **value versus address**. `p` stores an address; `*p` accesses the object at that address.

### Pointer safety checklist

Before dereferencing a pointer, ask:

1. Has it been initialized?
2. Is it NULL?
3. Does it point to a live object?
4. Is the pointed-to object still within its valid lifetime?
5. Is the access within the object's bounds?

If you cannot answer those questions, stop. C will not stop for you.
