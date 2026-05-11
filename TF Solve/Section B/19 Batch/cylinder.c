#include <stdio.h>

struct point
{
    double x;
    double y;
};

struct circle
{
    struct point center;
    double radius;
};

struct cylinder
{
    double height;
    struct circle circular_base;
};

void setvalues(struct cylinder *c, double height, struct point center, double radius)
{
    c->height = height;
    c->circular_base.radius = radius;
    c->circular_base.center = center;
}

double volume(struct cylinder c)
{
    double volume = 3.1416 * c.circular_base.radius * c.circular_base.radius * c.height;
    return volume;
}

int main()
{
    struct point p = {1.0, 2.0};
    struct cylinder c;
    setvalues(&c, 3.0, p, 2.0);
    printf("%.4lf\n", volume(c));

    return 0;
}