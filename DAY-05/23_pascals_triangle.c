// 22. WAP to print Pascal triangle.

#include <stdio.h>
int main()
{
    int n;

    printf("enter the rows :");
    scanf("%d", &n);

    int arry[n][n];

    for (int i = 0; i < n; i++)
    {

        for (int k = n; k > i + 1; k--)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            arry[i][j] = 0;
            if (i == 0 || j == 0 || i == j)
            {
                arry[i][j] = 1;
                printf("%d", arry[i][j]);
            }
            else
            {
                arry[i][j] = arry[i - 1][j] + arry[i - 1][j - 1];
                printf("%d", arry[i][j]);
            }
        }

        printf("\n");
    }
    return 0;
}