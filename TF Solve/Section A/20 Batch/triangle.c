#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n <= 26)
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("%c ", 'A' + j);
            }
            printf("\n");
        }
    else
        printf("n should be less than or equal to 26");
}