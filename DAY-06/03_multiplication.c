#include <stdio.h>
void multi(int, int);
void multi(int a, int b)
{
    int multi = 1;
    multi = a * b;
    printf("Multiplication = %d", multi);
}
int main()
{
    int a, b;
    printf("ENTER THE NUMBER : ");
    scanf("%d", &a);
    printf("ENTER THE NUMBER : ");
    scanf("%d", &b);
    multi(a, b);

    return 0;
}