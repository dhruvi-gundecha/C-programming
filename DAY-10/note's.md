# 🚀 C Programming — Day 10: Strings

## 📌 Topic

**Strings in C**

Strings are one of the most important concepts after arrays because a string in C is stored using a **character array**.

---

# 1. What is a String?

A string is a sequence of characters stored inside a character array.

```c
char name[] = "Dhruvi";
```

Internally, C stores it as:

```text
D   h   r   u   v   i   \0
```

The `\0` is called the **null character** and marks the end of the string.

---

# 2. Character vs String

### Character

A character contains only one character and uses **single quotes**.

```c
char ch = 'A';
```

### String

A string contains multiple characters and uses **double quotes**.

```c
char name[] = "Dhruvi";
```

### Remember

```text
'A'       → Character
"ABC"     → String
```

---

# 3. String and Character Array

A string can be created using a character array:

```c
char name[] = {'D', 'h', 'r', 'u', 'v', 'i', '\0'};
```

The easier method is:

```c
char name[] = "Dhruvi";
```

Both represent the same string.

---

# 4. Null Character `\0`

The null character tells C where the string ends.

Example:

```c
char word[] = "HELLO";
```

Memory representation:

```text
Index:     0   1   2   3   4   5
           ↓   ↓   ↓   ↓   ↓   ↓
          ┌───┬───┬───┬───┬───┬────┐
          │ H │ E │ L │ L │ O │ \0 │
          └───┴───┴───┴───┴───┴────┘
```

`"HELLO"` has 5 visible characters, but the array needs **6 positions** because of `\0`.

---

# 5. Printing a String

Use `%s` with `printf()`.

```c
#include <stdio.h>

int main()
{
    char name[] = "Dhruvi";

    printf("%s", name);

    return 0;
}
```

### Output

```text
Dhruvi
```

### Format Specifiers

```text
%c → Character
%s → String
```

Example:

```c
char ch = 'A';
char name[] = "Dhruvi";

printf("%c\n", ch);
printf("%s\n", name);
```

---

# 6. String Traversal

Just like an integer array, a string can be traversed using a loop.

```c
#include <stdio.h>

int main()
{
    char name[] = "Hello";

    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("%c\n", name[i]);
    }

    return 0;
}
```

### Output

```text
H
e
l
l
o
```

### Important Condition

```c
name[i] != '\0'
```

This means:

> Continue until the end of the string.

---

# 7. Taking String Input Using `scanf()`

```c
#include <stdio.h>

int main()
{
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Your name is %s", name);

    return 0;
}
```

### Example

Input:

```text
Dhruvi
```

Output:

```text
Your name is Dhruvi
```

---

# ⚠️ Important `scanf()` Limitation

`scanf("%s", name)` stops reading when it encounters a space.

For example:

```text
Input:
Dhruvi Gundecha
```

It will read only:

```text
Dhruvi
```

Later we will use `fgets()` to handle strings containing spaces.

---

# 8. Basic String Program

```c
#include <stdio.h>

int main()
{
    char name[] = "Dhruvi";

    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("%c\n", name[i]);
    }

    return 0;
}
```

### Logic

```text
Start
  ↓
Create character array
  ↓
Start i = 0
  ↓
Check name[i] != '\0'
  ↓
Print character
  ↓
Increase i
  ↓
Repeat
  ↓
Reach \0
  ↓
Stop
```

---

# 🧠 Key Things to Remember

```text
String
   ↓
Character Array
   ↓
Ends with \0
```

```text
%c → Character
%s → String
```

```c
char name[] = "Dhruvi";
```

is essentially:

```c
char name[] = {'D', 'h', 'r', 'u', 'v', 'i', '\0'};
```

And the most important traversal pattern is:

```c
for (int i = 0; name[i] != '\0'; i++)
{
    // work with name[i]
}
```
