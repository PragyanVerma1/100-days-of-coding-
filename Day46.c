#include <stdio.h>
#include <string.h>

int isVowel(char ch) {
    // Convert uppercase to lowercase
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + ('a' - 'A');
    }
    // Check for vowels
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return 1;
    }
    return 0;
}

int main() {
    char inputString[100], outputString[100];
    int readIndex, writeIndex = 0;
    printf("Enter a string:\n");
    fgets(inputString, sizeof(inputString), stdin);
    // Remove the newline character if any
    inputString[strcspn(inputString, "\n")] = 0;
    for (readIndex = 0; inputString[readIndex] != '\0'; readIndex++) {
        if (!isVowel(inputString[readIndex])) {
            outputString[writeIndex++] = inputString[readIndex];
        }
    }
    outputString[writeIndex] = '\0';
    printf("String without vowels: %s\n", outputString);
    return 0;
}


#include <stdio.h>

char firstRepeatingLowercase(char *str) {
    int count[26] = {0};
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;
            if (count[str[i] - 'a'] == 2) {
                return str[i];
            }
        }
        i++;
    }
    return '\0';
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    char result = firstRepeatingLowercase(str);
    if (result)
        printf("%c\n", result);
    else
        printf("No repeating lowercase alphabet found.\n");
    return 0;
}

