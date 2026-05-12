#include <stdio.h>

int main()
{
    FILE *fp = fopen("file.txt", "r");
    char ch;
    int charCount = 0;
    int wordCount = 1;

    while ((ch = fgetc(fp)) != EOF)
    {
        charCount++;

        if (ch == ' ' || ch == '\n')
            wordCount++;
    }

    fclose(fp);
}