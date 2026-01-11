#include <stdio.h>

int main()
{

    int sum = 0, n;

    printf("Enter the number of natural numbers: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
        sum += i;

    printf("The sum of first %d natural numbers is %d", n, sum);

    return 0;
}