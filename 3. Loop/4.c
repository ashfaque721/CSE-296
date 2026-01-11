#include <stdio.h>

int main()
{

    for (int i = 2; i <= 1000; i++)
    {

        int prime = 1;

        for (int j = 2; j <= (i / 2); j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime)
            printf("%d\n", i);
    }

    return 0;
}