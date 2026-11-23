#include <stdio.h>
int main()
{
    int array[5], i;
    int max, min, sum = 0;
    float ave = 1.0;

    for (i = 0; i < 5; i++)
    {
        printf("enter the array element : ");
        scanf("%d", &array[i]);
    }

    max = min = array[0];
    for (i = 0; i < 5; i++)
    {
        sum = sum + array[i];
    }

    for (i = 0; i < 5; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }

    for (i = 0; i < 5; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    ave = (float)sum / 5.0;

    printf(" max = %d", max);
    printf(" min = %d", min);
    printf(" ave = %f", ave);
    printf(" sum = %d", sum);

    return 0;
}