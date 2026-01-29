#include <stdio.h>

int main()
{
    int n, next, prev = 1, prev_prev = 0;
    printf("Input: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", prev_prev);
        next = prev + prev_prev;
        prev_prev = prev;
        prev = next;
    }

    return 0;
}