#include <stdio.h>
int main()
{
    int num1, num2;

    printf("enter the first number : ");
    scanf("%d", &num1);
    printf("enter the second number : ");
    scanf("%d", &num2);

    if (num1 > num2)
        printf("num1 is greater then num2");
    else
        printf("num1 is greater not then num2");

    return 0;
}

// ------------- Key Point's -------------

// for example :- num1 = 20 num2 = 10
// if ( num1 > num2 ) --> 20 > 10
// yes then num1 is greater
// no then num1 is not greater