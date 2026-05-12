#include <stdio.h>

int main()
{
    float salary, taxable_salary, tax = 0;
    int total_salary;

    printf("Enter your salary: ");
    scanf("%f", &salary);

    taxable_salary = salary;

    if (taxable_salary > 1600000)
    {
        tax += (taxable_salary - 1600000) * 0.25;
        taxable_salary = 1600000;
    }
    if (taxable_salary > 1100000)
    {
        tax += (taxable_salary - 1100000) * 0.2;
        taxable_salary = 1100000;
    }
    if (taxable_salary > 700000)
    {
        tax += (taxable_salary - 700000) * 0.15;
        taxable_salary = 700000;
    }
    if (taxable_salary > 400000)
    {
        tax += (taxable_salary - 400000) * 0.1;
        taxable_salary = 400000;
    }
    if (taxable_salary > 300000)
    {
        tax += (taxable_salary - 300000) * 0.05;
    }

    total_salary = salary - tax;

    printf("Your salary after taxes is: %d", total_salary);

    return 0;
}
