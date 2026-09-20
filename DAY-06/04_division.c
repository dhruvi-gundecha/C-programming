#include <stdio.h>
int divide(int, int);
int divide(int a, int b)
{
    int divide = 1;
    if (b == 0)
    {
        printf("THIS NUMBER CAN'T DIVIDE BY ZERO...");
        return 0;
    }
    else
    {
        return divide = a / b;
    }
}

int main()
{
    int a, b, ans;
    printf("ENTER THE NUMBER : ");
    scanf("%d", &a);
    printf("ENTER THE NUMBER : ");
    scanf("%d", &b);
    ans = divide(a, b);
    if (ans != 0)
    {
        printf("DIVITION = %d", ans);
    }
    return 0;
}