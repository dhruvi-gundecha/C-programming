#include<stdio.h>
int main(){

    float SIMPLE_INTEREST,PRINCIPAL , RATE , TIME ; 

    printf("enter the principal : ");
    scanf("%f",&PRINCIPAL);
    printf("enter the rate : ");
    scanf("%f",&RATE);
    printf("enter the time : ");
    scanf("%f",&TIME);

    SIMPLE_INTEREST = (PRINCIPAL*RATE*TIME)/100.0;

    printf("SIMPLE INTEREST  =  %0.4f",SIMPLE_INTEREST);
    return 0;
}