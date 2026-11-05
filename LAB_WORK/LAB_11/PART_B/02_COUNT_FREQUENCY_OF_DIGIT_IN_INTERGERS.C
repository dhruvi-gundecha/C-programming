// => while loop :-

#include<stdio.h>
int main(){
    int num,rem,zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;

    printf("enter the number : ");
    scanf("%d",&num);

    while(num > 0){
        rem = num%10;

        switch(rem){
            case 0:
                zero++;
            break;
            case 1: 
                one++;
            break;
            case 2: 
                two++;
            break;
            case 3: 
                three++;
            break;
            case 4: 
                four++;
            break;
            case 5: 
                five++;
            break;
            case 6: 
                six++;
            break;
            case 7: 
                seven++;
            break;
            case 8: 
                eight++;
            break;
            case 9: 
                nine++;
            break;
        }

        num=num/10;
    }

    printf("ZERO = %d \n",zero);     
    printf("ONE = %d \n",one);     
    printf("TWO = %d \n",two); 
    printf("THREE = %d \n",three)
    printf("FOUR = %d \n",four);
    printf("FIVE = %d \n",five);
    printf("SIX = %d \n",six); 
    printf("SEVEN = %d \n",seven)
    printf("EIGHT = %d \n",eight)
    printf("NINE = %d \n",nine);
    return 0;
}
