#include <stdio.h>
#include <string.h>

int main()
{
    char Str[100];
    gets(Str);

    strlwr(Str);

    int chars[26] = {0};

    for (int i = 0; Str[i] != '\0'; i++)
    {
        if (Str[i] >= 'a' && Str[i] <= 'z')
            chars[Str[i] - 'a'] = 1;
    }

    int pangram = 1;

    for (int i = 0; i < 26; i++)
    {
        if (chars[i] == 0)
        {
            pangram = 0;
            break;
        }
    }

    if (pangram)
        printf("Pangram");
    else
        printf("Not pangram");

    return 0;
}