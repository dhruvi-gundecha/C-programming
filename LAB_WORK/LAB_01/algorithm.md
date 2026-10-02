# Algorithms and Flowcharts

This practical contains algorithms and flowcharts for basic mathematical calculations and conversions.

## Part A — Basic Calculations

### 1. Addition of Two Numbers

**Aim:** Calculate the addition of two numbers.

**Formula:**
`Sum = Number1 + Number2`

**Algorithm:**

1. Start
2. Input `Number1` and `Number2`
3. Calculate `Sum = Number1 + Number2`
4. Display `Sum`
5. Stop

**Flowchart:**

```text
       ┌─────────┐
       │  START  │
       └────┬────┘
            ↓
   ┌──────────────────┐
   │ Input Number1,   │
   │ Number2          │
   └────────┬─────────┘
            ↓
   ┌──────────────────┐
   │ Sum = Number1 +  │
   │ Number2          │
   └────────┬─────────┘
            ↓
   ┌──────────────────┐
   │    Display Sum   │
   └────────┬─────────┘
            ↓
       ┌─────────┐
       │  STOP   │
       └─────────┘
```

---

### 2. Average of Three Numbers

**Aim:** Calculate the average of three numbers.

**Formula:**
`Average = (Number1 + Number2 + Number3) / 3`

**Algorithm:**

1. Start
2. Input `Number1`, `Number2`, and `Number3`
3. Calculate `Sum = Number1 + Number2 + Number3`
4. Calculate `Average = Sum / 3`
5. Display `Average`
6. Stop

**Flowchart:**

```text
       ┌─────────┐
       │  START  │
       └────┬────┘
            ↓
   ┌────────────────────┐
   │ Input Number1,     │
   │ Number2, Number3   │
   └─────────┬──────────┘
             ↓
   ┌────────────────────┐
   │ Sum = N1 + N2 + N3 │
   └─────────┬──────────┘
             ↓
   ┌────────────────────┐
   │ Average = Sum / 3  │
   └─────────┬──────────┘
             ↓
   ┌────────────────────┐
   │ Display Average    │
   └─────────┬──────────┘
             ↓
       ┌─────────┐
       │  STOP   │
       └─────────┘
```

---

### 3. Area of Circle

**Aim:** Find the area of a circle.

**Formula:**
`Area = π × r × r`

**Algorithm:**

1. Start
2. Input radius `r`
3. Calculate `Area = π × r × r`
4. Display `Area`
5. Stop

**Flowchart:**

```text
       ┌─────────┐
       │  START  │
       └────┬────┘
            ↓
   ┌─────────────────┐
   │    Input r      │
   └────────┬────────┘
            ↓
   ┌─────────────────┐
   │ Area = π × r × r│
   └────────┬────────┘
            ↓
   ┌─────────────────┐
   │  Display Area   │
   └────────┬────────┘
            ↓
       ┌─────────┐
       │  STOP   │
       └─────────┘
```

---

### 4. Area of Triangle

**Aim:** Find the area of a triangle.

**Formula:**

`Area = (Height × Base) / 2`

**Algorithm:**

1. Start
2. Input `Height` and `Base`
3. Calculate `Area = (Height × Base) / 2`
4. Display `Area`
5. Stop

**Flowchart:**

```text
       ┌─────────┐
       │  START  │
       └────┬────┘
            ↓
   ┌─────────────────┐
   │ Input Height,   │
   │ Base            │
   └────────┬────────┘
            ↓
   ┌─────────────────┐
   │ Area = (H × B)/2│
   └────────┬────────┘
            ↓
   ┌─────────────────┐
   │  Display Area   │
   └────────┬────────┘
            ↓
       ┌─────────┐
       │  STOP   │
       └─────────┘
```

---

# Part B — Interest and Distance

### 5. Simple Interest

**Aim:** Calculate simple interest.

**Formula:**

`SI = (Principal × Rate × Time) / 100`

**Algorithm:**

1. Start
2. Input `Principal`, `Rate`, and `Time`
3. Calculate `SI = (Principal × Rate × Time) / 100`
4. Display `SI`
5. Stop

**Flowchart:**

