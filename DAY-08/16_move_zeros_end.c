// => move zeros to end....

#include <stdio.h>
int main()
{
    int size, count = 0;

    printf("enter the array size : ");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter the array element : ");
        scanf("%d", &array[i]);
        if (array[i] == 0)
        {
            count++;
        }
    }

    for (int i = 0; i < size - count; i++)
    {
        if (array[i] == 0)
        {
            for (int j = i; j < size - 1; j++)
            {
                array[j] = array[j + 1];
            }
            array[size - 1] = 0;
            i--;
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("  %d  ", array[i]);
    }
    return 0;
}