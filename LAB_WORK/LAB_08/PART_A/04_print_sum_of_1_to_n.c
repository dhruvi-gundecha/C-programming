// => while :-
#include<stdio.h>
int main(){
    int i=1,n,sum=0;

    printf("enter the number :");
    scanf("%d",&n);
    
    while(i<=n){
        sum+=i;
        i++;
    }

    
    printf("sum =   %d  ",sum);
    return 0;
}
// => do while :-
#include<stdio.h>
int main(){
    int i=1,n,sum=0;

    printf("enter the number :");
    scanf("%d",&n);

    do{
        sum+=i;
        i++;
    }while(i<=n);

    printf("sum =  %d  ",sum);
    return 0;
}

