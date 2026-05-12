#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    char letter;

    gets(str);
    scanf("%c", &letter);

    int idx = -1;
    int len = strlen(str);

    for (int i = len; i > 0; i--)
    {
        if (str[i] == letter)
        {
            idx = i;
            break;
        }
    }

    if (idx == -1)
        printf("Not found");
    else
        printf("Found at index: %d", idx);
}