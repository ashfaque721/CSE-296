#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int isTwin = 1;

    if (a < 2 || b < 2)
        isTwin = 0;

    if (a - b == 2 || b - a == 2)
    {
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                isTwin = 0;
                break;
            }
        }

        for (int i = 2; i < b; i++)
        {
            if (b % i == 0)
            {
                isTwin = 0;
                break;
            }
        }
    }
    else
        isTwin = 0;

    if (isTwin)
        printf("YES");
    else
        printf("NO");
}