#include <stdio.h>

#define PI 3.1416

int main()
{
    int n;
    float x, sum = 0, t, r;
    printf("Enter the value of the angle in Degree: ");
    scanf("%f", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    x = x * (PI / 180);

    sum = t = 1;

    for (int i = 1; i < n; i++)
    {
        r = -x * x / (2 * i * (2 * i - 1));
        t = r * t;
        sum += t;
    }

    printf("%f", sum);
}