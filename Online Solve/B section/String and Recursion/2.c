#include <stdio.h>
#include <string.h>

int checkOverlap(char s1[], char s2[])
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    int max = (len1 < len2) ? len1 : len2;

    for (int k = max; k > 0; k--)
    {
        int match = 1;
        for (int i = 0; i < k; i++)
        {
            if (s1[len1 - k + i] != s2[i])
            {
                match = 0;
                break;
            }
        }

        if (match)
            return k;
    }

    return 0;
}

int main()
{
    char s1[50], s2[50];

    gets(s1);
    gets(s2);

    printf("%d", checkOverlap(s1, s2));
    return 0;
}