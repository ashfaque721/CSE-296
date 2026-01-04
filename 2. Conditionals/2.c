#include <stdio.h>

int main()
{
    float salary = 0, tax = 0;
    int total_salary = 0;

    printf("Enter your salary: ");
    scanf("%f", &salary);

    if(salary <= 300000)
    {
        total_salary = salary;
    } else if (salary <= 400000) {
        tax = (salary - 300000) * 0.05;
        total_salary = salary - tax;
    } else if (salary <= 700000) {
        tax = (salary - 400000) * 0.1 + 100000 * 0.05;
        total_salary = salary - tax;
    } else if (salary <= 1100000) {
        tax = (salary - 700000) * 0.15 + 300000 * 0.1 + 100000 * 0.05;
        total_salary = salary - tax;
    } else if (salary <= 1600000) {
        tax = (salary - 1100000) * 0.2 + 400000 * 0.15 + 300000 * 0.1 + 100000 * 0.05;
        total_salary = salary - tax;
    } else {
        tax = (salary - 1600000) * 0.25 + 500000 * 0.2 + 400000 * 0.15 + 300000 * 0.1 + 100000 * 0.05;
        total_salary = salary - tax;
    }

    printf("Your salary after taxes is: %d", total_salary);

    return 0;
}

