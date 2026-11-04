// 3. Print first 50 numbers in series 1, 4, 7, 10...

// => while :-
#include<stdio.h>
int main(){

    int i=1,count=1;

    while(i<=50){
            printf("  %d  ",count);
            count+=3;
            i++;
    }
    return 0;
}

// => do while :-
#include<stdio.h>
int main(){

    int i=1,count=1;

    do{
        printf("  %d  ",count);
        count+=3;
        i++;
    }while(i<=50);
    return 0;
}