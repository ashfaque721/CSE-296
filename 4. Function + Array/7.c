#include <stdio.h>

int frequency(int arr[], int n)
{
    int maximum_frequency = 0, maximum_num = arr[0];
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        int visited = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                visited = 1;
                break;
            }
        }

        if (visited)
            continue;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        printf("%d : %d times\n", arr[i], count);

        if (count > maximum_frequency)
        {
            maximum_frequency = count;
            maximum_num = arr[i];
        }
    }

    return maximum_num;
}

int main()
{

    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int result = frequency(arr, n - 1);
    printf("Element with max frequency: %d\n", result);

    return 0;
}