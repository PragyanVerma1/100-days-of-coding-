Add two matrices.
#include <stdio.h>

int main() {
    int matrix1[100][100], matrix2[100][100], sum[100][100];
    int rows, cols, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &matrix1[i][j]);

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &matrix2[i][j]);

    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            sum[i][j] = matrix1[i][j] + matrix2[i][j];

    printf("Sum of the two matrices:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}


Check if a matrix is symmetric.
#include <stdio.h>
#include <stdbool.h>

int main() {
    int matrix[100][100], rows, cols, i, j;
    bool isSymmetric = true;
    printf("Enter number of rows and columns (square matrix): ");
    scanf("%d", &rows);
    cols = rows;

    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if(!isSymmetric)
            break;
    }

    if(isSymmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
