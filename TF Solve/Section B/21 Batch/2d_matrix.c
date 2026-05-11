#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;
    printf("Enter row and column: ");
    scanf("%d %d", &row, &col);

    int **mat = (int **)malloc(row * sizeof(int *));

    for (int i = 0; i < row; i++)
    {
        *(mat + i) = (int *)malloc(col * sizeof(int));
    }

    printf("Enter values: ");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", (*(mat + i) + j));
        }
    }

    int check;
    scanf("%d", &check);

    int valid_row_count = row;
    int sum_row = 0;
    for (int i = 0; i < row; i++)
    {
        sum_row = 0;
        for (int j = 0; j < col; j++)
        {
            sum_row += *(*(mat + i) + j);
        }
        if (sum_row > check)
            valid_row_count--;
    }

    int **mat_new = (int **)malloc(valid_row_count * sizeof(int *));

    for (int i = 0; i < valid_row_count; i++)
    {
        *(mat_new + i) = (int *)malloc(col * sizeof(int));
    }

    int k = 0;
    for (int i = 0; i < row; i++)
    {
        sum_row = 0;
        for (int j = 0; j < col; j++)
        {
            sum_row += *(*(mat + i) + j);
        }
        if (sum_row <= check)
        {
            for (int j = 0; j < col; j++)
            {
                *(*(mat_new + k) + j) = *(*(mat + i) + j);
            }
            k++;
        }
    }

    printf("Given Matrix: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d ", *(*(mat + i) + j));
        printf("\n");
    }

    printf("Resultant Matrix: \n");
    for (int i = 0; i < valid_row_count; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d ", *(*(mat_new + i) + j));
        printf("\n");
    }

    for (int i = 0; i < row; i++)
        free(*(mat + i));

    for (int i = 0; i < valid_row_count; i++)
        free(*(mat_new + i));

    free(mat);
    free(mat_new);

    return 0;
}