#include <stdio.h>

int checkPrintPrime(int n)
{

    if (n < 2)
        return 0;

    int isPrime = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    return isPrime;
}

int main()
{
    int n;
    printf("Enter a range: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        if (checkPrintPrime(i) == 1)
            printf("%d ", i);
    }

    return 0;
}