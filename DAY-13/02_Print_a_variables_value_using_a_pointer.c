#include <stdio.h>

int main()
{
    int number = 10;
    int *ptr = &number;

    printf("NUMBER VALUE : %d\n", number);

    printf("NUMBER ADDRESS : %p\n", ptr);

    return 0;
}