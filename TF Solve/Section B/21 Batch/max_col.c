#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int matrix[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Given Matrix: \n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Max from each col\n");

    for (int i = 0; i < col; i++)
    {
        int max = matrix[0][i];
        for (int j = 0; j < row; j++)
        {
            if (matrix[j][i] > max)
                max = matrix[j][i];
        }
        printf("%d ", max);
    }

    return 0;
}