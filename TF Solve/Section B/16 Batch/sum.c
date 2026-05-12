#include <stdio.h>
#include <math.h>

int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    float sum = 0;
    for (int i = 1; i <= n; i++)
        sum += (float)factorial(i) / pow(i, i);

    printf("%.2f", sum);
}