#include <stdio.h>
#include <string.h>

int samestring(char s1[], char s2[])
{
    int len1 = strlen(s1), len2 = strlen(s2);

    if (len1 != len2)
        return 0;

    for (int i = 0; i < len1; i++)
    {
        if (s1[i] != s2[i])
            return 0;
    }

    return 1;
}

int main()
{
    char s1[50], s2[50];

    gets(s1);
    gets(s2);

    printf("%d", samestring(s1, s2));

    return 0;
}