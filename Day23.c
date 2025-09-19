//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    double numerator, denominator;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    numerator = 2;
    denominator = 3;

    for (i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;
        denominator += 4;
    }

    printf("Sum of the series up to %d terms = %lf\n", n, sum);

    return 0;
}


/*Write a program to print the following pattern:
*****
*****
*****
*****
******/

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
