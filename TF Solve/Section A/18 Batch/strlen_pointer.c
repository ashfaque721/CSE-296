#include <stdio.h>

int ptrStrlen(char str[])
{
    char *ptr = str;

    while (*ptr != '\0')
        ptr++;

    return (ptr - str);
}

int main()
{
    char str[50];
    gets(str);
    printf("%d", ptrStrlen(str));
}
