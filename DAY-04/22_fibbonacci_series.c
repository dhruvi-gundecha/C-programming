#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c = 0;

    printf("Enter the number of series you want to print: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d: \n", n);

    while (a <= n)
    {
        printf("%d  ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
