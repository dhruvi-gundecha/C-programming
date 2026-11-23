
#include <stdio.h>

int main()
{
    int i, n, count;

    printf("Enter the array size: ");
    scanf("%d", &n);

    int arr1[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the array element: ");
        scanf("%d", &arr1[i]);
    }
    count = arr1[0];

    for (i = 0; i < n; i++)
    {
        if (count != arr1[i])
        {
            printf("%d  ", count);
            count++;
        }
        count++;
    }
    return 0;
}
