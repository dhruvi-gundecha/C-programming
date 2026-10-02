# Algorithms and Flowcharts – Practical 2

This practical contains algorithms and flowcharts for unit conversion, swapping, number checking, finding smallest/largest numbers, and arranging numbers in ascending and descending order.

---

# Part A — Basic Operations

## 1. Convert Feet into Inches

**Aim:** Convert a given value in feet into inches.

**Formula:**

`Inches = Feet × 12`

### Algorithm

1. Start
2. Input `Feet`
3. Calculate `Inches = Feet × 12`
4. Display `Inches`
5. Stop

### Flowchart

```text
       ┌─────────┐
       │  START  │
       └────┬────┘
            ↓
   ┌─────────────────┐
   │   Input Feet    │
   └────────┬────────┘
            ↓
   ┌─────────────────┐
   │ Inches = Feet×12│
   └────────┬────────┘
            ↓
   ┌─────────────────┐
   │ Display Inches  │
   └────────┬────────┘
            ↓
       ┌─────────┐
       │  STOP   │
       └─────────┘
```

---

## 2. Swap Two Numbers Using Temporary Variable

**Aim:** Swap two numbers using a temporary variable.

### Algorithm

1. Start
2. Input `A` and `B`
3. Store `A` in `Temp`
4. Store `B` in `A`
5. Store `Temp` in `B`
6. Display `A` and `B`
7. Stop

### Flowchart

```text
       ┌─────────┐
       │  START  │
       └────┬────┘
            ↓
   ┌────────────────┐
   │   Input A, B   │
   └───────┬────────┘
           ↓
   ┌────────────────┐
   │    Temp = A    │
   └───────┬────────┘
           ↓
   ┌────────────────┐
   │      A = B     │
   └───────┬────────┘
           ↓
   ┌────────────────┐
   │    B = Temp    │
   └───────┬────────┘
           ↓
   ┌────────────────┐
   │  Display A, B  │
   └───────┬────────┘
           ↓
       ┌─────────┐
       │  STOP   │
       └─────────┘
```

---

## 3. Check Whether a Number is Odd or Even

**Aim:** Determine whether a given number is odd or even.

### Algorithm

1. Start
2. Input `Number`
3. Check whether `Number % 2 == 0`
4. If true, display **Even**
5. Otherwise, display **Odd**
6. Stop

### Flowchart

```text
       ┌─────────┐
       │  START  │
       └────┬────┘
            ↓
   ┌────────────────┐
   │  Input Number  │
   └───────┬────────┘
           ↓
       ╱────────────╲
      ╱ Number % 2=0 ╲
      ╲      ?       ╱
       ╲────────────╱
         ↙        ↘
       YES         NO
        ↓           ↓
 ┌────────────┐ ┌────────────┐
 │Display EVEN│ │ Display ODD│
 └──────┬─────┘ └──────┬─────┘
        └───────┬──────┘
                ↓
          ┌─────────┐
          │  STOP   │
          └─────────┘
```

---

## 4. Check Whether a Number is Positive or Negative

**Aim:** Determine whether a given number is positive or negative.

### Algorithm

1. Start
2. Input `Number`
3. Check whether `Number >= 0`
4. If true, display **Positive**
5. Otherwise, display **Negative**
6. Stop

### Flowchart

```text
       ┌─────────┐
       │  START  │
       └────┬────┘
            ↓
   ┌────────────────┐
   │  Input Number  │
   └───────┬────────┘
           ↓
       ╱────────────╲
      ╱  Number >= 0 ╲
      ╲      ?       ╱
       ╲────────────╱
         ↙        ↘
       YES         NO
        ↓           ↓
 ┌──────────────┐ ┌──────────────┐
 │Display        │ │Display       │
 │POSITIVE       │ │NEGATIVE      │
 └──────┬───────┘ └──────┬───────┘
        └────────┬────────┘
                 ↓
           ┌─────────┐
           │  STOP   │
           └─────────┘
```

> **Note:** If your teacher considers `0` separately, use `Number > 0` → Positive, `Number < 0` → Negative, otherwise → Zero.

