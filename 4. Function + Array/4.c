#include <stdio.h>

void rightRotate(int arr[], int n)
{

    int last = arr[n - 1];

    for (int i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = last;
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

    rightRotate(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}