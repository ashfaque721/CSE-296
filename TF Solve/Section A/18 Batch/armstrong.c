#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int temp = n;
    int sum = 0;
    while (temp > 0)
    {
        sum += pow(temp % 10, 3);
        temp /= 10;
    }

    if (sum == n)
        printf("%d is an armstrong number", n);

    return 0;
}
