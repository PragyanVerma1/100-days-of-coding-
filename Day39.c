Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
#include <stdbool.h>

int main() {
    int matrix[100][100], n, i, j;
    bool distinct = true;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for(i = 0; i < n && distinct; i++) {
        for(j = i + 1; j < n; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                distinct = false;
                break;
            }
        }
    }

    if(distinct)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}

Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int matrix[100][100], n, i, sum = 0;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < n; i++)
        sum += matrix[i][i];

    printf("Sum of main diagonal elements: %d\n", sum);

    return 0;
}
