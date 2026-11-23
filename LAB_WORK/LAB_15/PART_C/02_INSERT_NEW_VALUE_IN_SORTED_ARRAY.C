// 2. Insert new value in the sorted array.
#include <stdio.h>
int main()
{
    int size, val;

    printf("enter the array size : ");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter the array elements : ");
        scanf("%d", &array[i]);
    }

    size++;

    printf("enter the value you want to insert : ");
    scanf("%d", &val);

    for (int i = 0; i < size; i++)
    {
        if (array[i] < val && array[i + 1] > val)
        {
            for (int k = size; k > i + 1; k--)
            {
                array[k] = array[k - 1];
            }
            array[i + 1] = val;
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf(" %d ", array[i]);
    }
    return 0;
}