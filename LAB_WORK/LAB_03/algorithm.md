# Algorithms and Flowcharts – Practical 3

This practical contains algorithms and flowcharts for day-name display, age calculation, leap-year checking, and evaluating expressions using operator precedence.

---

# Part A

## 1. Display Day Name for the Given Number

**Aim:** Display the day name according to the given day number.

### Assumption

Use:

| Number | Day       |
| -----: | --------- |
|      1 | Monday    |
|      2 | Tuesday   |
|      3 | Wednesday |
|      4 | Thursday  |
|      5 | Friday    |
|      6 | Saturday  |
|      7 | Sunday    |

### Algorithm

1. Start
2. Input `Day`
3. Check the value of `Day`
4. If `Day = 1`, display **Monday**
5. Else if `Day = 2`, display **Tuesday**
6. Else if `Day = 3`, display **Wednesday**
7. Else if `Day = 4`, display **Thursday**
8. Else if `Day = 5`, display **Friday**
9. Else if `Day = 6`, display **Saturday**
10. Else if `Day = 7`, display **Sunday**
11. Otherwise, display **Invalid Day Number**
12. Stop

### Flowchart

```text
              ┌─────────┐
              │  START  │
              └────┬────┘
                   ↓
          ┌────────────────┐
          │   Input Day    │
          └───────┬────────┘
                  ↓
             ╱────────╲
            ╱ Day = 1? ╲
            ╲──────────╱
             ↓ YES
          ┌────────────┐
          │   Monday   │
          └─────┬──────┘
                │
                │ NO
                ↓
             ╱────────╲
            ╱ Day = 2? ╲
            ╲──────────╱
             ↓ YES
          ┌────────────┐
          │  Tuesday   │
          └─────┬──────┘
                │
                ↓
             ╱────────╲
            ╱ Day = 3? ╲
            ╲──────────╱
             ↓ YES
          ┌─────────────┐
          │  Wednesday  │
          └──────┬──────┘
                 ↓
              ...continue
              for Day 4,
              Day 5, Day 6
              and Day 7
                 ↓
          ┌──────────────────┐
          │ Display Day Name │
          └────────┬─────────┘
                   ↓
              ┌─────────┐
              │  STOP   │
              └─────────┘
```

### Easier Flowchart Method

For a handwritten flowchart, you can use a **switch/case-style decision structure**:

```text
                 START
                   ↓
              Input Day
                   ↓
            ┌─────────────┐
            │  Day Number │
            └──────┬──────┘
                   ↓
       ┌──────┬──────┬──────┬──────┐
       ↓      ↓      ↓      ↓      ↓
      1       2      3      ...     7
       ↓      ↓      ↓              ↓
    Monday Tuesday Wednesday      Sunday
       └──────┴──────┴──────┬──────┘
                             ↓
                       Display Day
                             ↓
                           STOP
```

---

# 2. Calculate Age from Current Date to User's Birth Date

**Aim:** Calculate the user's age using the current date and birth date.

### Input

- Current Day, Month, Year → `CD, CM, CY`
- Birth Day, Month, Year → `BD, BM, BY`

### Algorithm

1. Start
2. Input current date `CD, CM, CY`
3. Input birth date `BD, BM, BY`
4. Calculate:
   `Age = CY - BY`
5. Check whether the current month is before the birth month.
6. If the current month is before the birth month, subtract `1` from Age.
7. If the current month is the same as the birth month, check the day.
8. If the current day is before the birth day, subtract `1` from Age.
9. Display `Age`
10. Stop

### Simple Formula

```text
Age = Current Year - Birth Year

If current date is before birthday:
    Age = Age - 1
```

### Flowchart

