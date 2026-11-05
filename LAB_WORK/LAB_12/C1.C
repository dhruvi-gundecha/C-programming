
// Part :- c

// 1. Print Pascal triangle.
#include <stdio.h>
int main()
{
    int n, i, j, coef = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
            {
                coef = 1;
            }
            else
            {
                coef = coef * (i - j + 1) / j; // => formula
            }
            printf("%4d", coef);
        }
        printf("\n");
    }
    return 0;
}

// 2. Output of the following program.
#include <stdio.h>
Void main // Void main -> void main => add ()
{
    Int i = 0, j = 0;      // Int -> int
    For(i = 0; i < 5; i++) //=> For => for
    {
        For(j = 0; j < 1) //=> For => for
        {
            Break; //=> Break => break
        }
    }
    Printf("Darshan University\n");
}