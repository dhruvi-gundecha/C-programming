#include <stdio.h>
int main()
{
    int size, pos = 0, neg = 0, zero = 0;
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
        if (array[i] > 0)
        {
            pos++;
        }
        else if (array[i] < 0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }

    printf(" positive =  %d  ", pos);
    printf(" negative =  %d  ", neg);
    printf(" zero =  %d  ", zero);
    return 0;
}