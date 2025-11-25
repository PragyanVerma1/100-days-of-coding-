#include <stdio.h>

enum UserRole {
    ADMIN,  
    USER,   
    GUEST   
};

int main() {
    enum UserRole role;

    role = ADMIN;
    printf("ADMIN = %d\n", role);

    role = USER;
    printf("USER = %d\n", role);

    role = GUEST;
    printf("GUEST = %d\n", role);

    return 0;
}
