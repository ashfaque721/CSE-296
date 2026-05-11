#include <stdio.h>
#include <string.h>

int main()
{
    char str[20], rev[20];
    gets(str);

    int len = strlen(str);

    int j = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        rev[j++] = str[i];
    }

    int i;
    for (i = 0; i < len; i++)
    {
        if (rev[i] != str[i])
            break;
    }

    if (i == len)
        printf("Palindrome");
    else
        printf("Not a Palindrome");
}