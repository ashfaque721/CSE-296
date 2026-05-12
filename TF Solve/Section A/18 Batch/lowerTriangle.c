#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n % 2 == 0 || n > 5)
        printf("Invalid Input");

    else
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= (2 * i - 1); j++)
            {
                printf("%d", j);
            }
            printf("\n");
        }
    }
}