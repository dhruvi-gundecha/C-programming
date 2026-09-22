// => remove duplicate....

#include <stdio.h>
int main()
{
    int size;

    printf("enter the array size : ");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter the array size : ");
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] == array[j])
            {
                for (int k = j; k < size; k++)
                {
                    array[k] = array[k + 1];
                }
                j--;
                size--;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("  %d  ", array[i]);
    }
    return 0;
}