#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student students[], int size) {
    int topIndex = 0;
    for (int i = 1; i < size; i++) {
        if (students[i].marks > students[topIndex].marks) {
            topIndex = i;
        }
    }
    return students[topIndex];
}

int main() {
    struct Student students[3] = {
        {"
