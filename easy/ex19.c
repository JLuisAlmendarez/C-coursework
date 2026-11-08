#include <stdio.h>
#include <stdlib.h>

void sumMatrix(int rows, int columns,
               int matrix1[rows][columns],
               int matrix2[rows][columns],
               int result[rows][columns]) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main(void) {

    int mat1[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    int mat2[3][3] = {
        {1,2,3},
        {-1,-2,-3},
        {0,4,-4}
    };

    int result[3][3];

    sumMatrix(3, 3, mat1, mat2, result);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(j == 0 ? "%d" : " %d", result[i][j]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
