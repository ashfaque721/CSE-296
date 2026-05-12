#include <stdio.h>

float avgMedian(int arr[], int n, float *median)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    if (n % 2 == 0)
        *median = (arr[n / 2] + arr[n / 2 - 1]) / 2.0;
    else
        *median = arr[n / 2];

    return (float)sum / n;
}