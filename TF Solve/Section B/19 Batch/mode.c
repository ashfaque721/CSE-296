#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int mode = arr[0];
    int max_occurance = 1, count;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > max_occurance)
        {
            mode = arr[i];
            max_occurance = count;
        }
    }

    printf("Mode: %d\nOccurences: %d", mode, max_occurance);

    return 0;
}