#include <stdio.h>

int main()
{
    int n, product = 1, rem = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        rem = n % 10;
        product = product * rem;
        n = n / 10;
    }

    printf("product = %d\n", product);
    return 0;
}
