
// PART : C
// C Write following programs in C. (While Loop)

// 1. Convert given number in words. (i.e. n=3456  output: Three Four Five Six)

#include <stdio.h>

int main() {
    int n, rem;
    int reversed = 0;
    int original_trailing_zeros = 0;

    printf("Enter the number:\n");
    if (scanf("%d", &n) != 1) return 1;

    if (n == 0) {
        printf("ZERO\n");
        return 0;
    }

    int temp = n;
    while (temp % 10 == 0 && temp > 0) {
        original_trailing_zeros++;
        temp /= 10;
    }

    while (n > 0) {
        rem = n % 10;
        reversed = (reversed * 10) + rem;
        n = n / 10;
    }

    while (reversed > 0) {
        rem = reversed % 10;
        reversed = reversed / 10;

        switch (rem) {
            case 0: printf("ZERO "); break;
            case 1: printf("ONE "); break;
            case 2: printf("TWO "); break;
            case 3: printf("THREE "); break;
            case 4: printf("FOUR "); break;
            case 5: printf("FIVE "); break;
            case 6: printf("SIX "); break;
            case 7: printf("SEVEN "); break;
            case 8: printf("EIGHT "); break;
            case 9: printf("NINE "); break;
        }
    }

    for (int i = 0; i < original_trailing_zeros; i++) {
        printf("ZERO ");
    }

    printf("\n");
    return 0;
}
