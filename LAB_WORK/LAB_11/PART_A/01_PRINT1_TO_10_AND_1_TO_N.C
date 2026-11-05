// => for loop concept :-
// => 1 to 10 :-

#include<stdio.h>
int main(){
    int i;

    for(i=1;i<=10;i++){
        printf("%d\n",i);
    }

    return 0;
}

// => 1 to n :-

#include<stdio.h>
int main(){
    int i,n;

    printf("enter the number you want : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("%d\n",i);
    }

    return 0;
}