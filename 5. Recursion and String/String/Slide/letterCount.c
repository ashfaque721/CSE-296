#include <stdio.h>

int main()
{
    char letter;
    char str[20];

    gets(str);
    scanf("%c", &letter);

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == letter)
            count++;
    }

    printf("Count: %d", count);
}