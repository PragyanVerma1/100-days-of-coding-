#include <stdio.h>

int main() {
    char filename[100];
    char newLine[1001];

    printf("Enter the filename to append text: ");
    scanf("%s", filename);
    getchar(); 
    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter the new line to append: ");
    fgets(newLine, sizeof(newLine), stdin);

    fprintf(fp, "%s", newLine);
    fclose(fp);

    printf("Text appended successfully.\n");
    return 0;
}
