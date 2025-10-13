Read and print a matrix.
#include <stdio.h>

int main() {
    int matrix[100][100], rows, cols, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    printf("Matrix is:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}
Find the sum of all elements in a matrix.
#include <stdio.h>

int main() {
    int matrix[100][100], rows, cols, i, j, sum = 0;
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
            sum += matrix[i][j];

    printf("Sum of all elements: %d\n", sum);

    return 0;
}
