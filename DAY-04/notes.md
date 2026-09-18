# Day 04 - Loops in C

## Overview

Day 04 focuses on **loops and iteration in C programming**.

Loops are used to execute a block of code repeatedly while a particular condition is satisfied. They are one of the fundamental concepts required for solving programming and problem-solving questions.

---

## Topics Covered

1. `while` Loop
2. `do-while` Loop
3. `for` Loop
4. Nested Loops
5. Infinite Loops
6. `break` Statement
7. `continue` Statement
8. Loop Dry Runs
9. Loop Control Flow
10. Difference Between Loop Types

---

## 1. while Loop

The `while` loop checks the condition before executing the loop body.

### Syntax

```c
while(condition)
{
    // statements
}
```

### Key Point

If the condition is false initially, the loop body will not execute even once.

---

## 2. do-while Loop

The `do-while` loop executes the loop body first and checks the condition afterward.

### Syntax

```c
do
{
    // statements
} while(condition);
```

### Key Point

A `do-while` loop executes at least once, even if the condition is initially false.

---

## 3. for Loop

The `for` loop is commonly used when the number of iterations is known.

### Syntax

```c
for(initialization; condition; update)
{
    // statements
}
```

### Execution Order

```text
Initialization
      ↓
  Condition
      ↓
    True
      ↓
    Body
      ↓
   Update
      ↓
  Condition
```

If the condition becomes false, the loop terminates.

---

## 4. Nested Loops

A loop inside another loop is called a **nested loop**.

### Example

```c
for(int i = 1; i <= 3; i++)
{
    for(int j = 1; j <= 3; j++)
    {
        printf("* ");
    }

    printf("\n");
}
```

The inner loop completes all of its iterations for every iteration of the outer loop.

---

## 5. Infinite Loop

An infinite loop is a loop that never terminates because its condition always remains true.

### Example

```c
while(1)
{
    printf("Hello");
}
```

The condition `1` is always true in C, so this loop continues indefinitely unless it is interrupted.

---

## 6. break Statement

The `break` statement immediately terminates the nearest enclosing loop or `switch` statement.

### Example

```c
for(int i = 1; i <= 10; i++)
{
    if(i == 5)
    {
        break;
    }

    printf("%d ", i);
}
```

### Output

```text
1 2 3 4
```

When `i` becomes `5`, `break` terminates the loop.

---

## 7. continue Statement

The `continue` statement skips the remaining statements of the current iteration and proceeds toward the next iteration.

### Example

```c
for(int i = 1; i <= 5; i++)
{
    if(i == 3)
    {
        continue;
    }

    printf("%d ", i);
}
```

### Output

```text
1 2 4 5
```

The iteration where `i == 3` is skipped.

---

## 8. break vs continue

| `break`                           | `continue`                              |
| --------------------------------- | --------------------------------------- |
| Terminates the loop               | Skips the current iteration             |
| Control moves outside the loop    | Control moves toward the next iteration |
| Completely exits the nearest loop | Does not terminate the loop             |
| Can be used in loops and `switch` | Used in loops                           |

---

## 9. while vs do-while vs for

| Feature            | `while`                    | `do-while`              | `for`                             |
| ------------------ | -------------------------- | ----------------------- | --------------------------------- |
| Condition checked  | Before execution           | After execution         | Before each iteration             |
| Minimum executions | 0                          | 1                       | 0                                 |
| Initialization     | Usually separate           | Usually separate        | Inside loop                       |
| Update             | Usually separate           | Usually separate        | Inside loop                       |
| Best suited for    | Condition-based repetition | At-least-once execution | Known/count-controlled iterations |

---

## 10. Important Concept: Loop Dry Run

A dry run means manually tracing the execution of a program step by step.

Example:

```c
int i;

for(i = 1; i <= 3; i++)
{
    printf("%d ", i);
}
```

### Dry Run

| Step | `i` | Condition        | Output |
| ---- | --- | ---------------- | ------ |
| 1    | 1   | `1 <= 3` → True  | 1      |
| 2    | 2   | `2 <= 3` → True  | 2      |
| 3    | 3   | `3 <= 3` → True  | 3      |
| 4    | 4   | `4 <= 3` → False | Stop   |

Output:

```text
1 2 3
```

Understanding dry runs is important for debugging and solving output-based questions.

---

## 11. Important Notes

- A loop repeats a block of statements.
- `while` checks the condition before execution.
- `do-while` checks the condition after execution.
- `do-while` executes at least once.
- `for` is useful when the number of iterations is known.
- Nested loops contain one loop inside another.
- `break` terminates the nearest loop.
- `continue` skips the current iteration.
- Always ensure that the loop condition can eventually become false unless an infinite loop is intentional.
- Use braces `{}` to make loop bodies clear and readable.

---

## 12. Summary

| Concept       | Purpose                                                 |
| ------------- | ------------------------------------------------------- |
| `while`       | Repeats while a condition is true                       |
| `do-while`    | Executes once before checking the condition             |
| `for`         | Repeats code using initialization, condition and update |
| Nested Loop   | Loop inside another loop                                |
| Infinite Loop | Loop that does not terminate                            |
| `break`       | Terminates the nearest loop                             |
| `continue`    | Skips the current iteration                             |
| Dry Run       | Manually traces program execution                       |

---

## Day 04 Checklist

- [ ] Understand `while` loop
- [ ] Understand `do-while` loop
- [ ] Understand `for` loop
- [ ] Understand nested loops
- [ ] Understand infinite loops
- [ ] Understand `break`
- [ ] Understand `continue`
- [ ] Practice loop dry runs
- [ ] Complete `notes.md`

---
