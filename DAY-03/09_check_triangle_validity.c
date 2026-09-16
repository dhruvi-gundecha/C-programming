//  triangle is valid if the sum of any two sides is greater than the third side,
// or if the sum of its three internal angles equals 180 degrees.

// FOR ANGLE'S OF TRIANGLE
#include <stdio.h>
int main()
{
    int a, b, c;

    printf("enter the first angle : ");
    scanf("%d", &a);
    printf("enter the second angle : ");
    scanf("%d", &b);
    printf("enter the third angle : ");
    scanf("%d", &c);

    if ((a + b + c == 180) && (a > 0 && b > 0 && c > 0))
    {
        printf("given triangle is vaild. ");
    }
    else
    {
        printf("given triangle is not vaild. ");
    }
    return 0;
}

// FOR SIDE'S OF TRIANGLE
#include <stdio.h>
int main()
{
    int a, b, c;

    printf("enter the first side : ");
    scanf("%d", &a);
    printf("enter the second side : ");
    scanf("%d", &b);
    printf("enter the third side : ");
    scanf("%d", &c);

    if ((((a + b) > c) && ((a + c) > b) && ((b + c) > a)))
    {
        printf("given triangle is vaild. ");
    }
    else
    {
        printf("given triangle is not vaild. ");
    }
    return 0;
}
