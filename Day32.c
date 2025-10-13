Merge two arrays
#include <stdio.h>
int main() {
    int n1, n2, i, j;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);
    
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);
    
    int merged[n1+n2];
    for(i = 0; i < n1; i++)
        merged[i] = arr1[i];
    for(j = 0; j < n2; j++)
        merged[n1 + j] = arr2[j];
    
    printf("Merged array:\n");
    for(i = 0; i < (n1 + n2); i++)
        printf("%d ", merged[i]);
    
    return 0;
}


Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    int num, digit, freq[10] = {0}, i, max = 0, max_digit = 0;
    printf("Enter an integer number: ");
    scanf("%d", &num);

    while(num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    for(i = 0; i < 10; i++) {
        if(freq[i] > max) {
            max = freq[i];
            max_digit = i;
        }
    }

    printf("Digit with maximum occurrence: %d\n", max_digit);
    return 0;
}

