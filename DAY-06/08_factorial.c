#include <stdio.h>
void fact(int);
void fact(int num)
{

    int fact = 1;

    while (num > 0)
    {
        fact = fact * num;
        num--;
    }
    printf("FACTORIAL =  %d", fact);
}
int main()
{
    int num;
    printf("ENTER THE NUMBER : ");
    scanf("%d", &num);

    fact(num);

    return 0;
}