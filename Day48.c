Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Strings are not rotations of each other.\n");
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2))
        printf("Strings are rotations of each other.\n");
    else
        printf("Strings are not rotations of each other.\n");

    return 0;
}


#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    char *word_start = NULL;
    int i = 0;

    printf("Enter a sentence: ");
    gets(str);

    while (1) {
        if (word_start == NULL && str[i] != ' ' && str[i] != '\0')
            word_start = &str[i];

        if ((str[i] == ' ' || str[i] == '\0') && word_start != NULL) {
            reverse(word_start, &str[i - 1]);
            word_start = NULL;
        }

        if (str[i] == '\0')
            break;
        i++;
    }

    printf("Reversed sentence: %s\n", str);
    return 0;
}
