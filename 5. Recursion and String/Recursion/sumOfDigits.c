#include <stdio.h>

int sumDigits(int n)
{
    if (n < 10)
        return n;
    else
        return (n % 10) + sumDigits(n / 10);
}

int main()
{
    printf("%d", sumDigits(123));
    return 0;
}