#include <stdio.h>

int main()
{
    int number1 = 10;
    int number2 = 20;

    int *ptr1 = &number1;
    int *ptr2 = &number2;

    printf("NUMBER 1 : %d\n", *ptr1);
    printf("NUMBER 2 : %d\n", *ptr2);

    return 0;
}