#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows and cols: ");
    scanf("%d%d", &rows, &cols);

    int A[rows][cols], B[rows][cols], C[rows][cols];

    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    int rowIndex;
    printf("Enter the row index (0 to %d) you want to sum: ", rows - 1);
    scanf("%d", &rowIndex);

    if (rowIndex >= 0 && rowIndex < rows) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += C[rowIndex][j];
        }
        printf("Sum of row %d = %d\n", rowIndex, rowSum);
    } else {
        printf("Invalid row index!\n");
    }

    return 0;
}