#include <stdio.h>

double getMax(double num1, double num2, double num3)
{
    double max = num1;
    if (num2 > max)
        max = num2;
    if (num3 > max)
        max = num3;

    return max;
}

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("%lf", getMax(a, b, c));
}