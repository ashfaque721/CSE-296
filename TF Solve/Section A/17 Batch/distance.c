#include <stdio.h>
#include <math.h>

struct Point
{
    float x;
    float y;
};

int main()
{
    struct Point p1, p2;
    float dist;

    printf("Enter Point 1: ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Enter Point 2: ");
    scanf("%f %f", &p2.x, &p2.y);

    dist = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));

    printf("The distance is %.2f\n", dist);

    return 0;
}
