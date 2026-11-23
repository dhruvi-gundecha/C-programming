#include <stdio.h>
int main()
{
    int n;

    printf("ENTER THE ARRAY SIZE : ");
    scanf("%d", &n);

    int arr1[n];

    for (int i = 0; i < n; i++)
    {
        printf("ENTER THE ARRAY ELEMENT : ");
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr1[i] == arr1[j])
            {
                for (int k = j; k < n - 1; k++)
                {
                    arr1[k] = arr1[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("  %d  ", arr1[i]);
    }
    return 0;
}