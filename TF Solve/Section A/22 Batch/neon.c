#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int n_squared = n * n;
    int digit;
    int sum = 0, temp = n_squared;

    while (temp > 0)
    {
        digit = temp % 10;
        temp /= 10;
        sum += digit;
    }

    if (n == sum)
        printf("true");
    else
        printf("false");
}