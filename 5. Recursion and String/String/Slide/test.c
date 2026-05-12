#include <stdio.h>
#include <string.h>
int main()
{

    char s1[80], s2[80];
    printf("Enter a word: ");
    gets(s1);
    strcpy(s2, s1);
    strrev(s2);

    if (strcmp(s1, s2) == 0)
        printf("\"%s\" is a Palindrome", s1);
    else
        printf("\"%s\" is not a Palindrome", s1);
    return 0;
}