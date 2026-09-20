#include <stdio.h>
void square(int);
void square(int num)
{

    int square;
    square = num * num;
    printf("SQUARE =  %d", square);
}
int main()
{
    int num;
    printf("ENTER THE NUMBER : ");
    scanf("%d", &num);

    square(num);

    return 0;
}