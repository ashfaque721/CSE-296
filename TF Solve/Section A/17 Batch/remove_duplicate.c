#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    gets(str);
    int len = strlen(str);

    int freq[256] = {0};

    for (int i = 0; i < len; i++)
    {
        if (freq[str[i]] == 0)
        {
            printf("%c", str[i]);
            freq[str[i]] = 1;
        }
    }

    return 0;
}