#include <stdio.h>
int main()
{
    int n1, n2;

    printf("ENTER THE FIRST ARRAY SIZE  : ");
    scanf("%d", &n1);
    printf("ENTER THE SECOND ARRAY SIZE : ");
    scanf("%d", &n2);
    int arr1[n1], arr2[n2], arr3[n1 + n2];

    for (int i = 0; i < n1; i++)
    {
        printf("ENTER THE FIRST ARRAY ELEMENT  : ");
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < n2; i++)
    {
        printf("ENTER THE SECOND ARRAY ELEMENT : ");
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n1; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        arr3[i + n1] = arr2[i];
    }

    for (int i = 0; i < (n1 + n2); i++)
    {
        printf("  %d  ", arr3[i]);
    }
    return 0;
}