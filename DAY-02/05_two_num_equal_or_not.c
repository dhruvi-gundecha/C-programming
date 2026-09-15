#include <stdio.h>
int main()
{
    int num1, num2;

    printf("enter the first number : ");
    scanf("%d", &num1);
    printf("enter the second number : ");
    scanf("%d", &num2);

    if (num1 == num2)
        printf("GIVEN TWO NUMBER'S ARE EQUAL.");
    else
        printf("GIVEN TWO NUMBER'S ARE NOT EQUAL.");

    return 0;
}

// ------------- Key Point's -------------

// for example :- num1 = 10 num2 = 10
// if ( num1 == num2 ) --> 10 == 10
// yes then equal
// no then not equal