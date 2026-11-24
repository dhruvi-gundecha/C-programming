#include <stdio.h>
int main()
{
    int m1, n1, m2, n2;

    printf("ENTER THE FIRST ARRAY ROWS :");
    scanf("%d", &m1);
    printf("ENTER THE FIRST ARRAY COLUMNS :");
    scanf("%d", &n1);

    printf("ENTER THE SECOND ARRAY ROWS :");
    scanf("%d", &m2);
    printf("ENTER THE SECOND ARRAY COLUMNS :");
    scanf("%d", &n2);
    int arr1[m1][n1], arr2[m2][n2];

    if (n1 == m2)
    {
        printf("MULTIPLICATION MATRIX IS EXIST. \n");
        int arr3[m1][n2];

        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                printf("ENTER THE FIRST ARRAY ELEMENT : ");
                scanf("%d", &arr1[i][j]);
            }
        }

        for (int i = 0; i < m2; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                printf("ENTER THE SECOND ARRAY ELEMENT : ");
                scanf("%d", &arr2[i][j]);
            }
        }

        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                arr3[i][j] = 0;
                for (int k = 0; k < n1; k++)
                {
                    arr3[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }

        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                printf(" %d ", arr3[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}