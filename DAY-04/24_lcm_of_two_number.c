#include <stdio.h>

int main()
{
    int n1, n2, large;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    // Set max to the larger of the two numbers
    large = (n1 > n2) ? n1 : n2;

    while (1)
    {
        if (large % n1 == 0 && large % n2 == 0)
        {
            printf("LCM= %d\n", large);
            break;
        }
        large++;
    }

    return 0;
}
