#include <stdio.h>
int main()
{
    int array[5], i, sum = 0, count = 0;
    float ave;

    for (i = 0; i < 5; i++)
    {
        printf("enter the array element : ");
        scanf("%d", &array[i]);
    }

    for (i = 0; i < 5; i++)
    {
        sum = sum + array[i];
    }

    ave = (float)sum / 5.0;

    for (i = 0; i < 5; i++)
    {
        if (ave < array[i])
        {
            count++;
        }
    }

    printf(" total number's higher than average = %d", count);

    return 0;
}