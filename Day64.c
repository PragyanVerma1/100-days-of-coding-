#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int lastIndex[128];  
    for (int i = 0; i < 128; i++) {
        lastIndex[i] = -1;
    }
    int maxLen = 0, start = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (lastIndex[(int)s[i]] >= start) {
            start = lastIndex[(int)s[i]] + 1;
        }
        lastIndex[(int)s[i]] = i;
        if (i - start + 1 > maxLen) {
            maxLen = i - start + 1;
        }
    }
    return maxLen;
}

int main() {
    char s[1001];
    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;  

    int result = lengthOfLongestSubstring(s);
    printf("Length of longest substring without repeating characters: %d\n", result);
    return 0;
}
