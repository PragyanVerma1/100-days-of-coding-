Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int matrix[100][100], rows, cols, i, j, rowSums[100];
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    for(i = 0; i < rows; i++) {
        rowSums[i] = 0;
        for(j = 0; j < cols; j++)
            rowSums[i] += matrix[i][j];
    }

    printf("Sum of each row:\n");
    for(i = 0; i < rows; i++)
        printf("Row %d: %d\n", i + 1, rowSums[i]);

    return 0;
}
Find the transpose of a matrix.

#include <stdio.h>

int main() {
    int matrix[100][100], transpose[100][100], rows, cols, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            transpose[j][i] = matrix[i][j];

    printf("Transpose of the matrix:\n");
    for(i = 0; i < cols; i++) {
        for(j = 0; j < rows; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }

    return 0;
}
