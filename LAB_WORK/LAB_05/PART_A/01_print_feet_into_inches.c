#include<stdio.h>
int main(){
    int feet , inches;

    printf("enter the feet : ");
    scanf("%d",&feet);

    inches = feet*12;

    printf("inches  = %d",inches);
    return 0;
}