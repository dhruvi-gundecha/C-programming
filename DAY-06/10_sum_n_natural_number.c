#include <stdio.h>
void sum(int);
void sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("SUM = %d", sum);
}
int main()
{
    int n;

    printf("ENTER THE NUMBER OF SERIES YOU WANT FOR : ");
    scanf("%d", &n);

    sum(n);

    return 0;
}