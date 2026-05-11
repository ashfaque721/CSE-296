#include <stdio.h>

void TriPattern(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int k = 0; k < n - i; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    if (n <= 0 || n > 9)
        printf("n should be positive and not greater than 9");

    TriPattern(n);

    return 0;
}