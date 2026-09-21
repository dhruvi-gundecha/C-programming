// Calculation: 1! + 4! + 5! = 1 + 24 + 120 = 145
#include <stdio.h>
int fact(int x)
{
    int fact = 1;

    while (x > 0)
    {
        fact = fact * x;
        x--;
    }

    return fact;
}
int main()
{
    int num, sum = 0, rem, ori;

    printf("ENTER THE NUMBER : ");
    scanf("%d", &num);
    ori = num;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + fact(rem);
        num = num / 10;
    }

    if (sum == ori)
    {
        printf("given number is strong number...");
    }
    else
    {
        printf("given number is not strong number...");
    }
    return 0;
}