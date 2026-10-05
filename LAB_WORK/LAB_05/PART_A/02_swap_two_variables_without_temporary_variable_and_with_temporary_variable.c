// => without temporary variable :-

#include<stdio.h>
int main(){
    int a , b;

    printf("enter the first number : ");
    scanf("%d",&a);
    printf("enter the second number : ");
    scanf("%d",&b);

    printf("BEFORE SWAPPING :- ");
    printf("  a  = %d",a);
    printf("  b  = %d\n",b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("AFTER SWAPPING :- ");
    printf("  a  = %d",a);
    printf("  b  = %d",b);
    return 0;
}

// => with temporary variable :-

#include<stdio.h>
int main(){
    int a , b,temp;

    printf("enter the first number : ");
    scanf("%d",&a);
    printf("enter the second number : ");
    scanf("%d",&b);

    printf("BEFORE SWAPPING :- ");
    printf("  a  = %d",a);
    printf("  b  = %d\n",b);

    temp = a;
    a = b;
    b=temp;

    printf("AFTER SWAPPING :- ");
    printf("  a  = %d",a);
    printf("  b  = %d",b);
    return 0;
}