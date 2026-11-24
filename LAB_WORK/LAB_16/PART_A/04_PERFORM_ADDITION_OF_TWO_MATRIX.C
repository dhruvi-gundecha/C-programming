// 4. Perform Addition of two matrices.

#include <stdio.h>
void main()
{
    int array1[2][2];
    int array2[2][2];
    int i, j, sum, sum1, sum2;
    sum = 0;
    sum1 = 0;
    sum2 = 0;
    printf("matrix-1 :\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("enter the number:");
            scanf("%d", &array1[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum1 = sum1 + array1[i][j];
        }
    }
    printf("matrix-2 :\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("enter the number:");
            scanf("%d", &array2[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum2 = sum2 + array2[i][j];
        }
    }
    sum = sum1 + sum2;
    printf("sum = %d\n", sum);
}