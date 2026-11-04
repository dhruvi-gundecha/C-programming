// => for 1 to 10 number :-
// => while :-
#include<stdio.h>
int main(){
    int i=1;

    while(i<=10){
        printf("  %d  ",i);
        i++;
    }
    return 0;
}

// => do while :-
#include<stdio.h>
int main(){
    int i=1;

    do{
        printf("  %d  ",i);
        i++;
    }while(i<=10);
    return 0;
}

// => for 1 to n number :-

// => while :-
#include<stdio.h>
int main(){
    int i=1,n;

    printf("enter the number :");
    scanf("%d",&n);
    
    while(i<=n){
        printf("  %d  ",i);
        i++;
    }
    return 0;
}

// => do while :-
#include<stdio.h>
int main(){
    int i=1,n;

    printf("enter the number :");
    scanf("%d",&n);

    do{
        printf("  %d  ",i);
        i++;
    }while(i<=n);
    return 0;
}

