#include <stdio.h>

void sort(int ara[], int pos, int n)
{
    if (pos > n)
        return;

    int min_idx = pos;
    for (int i = pos + 1; i < n; i++)
    {
        if (ara[i] < ara[min_idx])
        {
            min_idx = i;
        }
    }

    if (min_idx != pos)
    {
        int temp = ara[pos];
        ara[pos] = ara[min_idx];
        ara[min_idx] = temp;
    }

    sort(ara, pos + 1, n);
};

int main()
{
    int arr[] = {5, 1, 7, 4, 12, 9};
    sort(arr, 0, 6);

    for (int i = 0; i < 6; i++)
        printf("%d ", arr[i]);
    return 0;
}