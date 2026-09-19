#include <stdio.h>
int main()
{
    int i, k, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (k = n - 1; k >= i; k--)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (k = n - 1; k >= i; k--)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}