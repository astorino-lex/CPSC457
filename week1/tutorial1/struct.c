#include <stdio.h>

struct student {
    int ID;
    float mark;
};

//If you delete the following line, you need to define var as "struct student"
//typedef struct student student;

int main() {
    struct student var;
    var.ID = 123;
    var.mark = 23.1;

    printf("Student %d got the mark %f\n", var.ID, var.mark);

    return 0;
}
