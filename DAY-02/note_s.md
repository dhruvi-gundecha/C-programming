--> What is an Operator ?

--An operator is a symbol that tells the computer to perform an operation on one or more values.

For example:

a = 10;
b = 20;
c = a + b;

--Here:

+ → Operator
a and b → Operands (values on which the operator works)

----------------------------------------------------------------

--> 8 main types of operators:

1. Arithmetic Operators
2. Relational Operators
3. Logical Operators
4. Assignment Operators
5. Increment & Decrement Operators
6. Bitwise Operators
7. Conditional (Ternary) Operator
8. Special Operators

----------------------------------------------------------------

1. Arithmetic Operators :

These operators perform mathematical calculations.

| Operator | Meaning             | Example      |
| -------- | ------------------- | ------------ |
|  +       | Addition            |  5 + 3 = 8   |
|  -       | Subtraction         |  5 - 3 = 2   |
|  *       | Multiplication      |  5 * 3 = 15  |
|  /       | Division            |  10 / 2 = 5  |
|  %       | Modulus (Remainder) |  10 % 3 = 1  |

----------------------------------------------------------------

2. Relational Operators

These compare two values.

They always return:

1 → True
0 → False

| Operator | Meaning               |
| -------- | --------------------- |
|  >       | Greater than          |
|  <       | Less than             |
|  >=      | Greater than or equal |
|  <=      | Less than or equal    |
|  ==      | Equal to              |
|  !=      | Not equal             |


----------------------------------------------------------------
3. Logical Operators

Used to combine conditions.

| Operator | Meaning |
| -------- | ------- |
|  &&      | AND     |
|  ||      | OR      |
|  !       | NOT     |

for example :-

| A | B | A || B | A && B |
| - | - | ------ | ------ |
| 0 | 0 | 0      | 0      |
| 0 | 1 | 1      | 0      |
| 1 | 0 | 1      | 0      |
| 1 | 1 | 1      | 1      |


--> key point : "and operator" return true only when both condition are true
                "or  operator" returns true when AT LEAST ONE condition is true.
                "not operator" Reverses the result.

for example :

int a = 10;

a > 5    --> TRUE

!(a > 5) --> FALSE --> 0

----------------------------------------------------------------
4. Assignment Operators

Used to assign values.

| Operator | Example  | Meaning      |
| -------- | -------- | ------------ |
|  =       |  a = 5   | Assign value |
|  +=      |  a += 3  |  a = a + 3   |
|  -=      |  a -= 3  |  a = a - 3   |
|  *=      |  a *= 3  |  a = a * 3   |
|  /=      |  a /= 3  |  a = a / 3   |
|  %=      |  a %= 3  |  a = a % 3   |

----------------------------------------------------------------
5. Increment & Decrement Operators

Increase or decrease a variable by 1.

Increment : 
pre  increment : ++a
post increment : a++

Decrement : 
pre  decrement : --a
post decrement : a--

* Post Increment
--> Use first
--> Increase later

* Pre Increment
--> Increase first
--> Use later
----------------------------------------------------------------
6. Bitwise Operators

These work directly on the binary (0s and 1s) representation of numbers.

| Operator | Meaning     | Example   | Result |
| -------- | ----------- | --------- | ------ |
|  &       | AND         |  10 & 6   |  2     |
|  |       | OR          |  10 | 6   |  14    |
|  ^       | XOR         |  10 ^ 6   |  12    |
|  <<      | Left Shift  |  10 << 1  |  20    |
|  >>      | Right Shift |  10 >> 1  |  5     |

for example :-

a=10,b=6;

    printf("AND = %d\n",a&b);
    printf("OR = %d\n",a|b);
    printf("XOR = %d\n",a^b);
    printf("LEFT SHIFT = %d\n",a<<1);
    printf("RIGHT SHIFT = %d\n",a>>1);

AND = 2
OR = 14
XOR = 12
LEFT SHIFT = 20
RIGHT SHIFT = 5

----------------------------------------------------------------
7. Conditional (Ternary) Operator

A short form of if-else.

condition ? value_if_true : value_if_false;
int max = (a > b) ? a : b;

----------------------------------------------------------------
8. Special Operators

Some commonly used special operators are:

| Operator | Purpose                                     |
| -------- | ------------------------------------------- |
|  sizeof  | Returns the size of a data type or variable |
|  &       | Address-of operator                         |
|  *       | Pointer dereference                         |
|  ,       | Comma operator                              |

----------------------------------------------------------------
--> Operator Precedence (Highest to Lowest)

--When multiple operators are used in one expression, C follows a priority order.

                    C OPERATOR PRECEDENCE TABLE

| No | Operators | Type | Associativity |
|----|-----------|------|---------------|
| 1 | `()` `[]` `.` `->` `postfix++` `postfix--` | Parentheses & Selection, Post Increment/Decrement | Left to Right |
| 2 | `++` `--` `+` `-` `!` `~` `(type)` `*` `&` `sizeof` | Unary Operators | Right to Left |
| 3 | `*` `/` `%` | Arithmetic Operators | Left to Right |
| 4 | `+` `-` | Arithmetic Operators | Left to Right |
| 5 | `<<` `>>` | Shift Operators | Left to Right |
| 6 | `<` `<=` `>` `>=` | Relational Operators | Left to Right |
| 7 | `==` `!=` | Equality Operators | Left to Right |
| 8 | `&` | Bitwise AND | Left to Right |
| 9 | `^` | Bitwise XOR | Left to Right |
| 10 | `|` | Bitwise OR | Left to Right |
| 11 | `&&` | Logical AND | Left to Right |
| 12 | `||` | Logical OR | Left to Right |
| 13 | `?:` | Ternary Operator | Right to Left |
| 14 | `=` `+=` `-=` `*=` `/=` `%=` `&=` `^=` `|=` `<<=` `>>=` | Assignment Operators | Right to Left |
| 15 | `,` | Comma Operator | Left to Right |

**shortcut** :-
Postfix → Unary → Multiply → Add → Shift → Relational → Equality → Bitwise (& ^ |) → Logical (&& ||) → Ternary → Assignment → Comma


() ==> always has highest priority.
----------------------------------------------------------------
--> Summary :-

| Operator Type       | Main Purpose                                    |
| ------------------- | ----------------------------------------------- |
| Arithmetic          | Perform calculations                            |
| Relational          | Compare values                                  |
| Logical             | Combine conditions                              |
| Assignment          | Store or update values                          |
| Increment/Decrement | Increase or decrease by 1                       |
| Bitwise             | Manipulate binary bits                          |
| Conditional         | Short form of `if-else`                         |
| Special             | Memory, pointers, size, and other special tasks |

----------------------------------------------------------------
Type conversion :-

Type conversion is the process of changing a value from one data type to another, split into implicit and explicit conversion. 

Automatic: Done by the compiler or interpreter without user help.
manual: Moves from a smaller type to a larger type (like int to float) to keep data safe.

Manual: Done by the programmer using a cast operator or function.
Casting: Forces a value into a specific type, like (int)myFloat.