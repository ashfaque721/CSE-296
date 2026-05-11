#include <stdio.h>

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }

        if (minIdx != i)
        {
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }
}

int main()
{
    int arr1[5] = {6, 7, 8, 9, 10};
    int arr2[5] = {1, 2, 3, 4, 5};
    int arr3[100];

    int lenght_arr1 = sizeof(arr1) / sizeof(arr1[0]);
    int lenght_arr2 = sizeof(arr2) / sizeof(arr2[0]);
    int length_arr3 = lenght_arr1 + lenght_arr2;

    for (int i = 0; i < lenght_arr1; i++)
    {
        arr3[i] = arr1[i];
    }

    for (int i = 0; i < lenght_arr2; i++)
    {
        arr3[lenght_arr1 + i] = arr2[i];
    }

    selectionSort(arr3, length_arr3);

    for (int i = 0; i < length_arr3; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}