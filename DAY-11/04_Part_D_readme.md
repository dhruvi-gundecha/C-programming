# C Day-11 Part-D — String Analyzer

## 📌 Project Description

This project is a **menu-driven String Analyzer program written in C**.

It performs different operations on a string using:

- Character arrays
- String handling
- `ctype.h` functions
- Loops and conditions
- Separate functions
- Basic string manipulation

The program is designed to improve **C string logic and problem-solving skills**.

---

## 🎯 Objectives

- Practice string handling in C
- Understand character classification
- Work with `fgets()`
- Use `strlen()` and character-based logic
- Practice `isalpha()`, `isdigit()`, `isspace()`, `toupper()`, and `tolower()`
- Implement string modification without dynamic memory
- Improve function-based programming

---

## ⚙️ Operations

The program provides the following menu:

```text
1. Count Vowels, Consonants, Digits & Special Characters
2. Count Words
3. Find Frequency of a Character
4. Find First & Last Occurrence of a Character
5. Remove All Occurrences of a Character
6. Replace a Character
7. Check Whether String Contains Only Alphabets
8. Convert First Letter of Each Word to Uppercase
9. Reverse Each Word
10. Exit
```

---

## 🧠 Concepts Used

### Character Classification

```c
isalpha()
isdigit()
isspace()
```

### Character Conversion

```c
toupper()
tolower()
```

### String Input

```c
fgets()
```

### String Traversal

The string is traversed character by character until:

```c
'\0'
```

is reached.

---

## 📂 Program Structure

```text
String Analyzer
│
├── COUNT_TYPES()
├── COUNT_WORDS()
├── FREQUENCY()
├── FIRST_LAST()
├── REMOVE_CHARACTER()
├── REPLACE_CHARACTER()
├── CHECK_ALPHABETS()
├── CAPITALIZE_WORDS()
└── REVERSE_WORDS()
```

---

## 💻 Example

### Input

```text
ENTER STRING : Hello World 123
```

### Menu

```text
========== MENU ==========

1. COUNT VOWELS, CONSONANTS, DIGITS & SPECIAL
2. COUNT WORDS
3. FIND FREQUENCY OF A CHARACTER
4. FIND FIRST & LAST OCCURRENCE
5. REMOVE ALL OCCURRENCES OF A CHARACTER
6. REPLACE A CHARACTER
7. CHECK WHETHER STRING CONTAINS ONLY ALPHABETS
8. CONVERT FIRST LETTER OF EACH WORD TO UPPERCASE
9. REVERSE EACH WORD
10. EXIT
```

### Example Operation

```text
ENTER YOUR CHOICE : 6

ENTER CHARACTER TO REPLACE : o
ENTER NEW CHARACTER : x

STRING AFTER REPLACE = Hellx Wxrld 123
```

---

## 📚 What I Learned

- How to traverse a string using a loop
- How to classify characters
- How to count different types of characters
- How to count words
- How to find character frequency
- How to find first and last occurrences
- How to remove characters from a string
- How to replace characters
- How to modify the first character of every word
- How to reverse individual words

---

## 🚫 Current Limitations

This project intentionally does **not** use:

- Pointers explicitly
- Dynamic string allocation
- Advanced data structures

The focus is on strengthening **C string fundamentals and logic**.

---

## 🚀 Future Improvements

Possible future additions:

- Find longest word
- Find shortest word
- Check palindrome
- Sort words alphabetically
- Remove duplicate characters
- Find duplicate words
- Count frequency of every character
- Prefix and suffix operations
- Advanced string searching

---

## 👨‍💻 Learning Progress

**Day:** 11
**Part:** D
**Topic:** Advanced C String Practice
**Language:** C
**Level:** Intermediate → Higher

---

## 📝 Note

This program is part of my personal C programming and DSA learning journey.

The goal is not only to complete the program but to understand the logic behind every operation and gradually improve problem-solving skills.
