// => element frequency means how many times an elements appears in an array...

#include <stdio.h>
int main()
{

    int size, element, flag = 0;

    printf("enter the array size : ");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter the array element : ");
        scanf("%d", &array[i]);
    }

    printf("enter the array element you want frequency : ");
    scanf("%d", &element);

    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            flag++;
        }
    }

    if (flag == 0)
    {
        printf("given number is not founded.....");
    }
    else
    {
        printf("given number frequency = %d ", flag);
    }
    return 0;
}