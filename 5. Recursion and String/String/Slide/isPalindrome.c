#include <stdio.h>

int myStrlen(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        ;
    }

    return i;
}

int main()
{
    char sentence[80], rev[80];
    gets(sentence);
    int length = myStrlen(sentence);

    int i, j = 0;

    for (i = length - 1; i >= 0; i--)
    {
        rev[j] = sentence[i];
        j++;
    }

    for (i = 0; i < length; i++)
    {
        if (sentence[i] != rev[i])
            break;
    }

    if (i == length)
        printf("Palindrome");
    else
        printf("No");
}