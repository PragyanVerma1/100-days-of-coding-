//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main() {
    char operator;
    int num1, num2, result;
    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &operator);
    printf("Enter two whole numbers: ");
    scanf("%d %d", &num1, &num2);
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %d\n", result);
            } else {
                printf("Cannot divide by zero.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("Result: %d\n", result);
            } else {
                printf("Cannot divide by zero.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
            break;
    }
    return 0;
}


//Write a program to print numbers from 1 to n.

/*#include<stdio.h>
int main(){
	int n, i;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		printf("%d\n", i);
	}
	return 0;
}*/


