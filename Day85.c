#include <stdio.h>

enum Status {
    SUCCESS = 10,
    FAILURE,
    TIMEOUT
};

int main(void) {
    enum Status s;

    s = SUCCESS;
    printf("Status value: %d\n", s);
    if (s == SUCCESS) {
        printf("Operation successful.\n");
    } else if (s == FAILURE) {
        printf("Operation failed.\n");
    } else if (s == TIMEOUT) {
        printf("Operation timed out.\n");
    }

    s = FAILURE;
    printf("Status value: %d\n", s);
    if (s == SUCCESS) {
        printf("Operation successful.\n");
    } else if (s == FAILURE) {
        printf("Operation failed.\n");
    } else if (s == TIMEOUT) {
        printf("Operation timed out.\n");
    }

    s = TIMEOUT;
    printf("Status value: %d\n", s);
    if (s == SUCCESS) {
        printf("Operation successful.\n");
    } else if (s == FAILURE) {
        printf("Operation failed.\n");
    } else if (s == TIMEOUT) {
        printf("Operation timed out.\n");
    }

    return 0;
}
