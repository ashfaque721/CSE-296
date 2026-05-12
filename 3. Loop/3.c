#include <stdio.h>

int main()
{

    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 2; i <= (n / 2); i++)
    {
        if (n % i == 0)
        {
            printf("The Number is not prime");
            break;
        }
        else
        {
            printf("The Number is prime");
            break;
        }
    }

    return 0;
}