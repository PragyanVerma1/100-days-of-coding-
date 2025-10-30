#include <stdio.h>

int main() {
    int n, i, j, count, majority = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (nums[i] == nums[j])
                count++;
        }
        if (count > n / 2) {
            majority = nums[i];
            break;
        }
    }

    if (majority == -1)
        printf("-1\n");
    else
        printf("Majority element: %d\n", majority);

    return 0;
}
