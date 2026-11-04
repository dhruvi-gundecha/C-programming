// => while :-
#include<stdio.h>
#include<math.h>
int main(){
    int i=1;
    float num=0;
 
    while(i<=9){
        num=sqrt(i);
        printf("%d = %0.2f\n",i,num);
        i++;
    }
    return 0;
}

// => do while :-
#include<stdio.h>
#include<math.h>
int main(){
    int i=1;
    float num=0;
 
    do{
        num=sqrt(i);
        printf("%d = %0.2f\n",i,num);
        i++;
    }while(i<=9);
    return 0;
}
