#include <stdio.h>

int main()
{
    char str[50];
    gets(str);

    char *ptr = str;

    while (*ptr != '\0')
    {
        if ((*ptr >= 'A' && *ptr <= 'Z'))
            *ptr = (((*ptr - 'A') + 1) % 26) + 'A';
        if ((*ptr >= 'a' && *ptr <= 'z'))
            *ptr = (((*ptr - 'a') + 1) % 26) + 'a';
        ptr++;
    }

    ptr = str;

    int freq[10] = {0};
    int distinct_num = 0;

    while (*ptr != '\0')
    {
        if (*ptr >= '0' && *ptr <= '9')
            freq[*ptr - '0']++;
        ptr++;
    }

    for (int i = 0; i < 10; i++)
    {
        if (freq[i] > 0)
            distinct_num++;
    }

    printf("%d\n", distinct_num);
}