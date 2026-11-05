// => for loop concept :-

#include<stdio.h>
int main(){
    int i,ans=1,num;

    printf("enter the number : ");
    scanf("%d",&num);

    for(i=num;i!=0;i--){
      ans = ans*i;
    }

    printf("answer = %d",ans);
    return 0;
}
