// => while loop concept :-
// => series :- 0 1 1 2 3 5 8 ...
#include<stdio.h>
int main(){
    int a=0,b=1,c,num,i=1;

    printf("enter the number : ");
    scanf("%d",&num);

    while(i<=num){
        c=a+b;
        printf(" %d ",a);
        a=b;
        b=c;
        i++;
    }

    return 0;
}

// => for loop concept :-
// => series :- 0 1 1 2 3 5 8 ...
#include<stdio.h>
int main(){
    int a=0,b=1,c,num;

    printf("enter the number : ");
    scanf("%d",&num);

    for(int i=1 ; i<=num ; i++){
        c=a+b;
        printf(" %d ",a);
        a=b;
        b=c;
    }

    return 0;
}