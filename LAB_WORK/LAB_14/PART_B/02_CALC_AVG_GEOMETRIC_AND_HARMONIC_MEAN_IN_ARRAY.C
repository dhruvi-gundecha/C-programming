
#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    float a[100], sum = 0, product = 1;
    float average, gm, hm, reciprocalSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter array element :");
        scanf("%f", &a[i]);

        sum = sum + a[i];
        product = product * a[i];
        reciprocalSum = reciprocalSum + (1.0 / a[i]);
    }

    average = sum / n;
    gm = pow(product, 1.0 / n);
    hm = n / reciprocalSum;

    printf("\nArithmetic Mean = %.2f", average);
    printf("\nGeometric Mean = %.2f", gm);
    printf("\nHarmonic Mean = %.2f", hm);

    return 0;
}
