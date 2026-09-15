#include <stdio.h>
int main()
{
    int a, b, c, sum = 0;
    float average = 1.0;

    printf("enter the first number :-");
    scanf("%d", &a);
    printf("enter the second number :-");
    scanf("%d", &b);
    printf("enter the third number :-");
    scanf("%d", &c);

    sum = (a + b + c);

    average = sum / 3.00;

    printf("result = %0.2f", average);

    return 0;
}

// ------------- Key Point's -------------
// for example : num1 = 1 , num2 = 2 , num3 = 3
// now sum = num1 + num2 + num3 => 6
// ave = sum / total given num => 2
// result = 2
