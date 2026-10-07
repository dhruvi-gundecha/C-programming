#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the first number :");
    scanf("%d",&a);
    printf("enter the second number :");
    scanf("%d",&b);
    printf("enter the third number :");
    scanf("%d",&c);

    (a>b)?(c= c*a):(c= c*b);

    printf("result = %d",c);
    return 0;
}