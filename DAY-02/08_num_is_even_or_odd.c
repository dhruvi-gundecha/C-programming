#include <stdio.h>
int main()
{
    int num;

    printf("enter the number : ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("number is even.");
    else
        printf("number is odd.");

    return 0;
}

// ------------- Key Point's -------------

// for example :- num = 7
// if ( num % 2 == 0 ) --> -2 > 7 % 2 == 0
// yes then num is even
// no then num is odd