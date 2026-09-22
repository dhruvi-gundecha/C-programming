#include <stdio.h>
int main()
{
    int size;

    printf("enter the size of array : ");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("ENTER THE ARRAY ELEMENT : ");
        scanf("%d", &array[i]);
    }

    int large = array[0], second_large = array[0];

    for (int i = 0; i < size; i++)
    {
        if (large < array[i])
        {
            large = array[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (second_large < array[i] && array[i] < large)
        {
            second_large = array[i];
        }
    }

    printf("%d", second_large);
    return 0;
}