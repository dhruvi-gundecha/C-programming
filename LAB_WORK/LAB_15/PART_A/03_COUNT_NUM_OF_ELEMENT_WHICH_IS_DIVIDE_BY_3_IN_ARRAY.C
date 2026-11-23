#include <stdio.h>
int main()
{
    int array[5];
    int i, count;
    count = 0;
    for (i = 0; i < 5; i++)
    {
        printf("enter the num:");
        scanf("%d", &array[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (array[i] % 3 == 0)
        {
            count++;
        }
    }
    printf("num  of element divisible by 3 = %d", count);
    return 0;
}