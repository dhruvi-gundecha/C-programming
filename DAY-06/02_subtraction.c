#include <stdio.h>
void subtrack(int, int);
void subtrack(int a, int b)
{
    int subtrack = 0;
    subtrack = a - b;
    printf("DIFFRENCE = %d", subtrack);
}
int main()
{
    int a, b;
    printf("ENTER THE NUMBER : ");
    scanf("%d", &a);
    printf("ENTER THE NUMBER : ");
    scanf("%d", &b);
    subtrack(a, b);

    return 0;
}