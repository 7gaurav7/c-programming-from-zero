#include <stdio.h>

int main(void) {
    int x = 42;
    int *p = &x;
    printf("x=%d, *p=%d\n", x, *p);
    *p = 99;
    printf("x=%d after dereference write\n", x);
    return 0;
}

