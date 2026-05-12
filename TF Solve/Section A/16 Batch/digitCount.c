#include <stdio.h>

int count = 0;

int DigitCount(int n)
{
    if (n < 1)
        return count;
    count++;
    DigitCount(n / 10);
}

int main()
{
    int x, y;
    scanf("%d", &x);
    y = DigitCount(x);
    printf("Number of Digits: %d\n", y);
    return 0;
}