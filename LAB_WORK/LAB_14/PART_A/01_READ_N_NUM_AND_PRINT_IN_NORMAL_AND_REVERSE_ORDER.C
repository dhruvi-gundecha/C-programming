#include <stdio.h>
int main()
{
    int array[5], i;

    for (i = 0; i < 5; i++)
    {
        printf("enter the num:");
        scanf("%d", &array[i]);
    }
    for (i = 4; i >= 0; i--)
    {
        printf("%d  ", array[i]);
    }

    return 0;
}