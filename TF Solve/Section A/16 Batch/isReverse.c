#include <stdio.h>

int myStrlen(char *p)
{
    char *start = p;
    while (*p != '\0')
        p++;
    return p - start;
}

int isReverse(char *p, char *q)
{
    int reverse = 1;
    int len1 = myStrlen(p);
    int len2 = myStrlen(q);

    if (len1 != len2)
        return 0;

    q = q + len2 - 1;

    while (*p != '\0')
    {
        if (*p++ != *q--)
        {
            reverse = 0;
            break;
        }
    }

    return reverse;
}

int main()
{
    char p[50], q[50];
    gets(p);
    gets(q);

    printf("%d", isReverse(p, q));

    return 0;
}