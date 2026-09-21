#include <stdio.h>
int main()
{
    int power, base, i, result;
    i = 1;
    result = 1;
    printf("ENTER THE BASE : ");
    scanf("%d", &base);
    printf("ENTER THE POWER : ");
    scanf("%d", &power);

    while (i <= power)
    {
        result = result * base;
        i++;
    }

    printf("RESULT = %d ", result);
    return 0;
}