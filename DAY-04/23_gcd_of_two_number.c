#include <stdio.h>

// Recursive function to find GCD
int GCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return GCD(b, a % b);
}

int main()
{
    int n1, n2;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    printf("GCD = %d\n", GCD(n1, n2));

    return 0;
}
