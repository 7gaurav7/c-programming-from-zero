#include <stdio.h>

typedef struct { int id; char name[32]; double score; } Student;

int main(void) {
    Student s = {1, "Asha", 91.5};
    printf("%d %s %.1f\n", s.id, s.name, s.score);
    return 0;
}