---

# Part B — Finding Smallest and Largest

## 1. Find the Smallest Number from Three Numbers

**Aim:** Find the smallest among three given numbers.

### Algorithm

1. Start
2. Input `A`, `B`, and `C`
3. If `A < B` and `A < C`, then `A` is smallest
4. Else if `B < A` and `B < C`, then `B` is smallest
5. Otherwise, `C` is smallest
6. Display the smallest number
7. Stop

### Flowchart

```text
             ┌─────────┐
             │  START  │
             └────┬────┘
                  ↓
       ┌───────────────────┐
       │   Input A, B, C   │
       └─────────┬─────────┘
                 ↓
          ╱───────────────╲
         ╱  A < B AND A < C╲
         ╲        ?        ╱
          ╲───────────────╱
            ↙           ↘
          YES            NO
           ↓              ↓
    ┌─────────────┐   ╱────────────────╲
    │ Smallest = A│  ╱ B < A AND B<C    ╲
    └──────┬──────┘  ╲       ?          ╱
           │          ╲────────────────╱
           │             ↙           ↘
           │           YES            NO
           │            ↓              ↓
           │      ┌─────────────┐ ┌─────────────┐
           │      │Smallest = B │ │Smallest = C │
           │      └──────┬──────┘ └──────┬──────┘
           │             │               │
           └─────────────┴───────┬───────┘
                                 ↓
                         ┌─────────────────┐
                         │ Display Smallest│
                         └───────┬─────────┘
                                 ↓
                            ┌─────────┐
                            │  STOP   │
                            └─────────┘
```

---

## 2. Find the Largest Number from Three Numbers

**Aim:** Find the largest among three given numbers.

### Algorithm

1. Start
2. Input `A`, `B`, and `C`
3. If `A > B` and `A > C`, then `A` is largest
4. Else if `B > A` and `B > C`, then `B` is largest
5. Otherwise, `C` is largest
6. Display the largest number
7. Stop

### Flowchart

```text
             ┌─────────┐
             │  START  │
             └────┬────┘
                  ↓
       ┌───────────────────┐
       │   Input A, B, C   │
       └─────────┬─────────┘
                 ↓
          ╱───────────────╲
         ╱  A > B AND A>C  ╲
         ╲        ?        ╱
          ╲───────────────╱
            ↙           ↘
          YES            NO
           ↓              ↓
    ┌─────────────┐    ╱───────────────╲
    │ Largest = A │   ╱ B > A AND B>C   ╲
    └──────┬──────┘   ╲       ?         ╱
           │           ╲───────────────╱
           │             ↙           ↘
           │           YES            NO
           │            ↓              ↓
           │      ┌─────────────┐ ┌─────────────┐
           │      │ Largest = B │ │ Largest = C │
           │      └──────┬──────┘ └──────┬──────┘
           │             │               │
           └─────────────┴───────┬───────┘
                                 ↓
                         ┌────────────────┐
                         │ Display Largest│
                         └───────┬────────┘
                                 ↓
                            ┌─────────┐
                            │  STOP   │
                            └─────────┘
```

---

# Part C — Swapping and Ordering

## 1. Swap Two Numbers Without Using Temporary Variable

**Aim:** Swap two numbers without using a temporary variable.

### Algorithm

1. Start
2. Input `A` and `B`
3. Calculate `A = A + B`
4. Calculate `B = A - B`
5. Calculate `A = A - B`
6. Display `A` and `B`
7. Stop

### Flowchart

```text
       ┌─────────┐
       │  START  │
       └────┬────┘
            ↓
   ┌────────────────┐
   │   Input A, B   │
   └───────┬────────┘
           ↓
   ┌────────────────┐
   │    A = A + B   │
   └───────┬────────┘
           ↓
   ┌────────────────┐
   │    B = A - B   │
   └───────┬────────┘
           ↓
   ┌────────────────┐
   │    A = A - B   │
   └───────┬────────┘
           ↓
   ┌────────────────┐
   │  Display A, B  │
   └───────┬────────┘
           ↓
       ┌─────────┐
       │  STOP   │
       └─────────┘
```

