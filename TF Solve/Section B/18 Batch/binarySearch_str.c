#include <stdio.h>
#include <string.h>

void linear(char str[], char arr[][20], int length)
{
    for (int i = 0; i < length; i++)
        if (!strcmp(str, arr[i]))
        {
            printf("Found %s in position %d", str, i);
            return;
        }
    printf("Not found");
}

void binary(char str[], char arr[][20], int lenth)
{
    int left = 0, right = lenth - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (!strcmp(str, arr[mid]))
        {
            printf("Found %s in position %d", str, mid);
            return;
        }
        else if (strcmp(str, arr[mid]) > 0)
            left = mid + 1;

        else if (strcmp(str, arr[mid]) < 0)
            right = mid - 1;
    }
    printf("Not found");
}

int main()
{
    char names[][20] = {"Abir", "Ashiq", "Sifat", "Snigdho", "Tareq"};
    binary("Abir", names, 5);
}