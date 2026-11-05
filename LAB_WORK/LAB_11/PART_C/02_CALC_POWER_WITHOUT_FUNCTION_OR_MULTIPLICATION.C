#include <stdio.h>

int main() {
    int base, exponent;
    int result = 1;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for (int i = 0; i < exponent; i++) {
        int temp_sum = 0;
        
        for (int j = 0; j < base; j++) {
            temp_sum += result;
        }
        
        result += temp_sum;
    }

    printf("Answer = %d\n", result);

    return 0;
}
