#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size;
    char *str;

    printf("Enter limit of the text: ");
    if (scanf("%d", &size) != 1 || size <= 0)
    {
        printf("Invalid size.\n");
        return 1;
    }

    str = malloc((size + 1) * sizeof(char));

    if (str == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    getchar(); // consume leftover newline from scanf

    printf("Enter some text:\n");

    fgets(str, size + 1, stdin);

    printf("Inputted text is: %s\n", str);

    free(str);
    str = NULL;

    return 0;
}