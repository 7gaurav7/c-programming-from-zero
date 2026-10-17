#include <stdio.h>

int main(void) {
    int value;
    printf("Enter an integer: ");
    if (scanf("%d", &value) != 1) {
        fprintf(stderr, "Invalid integer.\n");
        return 1;
    }
    printf("You entered %d.\n", value);
    return 0;
}

