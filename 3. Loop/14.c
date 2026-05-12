#include <stdio.h>

int main()
{

    int n, num, max, min;
    float sum = 0;

    printf("Enter the numbers of input: ");
    scanf("%d", &n);

    printf("Enter numbers: ");

    for (int i = 1; i <= n; i++)
    {
        scanf(" %d", &num);

        if (i == 1)
        {
            min = num;
            max = num;
        }
        else
        {
            if (num >= max)
                max = num;
            if (num < min)
                min = num;
        }

        sum += num;
    }

    printf("Maximum: %d\nMinimum: %d\nAverage: %.2f\n", max, min, sum / n);

    return 0;
}