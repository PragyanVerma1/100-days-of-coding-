//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int num, product = 1, remainder;
    int has_odd = 0;
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;
        if (remainder % 2 != 0) {
            product *= remainder;
            has_odd = 1;
        }
        num /= 10;
    }

    if (!has_odd) {
        product = 1;
    }

    printf("%d\n", product);
    return 0;
}




//Write a program to find the 1’s complement of a binary number and print it
#include <stdio.h>

int main() {
    char binary[100];
    int i = 0;

    scanf("%s", binary);

    while (binary[i] != '\0') {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        i++;
    }

    printf("%s\n", binary);
    return 0;
}

