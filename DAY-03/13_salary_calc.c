// 2. Enter basic salary of an employee and calculate Gross salary according to given conditions:
// - Basic Salary >= 10000: HRA = 20% of basic, DA = 80% of basic
// - Basic Salary >= 20000: HRA = 25% of basic, DA = 90% of basic
// - Basic Salary >= 30000: HRA = 30% of basic, DA = 95% of basic

#include <stdio.h>
int main()
{
    float basic_salary, gross_salary, hra, da;

    printf("enter the basic salary : ");
    scanf("%f", &basic_salary);

    if (basic_salary >= 30000)
    {
        hra = 0.30 * basic_salary;
        da = 0.95 * basic_salary;
    }
    else if (basic_salary >= 20000)
    {
        hra = 0.25 * basic_salary;
        da = 0.90 * basic_salary;
    }
    else if (basic_salary >= 10000)
    {
        hra = 0.20 * basic_salary;
        da = 0.80 * basic_salary;
    }
    else
    {
        hra = 0;
        da = 0;
    }

    gross_salary = basic_salary + hra + da;

    printf("Basic Salary: %.2f\n", basic_salary);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Gross Salary: %.2f\n", gross_salary);
    return 0;
}