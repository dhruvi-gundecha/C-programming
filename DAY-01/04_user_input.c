
// scanf() needs the memory address where it should store the input.
// age => value
// &age => address of age

#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your age is %d", age);

    return 0;
}