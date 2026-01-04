#include <stdio.h>

int main()
{
    int n;
    int d1, d2, d3, d4;
    int largest = 0, second_largest = 0;

    printf("Enter a 4 digit number: ");
    scanf("%d", &n);

    d1 = n / 1000;
    d2 = (n / 100) % 10;
    d3 = (n / 10) % 10;
    d4 = n % 10;

    if (d1 > d2)
    {
        largest = d1;
        second_largest = d2;
    }
    else
    {
        largest = d2;
        second_largest = d1;
    }

    if (d3 > largest)
    {
        second_largest = largest;
        largest = d3;
    }
    else if (largest > d3 && second_largest < d3)
        second_largest = d3;

    if (d4 > largest)
    {
        second_largest = largest;
        largest = d4;
    }
    else if (largest > d4 && second_largest < d4)
        second_largest = d4;

    // Using Nested if-else

    if (d1 > d2)
    {
        if (d3 > d4)
        {
            if (d1 > d3)
            {
                largest = d1;
                second_largest = (d2 > d3) ? d2 : d3;
            }
            else
            {
                largest = d3;
                second_largest = (d1 > d4) ? d1 : d4;
            }
        }
        else
        {
            if (d1 > d4)
            {
                largest = d1;
                second_largest = (d2 > d4) ? d2 : d4;
            }
            else
            {
                largest = d4;
                second_largest = (d1 > d3) ? d1 : d3;
            }
        }
    }
    else
    {
        if (d3 > d4)
        {
            if (d2 > d3)
            {
                largest = d2;
                second_largest = (d1 > d3) ? d1 : d3;
            }
            else
            {
                largest = d3;
                second_largest = (d2 > d4) ? d2 : d4;
            }
        }
        else
        {
            if (d2 > d4)
            {
                largest = d2;
                second_largest = (d1 > d4) ? d1 : d4;
            }
            else
            {
                largest = d4;
                second_largest = (d2 > d3) ? d2 : d3;
            }
        }
    }

    printf("%d", second_largest);
}
