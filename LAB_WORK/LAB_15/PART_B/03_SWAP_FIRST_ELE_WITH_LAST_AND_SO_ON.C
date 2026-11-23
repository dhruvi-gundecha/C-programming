#include <stdio.h>
int main()
{
    int size;

    printf("ente the array size : ");
    scanf("%d", &size);

    int arr1[size], count = size;

    for (int i = 0; i < size; i++)
    {
        printf("enter the array elements : ");
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i <= (size / 2); i++)
    {
        int temp = arr1[i];
        arr1[i] = arr1[count - 1];
        arr1[count - 1] = temp;

        count--;
    }

    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr1[i]);
    }
    return 0;
}