// 5. Print given number in reverse order.

#include<stdio.h>
void main(){
    int i,n,rem;
    rem=0;
    printf("enter the number:");
    scanf("%d",&n);

    while(n!=0){
        rem=n%10;
        printf("%d",rem);
        n=n/10;
    }
}
