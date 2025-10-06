//Search for an element in an array using linear search.
#include <stdio.h>

#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 50, 30, 70, 80, 60, 20, 90, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int result = linearSearch(arr, n, key);
    if (result == -1)
        printf("Key Not Found");
    else
        printf("Key Found at Index: %d", result);

    return 0;
}



//Reverse an array without taking extra space.
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp;

    for (int i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
