#include <stdio.h>

int main()
{

    int n;
    int a = 0, b = 1, after;

    printf("Enter the number of term in Fibonacci series: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        after = a + b;
        a = b;
        b = after;
    }

    return 0;
}