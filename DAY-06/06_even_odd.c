#include <stdio.h>
void even_or_odd(int);
void even_or_odd(int num)
{
    if (num % 2 == 0)
    {
        printf("THE GIVEN NUMBER IS EVEN.");
    }
    else
    {
        printf("THE GIVEN NUMBER IS ODD.");
    }
}
int main()
{
    int num;
    printf("ENTER THE NUMBER : ");
    scanf("%d", &num);

    even_or_odd(num);

    return 0;
}