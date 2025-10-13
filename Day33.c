Search in a sorted array using binary search.
#include <stdio.h>

int main() {
    int n, i, search, first, last, middle, array[100];
    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d sorted integers\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &array[i]);

    printf("Enter value to find\n");
    scanf("%d", &search);

    first = 0;
    last = n - 1;
    middle = (first + last) / 2;

    while(first <= last) {
        if(array[middle] < search)
            first = middle + 1;
        else if(array[middle] == search) {
            printf("%d found at location %d.\n", search, middle + 1);
            break;
        } else
            last = middle - 1;
        middle = (first + last) / 2;
    }
    if(first > last)
        printf("Not found! %d isn't present in the list.\n", search);

    return 0;
}


Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int arr[100], n, i, pos = 0, num;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter element to insert: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++) {
        if(arr[i] < num)
            pos++;
        else
            break;
    }

    for(i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = num;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
