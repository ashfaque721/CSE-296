#include <stdio.h>

/*
int arraySum(int array[], const int n)
{
    int sum = 0, *ptr;
    int *const arrayEnd = array + n;
    for (ptr = array; ptr < arrayEnd; ptr++)
    {
        sum += *ptr;
    }

    return sum;
}

void main(void)
{
    int values[5] = {4, 56, 6, 5, 6};
    printf("The sum is %i", arraySum(values, 5));
}
*/

// int mystrlen(const char *str)
// {
//     const char *lastAddress = str;
//     while (*lastAddress)
//         ++lastAddress;
//     return lastAddress - str;
// }

/*
int sqr(int *num)
{
    *num = *num * *num;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    sqr(&n);
    printf("%d", n);
    return 0;
}
*/