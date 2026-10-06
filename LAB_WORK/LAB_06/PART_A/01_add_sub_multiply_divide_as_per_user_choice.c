// Write following programs in C. (Decision Making: Nested and Ladder if) 
// 1. Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice. 
#include<stdio.h>
int main(){

    int choice,a,b;

    printf("enter the first number : ");
    scanf("%d",&a);
    printf("enter the second number : ");
    scanf("%d",&b);

    printf("enter your choice : \n");
    printf("1. add  \n");
    printf("2. subtrack  \n");
    printf("3. multiply  \n");
    printf("4. divide  \n");
    scanf("%d",&choice);

    if(choice == 1){
        printf("add = %d ",(a+b));
    }
    else if(choice ==2){
        printf("subtraction = %d ",(a-b));
    }
    else if(choice ==3){
        printf("multiply = %d ",(a*b));
    }
    else if(choice ==4){
        printf("divide = %d ",(a/b));
    }
    else{
        printf("invalid choice");
    }
    return 0;
}