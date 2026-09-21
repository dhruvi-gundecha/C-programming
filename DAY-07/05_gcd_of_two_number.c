#include <stdio.h>

int findGCD(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main()
{
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int a = (num1 < 0) ? -num1 : num1;
    int b = (num2 < 0) ? -num2 : num2;

    int gcd = findGCD(a, b);

    printf(" GCD = %d\n", gcd);

    return 0;
}
