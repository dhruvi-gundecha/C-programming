// =>left rotate :-

// => example :-
// Left rotate by 2

// Starting:
// [10, 20, 30, 40, 50]

// After 1 rotation:
// [20, 30, 40, 50, 10]

// After 2 rotations:
// [30, 40, 50, 10, 20]

#include <stdio.h>
int main()
{

    int size, rotate;

    printf("enter the size of an array you want :");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter the array element :");
        scanf("%d", &array[i]);
    }

    printf("enter the position you want to left rotate :");
    scanf("%d", &rotate);

    for (int i = 1; i <= rotate; i++)
    {
        int temp = array[0];
        for (int j = 0; j < size - 1; j++)
        {
            array[j] = array[j + 1];
        }
        array[size - 1] = temp;
    }

    for (int i = 0; i < size; i++)
    {
        printf("  %d  ", array[i]);
    }

    return 0;
}