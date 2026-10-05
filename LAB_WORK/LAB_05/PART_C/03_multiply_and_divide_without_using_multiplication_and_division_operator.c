// => using left shift and right shift operator :- 

// => left means multiply by 2
// => right means divide by 2

#include <stdio.h>

int main()
{
    int num,left,right;

    printf("Enter number: ");
    scanf("%d", &num);

    left = num << 1;
    right = num >> 2;

    printf("MULTIPLY = %d\n",left);
    printf("DIVIDE = %d\n",right);
    return 0;
}