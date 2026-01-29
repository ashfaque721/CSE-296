#include <stdio.h>

int main()
{

    int n, number = 0, sum = 0;

    printf("Enter input: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Enter a non-negative: ");
        scanf("%d", &n);
    }

    for (int i = 1; i <= n; i++)
    {
        number = 0;

        for (int k = 1; k <= i; k++)
        {
            number = number * 10 + k;
        }

        sum += number;

        printf("%d", number);
        if (i == n)
            printf("=");
        else
            printf("+");
    }

    printf("%d", sum);

    return 0;
}