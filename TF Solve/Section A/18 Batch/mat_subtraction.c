#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int mat1[row][col], mat2[row][col], result[row][col];

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &mat1[i][j]);

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &mat2[i][j]);
            result[i][j] = mat1[i][j] - mat2[i][j];
        }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }
}

