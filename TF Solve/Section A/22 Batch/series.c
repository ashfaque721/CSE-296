#include <stdio.h>

int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    double sum = 0;
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        sum += (double)((2 * i - 1) / (factorial(i)));
    }

    printf("%lf", sum);

    return 0;
}