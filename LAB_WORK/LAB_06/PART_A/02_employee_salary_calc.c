// 2. Enter basic salary of an employee and calculate Gross salary according to 
// given conditions: -  
// Basic Salary >= 10000: HRA = 20% of basic, DA = 80% of basic 
// Basic Salary >= 20000: HRA = 25% of basic, DA = 90% of basic 
// Basic Salary >= 30000: HRA = 30% of basic, DA = 95% of basic 

#include<stdio.h>

int main()
{
    float BASIC_SAL,HRA,DA,GROSS_SAL;

    printf("enter the basic salary : ");
    scanf("%f",&BASIC_SAL);

    if (BASIC_SAL >= 30000)
    {
        HRA = BASIC_SAL * 0.30;
        DA = BASIC_SAL * 0.95;
    }
    else if (BASIC_SAL >= 20000)
    {
        HRA = BASIC_SAL * 0.25;
        DA = BASIC_SAL * 0.90;
    }
    else if (BASIC_SAL >= 10000)
    {
        HRA = BASIC_SAL * 0.20;
        DA = BASIC_SAL * 0.80;
    }
    else
    {
        HRA = 0;
        DA = 0;
    }


    GROSS_SAL = BASIC_SAL + DA + HRA;

    printf("GROSS SALARY = %f",GROSS_SAL);
    return 0;
}