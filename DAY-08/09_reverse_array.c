#include <stdio.h>
int main()
{
    int size, num;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("ENTER THE ARRAY ELEMENT : ");
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < size / 2; i++)
    {
        int temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }

    for (int i = 0; i < size; i++)
    {
        printf("  %d  ", array[i]);
    }
    return 0;
}