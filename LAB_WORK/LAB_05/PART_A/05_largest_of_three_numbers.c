#include<stdio.h>
int main(){
    int a,b,c;

    printf("enter the first number : ");
    scanf("%d",&a);
    printf("enter the second number : ");
    scanf("%d",&b);
    printf("enter the third number : ");
    scanf("%d",&c);

    if(a > b){
        if(a > c){
            printf("a is largest...");
        }
        else{
            printf("c is largest...");
        }
    }

    else if(b >a){
        if(b > c){
            printf("b is largest...");
        }
        else{
            printf("c is largest...");
        }
    }

    else{
        printf("c is largest...");
    }
    return 0;
}

// => alternative :-

#include<stdio.h>
int main(){
    int a,b,c;

    printf("enter the first number : ");
    scanf("%d",&a);
    printf("enter the second number : ");
    scanf("%d",&b);
    printf("enter the third number : ");
    scanf("%d",&c);

    if(a > b && a>c){
        printf("a is largest...");
    }

    else if(b >a && b>c){
        printf("b is largest...");
    }

    else{
        printf("c is largest...");
    }
    return 0;
}