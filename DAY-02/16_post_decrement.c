#include <stdio.h>
int main()
{
    int a, b;

    printf("enter the num : ");
    scanf("%d", &a);

    b = a--;

    printf(" a = %d and b = %d ", a, b);

    return 0;
}

// ------------- Key Point's -------------

// for example :- a = 10
// b = a++ => b = 10 and now a = 9
