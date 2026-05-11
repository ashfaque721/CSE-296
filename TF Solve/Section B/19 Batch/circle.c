#include <stdio.h>

int main()
{
    float p, q, x, y, r;
    scanf("%f %f %f %f %f", &p, &q, &x, &y, &r);

    float r_point = (x - p) * (x - p) + (y - q) * (y - q);

    if (r_point > r * r)
        printf("Outside");
    if (r_point == r * r)
        printf("On");
    if (r_point < r * r)
        printf("Inside");

    return 0;
}