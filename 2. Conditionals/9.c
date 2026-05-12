#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
            printf("%d", c);
        else
            printf("%d", a);
    }
    else
    {
        if (b > c)
            printf("%d", c);
        else
            printf("%d", b);
    }

    return 0;
}