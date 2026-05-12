#include <stdio.h>

int main()
{
    int n, temp, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (n > 0)
    {
        reversed = reversed * 10 + (n % 10);

        n /= 10;
    }

    if (temp == reversed)
        printf("Number is palindrome");
    else
        printf("Not palindrome");

    return 0;
}