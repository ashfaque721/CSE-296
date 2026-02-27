#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char sentence[80];
    int word = 0, vowel = 0, consonant = 0;

    fgets(sentence, sizeof(sentence), stdin);

    int length = strlen(sentence);

    for (int i = 0; i < length; i++)
    {
        char t = tolower(sentence[i]);

        if (isalpha(t))
        {
            if (t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u')
                vowel++;
            else
                consonant++;
        }

        if ((i == 0 && isalpha(t)) ||
            (isalpha(t) && !isalpha(sentence[i - 1])))
        {
            word++;
        }
    }

    printf("Words: %d\n", word);
    printf("Letters: %d\n", vowel + consonant);
    printf("Vowels: %d\n", vowel);
    printf("Consonants: %d\n", consonant);
}