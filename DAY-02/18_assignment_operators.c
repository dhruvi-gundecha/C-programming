#include <stdio.h>

int main()
{

    int a = 20;

    a += 3;
    printf("a += %d\n", a);

    a -= 3;
    printf("a -= %d\n", a);

    a *= 2;
    printf("a *=  %d\n", a);

    a /= 4;
    printf("a /= %d\n", a);

    a %= 3;
    printf("a %%= %d\n", a);

    return 0;
}
