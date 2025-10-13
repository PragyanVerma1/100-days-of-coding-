Perform diagonal traversal of a matrix.
#include <stdio.h>

void diagonalTraversal(int matrix[100][100], int rows, int cols) {
    int i, j;

    // Traverse diagonals starting from first column
    for (int row = 0; row < rows; row++) {
        i = row;
        j = 0;
        while (i >= 0 && j < cols) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
    }

    // Traverse diagonals starting from last row excluding first column
    for (int col = 1; col < cols; col++) {
        i = rows - 1;
        j = col;
        while (i >= 0 && j < cols) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
    }
}

int main() {
    int matrix[100][100];
    int rows, cols, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    printf("Diagonal traversal of the matrix:\n");
    diagonalTraversal(matrix, rows, cols);

    return 0;
}


Multiply two matrices.
#include <stdio.h>

int main() {
    int mat1[100][100], mat2[100][100], result[100][100];
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &mat2[i][j]);

    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            result[i][j] = 0;
            for(k = 0; k < c1; k++)
                result[i][j] += mat1[i][k] * mat2[k][j];
        }
    }

    printf("Product of the matrices:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}
