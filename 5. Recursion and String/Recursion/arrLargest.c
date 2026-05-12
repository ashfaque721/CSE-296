#include <stdio.h>

int largest(int arr[], int n)
{
    if (n == 1)
        return arr[0];

    int max_rest = largest(arr, n - 1);

    if (max_rest > arr[n - 1])
        return max_rest;
    else
        return arr[n - 1];
}
