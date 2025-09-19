//Write a program to swap the first and last digit of a number
#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, temp, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;
    temp = num;
    while (temp >= 10) {
        temp /= 10;
        count++;
    }
    first = temp;

    if (count == 0) {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    int middle = num % (int)pow(10, count);
    middle /= 10;

    int swapped = last * (int)pow(10, count) + middle * 10 + first;
    printf("Swapped number: %d\n", swapped);
    return 0;
}



//Write a program to check if a number is a perfect number.

#include <stdio.h>
int main() {
    int num, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num && num > 0) {
        printf("%d is a perfect number\n", num);
    } else {
        printf("%d is not a perfect number\n", num);
    }

    return 0;
}

