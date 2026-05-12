#include <stdio.h>

int main()
{

    char c;
    int n;

    printf("Enter a character: ");
    scanf(" %c", &c);

    printf("Enter position: ");
    scanf(" %d", &n);

    // For n position ahead

    if (c >= 'a' && c <= 'z')
    {
        c = (((c - 'a') + n) % 26) + 'a';
        printf("%c", c);
    }
    else if (c >= 'A' && c <= 'Z')
    {
        c = (((c - 'A') + n) % 26) + 'A';
        printf("%c", c);
    }
    else
    {
        printf("Invalid input");
    }

    // For n position behind

    if (c >= 'a' && c <= 'z')
    {
        c = (((c - 'a') - n + 26) % 26) + 'a';
        printf("%c", c);
    }
    else if (c >= 'A' && c <= 'Z')
    {
        c = (((c - 'A') - n + 26) % 26) + 'A';
        printf("%c", c);
    }
    else
    {
        printf("Invalid input");
    }

    return 0;
}