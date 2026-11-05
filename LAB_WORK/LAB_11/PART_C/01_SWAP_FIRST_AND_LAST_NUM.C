// => for loop  :-

#include<stdio.h>
int main(){

    int num,first,last,ori,rem=0;;

    printf("ente the number : ");
    scanf("%d",&num);

    ori = 0;

    for(int i=num ; i>9 ;i= i/10){
        rem=num%10;
        ori =(ori*10)+rem;
        num=num/10;
    }

    first = num;

    ori =(ori*10)+first;

    printf("answer= %d",ori);
    return 0;
}

