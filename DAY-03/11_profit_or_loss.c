#include <stdio.h>

int main()
{
    float total, orignal_price, selling_price;

    printf("enter the price that you give for item : ");
    scanf("%f", &orignal_price);
    printf("enter the price that you sell for item : ");
    scanf("%f", &selling_price);

    total = selling_price - orignal_price;

    if (total > 0)
    {
        printf("user made profit of %0.3f%%", total);
    }
    else if (total < 0)
    {
        printf("user made loss of %0.3f%%", (-total));
    }
    else
    {
        printf("user has made neither profit nor loss");
    }
    return 0;
}