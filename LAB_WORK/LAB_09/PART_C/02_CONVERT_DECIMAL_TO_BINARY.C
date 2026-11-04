// 2. Convert decimal number to binary. (i.e. n=11  output: 1101

#include <stdio.h>

int main() {
    int n;
    int binary[32]; 
    int i = 0;

    printf("Enter a decimal number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (n > 0) {
        binary[i] = n % 2; // Get the remainder (0 or 1)
        n = n / 2;         // Divide the number by 2
        i++;               // Move to the next array index
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}