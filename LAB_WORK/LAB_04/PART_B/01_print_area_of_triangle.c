#include<stdio.h>

int main()
{
    float area_of_triangle ,base,height;

    printf("enter the base : ");
    scanf("%f",&base);
    printf("enter the height : ");
    scanf("%f",&height);

    area_of_triangle = ((height*base)/2.0);

    printf("AREA OF TRIANGLE  =  %0.4f",area_of_triangle);
    return 0;
}