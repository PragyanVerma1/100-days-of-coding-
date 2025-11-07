#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    char ch;

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch)) {
            if (inWord) {
                words++;
                inWord = 0;
            }
        } else {
            inWord = 1;
        }
    }

    if (inWord) {
        words++;
    }

    fclose(fp);

    printf("Characters: %d\nWords: %d\nLines: %d\n", characters, words, lines);
    return 0;
}
