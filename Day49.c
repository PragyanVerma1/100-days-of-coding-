#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;

    printf("Enter your full name: ");
    gets(name);

    if (name[0] != ' ')
        printf("%c", toupper(name[0]));

    for (i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ')
            printf("%c", toupper(name[i]));
    }

    printf("\n");
    return 0;
}


//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i, len;

    printf("Enter your full name: ");
    gets(name);

    len = strlen(name);

    printf("Result: ");

    printf("%c.", toupper(name[0]));

    for (i = 1; i < len; i++) {
        if (name[i - 1] == ' ' && name[i + 1] != '\0') {
            if (strchr(name + i, ' ') == NULL) {
                printf("%s\n", name + i);
                return 0;
            } else {
                printf("%c.", toupper(name[i]));
            }
        }
    }

    printf("\n");
    return 0;
}
