#include<stdio.h> 
int main(){
    int A,B,Temp;
    A=10;
    B=20;

    Temp = A;
    A=B;
    B=Temp;

    printf("A = %d  B = %d",A,B);

    return 0;
}

// ------------- Key Point's -------------
// Swap two number :-

// A = 20 and B = 10 
// HOW WORKS :-

// TEMP IS EMPTY
// TEMP = A MEANS A'S VALUE BECOME TEMP VALUE NOW TEMP = 20 ALSO  A =20
// A = B MEANS B'S VALUE BECOME A'S VALUE NOW A = 10 ALSO  B =10
// B = TEMP MEANS TEMP'S VALUE BECOME B'S VALUE NOW TEMP = 20 ALSO  B =20

// After Swapping 
// A = 10 and B = 20