#include <stdio.h>

int main()
{

    int n, digit = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        n /= 10;
        digit++;
    }

    printf("%d", digit);

    return 0;
}