---

## 2. Arrange Three Numbers in Ascending and Descending Order

**Aim:** Accept three numbers and print them in ascending and descending order using only three conditions for each order.

Let the numbers be `A`, `B`, and `C`.

### Ascending Order Algorithm

1. Start
2. Input `A`, `B`, and `C`
3. If `A > B`, swap `A` and `B`
4. If `A > C`, swap `A` and `C`
5. If `B > C`, swap `B` and `C`
6. Display `A`, `B`, `C` in ascending order
7. Stop

### Ascending Flowchart

```text
       ┌─────────┐
       │  START  │
       └────┬────┘
            ↓
   ┌────────────────┐
   │   Input A,B,C  │
   └───────┬────────┘
           ↓
       ╱────────╲
      ╱   A > B  ╲
      ╲     ?     ╱
       ╲────────╱
        ↓ YES
   ┌─────────────┐
   │ Swap A and B│
   └──────┬──────┘
          ↓
       ╱─────────╲
      ╱   A > C   ╲
      ╲     ?     ╱
       ╲─────────╱
        ↓ YES
   ┌─────────────┐
   │ Swap A and C│
   └──────┬──────┘
          ↓
       ╱─────────╲
      ╱   B > C   ╲
      ╲     ?     ╱
       ╲─────────╱
        ↓ YES
   ┌─────────────┐
   │ Swap B and C│
   └──────┬──────┘
          ↓
   ┌──────────────────┐
   │ Display A,B,C    │
   │ Ascending Order  │
   └────────┬─────────┘
            ↓
       ┌─────────┐
       │  STOP   │
       └─────────┘
```

### Descending Order Algorithm

1. Start
2. Input `A`, `B`, and `C`
3. If `A < B`, swap `A` and `B`
4. If `A < C`, swap `A` and `C`
5. If `B < C`, swap `B` and `C`
6. Display `A`, `B`, `C` in descending order
7. Stop

### Descending Flowchart

```text
       ┌─────────┐
       │  START  │
       └────┬────┘
            ↓
   ┌────────────────┐
   │   Input A,B,C  │
   └───────┬────────┘
           ↓
       ╱─────────╲
      ╱   A < B   ╲
      ╲     ?     ╱
       ╲─────────╱
        ↓ YES
   ┌─────────────┐
   │ Swap A and B│
   └──────┬──────┘
          ↓
       ╱─────────╲
      ╱   A < C   ╲
      ╲     ?     ╱
       ╲─────────╱
        ↓ YES
   ┌─────────────┐
   │ Swap A and C│
   └──────┬──────┘
          ↓
       ╱─────────╲
      ╱   B < C   ╲
      ╲     ?     ╱
       ╲─────────╱
        ↓ YES
   ┌─────────────┐
   │ Swap B and C│
   └──────┬──────┘
          ↓
   ┌───────────────────┐
   │ Display A,B,C     │
   │ Descending Order  │
   └────────┬──────────┘
            ↓
       ┌─────────┐
       │  STOP   │
       └─────────┘
```

---

# Summary

| Part  | No. | Practical                       |
| ----- | --: | ------------------------------- |
| **A** |   1 | Feet → Inches                   |
| **A** |   2 | Swap using temporary variable   |
| **A** |   3 | Odd or Even                     |
| **A** |   4 | Positive or Negative            |
| **B** |   1 | Smallest of Three Numbers       |
| **B** |   2 | Largest of Three Numbers        |
| **C** |   1 | Swap without Temporary Variable |
| **C** |   2 | Ascending and Descending Order  |

## Concepts Covered

- Input and output
- Arithmetic operations
- Variables
- Temporary variables
- Modulus operator
- Conditional statements
- Comparison operators
- Swapping
- Number ordering
- Algorithms
- Flowcharts

## Copyright

© 2026 Dhruvi Gundecha. All rights reserved.

This repository contains my academic practical work and learning exercises.
