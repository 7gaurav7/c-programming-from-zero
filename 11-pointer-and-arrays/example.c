#include <stdio.h>

int main(void) {
    int a[] = {10, 20, 30};
    int *p = a;
    for (size_t i = 0; i < sizeof a / sizeof a[0]; ++i) printf("%d ", *(p + i));
    putchar('\n');
    return 0;
}

