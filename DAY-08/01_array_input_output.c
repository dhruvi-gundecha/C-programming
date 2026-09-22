#include <stdio.h>
int main()
{
    int size;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("ENTER THE ARRAY ELEMENT : ");
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("  %d  ", array[i]);
    }

    return 0;
}