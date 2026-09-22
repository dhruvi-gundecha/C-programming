// =>Right rotate :-

// => example :-
// Original:       10 20 30 40 50
// Right rotate:   50 10 20 30 40

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

    printf("enter the position you want to right rotate :");
    scanf("%d", &rotate);

    for (int i = 1; i <= rotate; i++)
    {
        int temp = array[size - 1];
        for (int j = size - 1; j > 0; j--)
        {
            array[j] = array[j - 1];
        }
        array[0] = temp;
    }

    for (int i = 0; i < size; i++)
    {
        printf("  %d  ", array[i]);
    }

    return 0;
}