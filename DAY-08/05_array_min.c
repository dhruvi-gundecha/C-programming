#include <stdio.h>
int main()
{
    int size;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &size);

    int array[size], min;

    for (int i = 0; i < size; i++)
    {
        printf("ENTER THE ARRAY ELEMENT : ");
        scanf("%d", &array[i]);
    }

    min = array[0];

    for (int i = 0; i < size; i++)
    {
        if (min >= array[i])
        {
            min = array[i];
        }
    }

    printf(" min =  %d  ", min);
    return 0;
}