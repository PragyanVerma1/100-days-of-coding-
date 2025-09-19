//Write a program to check if a number is a strong number
#include <stdio.h>

int main() {
    int num, originalNum, lastDigit, sum = 0, fact, i;

    printf("Enter any number to check Strong number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        lastDigit = num % 10;
        fact = 1;
        for (i = 1; i <= lastDigit; i++) {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }

    if (sum == originalNum) {
        printf("%d is STRONG NUMBER\n", originalNum);
    } else {
        printf("%d is NOT STRONG NUMBER\n", originalNum);
    }

    return 0;
}




//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    double numerator, denominator;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        numerator = 2 * i - 1;
        if (i == 1) {
            sum += 1;  // first term is just 1
        } else {
            denominator = 2 * i;
            sum += numerator / denominator;
        }
    }

    printf("Sum of the series up to %d terms = %lf\n", n, sum);

    return 0;
}

