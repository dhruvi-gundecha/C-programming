// 5. Read marks of five subjects. Calculate percentage and print class accordingly. 
// Fail below 35, Pass Class between 36 to 45, Second Class between 46 to 60, 
// First Class between 61 to 70, Distinction if more than 70. 

#include<stdio.h>
int main(){

    float mark_1,mark_2,mark_3,mark_4,mark_5,percentage;

    printf("enter the first subject : ");
    scanf("%f",&mark_1);
    printf("enter the second subject : ");
    scanf("%f",&mark_2);
    printf("enter the third subject : ");
    scanf("%f",&mark_3);
    printf("enter the fourth subject : ");
    scanf("%f",&mark_4);
    printf("enter the fifth subject : ");
    scanf("%f",&mark_5);

    percentage = (mark_1+mark_2+mark_3+mark_4+mark_5)/5.00;

    if(percentage >=70.0){
        printf("Distinction : %0.2f",percentage);
    }
    else if(percentage >=61.0 && percentage <=70.0 ){
        printf("First class : %0.2f",percentage);
    }
    else if(percentage >=46.0 && percentage <=60.0 ){
        printf("Second class : %0.2f",percentage);
    }
    else if(percentage >=36.0 && percentage <=45.0 ){
        printf("Pass class : %0.2f",percentage);
    }
    else{
        printf("Fail : %0.2f",percentage);
    }
    return 0;
}