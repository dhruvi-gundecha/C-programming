// 2. Count number of positive, negative and zero elements from 3 X 3 matrix.

#include <stdio.h>
void main()
{
    int array[3][3];
    int i, j, positive, negative, zero;
    positive = 0;
    negative = 0;
    zero = 0;
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
            if (array[i][j] < 0)
            {
                negative++;
            }
            else if (array[i][j] > 0)
            {
                positive++;
            }
            else
            {
                zero++;
            }
        }
    }
    printf("positive= %d\n", positive);
    printf("negative= %d\n", negative);
    printf("zero= %d\n", zero);
}