#include <stdio.h>

double cubicRoot(double num)
{
    double start = 0.0, end = num;
    double mid;
    double precision = 0.00001;
    int is_negative = 0;

    if (num < 0)
    {
        is_negative = 1;
        num = -num;
        end = num;
    }

    if (num < 1.0)
        end = 1.0;

    while ((end - start) > precision)
    {
        mid = (start + end) / 2.0;
        if ((mid * mid * mid) > num)
            end = mid;
        else
            start = mid;
    }

    mid = (start + end) / 2.0;
    if (is_negative)
        return -mid;
    return mid;
}

int main()
{
    double n;
    printf("Enter a number: ");
    scanf("%lf", &n);

    printf("Cubic root is: %.2f\n", cubicRoot(n));

    return 0;
}