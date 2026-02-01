#include <stdio.h>

#define ROWS 3
#define COLS 3
void matrixPrint(int mat[][COLS]) {
    int row, col;
    printf("The matrix elements are:\n");
    for (row = 0; row < ROWS; row++) {
        for (col = 0; col < COLS; col++) {
            printf("%d ", *(*(mat + row) + col));
        }
        printf("\n");
    }
}
int main() {
    int mat1[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    matrixPrint(mat1);

    return 0;
}
