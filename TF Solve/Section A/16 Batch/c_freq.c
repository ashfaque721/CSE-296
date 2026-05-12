#include <stdio.h>

int numOfOccurrences(char c, char *p)
{
    int count = 0;
    while (*p != '\0')
        if (c == *p++)
            count++;

    return count;
}

int main()
{
    char str[50], c;
    scanf("%s %c", str, &c);
    printf("%d", numOfOccurrences(c, str));

    return 0;
}