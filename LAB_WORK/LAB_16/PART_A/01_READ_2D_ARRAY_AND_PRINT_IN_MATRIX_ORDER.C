// 1. Read values in two-dimensional array and print them in matrix form.

#include <stdio.h>
void main()
{
    int array[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter the number:");
            scanf("%d", &array[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("  %d  ", array[i][j]);
        }
        printf("\n");
    }
}