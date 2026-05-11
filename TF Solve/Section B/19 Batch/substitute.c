#include <stdio.h>

int myStrLen(char str[])
{
    int i = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        ;
    }
    return i;
}

int main()
{
    char orgstr[50], substr[50];

    gets(orgstr);
    gets(substr);

    int len1 = myStrLen(orgstr);
    int len2 = myStrLen(substr);

    int i = 0;

    for (i = 0; i <= len1 - len2; i++)
    {
        int j = 0;
        int match = 1;

        for (j = 0; j < len2; j++)
        {
            if (orgstr[i + j] != substr[j])
            {
                match = 0;
                break;
            }
        }

        if (match == 1 && len2 > 0)
        {
            for (int k = i; k <= len1 - len2; k++)
                orgstr[k] = orgstr[k + len2];

            break;
        }
    }

    printf("%s", orgstr);

    return 0;
}