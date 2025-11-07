#include <stdio.h>

int main() {
    char name[100];
    int age;
    FILE *fp;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp, "Name: %sAge: %d\n", name, age);
    fclose(fp);

    printf("Data successfully saved to info.txt\n");
    return 0;
}
