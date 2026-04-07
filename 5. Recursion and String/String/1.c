#include <stdio.h>

int myStrlen(char str[])
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

int main()
{
    char s1[80], s2[80], s3[80];
    char result[80];

    gets(s1);
    gets(s2);
    gets(s3);

    int len1 = myStrlen(s1);
    int len2 = myStrlen(s2);
    int len3 = myStrlen(s3);

    int numReplace = 0;

    int i = 0, k = 0;
    while (i < len1)
    {
        int j;
        for (j = 0; j < len2; j++)
        {
            if (s1[i + j] != s2[j])
                break;
        }

        if (j == len2)
        {
            numReplace++;
            for (int x = 0; x < len3; x++)
            {
                result[k++] = s3[x];
            }

            i += len2;
        }

        else
            result[k++] = s1[i++];
    }

    result[k] = '\0';

    printf("Resulting string: \"%s\"\n", result);
    printf("Number of replacements: %d", numReplace);
    return 0;
}