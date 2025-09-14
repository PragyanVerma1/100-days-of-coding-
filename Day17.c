//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0, sum = 0;
    scanf("%d", &num);
    originalNum = num;
    int temp = num;
    while (temp != 0) {
        n++;
        temp /= 10;
    }
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }
    if (sum == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);
    return 0;
}


//Write a program to check if a number is prime.
#include <stdio.h>
int main() {
    int num, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
