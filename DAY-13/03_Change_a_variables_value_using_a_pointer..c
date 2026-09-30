#include <stdio.h>

int main()
{
    int number = 10;
    int *ptr = &number;
    int change;
    printf("NUMBER VALUE : %d\n", number);

    printf("enter the new number : ");
    scanf("%d", &change);

    *ptr = change;
    printf("NEW NUMBER : %d\n", *ptr);

    return 0;
}