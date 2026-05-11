#include <stdio.h>

int linearSearch(int arr[], int n, int target)
{
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (target == arr[i])
        {
            idx = i;
            break;
        }
    }

    return idx;
}

int binarySearch(int arr[], int n, int target)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == target)
            return mid;
        else if (target < arr[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }

    return -1;
}