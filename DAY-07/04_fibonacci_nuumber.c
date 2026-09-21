#include <stdio.h>
int fibbonacci(int num)
{
    int a, b, c;
    a = 0;
    b = 1;
    for (int i = 1; i <= num; i++)
    {
        printf("  %d  ", a);
        c = a + b;
        a = b;
        b = c;
    }
}
int main()
{
    int num;

    printf("ENTER THE NUMBER OF SERIES YOU WANT : ");
    scanf("%d", &num);

    fibbonacci(num);
    return 0;
}