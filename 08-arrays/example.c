#include <stdio.h>

int main(void) {
    int values[] = {4, 8, 15, 16, 23};
    size_t n = sizeof values / sizeof values[0];
    for (size_t i = 0; i < n; ++i) printf("%d ", values[i]);
    putchar('\n');
    return 0;
}

