#include <stdio.h>
#include <string.h>

struct Student
{
    int ID;
    char NAME[50];
    int AGE;
    float MARKS;
};

int main()
{
    struct Student S;

    printf("Enter Student ID: ");
    scanf("%d", &S.ID);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", S.NAME);

    printf("Enter Age: ");
    scanf("%d", &S.AGE);

    printf("Enter Marks: ");
    scanf("%f", &S.MARKS);

    printf("-------- STUDENT INFORMATION -----\n");
    printf("ID: %d\n", S.ID);
    printf("Name: %s\n", S.NAME);
    printf("Age: %d\n", S.AGE);
    printf("Marks: %.2f\n", S.MARKS);

    return 0;
}