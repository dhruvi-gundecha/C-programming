#include <stdio.h>

int main()
{
    int i, n, rem = 0, rev = 0, original;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (original == rev)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");

    return 0;
}
