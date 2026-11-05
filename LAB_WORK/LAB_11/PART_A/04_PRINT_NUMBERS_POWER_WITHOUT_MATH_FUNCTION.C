// => for loop concept :-

#include<stdio.h>
int main(){
    int i,base,power,ans=1;

    printf("enter the base : ");
    scanf("%d",&base);
    printf("enter the power : ");
    scanf("%d",&power);

    for(i=1;i<=power;i++){
      ans = ans*base;
    }

    printf("answer = %d",ans);
    return 0;
}