```text
                ┌─────────┐
                │  START  │
                └────┬────┘
                     ↓
       ┌─────────────────────────┐
       │ Input Current Date      │
       │ CD, CM, CY              │
       └───────────┬─────────────┘
                   ↓
       ┌─────────────────────────┐
       │ Input Birth Date        │
       │ BD, BM, BY              │
       └───────────┬─────────────┘
                   ↓
       ┌─────────────────────────┐
       │ Age = CY - BY           │
       └───────────┬─────────────┘
                   ↓
          ╱────────────────────╲
         ╱ Is current date      ╲
         ╲ before birthday?     ╱
          ╲────────────────────╱
             ↙            ↘
           YES             NO
            ↓               ↓
    ┌────────────────┐      │
    │ Age = Age - 1  │      │
    └───────┬────────┘      │
            └───────┬───────┘
                    ↓
           ┌────────────────┐
           │  Display Age   │
           └───────┬────────┘
                   ↓
              ┌─────────┐
              │  STOP   │
              └─────────┘
```

---

# Part B

## 1. Check Whether a Given Year is a Leap Year

**Aim:** Check whether the given year is a leap year.

### Leap Year Rule

A year is a leap year if:

```text
(year % 400 == 0)
OR
(year % 4 == 0 AND year % 100 != 0)
```

### Examples

- `2024` → Leap Year
- `1900` → Not Leap Year
- `2000` → Leap Year

### Algorithm

1. Start
2. Input `Year`
3. Check if `Year % 400 == 0`
4. If yes, display **Leap Year**
5. Otherwise, check if `Year % 4 == 0`
6. If yes, check if `Year % 100 != 0`
7. If yes, display **Leap Year**
8. Otherwise, display **Not a Leap Year**
9. Stop

### Flowchart

```text
                  ┌─────────┐
                  │  START  │
                  └────┬────┘
                       ↓
              ┌────────────────┐
              │   Input Year   │
              └───────┬────────┘
                      ↓
              ╱────────────────╲
             ╱  Year % 400=0?   ╲
             ╲──────────────────╱
                ↙          ↘
              YES           NO
               ↓             ↓
        ┌─────────────┐  ╱──────────────╲
        │  Leap Year  │ ╱  Year % 4=0?   ╲
        └──────┬──────┘ ╲────────────────╱
               │            ↙         ↘
               │          YES           NO
               │           ↓             ↓
               │     ╱────────────╲    ┌───────────────┐
               │    ╱ Year %100≠0? ╲ │ │ Not Leap Year │
               │    ╲──────────────╱   └───────┬───────┘
               │       ↙       ↘              │
               │     YES        NO             │
               │      ↓          ↓             │
               │ ┌──────────┐ ┌─────────────┐  │
               │ │Leap Year │ │Not Leap Year│  │
               │ └────┬─────┘ └──────┬──────┘  │
               └──────┴──────────────┴─────────┘
                              ↓
                         ┌─────────┐
                         │  STOP   │
                         └─────────┘
```

---

# 2. Evaluate Expressions Using Operator Precedence

**Aim:** Evaluate the given expressions according to operator precedence.

### Operator Precedence

The basic order is:

```text
1. Parentheses ()
2. Multiplication *, Division /, Modulus %
3. Addition +, Subtraction -
```

When operators have the same precedence, evaluate from **left to right**.

---

## a) `10 + 20 * 30`

Multiplication is performed first:

```text
10 + (20 * 30)
= 10 + 600
= 610
```

**Answer: `610`**

### Algorithm

1. Start
2. Evaluate `20 * 30`
3. Add `10`
4. Display `610`
5. Stop

### Flowchart

```text
   START
     ↓
  20 × 30
     ↓
    600
     ↓
  10 + 600
     ↓
    610
     ↓
   STOP
```

---

## b) `100 / 10 * 100`

Division and multiplication have the same precedence, so evaluate from left to right.

```text
(100 / 10) * 100
= 10 * 100
= 1000
```

**Answer: `1000`**

### Flowchart

```text
   START
     ↓
  100 / 10
     ↓
    10
     ↓
  10 × 100
     ↓
   1000
     ↓
   STOP
```

---

## c) `5 * 4 / 4 % 3`

`*`, `/`, and `%` have the same precedence, so evaluate from left to right.

```text
5 * 4
= 20

20 / 4
= 5

5 % 3
= 2
```

**Answer: `2`**

### Flowchart

```text
   START
     ↓
    5 × 4
     ↓
    20
     ↓
    20 / 4
     ↓
     5
     ↓
     5 % 3
     ↓
     2
     ↓
   STOP
```

---

