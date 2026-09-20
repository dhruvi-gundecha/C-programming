#include <stdio.h>
void IS_num_pos_neg_zero(int);
void IS_num_pos_neg_zero(int num)
{

    if (num > 0)
    {
        printf("GIVEN NUMBER IS POSITIVE.");
    }
    else if (num < 0)
    {
        printf("GIVEN NUMBER IS NEGATIVE.");
    }
    else
    {
        printf("GIVEN NUMBER IS ZERO.");
    }
}
int main()
{
    int num;
    printf("ENTER THE NUMBER : ");
    scanf("%d", &num);

    IS_num_pos_neg_zero(num);

    return 0;
}