#include <stdio.h>

int main()
{

    char ch;

    FILE *fp = fopen("sample.txt", "r");

    int a = 0, e = 0, i = 0, o = 0, u = 0;

    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == 'a' || ch == 'A')
            a++;
        if (ch == 'e' || ch == 'E')
            e++;
        if (ch == 'i' || ch == 'I')
            i++;
        if (ch == 'o' || ch == 'O')
            o++;
        if (ch == 'u' || ch == 'U')
            u++;
    }

    fclose(fp);

    if (a)
        printf("a: %d\n", a);
    if (e)
        printf("e: %d\n", e);
    if (i)
        printf("i: %d\n", i);
    if (o)
        printf("o: %d\n", o);
    if (u)
        printf("u: %d\n", u);

    return 0;
}
