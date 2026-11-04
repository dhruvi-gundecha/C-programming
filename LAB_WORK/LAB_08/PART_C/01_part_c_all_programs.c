// 1. Calculate sum and average of the square of first 10 integers whose square has last digit 3. 

#include<stdio.h>
int main(){
    int sum=0,i=1,rem=0,count=0;
    float ave;
    while(count<10){

        rem=(i*i)%10;
        if(rem==9){
            sum+=(i*i);
            count++;
        }
        i++;
    }

    ave=sum/10;
    printf("sum = %d\n",sum);
    printf("average = %0.2f\n",ave);
    return 0;
}

// 2. Print sum of series 1 + 4 + 9 + 16 + 25 + 36 + …n.  

#include<stdio.h>
int main(){

    int i=1,count=1,num,sum=0;

    printf("enter the number of series you want : ");
    scanf("%d",&num);

    while(i<=num){
        sum+=(i*i);
        i++;
    }

    printf(" sum of series =  %d  ",sum);
    return 0;
}

// 3. Take two numbers input from user and perform a division operation and find out quotient and reminder 
// (without using / and % operator) also note that a smaller number should divide a bigger number.  

#include <stdio.h>
int main() {
    int num1, num2;
    int dividend, divisor;
    int quotient = 0;
    int remainder;

    // Take two numbers as input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Ensure the smaller number divides the bigger number
    if (num1 > num2) {
        dividend = num1;
        divisor = num2;
    } else {
        dividend = num2;
        divisor = num1;
    }

    // Handle edge case: division by zero
    if (divisor == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }

    // Repeated subtraction logic
    remainder = dividend; // Start with the full amount
    while (remainder >= divisor) {
        remainder -= divisor; // Subtract the divisor
        quotient++;           // Count how many times we subtracted
    }

    // Print the results
    printf("Bigger number (Dividend): %d\n", dividend);
    printf("Smaller number (Divisor): %d\n", divisor);
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}

// 4. Take two numbers input from user and perform a multiplication without using a * operator.

#include <stdio.h>
int main() {
    int num1, num2;
    int product = 0;

    // Take two numbers as input from the user
    printf("Enter two numbers to multiply: ");
    scanf("%d %d", &num1, &num2);

    // Repeated addition logic
    // Add num1 to product, exactly num2 times
    for (int i = 0; i < num2; i++) {
        product += num1;
    }

    // Print the result
    printf("Product of %d and %d is = %d\n", num1, num2, product);

    return 0;
}
