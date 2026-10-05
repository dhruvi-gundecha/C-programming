// => USING BITWIZE OPERATOR :-

#include <stdio.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n & 1)
        printf("Odd");
    else
        printf("Even");

    return 0;
}

// => with formula : ((number / 2) * 2 == number)
#include <stdio.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if ((n / 2) * 2 == n)
        printf("Even");
    else
        printf("Odd");

    return 0;
}