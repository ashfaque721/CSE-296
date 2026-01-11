#include <stdio.h>
#include <stdbool.h>

int main()
{

    char operator;
    float n1, n2, result;

    printf("Enter 2 numbers and an operator: ");
    scanf("%f %f %c", &n1, &n2, &operator);

    switch (operator)
    {
    case '+':
        result = n1 + n2;
        break;
    case '-':
        result = n1 - n2;
        break;
    case '*':
        result = n1 * n2;
        break;
    case '/':
        if (n2 == 0)
        {
            printf("Zero division not allowed");
            return 1;
        }

        result = n1 / n2;
        break;

    default:
        printf("Not a valid operator");
        return 1;
    }

    printf("%.2f", result);

    return 0;
}