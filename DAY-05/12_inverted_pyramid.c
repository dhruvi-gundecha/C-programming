#include <stdio.h>
int main()
{
    int i, n, j, k;

    printf("enter the number of rows : ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        for (k = n - 1; k >= i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}