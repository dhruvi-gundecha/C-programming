
#include <stdio.h>

int main()
{
    int i, n, count = 0;

    printf("Enter the array size: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the array element: ");
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n; i++)
    {
        count = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr1[j])
            {
                count++;
            }
        }

        arr2[i] = count;
    }

    for (i = 0; i < n; i++)
    {
        printf("num = %d, count = %d\n", arr1[i], arr2[i]);
    }

    return 0;
}
