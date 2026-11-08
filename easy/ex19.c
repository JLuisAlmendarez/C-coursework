#include <stdio.h>
#include <stdlib.h>

enum { ROWS = 3, COLUMNS = 3 };

void sumMatrix(int matrix1[ROWS][COLUMNS],
               int matrix2[ROWS][COLUMNS],
               int result[ROWS][COLUMNS]) {

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void printMatrix(int matrix[ROWS][COLUMNS]) {

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            printf(j == 0 ? "%d" : " %d", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(void) {

    int mat1[ROWS][COLUMNS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int mat2[ROWS][COLUMNS] = {
        {1, 2, 3},
        {-1, -2, -3},
        {0, 4, -4}
    };

    int result[ROWS][COLUMNS];

    sumMatrix(mat1, mat2, result);
    printMatrix(result);

    return EXIT_SUCCESS;
}
