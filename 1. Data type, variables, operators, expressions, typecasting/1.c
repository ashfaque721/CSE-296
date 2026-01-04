#include <stdio.h>

int main()
{
    int a = 5, b = 6, c = 7;

    ///////// Using temporary variable
    int temp = 0;

    temp = b;
    b = a;
    a = c;
    c = temp;

    printf("a = %d, b = %d, c = %d\n", a, b, c);

    ////////////------------------

    /////// Without using temporary variable
    int d = 5, e = 6, f = 7;

    d = d + e + f;   // 18
    e = d - (e + f); // 18 - (6 + 7) = 5
    f = d - (e + f); // 18 - (5 + 7) = 6
    d = d - (e + f); // 18 - (5 + 6) = 7

    printf("d = %d, e = %d, f = %d", d, e, f);

    return 0;
}
