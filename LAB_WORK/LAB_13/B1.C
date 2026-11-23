
// part :-B

/*
(a)
 1
 2 3
 4 5 6
 7 8 9 10
 11 12 13 14 15
 */

#include <stdio.h>
int main()
{
    int i, n, count;
    count = 1;
    for (i = 1; i <= 5; i++)
    {

        for (n = 1; n <= i; n++)
        {
            printf(" %d ", count);
            count = count + 1;
        }
        printf("\n");
    }
    return 0;
}

/*
(b)
 1
 0 1
 0 1 0
 1 0 1 0
 1 0 1 0 1
*/
#include <stdio.h>

int main()
{
    int i, n;

    for (i = 1; i <= 5; i++)
    {
        for (n = 1; n <= i; n++)
        {
            if (i == 1 || i == 4 || i == 5)
            {
                if (n % 2 == 0)
                    printf("0 ");
                else
                    printf("1 ");
            }
            else
            {
                if (n % 2 == 0)
                    printf("1 ");
                else
                    printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}

/*
(c)
   * * * * *
    * * * *
     * * *
      * *
       *
*/
#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("enter the num of rows:");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (k = n; k > i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

/*
(d)
 1
 A B
 1 2 3
 c D E F
 1 2 3 4 5 */

#include <stdio.h>
int main()
{
    int i, j, k, n;
    char ch = 'A';
    printf("enter the num of rows:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (k = n; k > i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf(" %c ", ch);
                ch++;
            }
            else
            {
                printf(" %d ", j);
            }
        }
        printf("\n");
    }
    return 0;
}
/*
(e)
 * * * * *
 *       *
 *       *
 *       *
 * * * * *
 */
#include <stdio.h>
int main()
{
    int i, n;
    for (i = 1; i <= 5; i++)
    {
        if (i == 1 || i == 5)
        {
            for (n = 1; n <= 5; n++)
            {
                printf("* ");
            }
        }
        else
        {
            for (n = 1; n <= 5; n++)
            {
                if (n == 1 || n == 5)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}