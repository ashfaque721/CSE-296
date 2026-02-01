#include <stdio.h>

int binarySearch(int arr[], int n, int target)
{

    int left = 0;
    int right = n;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (target == arr[mid])
            return mid;
        else if (target < arr[mid])
            right = mid - 1;
        else if (target > arr[mid])
            left = mid + 1;
    }

    return -1;
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

    int target;
    printf("Enter the target element: ");
    scanf("%d", &target);

    int targetIdx = binarySearch(arr, n - 1, target);
    printf("%d", targetIdx);

    return 0;
}