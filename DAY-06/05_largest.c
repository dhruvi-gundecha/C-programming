#include <stdio.h>
void large(int, int, int);
void large(int a, int b, int c)
{
    if (a > b && a > c)
    {
        printf("A IS THE LARGEST NUMBER.");
    }
    else if (b > a && b > c)
    {
        printf("B IS THE LARGEST NUMBER.");
    }
    else
    {
        printf("C IS THE LARGEST NUMBER.");
    }
}
int main()
{
    int a, b, c;
    printf("ENTER THE NUMBER : ");
    scanf("%d", &a);
    printf("ENTER THE NEXT NUMBER : ");
    scanf("%d", &b);
    printf("ENTER THE NEXT NUMBER : ");
    scanf("%d", &c);
    large(a, b, c);

    return 0;
}