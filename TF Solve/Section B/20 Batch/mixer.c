#include <stdio.h>
#include <string.h>

void mixer(char s1[], char s2[], char s[])
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    int i = 0, j = 0, k = 0;

    while (i < len1 || j < len2)
    {
        if (i < len1)
            s[k++] = s1[i++];
        if (j < len2)
            s[k++] = s2[j++];
    }

    s[k] = '\0';
}

int main()
{
    char s1[100], s2[100], s[100];
    gets(s1);
    gets(s2);

    mixer(s1, s2, s);

    printf("%s", s);

    return 0;
}