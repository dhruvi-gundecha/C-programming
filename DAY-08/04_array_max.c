#include <stdio.h>
int main()
{
    int size;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &size);

    int array[size], max;

    for (int i = 0; i < size; i++)
    {
        printf("ENTER THE ARRAY ELEMENT : ");
        scanf("%d", &array[i]);
    }

    max = array[0];

    for (int i = 0; i < size; i++)
    {
        if (max <= array[i])
        {
            max = array[i];
        }
    }

    printf(" max =  %d  ", max);
    return 0;
}