// 1. Print “Hello World” without using ‘;’ symbol.

#include <stdio.h>
void main()
{
    if (printf("Hello World"))
    {
    }
}

// 2. Check whether the given number is odd or even without using % operator.

#include <stdio.h>
void main()
{
    int num;

    printf("enter the number : ");
    scanf("%d", &num);

    if ((num / 2) * 2 != num)
    {
        printf("given number is odd number . ");
    }
    else
    {
        printf("given number is even number . ");
    }
}

// 3. Multiply and divide a number by 2 without using multiplication/division operator.

#include <stdio.h>
void main()
{
    int num, r_1, r_2;

    printf("enter the number : ");
    scanf("%d", &num);
    r_1 = num << 1;
    r_2 = num >> 1;
    printf("multiplied = %d", r_1);
    printf("divided = %d", r_2);
}