#include <stdio.h>
int main()
{
    int i, j, n, k;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = n; i >= 2; i--)
    {
        for (k = n - 1; k >= i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if (i == 1 || j == 1 || i == j)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for (i = 1; i <= n; i++)
    {
        for (k = n - 1; k >= i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if (i == 1 || j == 1 || i == j)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}