#include <stdio.h>

void matmul(int n, int m, int mat[n][m], int matT[m][n], int prod[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            prod[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                prod[i][j] += mat[i][k] * matT[k][j];
            }
        }
    }
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int mat[n][m], matT[m][n], prod[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &mat[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            matT[j][i] = mat[i][j];

    matmul(n, m, mat, matT, prod);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", prod[i][j]);
        printf("\n");
    }
    return 0;
}