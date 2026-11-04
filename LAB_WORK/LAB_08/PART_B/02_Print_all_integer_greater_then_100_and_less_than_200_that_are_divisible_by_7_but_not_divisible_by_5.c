// => while
#include<stdio.h>
int main(){

    int i=100;

    while(i<=200){
        if(i%7==0 && i%5!=0){
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}

// => do while
#include<stdio.h>
int main(){

    int i=100;

    do{
        if(i%7==0 && i%5!=0){
            printf("%d\n",i);
        }
        i++;
    }while(i<=200);
    return 0;
}