Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int arr[100], n, i, pos, num;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);
    printf("Enter element to insert: ");
    scanf("%d", &num);

    for(i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = num;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

Delete an element from an array.
#include <stdio.h>

int main() {
    int arr[100], n, i, pos;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
