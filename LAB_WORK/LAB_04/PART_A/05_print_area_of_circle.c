#include <stdio.h>
int main()
{
    float radius,pie=3.14,area_of_circle;

    printf("enter the radius : ");
    scanf("%f",&radius);
    
    area_of_circle = pie * radius * radius;

    printf("area of circle = %f",area_of_circle);
    
    return 0;   
}