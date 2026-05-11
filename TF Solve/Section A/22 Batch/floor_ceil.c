#include <stdio.h>

int main()
{
    float n;
    scanf("%f", &n);

    int floor, ceil, round;

    floor = (int)n;

    if (n > floor)
        ceil = floor + 1;
    else
        ceil = floor;

    if ((n - floor) >= 0.5)
        round = ceil;
    else
        round = floor;

    printf("Floor value = %d\n", floor);
    printf("Ceil value = %d\n", ceil);
    printf("Round value = %d\n", round);
}