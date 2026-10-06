// Write following programs in C. (Decision Making: Nested and Ladder if) 
// 1. Find the second largest number among three user input numbers. 
#include <stdio.h>

int main()
{
    int a, b, c, second;

    printf("enter the first number : ");
    scanf("%d",&a);
    printf("enter the second number : ");
    scanf("%d",&b);
    printf("enter the third number : ");
    scanf("%d",&c);

    if (a >= b && a >= c)
    {
        if (b >= c)
            second = b;
        else
            second = c;
    }
    else if (b >= a && b >= c)
    {
        if (a >= c)
            second = a;
        else
            second = c;
    }
    else
    {
        if (a >= b)
            second = a;
        else
            second = b;
    }

    printf("Second Largest = %d", second);

    return 0;
}