//  Important data types :-

// | Data type | Used for              | Example   |
// | --------- | --------------------- | --------- |
// | `int`     | Whole numbers         | `25`      |
// | `float`   | Decimal numbers       | `3.14`    |
// | `double`  | More precise decimals | `3.14159` |
// | `char`    | Single character      | `'A'`     |

// => THESE ARE FORMAT SPECIFIERS :-

// %d   => int
// %f   => float
// %lf  => double (commonly with scanf)
// %c   => char

#include <stdio.h>

int main()
{
    int age = 20;
    float marks = 85.5;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Marks: %.2f\n", marks);
    printf("Grade: %c\n", grade);

    return 0;
}