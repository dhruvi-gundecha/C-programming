#include<stdio.h> 
int main(){
    int A,B;
    A=10;
    B=20;

    A=A+B;
    B=A-B;
    A=A-B;

    printf("A = %d  B = %d",A,B);

    return 0;
}

// ------------- Key Point's -------------
// Swap two number without temp :-

// A = 20 and B = 10 
// A = A+B => A = 20+10 now A=30
// B = A-B => B = 30-10 now B=20
// A = A-B => A = 30-20 now A =10
// After Swapping 
// A = 10 and B = 20