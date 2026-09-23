// int arr[5] = {10, 20, 30, 40, 50};
//
// Index:   0    1    2    3    4
//         ┌────┬────┬────┬────┬────┐
// Value:  │ 10 │ 20 │ 30 │ 40 │ 50 │
//         └────┴────┴────┴────┴────┘

// Traversal means:

// => Visit every element of the array one by one.

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