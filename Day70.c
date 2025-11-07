#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1001];
    fgets(str, sizeof(str), stdin);

    if (str[0] != '\0' && isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    for (int i = 1; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    printf("%s", str);
    return 0;
}
