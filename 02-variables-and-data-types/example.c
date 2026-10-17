#include <stdio.h>

int main(void) {
    int age = 20;
    double price = 19.95;
    char grade = 'A';
    printf("age=%d, price=%.2f, grade=%c, int bytes=%zu\n", age, price, grade, sizeof age);
    return 0;
}

