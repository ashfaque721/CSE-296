#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int temp = n, sum = 0;
    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    if (sum % 2 == 0)
        printf("Even Sum");
}