#include <stdio.h>

int main()
{

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0 || n % 5 == 0)
        printf("Divisible by 2 or 5");
    else if (n % 2 != 0 && n % 5 != 0)
        printf("Not divisible by both");

    return 0;
}