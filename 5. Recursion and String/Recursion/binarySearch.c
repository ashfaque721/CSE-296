#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (arr[mid] == key)
        return mid;

    if (arr[mid] > key)
    {
        return binarySearch(arr, low, mid - 1, key);
    }

    return binarySearch(arr, mid + 1, high, key);
}

int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 23;

    int result = binarySearch(arr, 0, n - 1, key);

    if (result == -1)
        printf("Not found");
    else
        printf("%d found at index %d", key, result);
}