#include <stdio.h>
int main()
{
    int num;

    printf("enter the number : ");
    scanf("%d", &num);

    if (num > 0)
        printf("num is positive");
    else
        printf("num is negative");

    return 0;
}

// ------------- Key Point's -------------

// for example :- num = -2
// if ( num > 0 ) --> -2 > 0
// yes then num is positive
// no then num is negative