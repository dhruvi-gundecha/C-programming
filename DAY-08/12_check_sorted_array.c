// => check that array is sorted or not....

#include <stdio.h>
int main()
{
    int size;

    printf("enter the array size : ");
    scanf("%d", &size);

    int array[size], flag = 0;

    for (int i = 0; i < size; i++)
    {
        printf("enter the array size : ");
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < size - 1; i++)
    {

        if (array[i] < array[i + 1])
        {
            continue;
        }
        else
        {
            flag = 1;
            printf("the array is not sorted...");
            break;
        }
    }
    if (flag == 0)
    {
        printf("the array is sorted....");
    }
    return 0;
}