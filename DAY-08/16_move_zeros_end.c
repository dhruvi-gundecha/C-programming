// => move zeros to end....
//  => error => cpu limit exceeded...
// => logically it is correct...
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