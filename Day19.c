//Write a program to find the LCM of two numbers.
#include <stdio.h>
int main() {
    int x, y, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    if (x > y) {
        max = x;
    } else {
        max = y;
    }
    while (1) {
        if (max % x == 0 && max % y == 0) {
            printf("The LCM of %d and %d is %d.\n", x, y, max);
            break;
        }
        ++max;
    }

    return 0;
}


//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main() {
    int num, sum = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;  
        sum += remainder;      
        num /= 10;            
    }
    printf("Sum of digits is %d\n", sum);
    return 0;
}




