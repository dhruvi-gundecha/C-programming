#include <stdio.h>
int main()
{
    int size;

    printf("enter the array size : ");
    scanf("%d", &size);

    int arr1[size], arr2[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter the array element : ");
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr1[i];
    }
    printf("array element's are copied :\n");
    for (int i = 0; i < size; i++)
    {
        printf("  %d  ", arr2[i]);
    }
    return 0;
}