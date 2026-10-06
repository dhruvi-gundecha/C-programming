// 4. Input an integer number and check the last digit of number is even or odd. 

#include<stdio.h>
int main()
{
    int number,last_digit;

    printf("enter the number : ");
    scanf("%d",&number);

    last_digit = number%10;

    if(last_digit % 2 == 0){
        printf("given integer number last digit is even....");
    }
    else{
        printf("given integer number last digit is odd....");
    }
    return 0;
}