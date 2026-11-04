// => while :-
#include<stdio.h>
int main(){
    int i,n;

    printf("enter the starting number:");
    scanf("%d",&i);
    printf("enter the end number :");
    scanf("%d",&n);
    
    while(i<=n){
        if(i%2==0){
        printf("  %d  ",i);
        }
        i++;
    }
    return 0;
}
// => do while :-
#include<stdio.h>
int main(){
    int i,n;

    printf("enter the starting number:");
    scanf("%d",&i);
    printf("enter the end number :");
    scanf("%d",&n);

    do{
        if(i%2==0){
        printf("  %d  ",i);
        }
        i++;
    }while(i<=n);
    return 0;
}

