#include <stdio.h>
#include <math.h>

int main()
{
    int m, n, sum, count = 0, digit, digits, max, min;

    printf("Enter range: ");
    scanf("%d %d", &m, &n);

    for (int i = n; m <= i; i--) // Loop initialize
    {
        int temp = i;
        sum = 0;
        digits = 0;

        while (temp > 0) // Digit 3
        {
            digits++;         // 1 -> 2 -> 3
            temp = temp / 10; // 407 -> 40 -> 4 -> 0
        }

        temp = i;

        while (temp > 0)
        {
            digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        if (sum == i)
        {
            count++;
            if (count == 1)
                max = i;
            min = i;
        }
    }

    if (count == 0)
        printf("-1");
    else
        printf("%d %d", max, min);

    return 0;
}