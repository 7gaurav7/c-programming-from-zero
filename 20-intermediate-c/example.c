#include <stdio.h>

static int square(int x) { return x * x; }
static int apply(int x, int (*fn)(int)) { return fn(x); }

int main(void) { printf("%d\n", apply(7, square)); return 0; }

