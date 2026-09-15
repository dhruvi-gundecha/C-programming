#include <stdio.h>
int main()
{
    float celsius, fahrenheit;

    printf("enter the celsius : ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * (9.0 / 5.0)) + 32.00;

    printf("result = %0.2f", fahrenheit);

    return 0;
}

// ------------- Key Point's -------------
// Celsius to Fahrenheit
// for example : cel =  100.0
//  formula ---> far = (cel * (9.0/5.0)) + 32.00;
// far = (100.0 * (9.0/5.0))+32.00
// far = (100.0 * 1.8)+32.00
// far = 180+32.00
// far = 212.00
