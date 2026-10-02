// => without scanf :-

#include <stdio.h>
int main()
{
    int a=10,b=20,result;

    result = a+b;
    printf("sum = %d ",result);
    return 0;   
}

// => with scanf :-

#include <stdio.h>
int main()
{
    int a,b,result;

    printf("enter the first number : ");
    scanf("%d",&a);
    printf("enter the second number : ");
    scanf("%d",&b);
    result = a+b;
    printf("sum = %d ",result);
    return 0;   
}