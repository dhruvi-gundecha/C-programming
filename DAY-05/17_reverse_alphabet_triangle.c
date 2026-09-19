#include <stdio.h>
int main()
{
    int i, k, n;
    char ch = 'A';
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (k = 1; k <= i; k++)
        {
            printf("%c ", ch + k - 1);
        }
        printf("\n");
    }
    return 0;
}
