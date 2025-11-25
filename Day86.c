#include <stdio.h>

enum Menu { ADD = 1, SUBTRACT, MULTIPLY };

int main() {
    int choice, a, b, result;
    printf("Menu:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    switch (choice) {
        case ADD:
            result = a + b;
            printf("Result: %d\n", result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("Result: %d\n", result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("Result: %d\n", result);
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}
