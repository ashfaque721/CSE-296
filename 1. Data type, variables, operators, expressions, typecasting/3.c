#include <stdio.h>

int main()
{

    //////// Using ternary operator

    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    c = c >= 'a' && c <= 'z' ? (((c - 'a') + 1) % 26) + 'a' : (((c - 'A') + 1) % 26) + 'A';

    printf("%c", c);

    //////// Using if-else
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    if (c >= 'a' && c <= 'z')
    {
        c = (((c - 'a') + 1) % 26) + 'a';
        printf("%c", c);
    }
    else if (c >= 'A' && c <= 'Z')
    {
        c = (((c - 'A') + 1) % 26) + 'A';
        printf("%c", c);
    }
    else
    {
        printf("Invalid input");
    }

    return 0;
}