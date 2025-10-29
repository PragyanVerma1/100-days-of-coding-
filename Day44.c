#include <stdio.h>

int main() {
    char str[200];
    int i, spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if (!((str[i] >= 'A' && str[i] <= 'Z') || 
                   (str[i] >= 'a' && str[i] <= 'z')))
            special++;
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}
Replace spaces with hyphens in a string.

#include <stdio.h>

int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            str[i] = '-';
    }

    printf("Modified string: %s\n", str);

    return 0;
}
