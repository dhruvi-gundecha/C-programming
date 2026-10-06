// 3. Check whether the entered character is upper case, lower case, digit or 
// any special character. 

#include<stdio.h>
int main()
{
    char ch;

    printf("enter the character : ");
    scanf(" %c",&ch);

    if(ch >= 'A' && ch <='Z')
    {
        printf("your given character is uppercase...");
    }
    else if(ch >= 'a' && ch <='z')
    {
        printf("your given character is lowercase...");
    }
    else if(ch >= '0' && ch <='9')
    {
        printf("your given character is digit...");
    }
    else
    {
        printf("your given character is spacial character...");
    }
    return 0;
}