```text
       ┌─────────┐
       │  START  │
       └────┬────┘
            ↓
   ┌────────────────────┐
   │ Input Principal,   │
   │ Rate, Time         │
   └─────────┬──────────┘
             ↓
   ┌─────────────────────┐
   │ SI = (P × R × T)/100│
   └─────────┬───────────┘
             ↓
   ┌────────────────────┐
   │     Display SI     │
   └─────────┬──────────┘
             ↓
       ┌─────────┐
       │  STOP   │
       └─────────┘
```

---

### 6. Distance Between Two Points

**Aim:** Calculate the distance between two points.

For points `(x1, y1)` and `(x2, y2)`:

**Formula:**

`Distance = √((x2 - x1)² + (y2 - y1)²)`

**Algorithm:**

1. Start
2. Input `x1`, `y1`, `x2`, and `y2`
3. Calculate `dx = x2 - x1`
4. Calculate `dy = y2 - y1`
5. Calculate `Distance = √(dx² + dy²)`
6. Display `Distance`
7. Stop

**Flowchart:**

```text
       ┌─────────┐
       │  START  │
       └────┬────┘
            ↓
   ┌─────────────────────┐
   │ Input x1, y1, x2, y2│
   └──────────┬──────────┘
              ↓
   ┌─────────────────────┐
   │ dx = x2 - x1        │
   │ dy = y2 - y1        │
   └──────────┬──────────┘
              ↓
   ┌──────────────────────┐
   │ Distance = √(dx²+dy²)│
   └──────────┬───────────┘
              ↓
   ┌─────────────────────┐
   │  Display Distance   │
   └──────────┬──────────┘
              ↓
       ┌─────────┐
       │  STOP   │
       └─────────┘
```

---

# Part C — Temperature Conversion

### 7. Fahrenheit to Celsius

**Aim:** Convert temperature from Fahrenheit to Celsius.

**Formula:**

`C = ((F - 32) × 5) / 9`

**Algorithm:**

1. Start
2. Input temperature in Fahrenheit `F`
3. Calculate `C = ((F - 32) × 5) / 9`
4. Display temperature in Celsius
5. Stop

**Flowchart:**

```text
       ┌─────────┐
       │  START  │
       └────┬────┘
            ↓
   ┌──────────────────┐
   │ Input Fahrenheit │
   │       F          │
   └────────┬─────────┘
            ↓
   ┌──────────────────┐
   │ C = ((F - 32)×5) │
   │        / 9       │
   └────────┬─────────┘
            ↓
   ┌──────────────────┐
   │  Display Celsius │
   └────────┬─────────┘
            ↓
       ┌─────────┐
       │  STOP   │
       └─────────┘
```

---

### 8. Celsius to Fahrenheit

**Aim:** Convert temperature from Celsius to Fahrenheit.

**Formula:**

`F = (C × 9 / 5) + 32`

**Algorithm:**

1. Start
2. Input temperature in Celsius `C`
3. Calculate `F = (C × 9 / 5) + 32`
4. Display temperature in Fahrenheit
5. Stop

**Flowchart:**

```text
       ┌─────────┐
       │  START  │
       └────┬────┘
            ↓
   ┌────────────────┐
   │  Input Celsius │
   │       C        │
   └───────┬────────┘
           ↓
   ┌────────────────────┐
   │ F = (C × 9 / 5)+32 │
   └─────────┬──────────┘
             ↓
   ┌────────────────────┐
   │ Display Fahrenheit │
   └─────────┬──────────┘
             ↓
       ┌─────────┐
       │  STOP   │
       └─────────┘
```

---

## Topics Covered

- Basic arithmetic operations
- Average calculation
- Area calculation
- Simple interest
- Distance between two points
- Temperature conversion
- Algorithms
- Flowcharts
- Input and output
- Mathematical formulas

## Practical Structure

| Part  | Programs                                      |
| ----- | --------------------------------------------- |
| **A** | Addition, Average, Circle Area, Triangle Area |
| **B** | Simple Interest, Distance Between Two Points  |
| **C** | Fahrenheit to Celsius, Celsius to Fahrenheit  |

## Copyright

© 2026 Dhruvi Gundecha. All rights reserved.

This repository contains my academic practical work and learning exercises.
