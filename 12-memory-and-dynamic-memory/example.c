#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t n = 5;
    int *a = malloc(n * sizeof *a);
    if (a == NULL) {
        fprintf(stderr, "Allocation failed.\n");
        return 1;
    }
    for (size_t i = 0; i < n; ++i) a[i] = (int)i * 10;
    for (size_t i = 0; i < n; ++i) printf("%d ", a[i]);
    putchar('\n');
    free(a);
    return 0;
}

