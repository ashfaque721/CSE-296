#include <stdio.h>

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i < n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int largestPrime(int *arr, int n)
{
    int maxPrime = -1;
    for (int i = 0; i < n; i++)
        if (isPrime(arr[i]) && arr[i] > maxPrime)
            maxPrime = arr[i];
    return maxPrime;
}

int main()
{
    int n, i, a, arr[50];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    a = largestPrime(arr, n);
    if (a == -1)
        printf("No Prime in the array\n");
    else
        printf("Largest Prime: %d\n", a);
    return 0;
}