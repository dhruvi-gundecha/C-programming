#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("Enter the third number : ");
    scanf("%d", &c);

    if (a < b && a < c)
    {
        printf("given first number is smallest...");
    }
    else if (b < a && b < c)
    {
        printf("given second number is smallest...");
    }
    else
    {
        printf("given third number is smallest...");
    }
    return 0;
}