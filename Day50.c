#include <stdio.h>
#include <string.h>

int main() {
    char date[20], newDate[20];
    char month[3];
    int day, year;

    printf("Enter date (dd/mm/yyyy): ");
    gets(date);

    sscanf(date, "%d/%2s/%d", &day, month, &year);

    if (strcmp(month, "01") == 0) strcpy(month, "Jan");
    else if (strcmp(month, "02") == 0) strcpy(month, "Feb");
    else if (strcmp(month, "03") == 0) strcpy(month, "Mar");
    else if (strcmp(month, "04") == 0) strcpy(month, "Apr");
    else if (strcmp(month, "05") == 0) strcpy(month, "May");
    else if (strcmp(month, "06") == 0) strcpy(month, "Jun");
    else if (strcmp(month, "07") == 0) strcpy(month, "Jul");
    else if (strcmp(month, "08") == 0) strcpy(month, "Aug");
    else if (strcmp(month, "09") == 0) strcpy(month, "Sep");
    else if (strcmp(month, "10") == 0) strcpy(month, "Oct");
    else if (strcmp(month, "11") == 0) strcpy(month, "Nov");
    else if (strcmp(month, "12") == 0) strcpy(month, "Dec");

    sprintf(newDate, "%02d-%s-%d", day, month, year);

    printf("Converted date: %s\n", newDate);
    return 0;
}

//Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, j, k;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    printf("All substrings are:\n");
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (k = i; k <= j; k++)
                printf("%c", str[k]);
            printf("\n");
        }
    }

    return 0;
}

