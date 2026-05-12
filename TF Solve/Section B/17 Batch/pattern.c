#include <stdio.h>

void pattern(int n)
{
    if (n == 0)
        return;
    pattern(n - 1);

    if (n % 2 != 0)
        for (int i = 1; i <= n; i++)
            printf("%d", i);

    else
        for (int i = 0; i < n; i++)
            printf("%c", 'A' + i);

    printf("\n");
}

int main()
{
    pattern(4);

    return 0;
}

// divisible by 3
// not divisible by 2
//

// output: 8 3 2  1 2' 5' 7' 8'