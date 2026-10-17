#include <assert.h>
#include <stdio.h>

static int divide_exact(int a, int b) {
    assert(b != 0);
    return a / b;
}

int main(void) { printf("%d\n", divide_exact(10, 2)); return 0; }

