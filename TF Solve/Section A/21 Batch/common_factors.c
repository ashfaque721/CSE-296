#include <stdio.h>

int numberOfCommonFactors(int x, int y)
{
    int count = 0;

    int limit = (x < y) ? x : y;

    for (int i = 1; i <= limit; i++)
    {
        if (x % i == 0 && y % i == 0)
            count++;
    }

    return count;
}

int RelativelyPrime(int x, int y)
{
    int totalFactors = numberOfCommonFactors(x, y);

    if (totalFactors == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int p, q;
    scanf("%d %d", &p, &q);

    if (RelativelyPrime(p, q))
    {
        printf("%d\n", numberOfCommonFactors(p, q));
        printf("They are Relatively prime");
    }

    else
    {
        printf("%d common factors\n", numberOfCommonFactors(p, q));
        printf("They are not Relatively prime");
    }
}