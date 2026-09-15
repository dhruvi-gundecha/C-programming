#include <stdio.h>

int main()
{
    int a, b;
    float result;
    printf("enter the first number : ");
    scanf("%d", &a);
    printf("enter the second number : ");
    scanf("%d", &b);
    result = a + b;
    printf("add         = %0.2f", result);

    result = a - b;
    printf("Subtrack    = %0.2f", result);

    result = a * b;
    printf("Multiply    = %0.2f", result);

    result = (float)a / (float)b;
    printf("Divide      = %0.2f", result);

    result = a % b;
    printf("Modulus     = %0.2f", result);

    return 0;
}