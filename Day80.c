#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;
    int n, i;
    FILE *fp;

 
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s.name);
        printf("Roll Number: ");
        scanf("%d", &s.roll);
        printf("Marks: ");
        scanf("%f", &s.marks);

        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);
    printf("\nData written to file successfully.\n");

   
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading\n");
        return 1;
    }

    printf("\n--- Student Records from File ---\n");
    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s | Roll Number: %d | Marks: %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);
    return 0;
}
