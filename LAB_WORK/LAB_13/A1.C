/*
(a)
*****
****
***
**
*
*/
#include <stdio.h>
int main()
{
    int i, n;
    for (i = 1; i <= 5; i++)
    {
        for (n = 5; n >= i; n--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

/*
(b)
12345
1234
123
12
1
*/
#include <stdio.h>
int main()
{
    int i, n;
    for (i = 5; i >= 1; i--)
    {
        for (n = 1; n <= i; n++)
        {
            printf("%d", n);
        }
        printf("\n");
    }
    return 0;
}

/*
(c)
    *
   * *
  * * *
 * * * *
* * * * *
*/
#include <stdio.h>
int main()
{
    int i, j, k, n;
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
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

/*
(d)
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
*/
#include <stdio.h>
int main()
{
    int i, j, k, n;
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
            printf(" %d ", j);
        }
        printf("\n");
    }
    return 0;
}
