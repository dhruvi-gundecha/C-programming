#include <stdio.h>
int power(int, int);
int power(int digit, int rem)
{
    int i = 1, result;
    result = 1;
    while (i <= digit)
    {
        result = result * rem;
        i++;
    }
    return result;
}
int main()
{
    int digit = 0, i, num, sum = 0, ori, rem;

    printf("ENTER THE NUMBER : ");
    scanf("%d", &num);
    ori = num;
    while (num != 0)
    {
        digit++;
        num = num / 10;
    }
    num = ori;
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + power(digit, rem);
        num = num / 10;
    }
    if (ori == sum)
    {
        printf("GIVEN NUMBER IS ARMSTRONG...");
    }
    return 0;
}
