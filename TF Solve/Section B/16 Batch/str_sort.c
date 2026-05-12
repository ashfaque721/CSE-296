#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    gets(str);

    int len = strlen(str);

    for (int i = 0; i < len - 1; i++)
        for (int j = 0; j < len - i - 1; j++)
        {
            if (str[j] > str[j + 1])
            {
                char temp = str[j + 1];
                str[j + 1] = str[j];
                str[j] = temp;
            }
        }

    puts(str);
}