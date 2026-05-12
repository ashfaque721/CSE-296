#include <stdio.h>

int main()
{
    int mat1[3][3] = {
        {1, 2, 3},
        {5, 6, 7},
        {9, 10, 11}};

    int mat2[3][3] = {
        {10, 20, 30},
        {50, 60, 70},
        {90, 100, 110}};

    int sum[3][3];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            sum[i][j] = mat1[i][j] + mat2[i][j];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}