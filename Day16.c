//Write a program to take a number as input and print its equivalent binary representation
#include <stdio.h>

void printBinary(int num) {
    int i;
    for (i = sizeof(int) * 8 - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Binary representation: ");
    printBinary(number);
    return 0;
}


//Write a program to check if a number is a palindrome
#include <stdio.h>
int main() {
    int number, reverse = 0, original, remainder;
    printf("Enter a number: ");
    scanf("%d", &number);
    original = number;
    while (number != 0) {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }
    if (original == reverse) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }
    return 0;
}
