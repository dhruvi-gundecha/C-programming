// FOR SPACE TWO SPACE LOOP COMBINED :-
#include <stdio.h>
int main()
{
    int i, j, n, k;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (k = 1; k <= 2 * (n - i); k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (k = 1; k <= 2 * (n - i); k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// FOR SPACE TWO SEPRATE SPACE LOOP  :-

#include <stdio.h>
int main()
{
    int i, j, n, k;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (k = n - 1; k >= i; k--)
        {
            printf(" ");
        }
        for (k = n - 1; k >= i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (k = n - 1; k >= i; k--)
        {
            printf(" ");
        }
        for (k = n - 1; k >= i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}