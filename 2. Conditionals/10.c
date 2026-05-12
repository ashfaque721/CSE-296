#include <stdio.h>

int main()
{
    int a, b, c;
    int largest, side1, side2;
    printf("Enter the length of 3 sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Invalid side length");
        return 0;
    }

    if (a > b)
    {
        if (a > c)
        {
            largest = a;
            side1 = b;
            side2 = c;
        }
        else
        {
            largest = c;
            side1 = b;
            side2 = a;
        }
    }
    else
    {
        if (b > c)
        {
            largest = b;
            side1 = c;
            side2 = a;
        }
        else
        {
            largest = c;
            side1 = b;
            side2 = a;
        }
    }

    if (largest < (side1 + side2))
    {
        printf("Triangle can be formed\n");
        if (a == b && b == c)
            printf("Equilateral Triangle");
        else if (a == b || b == c || c == a)
            printf("Isosceles Triangle");
        else
            printf("Scalene Triangle");
    }
    else
        printf("Triangle can not be formed");

    return 0;
}