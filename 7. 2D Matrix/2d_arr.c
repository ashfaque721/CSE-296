#include <stdio.h>

void matmul(int row1, int col1, int col2, int matrix1[row1][col1], int matrix2[col1][col2], int prod[row1][col2]) {
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col1; j++) {
            prod[i][j] = 0;
            for(int k = 0; k < col2; k++) {
                prod[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void diagonal_zero(int n, int matrix[n][n]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) matrix[i][j] = 0;
            if(i > j) matrix[i][j] = -1;
            if(i < j) matrix[i][j] = 1;
        }
    }
}

/*
    row = 1, col = 0

  0  1  1
 -1  0  1
 -1 -1  0
*/

int main() {

    int arr[] = {1, 2, 3, 4};
    int matrix_1[10][10] = {0};

    diagonal_zero(10, matrix_1);

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", matrix_1[i][j]);
        }
        printf("\n");
    }

    //

    int i = 0;

    do{
        if(i == 0) break;
        printf("A");
    } while (i != 0);

    /*
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matrix_2[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix_1[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix_2[i][j]);
        }
        printf("\n");
    }

    // matrix addition
    matmul(3, 3, 3, matrix_1, matrix_2, sum);

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    } */


    return 0;
}
