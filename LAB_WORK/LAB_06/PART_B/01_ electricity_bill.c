// B Write following programs in C. (Decision Making: Nested and Ladder if) 
// 1. Input electricity unit charge and calculate the total electricity bill 
// according to the given condition: - For first 50 units Rs. 0.50/unit - For 
// next 100 units Rs. 0.75/unit - For next 100 units Rs. 1.20/unit - For unit
//  above 250 Rs. 1.50/unit - An additional surcharge of 20% is added to the bill. 

#include <stdio.h>

int main()
{
    float units, bill, surcharge, total;

    printf("Enter electricity units: ");
    scanf("%f", &units);

    if (units <= 50)
    {
        bill = units * 0.50;
    }
    else if (units <= 150)
    {
        bill = (50 * 0.50) + ((units - 50) * 0.75);
    }
    else if (units <= 250)
    {
        bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    }
    else
    {
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    surcharge = bill * 0.20;
    
    total = bill + surcharge;

    printf("Electricity Bill = %.2f\n", total);

    return 0;
}