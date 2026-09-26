# 🚀 C Day-11 — Part-B

## Intermediate String Library Functions

Day-11 Part-B focuses on **intermediate-level string library functions in C**.

The main goal is to understand **what each function does, why it is used, what it returns, and where it can be useful**.

---

## 📚 Topics Covered

- `strchr()`
- `strrchr()`
- `strstr()`
- `strtok()`
- `strspn()`
- `strcspn()`

---

# 1. `strchr()`

### What is it?

`strchr()` searches a string for the **first occurrence of a specified character**.

### Why use it?

It is useful when you need to locate a particular character without manually writing a loop.

### Syntax

```text
strchr(string, character)
```

### Return Value

Returns a **pointer to the first occurrence** of the character.

If the character is not found, it returns:

```text
NULL
```

### Key Point

```text
strchr()
   ↓
Find FIRST occurrence of a character
   ↓
Returns pointer
```

---

# 2. `strrchr()`

### What is it?

`strrchr()` searches a string for the **last occurrence of a specified character**.

### Why use it?

It is useful when a character appears multiple times and you need the final occurrence.

### Syntax

```text
strrchr(string, character)
```

### Return Value

Returns a **pointer to the last occurrence**.

If the character is not found:

```text
NULL
```

### Difference

```text
strchr()   → First occurrence
strrchr()  → Last occurrence
```

### Key Point

The `r` in `strrchr()` can help remember **reverse/rightmost search**.

---

# 3. `strstr()`

### What is it?

`strstr()` searches for one **string/substring inside another string**.

### Why use it?

It is useful when you need to check whether a particular word or sequence exists inside a larger string.

### Syntax

```text
strstr(main_string, search_string)
```

### Return Value

Returns a **pointer to the beginning of the matching substring**.

If the substring is not found:

```text
NULL
```

### Key Point

```text
strchr()
   ↓
Character search

strstr()
   ↓
String/substring search
```

---

# 4. `strtok()`

### What is it?

`strtok()` divides a string into smaller pieces called **tokens**.

### Why use it?

It is useful when a string contains multiple pieces of information separated by a delimiter.

Examples of delimiters:

```text
,
@
space
-
:
;
```

### Syntax

First token:

```text
strtok(string, delimiter)
```

Next tokens:

```text
strtok(NULL, delimiter)
```

### Important Concept

The first call provides the string.

After that, `NULL` tells `strtok()`:

```text
Continue from where you stopped previously.
```

### Return Value

Returns a pointer to the next token.

When there are no more tokens:

```text
NULL
```

### Important Terms

**Delimiter**

A character that separates pieces of data.

**Token**

One individual piece obtained after splitting the string.

### Key Point

```text
String
   ↓
Delimiter
   ↓
Split
   ↓
Tokens
```

---

# 5. `strspn()`

### What is it?

`strspn()` counts the number of characters at the **beginning of a string** that belong to a specified character set.

### Why use it?

It can be useful when checking the starting portion of a string against a group of allowed characters.

For example, it can help determine how many **digits occur continuously at the beginning** of a string.

### Syntax

```text
strspn(string, character_set)
```

### Return Value

Returns an integer representing the number of matching characters from the beginning.

### Key Point

```text
Start of string
      ↓
Check characters
      ↓
Count matching characters
      ↓
Stop at first non-matching character
```

---

# 6. `strcspn()`

### What is it?

`strcspn()` counts the number of characters from the beginning of a string until it encounters a character belonging to a specified set.

### Why use it?

It is useful for locating where a particular delimiter or group of characters first appears.

### Syntax

```text
strcspn(string, character_set)
```

### Return Value

Returns an integer representing the number of characters before the first matching character.

### Key Point

```text
Start
  ↓
Read characters
  ↓
Stop when a matching character is found
  ↓
Return count
```

---

# 🧠 Function Comparison

| Function    | Searches For  | Main Purpose                       | Return Type |
| ----------- | ------------- | ---------------------------------- | ----------- |
| `strchr()`  | Character     | First occurrence                   | Pointer     |
| `strrchr()` | Character     | Last occurrence                    | Pointer     |
| `strstr()`  | String        | Find substring                     | Pointer     |
| `strtok()`  | Delimiter     | Split into tokens                  | Pointer     |
| `strspn()`  | Character set | Count matching starting characters | Integer     |
| `strcspn()` | Character set | Count until matching character     | Integer     |

---

# 🔑 Important Concepts

## 1. Pointer Return

These functions can return pointers:

```text
strchr()
strrchr()
strstr()
strtok()
```

A pointer allows us to work with the exact location of the found text.

---

## 2. `NULL`

When a search function cannot find the requested character or substring, it can return:

```text
NULL
```

Therefore, always check the result when appropriate.

---

## 3. Delimiter

A delimiter separates different pieces of information.

Examples:

```text
c,java,dsa
```

Delimiter:

```text
,
```

Another example:

```text
student@gmail.com
```

Delimiter:

```text
@
```

---

## 4. Token

A token is an individual part obtained after splitting a string.

Conceptually:

```text
Original String
      ↓
   Split using delimiter
      ↓
   Individual tokens
```

---

# 📌 Important `strtok()` Notes

- `strtok()` modifies the original string.
- The string should be stored in a modifiable character array.
- The first call receives the string.
- Subsequent calls use `NULL`.
- The delimiter determines where the string is split.
- `NULL` indicates that there are no more tokens.

---

# 💡 Practical Applications

These functions can be useful for:

- Searching text
- Finding characters
- Finding words
- Extracting parts of strings
- Splitting sentences
- Processing comma-separated data
- Parsing email addresses
- Processing structured text
- Basic input validation
- Text processing

---

# 🔥 Practice Tasks

1. Find the first occurrence of a character using `strchr()`.

2. Find the last occurrence of a character using `strrchr()`.

3. Search for a word inside a sentence using `strstr()`.

4. Split a comma-separated string using `strtok()`.

5. Extract the username and domain from an email address using `strtok()`.

6. Split a sentence into individual words using `strtok()`.

7. Explore `strspn()` with a string containing digits and letters.

8. Explore `strcspn()` with a string containing delimiters.

---

# 📈 Day-11 Progress

```text
DAY 11
│
├── Part-A ✅
│   └── String Library Basics
│
└── Part-B 🔄
    ├── strchr()
    ├── strrchr()
    ├── strstr()
    ├── strtok()
    ├── strspn()
    └── strcspn()
```

---

## 🧠 Main Takeaway

Don't try to memorize the functions only by their names.

Understand the problem each function solves:

```text
Need first character?
        ↓
    strchr()

Need last character?
        ↓
    strrchr()

Need a substring?
        ↓
    strstr()

Need to split a string?
        ↓
    strtok()

Need to count matching characters from start?
        ↓
    strspn()

Need to count until a character appears?
        ↓
    strcspn()
```
