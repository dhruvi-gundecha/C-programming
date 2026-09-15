#include <stdio.h>
int main()
{
    int reminder, num;

    printf("enter the number :-");
    scanf("%d", &num);

    reminder = num % 10;

    printf("result = %d", reminder);

    return 0;
}

// ------------- Key Point's -------------
// find the rem :-

// for example : -
// user number  = 1245
// output = 5

// how it works :
// num%10 = rem  ==>  1245 % 10 = 5
// 5 is reminder and 124 is now a user number
// result = rem -> 5