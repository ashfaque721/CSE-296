#include <stdio.h>

int pow(int x, int y)
{
    if (y < 1)
        return 1;

    return x * pow(x, y - 1);
}

int main()
{
    printf("%d", pow(2, 10));
    return 0;
}