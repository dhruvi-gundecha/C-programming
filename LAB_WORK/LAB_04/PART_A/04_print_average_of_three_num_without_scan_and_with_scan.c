// => without scanf :-

#include <stdio.h>
int main()
{
    int a=10,b=20,c=30;
    float result;

    result = (a+b+c)/3.0;

    printf("average = %f ",result);

    return 0;   
}

// => with scanf :-

#include <stdio.h>
int main()
{
    int a,b,c;
    float result;

    printf("enter the first number : ");
    scanf("%d",&a);
    printf("enter the second number : ");
    scanf("%d",&b);
    printf("enter the third number : ");
    scanf("%d",&c);

    result = (a+b+c)/3.0;

    printf("average = %f ",result);
    
    return 0;   
}s