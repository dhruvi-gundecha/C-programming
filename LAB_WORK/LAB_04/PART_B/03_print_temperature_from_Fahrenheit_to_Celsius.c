// c=(((f-32)*5))/9
#include<stdio.h>

int main(){

    float FAHRENHEIT , CELSIUS ;

    printf("enter the temperature in fahrenheit : ");
    scanf("%f",&FAHRENHEIT);

    CELSIUS = (((FAHRENHEIT-32.0)*5.0))/9.0;

    printf("CELSIUS = %f",CELSIUS);
    return 0;
}