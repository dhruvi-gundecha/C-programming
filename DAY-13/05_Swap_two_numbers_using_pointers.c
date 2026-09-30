#include <stdio.h>

int main()
{
    int number1 = 10;
    int number2 = 20;

    int *ptr1 = &number1;
    int *ptr2 = &number2;

    printf("number 1 = %d\n", *ptr1);
    printf("number 2 = %d\n", *ptr2);

    int temp;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("SWAPPED NUMBER :- \n");
    printf("number 1 = %d\n", *ptr1);
    printf("number 2 = %d\n", *ptr2);
    return 0;
}