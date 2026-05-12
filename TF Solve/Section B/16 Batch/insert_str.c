#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50];
    int m;
    gets(str1);
    gets(str2);
    int len1 = strlen(str1), len2 = strlen(str2);
    scanf("%d", &m);

    if (m < len1)
    {
        for (int i = len1; i >= m; i--)
            str1[i + len2] = str1[i];

        for (int i = 0; i < len2; i++)
            str1[m + i] = str2[i];
    }

    puts(str1);
}