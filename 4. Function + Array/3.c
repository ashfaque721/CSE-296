#include <stdio.h>

void leftRotate(int arr[], int n)
{

    int first = arr[0];

    for (int i = 0; i < n; i++)
        arr[i] = arr[i + 1];

    arr[n - 1] = first;
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

    leftRotate(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}