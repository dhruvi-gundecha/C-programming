#include<stdio.h>
int main(){
    int a,b,c;

    printf("enter the first number : ");
    scanf("%d",&a);
    printf("enter the secoond number : ");
    scanf("%d",&b);
    printf("enter the third number : ");
    scanf("%d",&c);

    switch(a >b){
        case 1:
            switch(a>c){
                case 1:
                    printf("a is largest...");
                break;
                case 0:
                    printf("c is largest...");
                break;
            }
        break;
        case 0:
            switch(b>a){
                case 1:
                    switch(b>c){
                        case 1:
                            printf("b is largest...");
                        break;
                        case 0:
                            printf("c is largest...");
                        break;
                    }
                break;
                case 0:
                    printf("c is largest...");
                break;
            }
        break;
    }
    return 0;
}