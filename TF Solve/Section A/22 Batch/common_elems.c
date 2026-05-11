#include <stdio.h>

int main()
{
    int array1[] = {8, 2, 3, 4, 5, 6, 7, 1};
    int array2[] = {4, 5, 7, 11, 6, 1};

    int l1 = sizeof(array1) / sizeof(array1[0]);
    int l2 = sizeof(array2) / sizeof(array2[0]);

    int common[50], count = 0;

    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < l2; j++)
        {
            if (array1[i] == array2[j])
            {
                common[count++] = array1[i];
            }
        }
    }

    for (int i = 0; i < count; i++)
        printf("%d ", common[i]);

    return 0;
}