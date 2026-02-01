#include <stdio.h>

int distictElements(int arr[], int n)
{
    int distictCount = 0;
    for (int i = 0; i < n; i++)
    {
        int isDistinct = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                isDistinct = 0;
                break;
            }
        }
        if (isDistinct == 1)
            distictCount++;
    }

    return distictCount;
}

int main()
{

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements in the array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Number of distinct elements: %d", distictElements(arr, n));

    return 0;
}