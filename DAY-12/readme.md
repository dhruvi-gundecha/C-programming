# C Structure Basics

This section covers the fundamentals of **Structures in C**.

## 📚 Topics Covered

- What is a Structure?
- Structure Declaration
- Structure Variables
- Accessing Structure Members
- Dot (`.`) Operator
- Structure Initialization
- Taking Input in a Structure
- Displaying Structure Data
- Multiple Structure Variables
- Array of Structures
- Structure with Functions

## 🧠 What is a Structure?

A **structure** is a user-defined data type in C that allows us to store different types of data under one name.

For example, student information can contain:

- Student ID
- Student Name
- Student Marks

These different values can be grouped together using a structure.

## 🔑 Important Syntax

```c
struct StructureName
{
    data_type member1;
    data_type member2;
    data_type member3;
};
```

## 🔹 Structure Variable

A structure variable is used to store the actual data of a structure.

```text
struct StructureName variableName;
```

## 🔹 Accessing Members

The **dot (`.`) operator** is used to access members of a structure.

```text
variableName.memberName
```

## 🔹 Array of Structures

An array of structures allows us to store information about multiple records.

Example uses:

- Multiple students
- Multiple employees
- Multiple books
- Multiple products

## 🎯 Practice Programs

1. Student Information
2. Employee Information
3. Book Information
4. Product Information
5. Multiple Student Records using Array of Structures

## 💡 Why Structures are Important

Structures are widely used in C for organizing related data.

They are especially important for **Data Structures and Algorithms**, because structures are commonly used when creating:

- Linked Lists
- Stacks
- Queues
- Trees
- Graphs
- Nodes
