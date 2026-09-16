// area of triangle :-
#include <stdio.h>
void main()
{
    float r, h, b;

    printf("enter the height :");
    scanf("%f", &h);
    printf("enter the base :");
    scanf("%f", &b);

    r = (h * b) / 2.0;
    printf("result = %f", r);
}

// perimeter of triangle :-
#include <stdio.h>
void main()
{
    int r, a, b, c;

    printf("enter the side :");
    scanf("%d", &a);
    printf("enter the side:");
    scanf("%d", &b);
    printf("enter the base :");
    scanf("%d", &c);

    r = a + b + c;
    printf("result = %d", r);
}
