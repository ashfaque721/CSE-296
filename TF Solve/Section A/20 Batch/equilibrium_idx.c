#include <stdio.h>

int main()
{

    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int A[n];
    int total_sum = 0;

    printf("Enter the elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
        total_sum += A[i];
    }

    int left_sum = 0;
    int equilibrium_idx = -1;

    for (int i = 0; i < n; i++)
    {
        int right_sum = total_sum - left_sum - A[i];

        if (left_sum == right_sum)
        {
            equilibrium_idx = i;
            break;
        }

        left_sum += A[i];
    }

    printf("Output: %d\n", equilibrium_idx);

    return 0;
}