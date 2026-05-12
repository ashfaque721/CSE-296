#include <stdio.h>
#include <stdlib.h>

int myStrlen(const char string[])
{
    int count = 0;

    while (string[count] != '\0')
        ++count;

    return count;
}

void concat(char result[], const char str1[], const char str2[])
{
    int i, j;
    for (i = 0; str1[i] != '\0'; ++i)
    {
        result[i] = str1[i];
    }
    for (j = 0; str2[j] != '\0'; ++j)
    {
        result[i + j] = str2[j];
    }

    result[i + j] = '\0';
}

int main()
{

    char word1[] = "eshan";
    char word2[] = "okokok";
    char word3[] = "jsklfjslkjflks";

    printf("%d  -  %d   -  %d", myStrlen(word1), myStrlen(word2), myStrlen(word3));

    return 0;
}