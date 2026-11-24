#include <stdio.h>
void main()
{
    int array[3][3];
    int i, j, sum = 0;
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
            if (i == j)
            {
                sum += array[i][j];
            }
        }
    }

    printf("diagonal elements sum =  %d  ", sum);
}