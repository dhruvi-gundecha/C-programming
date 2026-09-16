// simple interest formula : (principal * Roi * Time period)/100
// area of triangle :-
#include <stdio.h>
void main()
{
    float result, t, r, p;

    printf("enter the pricipal :");
    scanf("%f", &p);
    printf("enter the rate of interest:");
    scanf("%f", &r);
    printf("enter the time period :");
    scanf("%f", &t);

    result = (p * r * t) / 100.0;
    printf("result = %f", r);
}
