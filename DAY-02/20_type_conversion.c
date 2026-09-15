#include <stdio.h>

int main()
{
    int int_num = 25;

    // 1. Implicit Type Conversion (Automatic)
    float implicit_float = int_num;

    // 2. Explicit Type Conversion (Typecasting)
    float explicit_float = (float)int_num;

    // 3. Mixed Arithmetic Promotion
    float division_result = int_num / 2.0;

    // Displaying the results
    printf("Original Integer: %d\n", int_num);
    printf("Implicitly Converted Float: %0.2f\n", implicit_float);
    printf("Explicitly Casted Float: %0.2f\n", explicit_float);
    printf("Result of Mixed Arithmetic: %0.2f\n", division_result);

    return 0;
}
