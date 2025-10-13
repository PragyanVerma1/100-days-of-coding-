Find the second largest element in an array.
#include <stdio.h>

int getSecondLargest(int arr[], int n) {
    int largest = -1, secondLargest = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = getSecondLargest(arr, n);
    printf("%d\n", result);
    return 0;
}

Rotate an array to the right by k positions.
#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    k = k % n;
    int temp[k], i;

    for(i = 0; i < k; i++)
        temp[i] = arr[n - k + i];

    for(i = n - 1; i >= k; i--)
        arr[i] = arr[i - k];

    for(i = 0; i < k; i++)
        arr[i] = temp[i];
}

int main() {
    int n, k, i;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter number of positions to rotate right: ");
    scanf("%d", &k);

    rotateRight(arr, n, k);

    printf("Array after rotation:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
