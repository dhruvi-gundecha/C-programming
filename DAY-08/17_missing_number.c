#include <stdio.h>
int main()
{

    int size;

    printf("enter the size of array : ");
    scanf("%d", &size);

    int array[size], sum = 0, expected = 0, diff;

    for (int i = 0; i < size; i++)
    {
        printf("enter the array element if(you don't want num then enter zero): ");
        scanf("%d", &array[i]);
        expected += i + 1;
    }

    for (int i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }

    diff = expected - sum;
    printf(" expected number = %d  ", expected);
    printf(" sum number = %d  ", sum);
    printf(" diff number = %d  ", diff);
    return 0;
}