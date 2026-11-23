#include <stdio.h>
int main()
{
    int array[5];
    int i, negative;
    negative = 0;
    for (i = 0; i < 5; i++)
    {
        printf("enter the num:");
        scanf("%d", &array[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (array[i] < 0)
        {
            negative++;
        }
    }
    printf("negative = %d", negative);
    return 0;
}