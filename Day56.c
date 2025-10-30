#include <stdio.h>

int main() {
    int n, i, j, found;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Next Greater Elements: ");

    for (i = 0; i < n; i++) {
        found = -1;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                found = arr[j];
                break;
            }
        }
        printf("%d", found);
        if (i < n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}
