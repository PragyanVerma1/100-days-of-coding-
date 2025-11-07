#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= arr[i];   
    }
    for (int i = 1; i <= n - 1; i++) {
        result ^= i;  
    }

    printf("The repeated element is: %d\n", result);
    return 0;
}
