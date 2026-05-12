#include <stdio.h>

int amicableFinder(int x, int arr[], int n)
{
    int sum_of_divisors_1 = 0;
    int targetIdx = -1;
    for (int i = 1; i <= x / 2; i++)
    {
        if (x % i == 0)
            sum_of_divisors_1 += i;
    }

    for (int i = 0; i < n; i++)
    {
        int sum_of_divisors_2 = 0;
        if (sum_of_divisors_1 == arr[i])
        {
            for (int j = 1; j <= arr[i] / 2; j++)
            {
                if (arr[i] % j == 0)
                    sum_of_divisors_2 += j;
            }

            if (x == sum_of_divisors_2)
                targetIdx = i;
        }
    }

    return targetIdx;
}

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    int n;
    printf("Enter number of integers: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter numbers: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d", amicableFinder(x, arr, n));

    return 0;
}