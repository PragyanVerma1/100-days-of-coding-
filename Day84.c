#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main(void) {
    enum Status s;

    s = SUCCESS;
    if (s == SUCCESS) {
        printf("Operation successful.\n");
    } else if (s == FAILURE) {
        printf("Operation failed.\n");
    } else if (s == TIMEOUT) {
        printf("Operation timed out.\n");
    }

    return 0;
}
