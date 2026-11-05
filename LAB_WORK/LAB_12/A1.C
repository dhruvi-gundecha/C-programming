// Part :-A

// 1. Print following patterns
/*(a)
 *
 **
 ***
 ****
 *****
 */
#include <stdio.h>
int main()
{
    int i, n;
    for (i = 1; i <= 5; i++)
    {
        for (n = 1; n <= i; n++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}

/*(b)
        1
        12
        123
        1234
        12345
*/
#include <stdio.h>
int main()
{
    int i, n;
    for (i = 1; i <= 5; i++)
    {
        for (n = 1; n <= i; n++)
        {
            printf("%d", n);
        }
        printf("\n");
    }
    return 0;
}

/*(c)
        5
        54
        543
        5432
        54321
*/
#include <stdio.h>
int main()
{
    int i, n;
    for (i = 5; i >= 1; i--)
    {
        for (n = 5; n >= i; n--)
        {
            printf("%d", n);
        }
        printf("\n");
    }
    return 0;
}

/*(d)
        1
        22
        333
        4444
        55555
*/
#include <stdio.h>
int main()
{
    int i, n;
    for (i = 1; i <= 5; i++)
    {
        for (n = 1; n <= i; n++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
