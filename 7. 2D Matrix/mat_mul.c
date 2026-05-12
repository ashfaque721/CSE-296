#include <stdio.h>

void matmul(int n, int a[n][n], int b[n][n], int c[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

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

    int prod[3][3];

    matmul(3, mat1, mat2, prod);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", prod[i][j]);
        printf("\n");
    }

    return 0;
}