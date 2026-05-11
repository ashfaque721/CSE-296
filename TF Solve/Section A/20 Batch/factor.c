#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int odd = -1, even = -1;

    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            count++;
    }

    int factors[count];

    int k = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            factors[k++] = i;
    }

    for (int i = 0; i < count; i++)
    {
        if (factors[i] % 2 != 0)
        {
            odd = factors[i];
            break;
        }
    }

    for (int i = count - 1; i >= 0; i--)
    {
        if (factors[i] % 2 == 0)
        {
            even = factors[i];
            break;
        }
    }

    printf("Smallest odd factor: %d\n", odd);
    printf("Largest even factor: %d\n", even);
}