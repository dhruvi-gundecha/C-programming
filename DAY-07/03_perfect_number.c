// 6: Its proper divisors are 1, 2, and 3. Adding them gives \(1 + 2 + 3 = 6\).
#include <stdio.h>
int factor(int num)
{
    int factor = 0;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            factor = factor + i;
        }
    }

    return factor;
}
int main()
{
    int num, ans;

    printf("ENTER THE NUMBER : ");
    scanf("%d", &num);

    ans = factor(num);

    if (ans == num)
    {
        printf("\nGIVEN NUMBER IS PERFECT NUMBER...\n");
    }
    else
    {
        printf("\nGIVEN NUMBER IS NOT PERFECT NUMBER...\n");
    }

    return 0;
}