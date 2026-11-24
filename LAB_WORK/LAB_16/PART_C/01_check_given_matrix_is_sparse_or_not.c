//        Col 0  Col 1  Col 2  Col 3  Col 4
// Row 0 [  0      0      3      0      4  ]
// Row 1 [  0      0      5      7      0  ]
// Row 2 [  0      0      0      0      0  ]
// Row 3 [  0      2      6      0      0  ]

#include <stdio.h>
void main()
{
    int array[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter the number:");
            scanf("%d", &array[i][j]);
        }
    }
    int zero = 0, nonzero = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (array[i][j] == 0)
                zero++;
            else
                nonzero++;
        }
    }

    if (zero > nonzero)
        printf("Sparse Matrix");
    else
        printf("Not a Sparse Matrix");
}