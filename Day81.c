#include <stdio.h>

enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    enum Days d;

    for (d = SUNDAY; d <= SATURDAY; d++) {
        printf("%d - ", d);
        if (d == SUNDAY) printf("SUNDAY");
        else if (d == MONDAY) printf("MONDAY");
        else if (d == TUESDAY) printf("TUESDAY");
        else if (d == WEDNESDAY) printf("WEDNESDAY");
        else if (d == THURSDAY) printf("THURSDAY");
        else if (d == FRIDAY) printf("FRIDAY");
        else if (d == SATURDAY) printf("SATURDAY");
        printf("\n");
    }

    return 0;
}
