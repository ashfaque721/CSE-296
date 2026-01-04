#include <stdio.h>

int main()
{

    // Using single equation

    /*

    int n;

    printf("Enter a 4 digit number: ");
    scanf("%d", &n);

    n = (n % 10) * 1000 + ((n / 10) % 10) * 100 + ((n / 100) % 10) * 10 + n / 1000;

    printf("%d", n);

    */

    // Using loop (works for any digits of number)

    int num, reverse = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        reverse = reverse * 10 + (num % 10);

        num = num / 10;
    }

    printf("%d", reverse);

    return 0;
}