## d) `100 + 200 / 10 - 3 * 10`

First perform division and multiplication:

```text
100 + 20 - 30
```

Then addition and subtraction from left to right:

```text
120 - 30
= 90
```

**Answer: `90`**

### Flowchart

```text
       START
         ↓
     200 / 10
         ↓
        20
         ↓
      3 × 10
         ↓
        30
         ↓
    100 + 20
         ↓
       120
         ↓
     120 - 30
         ↓
        90
         ↓
       STOP
```

---

## e) `(10 - 4) + (20 / (2 * 5)) * 3`

First solve the innermost parentheses:

```text
10 - 4 = 6

2 * 5 = 10

20 / 10 = 2
```

Then:

```text
6 + 2 * 3
= 6 + 6
= 12
```

**Answer: `12`**

### Flowchart

```text
          START
            ↓
         10 - 4
            ↓
            6
            ↓
          2 × 5
            ↓
           10
            ↓
         20 / 10
            ↓
            2
            ↓
          2 × 3
            ↓
            6
            ↓
          6 + 6
            ↓
           12
            ↓
          STOP
```

---

## f) `(3 + 8) % 35 - 28 / 7`

First solve parentheses:

```text
3 + 8 = 11
```

Then modulus and division:

```text
11 % 35 = 11
28 / 7 = 4
```

Finally:

```text
11 - 4 = 7
```

**Answer: `7`**

### Flowchart

```text
          START
            ↓
          3 + 8
            ↓
           11
            ↓
         11 % 35
            ↓
           11
            ↓
          28 / 7
            ↓
            4
            ↓
          11 - 4
            ↓
            7
            ↓
          STOP
```

---

# Final Answers

| Expression                      |   Answer |
| ------------------------------- | -------: |
| `10 + 20 * 30`                  |  **610** |
| `100 / 10 * 100`                | **1000** |
| `5 * 4 / 4 % 3`                 |    **2** |
| `100 + 200 / 10 - 3 * 10`       |   **90** |
| `(10 - 4) + (20 / (2 * 5)) * 3` |   **12** |
| `(3 + 8) % 35 - 28 / 7`         |    **7** |

---

# Part C

## 1. Electricity Bill Calculation

### Aim

Input the electricity units consumed and calculate the total electricity bill according to the given slab rates, including a 20% surcharge.

### Given Conditions

| Units           |          Rate |
| --------------- | ------------: |
| First 50 units  | Rs. 0.50/unit |
| Next 100 units  | Rs. 0.75/unit |
| Next 100 units  | Rs. 1.20/unit |
| Above 250 units | Rs. 1.50/unit |
| Surcharge       |   20% of bill |

### Algorithm

1. Start
2. Input `Units`
3. If `Units <= 50`, calculate:
   `Bill = Units × 0.50`
4. Else if `Units <= 150`, calculate:
   `Bill = (50 × 0.50) + ((Units - 50) × 0.75)`
5. Else if `Units <= 250`, calculate:
   `Bill = (50 × 0.50) + (100 × 0.75) + ((Units - 150) × 1.20)`
6. Otherwise, calculate:
   `Bill = (50 × 0.50) + (100 × 0.75) + (100 × 1.20) + ((Units - 250) × 1.50)`
7. Calculate surcharge:
   `Surcharge = Bill × 20 / 100`
8. Calculate:
   `Total Bill = Bill + Surcharge`
9. Display `Total Bill`
10. Stop

### Flowchart

