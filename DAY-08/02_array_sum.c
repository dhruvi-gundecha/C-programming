#include <stdio.h>
int main()
{
    int size, sum = 0;
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
        sum = sum + array[i];
    }

    printf(" sum =  %d  ", sum);
    return 0;
}