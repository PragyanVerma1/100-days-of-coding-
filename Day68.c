#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array (n-1): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (integers from 0 to %d with one missing):\n", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int total_sum = (n * (n + 1)) / 2;
    int arr_sum = 0;
    for (int i = 0; i < n; i++) {
        arr_sum += arr[i];
    }

    int missing_number = total_sum - arr_sum;
    printf("Missing number is: %d\n", missing_number);

    return 0;
}