```text
                     ┌─────────┐
                     │  START  │
                     └────┬────┘
                          ↓
                 ┌────────────────┐
                 │  Input Units   │
                 └───────┬────────┘
                         ↓
                    ╱───────────╲
                   ╱ Units <= 50 ╲
                   ╲      ?      ╱
                    ╲───────────╱
                    ↙          ↘
                  YES           NO
                   ↓             ↓
       ┌──────────────────┐   ╱──────────────╲
       │ Bill=Units×0.50  │  ╱ Units <= 150?  ╲
       └────────┬─────────┘  ╲────────────────╱
                │              ↙          ↘
                │            YES           NO
                │             ↓             ↓
                │    ┌─────────────────┐  ╱──────────────╲
                │    │ Bill=(50×0.50) +│ ╱ Units <= 250?  ╲
                │    │ (Units-50)×0.75 │ ╲────────────────╱
                │    └────────┬────────┘    ↙        ↘
                │             │            YES         NO
                │             │             ↓           ↓
                │             │   ┌─────────────────┐  ┌─────────────────┐
                │             │   │ Bill=(50×0.50)+ │  │ Bill=(50×0.50)+ │
                │             │   │ (100×0.75)+     │  │ (100×0.75)+     │
                │             │   │ (Units-150)×1.20│  │ (100×1.20)+     │
                │             │   └────────┬────────┘  │ (Units-250)×1.50│
                │             │            │           └────────┬────────┘
                └─────────────┴────────────┴────────────────────┘
                                             ↓
                              ┌────────────────────────┐
                              │ Surcharge = Bill × 20% │
                              └────────────┬───────────┘
                                           ↓
                              ┌─────────────────────────┐
                              │ Total = Bill + Surcharge│
                              └────────────┬────────────┘
                                           ↓
                              ┌────────────────────────┐
                              │    Display Total Bill  │
                              └────────────┬───────────┘
                                           ↓
                                      ┌─────────┐
                                      │  STOP   │
                                      └─────────┘
```

### Example

Suppose the user consumes **200 units**.

```text
First 50 units:
50 × 0.50 = Rs. 25

Next 100 units:
100 × 0.75 = Rs. 75

Remaining 50 units:
50 × 1.20 = Rs. 60

Bill = 25 + 75 + 60
     = Rs. 160

Surcharge = 160 × 20 / 100
          = Rs. 32

Total Bill = 160 + 32
           = Rs. 192
```

---

# 2. Calculate the Angle Between Hour Hand and Minute Hand

### Aim

Calculate the angle between the hour hand and minute hand for a given time.

### Formula

For a time `H:M`:

`Angle = |30 × H - 5.5 × M|`

If the calculated angle is greater than `180°`:

`Angle = 360 - Angle`

### Why?

- The **hour hand** moves `30°` per hour.
- The **minute hand** moves `6°` per minute.
- The hour hand also moves slightly as the minutes pass, which gives the `5.5 × M` formula.

### Algorithm

1. Start
2. Input `Hour` and `Minute`
3. Calculate:
   `Angle = |30 × Hour - 5.5 × Minute|`
4. If `Angle > 180`, calculate:
   `Angle = 360 - Angle`
5. Display `Angle`
6. Stop

### Flowchart

```text
                ┌─────────┐
                │  START  │
                └────┬────┘
                     ↓
             ┌─────────────────┐
             │ Input Hour,     │
             │ Minute          │
             └───────┬─────────┘
                     ↓
       ┌────────────────────────────┐
       │ Angle = |30×Hour - 5.5×Min|│
       └──────────────┬─────────────┘
                      ↓
                 ╱─────────────╲
                ╱  Angle > 180°?╲
                ╲───────────────╱
                  ↙          ↘
                YES           NO
                 ↓             │
       ┌─────────────────┐     │
       │ Angle=360-Angle │     │
       └────────┬────────┘     │
                └──────┬───────┘
                       ↓
             ┌────────────────┐
             │ Display Angle  │
             └───────┬────────┘
                     ↓
                ┌─────────┐
                │  STOP   │
                └─────────┘
```

### Example

For **3:30**:

```text
Angle = |30 × 3 - 5.5 × 30|

      = |90 - 165|

      = |-75|

      = 75°
```

**Answer: 75°**

---

## Concepts Covered

- Algorithms
- Flowcharts
- Conditional statements
- Date and age calculation
- Day-number mapping
- Leap year
- Modulus operator `%`
- Arithmetic operators
- Operator precedence
- Left-to-right evaluation
- Parentheses
- Multiple conditions
- Electricity bill calculation
- Slab-based calculations
- Percentage calculation
- Surcharge calculation
- Clock angle calculation
- Absolute value
- Mathematical formulas

## Copyright

© 2026 Dhruvi Gundecha. All rights reserved.

This repository contains my academic practical work and learning exercises.
