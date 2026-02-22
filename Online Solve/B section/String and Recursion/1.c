#include <stdio.h>

void reverseNum(int n, int started)
{
    if (n == 0)
        return;

    int digit = n % 10;

    if (digit != 0)
        started = 1;

    if (started)
        printf("%d", digit);

    reverseNum(n / 10, started);
}

int main()
{
    int num;
    scanf("%d", &num);
    reverseNum(num, 0);
    return 0;
}