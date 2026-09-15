#include <stdio.h>
int main()
{
    float celsius, fahrenheit;

    printf("enter the fahrenheit : ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("result = %0.2f", celsius);

    return 0;
}

// ------------- Key Point's -------------
// Fahrenheit to Celsius
// for example : far =  100.0
//  formula ---> cel = (far - 32) * 5/9
// cel = (100.0 - 32) * 1.8
// cel = 68.0 * 1.8
// cel = 122.4
