// => while :-
#include<stdio.h>
int main(){
    int i=1,n,num,pos=0,neg=0,zero=0;

    printf("enter the number you want to enter :");
    scanf("%d",&n);
    
    while(i<=n){

        printf("enter the number :");
        scanf("%d",&num);

        if(num>0){
            pos++;
        }
        else if(num<0){
            neg++;
        }
        else{
            zero++;
        }

        i++;
    }

    printf("positive = %d\n",pos);
    printf("negative = %d\n",neg);
    printf("zero = %d\n",zero);
    return 0;
}

// => do while :-
#include<stdio.h>
int main(){
    int i=1,n,num,pos=0,neg=0,zero=0;

    printf("enter the number you want to enter :");
    scanf("%d",&n);
    
    do{

        printf("enter the number :");
        scanf("%d",&num);

        if(num>0){
            pos++;
        }
        else if(num<0){
            neg++;
        }
        else{
            zero++;
        }

        i++;
    }while(i<=n);

    printf("positive = %d\n",pos);
    printf("negative = %d\n",neg);
    printf("zero = %d\n",zero);
    return 0;
}