#include <stdio.h>
#include <stdlib.h>

int *compressSymmetric(int n, int mat[n][n])
{
    int num_elements = (n * (n + 1) / 2);

    int *compressed = (int *)malloc(num_elements * sizeof(int));

    int k = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            compressed[k++] = mat[i][j];
        }
    }

    return compressed;
}

void demo(int n, int mat[n][n])
{
    int *compressed = compressSymmetric(n, mat);

    /*
        {{0, 2},
         {0, 2}}
        
    */

    int **reconstructed = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
        reconstructed[i] = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int row = (i >= j) ? i : j;
            int col = (i >= j) ? j : i;

            int idx = (row * (row + 1)) / 2 + col;
            reconstructed[i][j] = compressed[idx];
        }
    }

    printf("Reconstructed %dx%d Matrix:\n", n, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", reconstructed[i][j]);
        }
        printf("\n");
    }

    free(compressed);

    for (int i = 0; i < n; i++)
    {
        free(reconstructed[i]);
    }
    free(reconstructed);
}

int main()
{
    int n = 4;

    int symmetricMatrix[4][4] = {
        {1, 2, 3, 4},
        {2, 5, 6, 7},
        {3, 6, 8, 9},
        {4, 7, 9, 0}};

    demo(n, symmetricMatrix);

    return 0;
}