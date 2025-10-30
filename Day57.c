/*Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.*/

#include <stdio.h>

int main() {
    int n, i, j, found;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Previous Greater Elements: ");

    for (i = 0; i < n; i++) {
        found = -1;
        for (j = i - 1; j >= 0; j--) {
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
