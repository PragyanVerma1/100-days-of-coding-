#include <stdio.h>

enum Month { JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE,
             JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

int main() {
    enum Month m;

    for (m = JANUARY; m <= DECEMBER; m++) {
        printf("%d - ", m);

        if (m == JANUARY)       printf("JANUARY: 31 days");
        else if (m == FEBRUARY) printf("FEBRUARY: 28 days");
        else if (m == MARCH)    printf("MARCH: 31 days");
        else if (m == APRIL)    printf("APRIL: 30 days");
        else if (m == MAY)      printf("MAY: 31 days");
        else if (m == JUNE)     printf("JUNE: 30 days");
        else if (m == JULY)     printf("JULY: 31 days");
        else if (m == AUGUST)   printf("AUGUST: 31 days");
        else if (m == SEPTEMBER)printf("SEPTEMBER: 30 days");
        else if (m == OCTOBER)  printf("OCTOBER: 31 days");
        else if (m == NOVEMBER) printf("NOVEMBER: 30 days");
        else if (m == DECEMBER) printf("DECEMBER: 31 days");

        printf("\n");
    }

    return 0;
}
