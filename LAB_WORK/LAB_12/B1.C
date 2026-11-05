
// Part :- B

// 1. Find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4) + …+ (1+2+3+4+…. +n).
#include <stdio.h>
int main()
{
    int i, n, sum, j;
    sum = 0;

    printf("enter the number of series you want :");
    scanf("%d", &j);

    for (i = 1; i <= j; i++)
    {
        for (n = 1; n <= i; n++)
        {
            sum = sum + n;
        }
    }
    printf("sum :%d", sum);
    return 0;
}

// 2. Estimate the value of the mathematical constant e. (Formula: 𝑒=1+1/1!+1/2!+1/3!+1/4!…)
#include <stdio.h>
int fact(int);

int fact(int n)
{
    int ans = 1;

    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }

    return ans;
}
int main()
{

    int num;
    float e = 1.0;

    printf("enter the number of serires you want : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        e = e + (1.0 / (fact(i)));
    }

    printf("answer = %0.4f", e);
    return 0;
}