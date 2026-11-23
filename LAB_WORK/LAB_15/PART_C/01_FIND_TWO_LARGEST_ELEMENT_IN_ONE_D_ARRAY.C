// 1. Find two largest elements in a one dimensional array.
#include <stdio.h>
int main()
{
    int largest, second_largest, size;

    printf("enter the array size : ");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter the array elements : ");
        scanf("%d", &array[i]);
    }
    largest = second_largest = array[0];

    for (int i = 0; i < size; i++)
    {
        if (largest <= array[i])
        {
            largest = array[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (second_largest <= array[i] && array[i] < largest)
        {
            second_largest = array[i];
        }
    }
    printf("first largest = %d\n", largest);
    printf("second largest = %d\n", second_largest);
    return 0;
}