// 2. Find HCF and LCM of two numbers.

#include<stdio.h>
void main(){
    int i,n1,n2,hcf,lcm;
    hcf=0;
    lcm=0;
    printf("enter the first number:");
    scanf("%d",&n1);
    printf("enter the second number:");
    scanf("%d",&n2);

    for(i=1; i<=n1 && i<=n2; i++){
        if(n1%i==0 && n2%i==0){
            hcf=i;
        }
    }
    lcm=(n1*n2)/hcf;
    printf("hcf:%d\n",hcf);
    printf("lcm:%d",lcm);
}