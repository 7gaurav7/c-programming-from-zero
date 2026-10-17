# DSA Preparation

This is a bridge, not a complete DSA course. The goal is to make the transition from C syntax to algorithmic thinking less painful.

## 1. Algorithmic thinking

For every problem, identify:

1. Input
2. Output
3. Constraints
4. State/data representation
5. Algorithm
6. Correctness idea
7. Complexity
8. Edge cases

## 2. Big-O basics

Big-O describes how resource use grows as input size grows. It intentionally ignores machine-specific constants for high-level comparison.

Examples:

```text
single loop over n       -> O(n)
nested n × n loops       -> O(n²)
halving search range     -> O(log n)
constant lookup by index -> O(1)
```

## 3. Space complexity

Ask how much additional memory an algorithm needs as input grows. An in-place algorithm may use O(1) auxiliary space even though its input itself occupies memory.

## 4. Searching

### Linear search

Checks elements one by one. Time: O(n).

### Binary search

Requires sorted data. Each comparison discards roughly half the remaining range. Time: O(log n).

## 5. Sorting fundamentals

Start with bubble sort and selection/insertion sort to understand comparisons, swaps, and complexity. Later DSA study should continue into merge sort, quicksort, heaps, and library algorithms with careful analysis.

## 6. Recursion practice

Before recursion-heavy DSA, trace recursive calls on paper. Every recursive function needs a base case and a path toward it.

## 7. Arrays and strings

Practice traversal, frequency counting, prefix-style thinking, two-pointer techniques, and boundary handling.

## 8. Pointer and memory prerequisites

You should be able to explain:

- address vs value
- pointer vs pointee
- array contiguity
- pointer arithmetic
- lifetime
- ownership
- stack vs dynamic storage

## 9. Linked-list prerequisites

A linked list node commonly contains data plus a pointer to another node. You need structs, pointers, dynamic allocation, and careful lifetime management before implementing one confidently.

## Practice ladder

1. Linear search
2. Maximum/minimum
3. Frequency counting
4. Reverse an array
5. Two-pointer problems
6. Binary search
7. Bubble/insertion sort
8. Recursive factorial and Fibonacci with complexity discussion
9. Implement a node structure
10. Build and traverse a singly linked list

## What to learn next

After this bridge, continue to a full DSA course covering linked lists, stacks, queues, trees, heaps, hash tables, graphs, sorting/searching, greedy methods, dynamic programming, and problem-solving patterns.

