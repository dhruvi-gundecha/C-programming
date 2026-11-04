// 2. Get a decimal number from user and convert it into roman digits. 
// (Symbol: I:1, IV:4, V:5, IX:9, X:10, XL:40, L:50, XC:90, C:100, CD:400, D:500, CM:900, M:1000)

#include<stdio.h>
int main(){
    int i;

    printf("enter the number : ");
    scanf("%d",&i);

    switch(i){
        case 1:
            printf("%d = I",i);
        break;
        case 4:
            printf("%d = IV",i);
        break;
        case 5:
            printf("%d = V",i);
        break;
        case 9:
            printf("%d = IX",i);
        break;
        case 10:
            printf("%d = X",i);
        break;
        case 40:
            printf("%d = XL",i);
        break;
        case 50:
            printf("%d = L",i);
        break;
        case 90:
            printf("%d = XC",i);
        break;
        case 100:
            printf("%d = C",i);
        break;
        case 400:
            printf("%d = CD",i);
        break;
        case 500:
            printf("%d = D",i);
        break;
        case 900:
            printf("%d = CM",i);
        break;
        case 1000:
            printf("%d = M",i);
        break;
    }
    return 0;
}