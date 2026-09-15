#include <stdio.h>
int main()
{
    int num;

    printf("enter the number : ");
    scanf("%d", &num);

    if (num > 1 && num < 100)
        printf("num is lies between 1 to 100");
    else
        printf("num is not lies between 1 to 100");

    return 0;
}

// ------------- Key Point's -------------

// program : num lies netween 1 to 100 or not
// for example :- num = 90
// if ( num > 1 && num < 100 ) --> 90 > 1 && 90 < 100
// yes then num1 is between 1 to 100
// no then num1 is not between 1 to 100