#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[50], word[10];

    gets(sentence);
    gets(word);

    int idx = -1;
    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == word[0])
        {
            int j;
            for (j = 1; word[j] != '\0'; j++)
            {
                if (sentence[i + j] != word[j])
                    break;
            }

            if (j == strlen(word))
            {
                idx = i;
                break;
            }
        }
    }

    if (idx == -1)
        printf("Not found");
    else
        printf("Found at position: %d", idx);
}