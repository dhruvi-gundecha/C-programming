#include<stdio.h>
int main(){
    int number1,number2,choice;

    printf("enter the number : ");
    scanf("%d",&number1);
    printf("enter the number : ")
    scanf("%d",&number2);

    printf("enter your choice : ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("answer = ",(number1+number2));
        break;
        case 2:
            printf("answer = ",(number1-number2));
        break;
        case 3:
            printf("answer = ",(number1*number2));
        break;
        case 4:
            printf("answer = ",(number1/number2));
        break;
        default :
            printf("invalid choice");  
        break;
    }
    return 0;
}