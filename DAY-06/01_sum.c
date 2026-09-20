#include <stdio.h>
void sum(int, int);
void sum(int a, int b)
{
    int sum = 0;
    sum = a + b;
    printf("SUM = %d", sum);
}
int main()
{
    int a, b;
    printf("ENTER THE NUMBER : ");
    scanf("%d", &a);
    printf("ENTER THE NUMBER : ");
    scanf("%d", &b);
    sum(a, b);

    return 0;
}