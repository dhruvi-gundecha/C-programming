#include <stdio.h>

struct Employee
{
    int ID;
    char NAME[50];
    float SALARY;
    char DEPARTMENT[50];
};

int main()
{
    struct Employee E;

    printf("Enter Employee ID: ");
    scanf("%d", &E.ID);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", E.NAME);

    printf("Enter Salary: ");
    scanf("%f", &E.SALARY);

    printf("Enter Department: ");
    scanf(" %[^\n]", E.DEPARTMENT);

    printf("\n----- EMPLOYEE INFORMATION -----\n");
    printf("ID: %d\n", E.ID);
    printf("Name: %s\n", E.NAME);
    printf("Salary: %.2f\n", E.SALARY);
    printf("Department: %s\n", E.DEPARTMENT);

    return 0;
}