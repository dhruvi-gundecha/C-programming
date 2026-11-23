// 5. Read five person height and weight and count the number of person having height
//  greater than 170 and weight less than 50.

#include <stdio.h>
int main()
{
    int array1[5], array2[5], i, count = 0;

    for (i = 0; i < 5; i++)
    {
        printf("enter the person height : ");
        scanf("%d", &array1[i]);
        printf("enter the person weight : ");
        scanf("%d", &array2[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (array1[i] > 170 && array2[i] < 50)
        {
            count++;
        }
    }

    printf(" count of person having height greater than 170 and weight less than 50 = %d", count);

    return 0;
}