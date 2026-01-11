#include <stdio.h>
int main()
{
    int n, sum = 0;

    printf("Enter input: ");

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum -= i * i;
        else
            sum += i * i;
    }

    printf("%d", sum);

    return 0;
}